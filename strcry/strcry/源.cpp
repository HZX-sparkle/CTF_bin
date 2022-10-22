#include <stdio.h>
#include <stdlib.h>

char __cdecl strchange(char* a1, char* a2)
{
    char result; // al
    char v3; // [esp+4Ch] [ebp-4h]

    v3 = *a1;
    *a1 = *a2;
    result = v3;
    *a2 = v3;
    return result;
}

int main()
{
    size_t result; // eax
    int v2 = 0; // [esp+4Ch] [ebp-54h]
    int j; // [esp+50h] [ebp-50h]
    unsigned int i; // [esp+54h] [ebp-4Ch]
    size_t k; // [esp+54h] [ebp-4Ch]
    int v6; // [esp+58h] [ebp-48h]
    char Str[68] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"; // [esp+5Ch] [ebp-44h] BYREF
    char flag[40] = "cnwyPZJew/PwE5iHshiOFJJsCMMM1q";

    for (int m = 5; m <= 29; m++) {
        for (int q = 0; q <= 63; q++) {
            char a1[40] = "cnss{aaaaaaaaaaaaaaaaaaaaaaaa}";
            
            a1[m] = Str[q];
            
            v6 = 64;               //µÚÒ»²½
            for (i = 0; i < sizeof(a1); ++i)
            {
                Str[v6 - 1] = '{';
                Str[v6 - 2] = '}';
                for (j = 0; j < v6; ++j)
                {
                    if (a1[i] == Str[j])
                    {
                        v2 = j;
                        break;
                    }
                }
                a1[i] = Str[(v2 + (i >> 1) * 2 * i) % v6];
            }
            for (k = 0; ; ++k)
            {

                if (k >= 30)
                    break;
                if (a1[k] == 123)
                    a1[k] = 47;
                if (a1[k] == 125)
                    a1[k] = 43;
            }

            if (a1[m] == flag[m]) {
                printf("%c", Str[q]);
                break;
            }



        }
    }
    
    return 0;
   
}