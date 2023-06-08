#include "hash_tables.h"

/**
 * hash_djb2 - Calculates the hash value using the djb2 algorithm
 * @str: The string used to generate the hash value
 * Return: The resulting hash value
 */
unsigned long int hash_djb2(const unsigned char *str) {
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }

    return hash;
}
