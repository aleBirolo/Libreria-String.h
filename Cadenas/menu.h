#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "cadenas.h"
#define SALIR 0
struct {
  char name[40];
  int age;
} person, person_copy;

void menu();

void prueba_mem_chr ();
void prueba_mem_cmp ();
void prueba_mem_cpy ();
void prueba_mem_move ();
void prueba_mem_set ();
void prueba_str_cat ();
void prueba_str_chr ();
void prueba_str_cmp ();
void prueba_str_coll ();
void prueba_str_cpy ();
void prueba_str_cspn ();
void prueba_str_error();
void prueba_str_len ();
void prueba_str_ncat ();
void prueba_str_ncmp ();
void prueba_str_ncpy ();
void prueba_str_pbrk ();
void prueba_str_rchr ();
void prueba_str_spn ();
void prueba_str_str ();
void prueba_str_tok ();
void prueba_str_xfrm ();

/// Pruebas de funciones string.h

void prueba_memchr ();
void prueba_memcmp ();
void prueba_memcpy ();
void prueba_memmove ();
void prueba_memset ();
void prueba_strcat ();
void prueba_strchr ();
void prueba_strcmp ();
void prueba_strcoll ();
void prueba_strcpy ();
void prueba_strcspn ();
void prueba_strerror ();
void prueba_strlen ();
void prueba_strncat ();
void prueba_strncmp ();
void prueba_strncpy ();
void prueba_strpbrk ();
void prueba_strrchr ();
void prueba_strspn ();
void prueba_strstr ();
void prueba_strtok ();
void prueba_strxfrm ();

#endif // MENU_H_INCLUDED
