#include "Cadenas.h"

/// Sin implementar
void *mem_chr(const void *s, int c, size_t n)
{
    return NULL;
}

/// Sin implementar
int mem_cmp(const void *s1, const void *s2, size_t n)
{
    return 0;
}

/// Sin implementar
void *mem_cpy(void *s1, const void *s2, size_t n)
{
    return NULL;
}

/// Sin implementar
void *mem_move(void *s1, const void *s2, size_t n)
{
    return NULL;
}

/// Sin implementar
void *mem_set(void *s, int c, size_t n)
{
    return NULL;
}

char *str_cat(char *s1, const char *s2)
{
    char *ini=s1;

    while (*s1)
        s1++;

    while (*s2)
    {
        *s1=*s2;
        s2++;
        s1++;
    }
    return ini;

}

char *str_chr(char *s, int c)
{
    while ( *s && *s != (unsigned char)c )
        s++;
    return *s ? s: NULL;
}

int str_cmp(const char *s1, const char *s2)
{
    while (*s1 && *s1==*s2)
    {
        s1++;
        s2++;
    }

    return *s1 - *s2 ;
}

/// Sin implementar
int str_coll(const char *s1, const char *s2)
{
    return 0;
}

char *str_cpy(char *s1, const char *s2)
{
    char *ini=s1;
    while (*s2)
    {
        *s1=*s2;
        s1++;
        s2++;
    }

    return ini;
}

size_t str_cspn(const char *s1, const char *s2)
{
    size_t cant=0;

    while (*s1 && *s1!=*s2)
    {
        s1++;
        cant++;
    }

    return cant;
}

/// cuatri anterior
char *str_error(int errnum)
{
    static char msg_error[40];
    sprintf(msg_error,
            "%.*s\n",
            (int)sizeof(msg_error)-2,
            errnum >=0 && errnum < sys_nerr ?
            sys_errlist[errnum] :
            "Unknown error");
    return msg_error;
}

size_t str_len(const char *s)
{
    size_t cant=0;

    while (*s)
    {
        s++;
        cant++;
    }

    return cant;
}

char *str_ncat(char*s1, const char *s2, size_t n)
{
    char *ini=s1;

    while (*s1)
        s1++;

    while (*s2 && n)
    {
        *s1=*s2;
        s1++;
        s2++;
        n--;
    }
    *s1='\0';
    return ini;
}

int str_ncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 && *s1==*s2 && n)
    {
        s1++;
        s2++;
        n--;
    }
    /// ¿Es necesario?
    if (!n)
    {
        s1--;
        s2--;
    }

    return *s1-*s2;
}

char *str_ncpy(char *s1, const char *s2, size_t n)
{
    char *ini=s1;

    while (*s2 && n)
    {
        *s1=*s2;
        s1++;
        s2++;
        n--;
    }
    return ini;
}

char *str_pbrk(const char *s1, const char *s2)
{
    while (*s2)
    {
        while (*s1 && *s1!=*s2)
            s1++;
        if (*s1==*s2)
            return s1;
        s2++;
    }
    return NULL;
}

char *str_rchr(char *s, int c)
{
    char *ini=s;

    while (*s)
        s++;
    s--;

    while (ini<= s && *s!=(unsigned char)c)
        s--;

    return s;
}

size_t str_spn(const char *s1, const char *s2)
{
    size_t cant=0;

    while (*s1 && *s1==*s2)
    {
        s1++;
        s2++;
        cant++;
    }

    return cant;
}

char *str_str(const char *s1, const char *s2)
{
    char *iniS2=s2;
    char *ptr;

    while (*s1)
    {
        ptr=s1;
        while (*s1==*s2)
        {
            s1++;
            s2++;
        }
        if (!*s2)
            return ptr;
        s2=iniS2;
        s1++;
    }

    return NULL;
}

/// sin implementar
char *str_tok (char *cad,  char *del)
{
    return  NULL;
}

size_t str_xfrm(char *s1, const char *s2, size_t n)
{
    char *ptrS2=s2;
    size_t cant=0;

    while (*ptrS2)
    {
        ptrS2++;
        cant++;
    }

    ptrS2=s2;

    while (*ptrS2 && n)
    {
        *s1=*ptrS2;
        s1++;
        ptrS2++;
        n--;
    }

    return cant;
}
