#include <stdio.h>
#include <stdlib.h>

int main() {
    // Replace "path/to/your/file" with the actual path of the executable file
    const char* file_path = "./crackme3";

    // Open the file in binary read mode
    FILE* file = fopen(file_path, "rb");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Get the file size by moving the file pointer to the end of the file
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate memory to store the file content
    char* buffer = (char*)malloc(file_size);
    if (buffer == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    // Read the file content into the buffer
    size_t bytes_read = fread(buffer, 1, file_size, file);
    if (bytes_read != (size_t)file_size) {
        printf("Error while reading the file.\n");
        free(buffer);
        fclose(file);
        return 1;
    }

    // Print the file content
    printf("Content of the file:\n");
    for (size_t i = 0; i < bytes_read; i++) {
        putchar(buffer[i]);
    }

    // Free the buffer and close the file
    free(buffer);
    fclose(file);

    return 0;
}
