#include <iostream>
#include "chovek.h"

using namespace std;

char lab[100][100];
chovek geroi(1, 1, '>');
int n = 37, m = 17;

void print()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (geroi.get_y() == i and geroi.get_x() == j)
            {
                std::cout<<geroi.get_c();
            }
            else std::cout<<lab[i][j];
        }
        std::cout<<'\n';
    }
}

void init()
{
    geroi.set_height(17);
    geroi.set_width(37);
}

int main()
{
    for (int i = 0; i < 17; ++i)
    {
        for (int j = 0; j < 37; ++j)
        {
            cin>>lab[i][j];
        }
    }
    init();

    system("clear");
    print();
    while (1) 
    {
        geroi.move(1);
        print();
        system("clear");
    }


    



    return 0;
}
