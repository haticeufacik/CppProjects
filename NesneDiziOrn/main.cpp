#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    int i,j;
    Person Kisi[2][2];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            Kisi[i][j].Kisial();
        cout << "----------" << endl;
    return 0;
}
