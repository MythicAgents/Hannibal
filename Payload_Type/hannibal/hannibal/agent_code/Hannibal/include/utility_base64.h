// Credit: https://github.com/zhicheng/base64

#ifndef UTILITY_BASE64_H
#define UTILITY_BASE64_H

#include "hannibal.h"

#define BASE64_ENCODE_OUT_SIZE(s) ((unsigned int)((((s) + 2) / 3) * 4 + 1))
#define BASE64_DECODE_OUT_SIZE(s) ((unsigned int)(((s) / 4) * 3))

/*
 * out is null-terminated encode string.
 * return values is out length, exclusive terminating `\0'
 */
unsigned int base64_encode(const unsigned char *in, unsigned int inlen, char *out);

/*
 * return values is out length
 */
unsigned int base64_decode(const char *in, unsigned int inlen, unsigned char *out);

#endif // UTILITY_BASE64_H