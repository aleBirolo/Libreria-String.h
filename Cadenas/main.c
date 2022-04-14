#include "menu.h"

int main()
{
    int opc;

    menu();
    printf ("\n Ingrese opcion: ");
    scanf("%d", &opc);

    while (opc!= SALIR)
    {
        switch(opc)
        {
        case  1:
            printf ("\n memchr	 \n");
            prueba_memchr	();
            printf ("\n mem_chr  \n");
            prueba_mem_chr	();
            break;
        case  2:
            printf ("\n memcmp   \n");
            prueba_memcmp	();
            printf ("\n mem_cmp	 \n");
            prueba_mem_cmp	();
            break;
        case  3:
            printf ("\n memcpy	 \n");
            prueba_memcpy	();
            printf ("\n mem_cpy  \n");
            prueba_mem_cpy	();
            break;
        case  4:
            printf ("\n memmove	 \n");
            prueba_memmove	();
            printf ("\n mem_move \n");
            prueba_mem_move	();
            break;
        case  5:
            printf ("\n memset	 \n");
            prueba_memset	();
            printf ("\n mem_set  \n");
            prueba_mem_set	();
            break;
        case  6:
            printf ("\n strcat   \n");
            prueba_strcat	();
            printf ("\n str_cat	 \n");
            prueba_str_cat	();
            break;
        case  7:
            printf ("\n strchr	 \n");
            prueba_strchr	();
            printf ("\n str_chr  \n");
            prueba_str_chr	();
            break;
        case  8:
            printf ("\n strcmp	 \n");
            prueba_strcmp	();
            printf ("\n str_cmp  \n");
            prueba_str_cmp	();
            break;
        case  9:
            printf ("\n strcoll  \n");
            prueba_strcoll	();
            printf ("\n str_coll \n");
            prueba_str_coll	();
            break;
        case 10:
            printf ("\n strcpy	 \n");
            prueba_strcpy	();
            printf ("\n str_cpy  \n");
            prueba_str_cpy	();
            break;
        case 11:
            printf ("\n strcspn	 \n");
            prueba_strcspn	();
            printf ("\n str_cspn \n");
            prueba_str_cspn	();
            break;
        case 12:
            printf ("\n strerror \n");
            prueba_strerror ();
            printf ("\n str_error\n");
            prueba_str_error();
            break;
        case 13:
            printf ("\n strlen   \n");
            prueba_strlen	();
            printf ("\n str_len	 \n");
            prueba_str_len	();
            break;
        case 14:
            printf ("\n strncat	 \n");
            prueba_strncat	();
            printf ("\n str_ncat \n");
            prueba_str_ncat	();
            break;
        case 15:
            printf ("\n strncmp	 \n");
            prueba_strncmp	();
            printf ("\n str_ncmp \n");
            prueba_str_ncmp	();
            break;
        case 16:
            printf ("\n strncpy	 \n");
            prueba_strncpy	();
            printf ("\n str_ncpy \n");
            prueba_str_ncpy	();
            break;
        case 17:
            printf ("\n strpbrk  \n");
            prueba_strpbrk	();
            printf ("\n str_pbrk \n");
            prueba_str_pbrk	();
            break;
        case 18:
            printf ("\n strrchr	 \n");
            prueba_strrchr	();
            printf ("\n str_rchr \n");
            prueba_str_rchr	();
            break;
        case 19:
            printf ("\n strspn	 \n");
            prueba_strspn	();
            printf ("\n str_spn  \n");
            prueba_str_spn	();
            break;
        case 20:
            printf ("\n strstr	 \n");
            prueba_strstr	();
            printf ("\n str_str  \n");
            prueba_str_str	();
            break;
        case 21:
            printf ("\n strtok	 \n");
            prueba_strtok	();
            printf ("\n str_tok  \n");
            prueba_str_tok	();
            break;
        case 22:
            printf ("\n strxfrm	 \n");
            prueba_strxfrm	();
            printf ("\n str_xfrm \n");
            prueba_str_xfrm	();
                break;
            default:
                printf ("Opcion invalida");
                break;
        }

       system("\npause");
       system("cls");
       menu();
       printf ("\n Ingrese opcion: ");
       scanf("%d", &opc);
    }

    return 0;
}
