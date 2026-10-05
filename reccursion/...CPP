#include <iostream>
using namespace std;

int main()
{
    int D, M, Y, NDIM;

    cout << "Enter date (DD MM YYYY): ";
    cin >> D >> M >> Y;

    if (M == 1 || M == 3 || M == 5 || M == 7 ||
        M == 8 || M == 10 || M == 12)
    {
        NDIM = 31;
    }
    else if (M == 4 || M == 6 || M == 9 || M == 11)
    {
        NDIM = 30;
    }
    else
    {
        
        if ((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0)) 
            NDIM = 29;
        else
            NDIM = 28;
    }

    
    if (D < NDIM)
    {
        D++;
    }
    else
    {
        D = 1;

        if (M < 12)
        {
            M++;
        }
        else
        {
            M = 1;
            Y++;
        }
    }

    cout << "Next Date: " << D << "/" << M << "/" << Y;

    return 0;
}