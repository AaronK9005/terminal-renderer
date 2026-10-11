#include "my_math.h"

int iclamp(int val, int min, int max)
{
    if (min > max)
    {
        int tmp = min;
        min = max;
        max = tmp;
    }
    
    if (val < min) return min;
    if (val > max) return max;
    return val;
}

float fclamp(float val, float min, float max)
{
    if (min > max)
    {
        float tmp = min;
        min = max;
        max = tmp;
    }
    
    if (val < min) return min;
    if (val > max) return max;
    return val;
}

double dclamp(double val, double min, double max)
{
    if (min > max)
    {
        double tmp = min;
        min = max;
        max = tmp;
    }
    
    if (val < min) return min;
    if (val > max) return max;
    return val;
}
