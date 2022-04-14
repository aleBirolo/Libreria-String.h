#include "menu.h"

void menu()
{
    printf ("  1: memchr\n"
            "  2: memcmp\n"
            "  3: memcpy\n"
            "  4: memmove\n"
            "  5: memset\n"
            "  6: strcat\n"
            "  7: strchr\n"
            "  8: strcmp\n"
            "  9: strcoll\n"
            " 10: strcpy\n"
            " 11: strcspn\n"
            " 12: strerror\n"
            " 13: strlen\n"
            " 14: strncat\n"
            " 15: strncmp\n"
            " 16: strncpy\n"
            " 17: strpbrk\n"
            " 18: strrchr\n"
            " 19: strspn\n"
            " 20: strstr\n"
            " 21: strtok\n"
            " 22: strxfrm\n"
            "  0: Salir\n"
            );
}

void prueba_mem_chr	()
{
    char cadena[] = "Erase una vez...";
    char *puntero;

    puntero = (char *)mem_chr( cadena, 'a', 5 );
    printf( "%s\n", cadena);
    printf( "%s\n", puntero );
}

void prueba_memchr	()
{
    char cadena[] = "Erase una vez...";
    char *puntero;

    puntero = (char *)memchr( cadena, 'a', 5 );
    printf( "%s\n", cadena);
    printf( "%s\n", puntero );
}

void prueba_mem_cmp	()
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";

    int n;

    n=mem_cmp ( buffer1, buffer2, sizeof(buffer1) );

    if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
    else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
    else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

}

void prueba_memcmp	()
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";

    int n;

    n=memcmp ( buffer1, buffer2, sizeof(buffer1) );

    if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
    else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
    else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

}

void prueba_mem_cpy	()
{
    char myname[] = "Pierre de Fermat";


    /* using memcpy to copy string: */
    mem_cpy ( person.name, myname, strlen(myname)+1 );
    person.age = 46;

    /* using memcpy to copy structure: */
    mem_cpy ( &person_copy, &person, sizeof(person) );

    printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );

}

void prueba_memcpy	()
{
    char myname[] = "Pierre de Fermat";

    /* using memcpy to copy string: */
    memcpy ( person.name, myname, strlen(myname)+1 );
    person.age = 46;

    /* using memcpy to copy structure: */
    memcpy ( &person_copy, &person, sizeof(person) );

    printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age );

}

void prueba_mem_move	()
{
    char a[7] = "abcdefg";
    char *ptr;
    int i;

    mem_move( ptr, a, 5 );
    for( i=0; i<7; i++ )
        printf( "a[%d]=%c ", i, a[i] );
    printf( "\n" );
    for( i=0; i<5; i++ )
        printf( "ptr[%d]=%c ", i, ptr[i] );
    printf( "\n" );
}

void prueba_memmove	()
{
    char a[7] = "abcdefg";
    char *ptr;
    int i;

    memmove( ptr, a, 5 );
    for( i=0; i<7; i++ )
        printf( "a[%d]=%c ", i, a[i] );
    printf( "\n" );
    for( i=0; i<5; i++ )
        printf( "ptr[%d]=%c ", i, ptr[i] );
    printf( "\n" );
}

void prueba_mem_set	()
{
    char str[] = "almost every programmer should know memset!";
    mem_set (str,'-',6);
    puts (str);
}

void prueba_memset	()
{
    char str[] = "almost every programmer should know memset!";
    memset (str,'-',6);
    puts (str);
}

void prueba_str_cat	()
{
    char str[80];
    str_cpy (str,"these ");
    str_cat (str,"strings ");
    str_cat (str,"are ");
    str_cat (str,"concatenated.");
    puts (str);
}

void prueba_strcat	()
{
    char str[80];
    strcpy (str,"these ");
    strcat (str,"strings ");
    strcat (str,"are ");
    strcat (str,"concatenated.");
    puts (str);
}

void prueba_str_chr	()
{
    char str[] = "This is a sample string";
    char * pch;
    printf ("Looking for the 's' character in \"%s\"...\n",str);
    pch=str_chr(str,'s');
    while (pch!=NULL)
    {
        printf ("found at %d\n",pch-str+1);
        pch=str_chr(pch+1,'s');
    }
}

void prueba_strchr	()
{
    char str[] = "This is a sample string";
    char * pch;
    printf ("Looking for the 's' character in \"%s\"...\n",str);
    pch=strchr(str,'s');
    while (pch!=NULL)
    {
        printf ("found at %d\n",pch-str+1);
        pch=strchr(pch+1,'s');
    }
}

void prueba_str_cmp	()
{
    char key[] = "apple";
    char buffer[80];
    do
    {
        printf ("Guess my favorite fruit? ");
        fflush (stdout);
        scanf ("%79s",buffer);
    }
    while (str_cmp (key,buffer) != 0);
    puts ("Correct answer!");
}

void prueba_strcmp	()
{
    char key[] = "apple";
    char buffer[80];
    do
    {
        printf ("Guess my favorite fruit? ");
        fflush (stdout);
        scanf ("%79s",buffer);
    }
    while (strcmp (key,buffer) != 0);
    puts ("Correct answer!");
}

void prueba_str_coll	()
{
    char s1[5] = "Abeja";
    char s2[5] = "abeja";
    int i;

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );

    i = str_coll( s1, s2 );
    printf( "s1 es " );
    if( i < 0 )  printf( "menor que" );
    else if( i > 0 )  printf( "mayor que" );
    else  printf( "igual a" );
    printf( " s2\n" );

}

void prueba_strcoll	()
{
    char s1[5] = "Abeja";
    char s2[5] = "abeja";
    int i;

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );

    i = strcoll( s1, s2 );
    printf( "s1 es " );
    if( i < 0 )  printf( "menor que" );
    else if( i > 0 )  printf( "mayor que" );
    else  printf( "igual a" );
    printf( " s2\n" );

}

void prueba_str_cpy	()
{
    char str1[]="Sample string";
    char str2[40];
    char str3[40];
    str_cpy (str2,str1);
    str_cpy (str3,"copy successful");
    printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
}

void prueba_strcpy	()
{
    char str1[]="Sample string";
    char str2[40];
    char str3[40];
    strcpy (str2,str1);
    strcpy (str3,"copy successful");
    printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
}

void prueba_str_cspn	()
{
    char s1[13] = "Hola a todos";
    char s2[5] = "abcd";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strcspn(s1,s2) = %d\n", str_cspn( s1, s2 ) );
}

void prueba_strcspn	()
{
    char s1[13] = "Hola a todos";
    char s2[5] = "abcd";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strcspn(s1,s2) = %d\n", strcspn( s1, s2 ) );
}

void prueba_str_error()
{
    int errnum;

    for( errnum=0; errnum<39; errnum++ )
        printf( "strerror(%d) = %s\n", errnum, str_error( errnum ) );

}

void prueba_strerror()
{
    int errnum;

    for( errnum=0; errnum<39; errnum++ )
        printf( "strerror(%d) = %s\n", errnum, strerror( errnum ) );

}

void prueba_str_len	()
{
    char szInput[256];
    printf ("Enter a sentence: ");
    fflush(stdin);
    gets (szInput);
    printf ("The sentence entered is %u characters long.\n",(unsigned)str_len(szInput));
}

void prueba_strlen	()
{
    char szInput[256];
    printf ("Enter a sentence: ");
    fflush(stdin);
    gets (szInput);
    printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
}

void prueba_str_ncat	()
{
    char s1[11] = "Hola ";
    char s2[6] = "amigos";

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );
    str_ncat( s1, s2, 3 );
    printf( "s1=%s\n", s1 );
}

void prueba_strncat	()
{
    char s1[11] = "Hola ";
    char s2[6] = "amigos";

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );
    strncat( s1, s2, 3 );
    printf( "s1=%s\n", s1 );
}

void prueba_str_ncmp	()
{
    char s1[9] = "artesano";
    char s2[8] = "artista";
    int i;

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );

    i = str_ncmp( s1, s2, 3 );
    printf( "Las 3 primeras letras de s1 son " );
    if( i < 0 )  printf( "menores que" );
    else if( i > 0 )  printf( "mayores que" );
    else  printf( "iguales a" );
    printf( " s2\n" );

}

void prueba_strncmp	()
{
    char s1[9] = "artesano";
    char s2[8] = "artista";
    int i;

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );

    i = strncmp( s1, s2, 3 );
    printf( "Las 3 primeras letras de s1 son " );
    if( i < 0 )  printf( "menores que" );
    else if( i > 0 )  printf( "mayores que" );
    else  printf( "iguales a" );
    printf( " s2\n" );

}

void prueba_str_ncpy	()
{
    char s2[8] = "abcdefg";
    char s1[8];

    str_ncpy( s1, s2, 3 );
    printf( "s2=%s\n", s2 );
    printf( "s1=%s\n", s1 );
}

void prueba_strncpy	()
{
    char s2[8] = "abcdefg";
    char s1[8];

    strncpy( s1, s2, 3 );
    printf( "s2=%s\n", s2 );
    printf( "s1=%s\n", s1 );
}

void prueba_str_pbrk	()
{
    char s1[13] = "Hola a todos";
    char s2[5] = "deip";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strpbrk(s1,s2) = %s\n", str_pbrk( s1, s2 ) );
}

void prueba_strpbrk	()
{
    char s1[13] = "Hola a todos";
    char s2[5] = "deip";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strpbrk(s1,s2) = %s\n", strpbrk( s1, s2 ) );
}


void prueba_str_rchr	()
{
    char s[12] = "Hola amigos";
    char c = 'a';

    printf( "s=%s\t", s );
    printf( "c=%c\n", c );
    printf( "strrchr=%s\n", str_rchr( s, c ) );
}

void prueba_strrchr	()
{
    char s[12] = "Hola amigos";
    char c = 'a';

    printf( "s=%s\t", s );
    printf( "c=%c\n", c );
    printf( "strrchr=%s\n", strrchr( s, c ) );
}

void prueba_str_spn	()
{
    char s1[13] = "Hola a todos";
    char s2[5] = "Hola";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strspn(s1,s2) = %d\n", str_spn( s1, s2 ) );
}

void prueba_strspn	()
{
    char s1[13] = "Hola a todos";
    char s2[5] = "Hola";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strspn(s1,s2) = %d\n", strspn( s1, s2 ) );
}

void prueba_str_str	()
{
    char s1[20] = "Hlola a todos";
    char s2[3] = "la";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strstr(s1,s2) = %s\n", str_str( s1, s2 ) );
}

void prueba_strstr	()
{
    char s1[20] = "Hlola a todos";
    char s2[3] = "la";

    printf( "s1=%s\n", s1 );
    printf( "s2=%s\n", s2 );
    printf( "strstr(s1,s2) = %s\n", strstr( s1, s2 ) );
}

void prueba_str_tok	()
{
    char str[] ="- This, a sample string.";
    char * pch;
    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = str_tok (str," ,.-");
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        pch = str_tok (NULL, " ,.-");
    }
}

void prueba_strtok	()
{
    char str[] ="- This, a sample string.";
    char * pch;
    printf ("Splitting string \"%s\" into tokens:\n",str);
    pch = strtok (str," ,.-");
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        pch = strtok (NULL, " ,.-");
    }
}

void prueba_str_xfrm	()
{
    char s2[10] = "abcdefg";
    char s1[10];
    int i;

    i = str_xfrm( s1, s2, 4 );
    printf( "s2=%s\n", s2 );
    printf( "s1=%s\tlonguitud=%d\n", s1, i );
}

void prueba_strxfrm	()
{
    char s2[10] = "abcdefg";
    char s1[10];
    int i;

    i = strxfrm( s1, s2, 4 );
    printf( "s2=%s\n", s2 );
    printf( "s1=%s\tlonguitud=%d\n", s1, i );
}


