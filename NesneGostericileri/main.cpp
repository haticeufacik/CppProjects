#include <iostream>
#include "Takim.h"
using namespace std;

int main()
{
    Takim Voleybol[4]={Takim("Naz Akyol","Pasör",11), Takim("Gözde Kırdar","Smaçör",2),
    Takim("Neriman Gençyürek","Smaçör",13),Takim("Neslihan Demir","Smaçör",17)};

    Takim *A=Voleybol;

for(int i=0;i<4;i++)
{
    A->Listele();
    A++;
}

    return 0;
}
