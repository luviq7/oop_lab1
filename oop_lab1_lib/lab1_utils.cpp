#include <cmath>
#include "lab1_utils.h"
int g_iNumberOfCalls_10 = 0;
int GetNumberOfArgumentsByArgc_10(int argc)
{
    ++g_iNumberOfCalls_10;
    return argc - 1;
}
static bool IsTriangleValid_10(double sideA, double sideB, double sideC)
{
    const bool cbRes = (sideA < (sideB + sideC)) && (sideB < (sideA + sideC)) && (sideC < (sideA +
sideB));
    return cbRes;
}
double GetTriangleAreaByHeron_10(double sideA, double sideB, double sideC)
{
    ++g_iNumberOfCalls_10;
    double dRes = NAN;
    if (IsTriangleValid_10(sideA, sideB, sideC))
    {
        const double cbSemiP = (sideA + sideB + sideC) * 0.5;
        dRes = sqrt(cbSemiP * (cbSemiP - sideA) * (cbSemiP - sideB) * (cbSemiP - sideC));
    }
    return dRes;
}