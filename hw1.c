#include "hw1.h"


char reverse_string(char* str, int length){
        int i;
        if (length < 1)
                return 2;
        for (i = 0; i < length / 2; i++)
        {
                if (str + i == 0 || str + length - i - 1 == 0)
                        return 1;
                else
                {
                        char a = str[i];
                        str[i] = str[length - 1 - i];
                        str[length - 1 - i] = a;
                }
        }
        return 0;
}
