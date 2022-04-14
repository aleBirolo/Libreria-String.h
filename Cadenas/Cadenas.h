#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  	*mem_chr(const void *s, int c, size_t n);
int   	 mem_cmp(const void *s1, const void *s2, size_t n);
void 	*mem_cpy(void *s1, const void *s2, size_t n);
void 	*mem_move(void *s1, const void *s2, size_t n);
void 	*mem_set(void *s, int c, size_t n);
char 	*str_cat(char*s1, const char *s2);
char 	*str_chr(char *s, int c);
int   	 str_cmp(const char *s1, const char *s2);
int   	 str_coll(const char *s1, const char *s2);
char 	*str_cpy(char *s1, const char *s2);
size_t 	 str_cspn(const char *s1, const char *s2);
char 	*str_error(int errnum);
size_t 	 str_len(const char *s);
char 	*str_ncat(char *s1, const char *s2, size_t n);
int 	 str_ncmp(const char *s1, const char *s2, size_t n);
char 	*str_ncpy(char *s1, const char *s2, size_t n);
char 	*str_pbrk(const char *s1, const char *s2);
char 	*str_rchr(char *s, int c);
size_t 	 str_spn(const char *s1, const char *s2);
char 	*str_str(const char *s1, const char *s2);
char    *str_tok (char *cad,  char *del);
size_t 	 str_xfrm(char *s1, const char *s2, size_t n);
#endif // CADENAS_H_INCLUDED
