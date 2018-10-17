//
// Created by tmiles on 15/10/18.
//


#include "utilities.h"



char * create_buffer (size_t buffer_size) {
	/**
	 * Safely creates the buffer for scanning data from the CSV file and returns a
	 * pointer to it
	 * @param buffer_size: length of buffer (bytes)
	 * @return buffer: pointer to memory allocated
	 */
	char *buffer;
	buffer = (char*) malloc (buffer_size);

	if (buffer == NULL) {
		printf("--> ERROR: ERROR: In create_buffer: malloc failure.");
		exit(EXIT_FAILURE);
	}
	return buffer;
}


FILE* safe_open(const char * filename, const char * mode) {
	/**
	 * Opens a file safely or prints error message and exits
	 * @param filename: Path to file
	 * @param mode: open mode
	 * @return file: FILE pointer
	 */
	FILE* file = fopen(filename, mode);

	if (file == NULL) {
		printf("ERROR: File %s failed to open!\n", filename);
		exit(EXIT_FAILURE);
	}
	return file;
}