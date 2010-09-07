#include "platform.h"

/* NOTE: Please keep the list in tup.1 in sync */
#ifdef __linux__
const char *tup_platform = "linux";
#elif __sun__
const char *tup_platform = "solaris";
#elif __APPLE__
const char *tup_platform = "macosx";
#else
#error Unsupported platform. Please add support in tup/platform.c
#endif
