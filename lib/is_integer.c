#include "is_integer.h"

int is_integer_string(const char *str) {
    int start = 0;
    if (str[0] == '-' || str[0] == '+') {
    	start += 1;
    }

    if (str[start] == '\0') {
	return 0;
    }

    for (int i = start; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}
