#include "hash_tables.h"
/**
 * key_index: Get index at which key/value
 * pairs stred in the hash tables'
 * @key: the key of the index
 * @size: the size of the arrau of the hashtable
 * Return:Index key
 * uses djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
