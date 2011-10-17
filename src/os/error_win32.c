/* $Id$ */

/** @file src/error_win32.c System dependant error messages for win32. */

#include <Windows.h>
#include "types.h"
#include "strings.h"

#include "error.h"

void Error(char *format, ...) {
	char message[512];
	va_list ap;

	va_start(ap, format);
	vsnprintf(message, sizeof(message), format, ap);
	va_end(ap);

	fprintf(stderr, message);
	MessageBox(NULL, message, "Error", MB_OK);
}