#include <iostream>

using namespace std;

int main ()
{
    /*
    wzor rownania liniowego: y=ax+b
    wzor na rozwiazanie rownania liniowego (miejsce zerowe):
    0=ax+b
    -b=ax
    -b/a=x

    Założenia:
        Jeżeli a=0 to:
            Jeżeli b=0 to: jest nieskończenie wiele rowziąań (0=0x+0 => 0=0)
            Jeżeli b!=0 to: brak rozwiązań (x=-b/0 NIE MOŻNA DZIELIĆ PRZEZ 0)
    */
    int a,b;
    cin>>a>>b;
    if(a==0)
    {
        if(b==0)
            cout<<"Rownanie nieoznaczone (nieskończenie wiele rozwiazan)";
        else
            cout<<"Rownanie sprzeczne (brak rozwiazan)";
    }
    else
        cout<<"Rozwiazaniem rownania jest liczba: "<<-b/a;
    
  return 0;
}

