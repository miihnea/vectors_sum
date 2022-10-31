#include "aduna_vectori.h"



int main()
{
    
    float v1[] = { 1, 2 , 3 ,5 };
    float v2[] = { 1, 1, 1, 1 };
    float v3[] = { 1, 0, 1, 0 };
    float v4[] = { 0, 0, 0, 0 };
    float suma[] = { 0, 0, 0, 0 };
    Add(v1, v2, v3, v4, suma, 4);
    Add(v1, v2, v3, v4, suma, 4);
   
	return 0;
}

