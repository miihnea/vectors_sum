#include "aduna_vectori.h"

void Add(float v1[],   float v2[],
    float v3[],
    float v4[],
    float suma[],
    int n)
{
    
    for (int i = 0; i < n; i++)
    {
        suma[i] = v1[i] + v2[i] + v3[i] + v4[i];
        cout << suma[i] << " ";
    }
}