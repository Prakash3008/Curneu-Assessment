#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

struct Points
{
    double x, y;
};

main()
{
    Points P[100][2];
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            double randomx = ((double)rand() / (double(RAND_MAX)));
            double randomy = ((double)rand() / (double(RAND_MAX)));
            P[i][j].x = randomx;
            P[i][j].y = randomy;
            //cout << randomx << " " << randomy;
        }
    }
    cout << sizeof(P) / sizeof(P[0]);
    // for (int i = 0; i < 40; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << P[i][j].x << " " << P[i][j].y << endl;
    //     }
    // }
}