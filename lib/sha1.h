#ifndef _SHA1_H_
#define _SHA1_H_
#include <stdint.h>
#include <stddef.h>

void sha1(const uint8_t *initial_msg, size_t initial_len, uint8_t *digest);

#endif
