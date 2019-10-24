#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    /*
    wzor rownania liniowego: y=ax2+bx+c
    
    Delta= b^2 - 4ac
    
    Założenia:
        Jeżeli a!=0 to:
            Jeżeli Delta>0 to: Dwa miejca zerowe [x1 = (-b-vDelta)/2a, x2 = (-b+vDelta)/2a]
                *gdzie vDelta oznacza pierwiastek z delta
            Jeżeli Delta=0 to: Jedno miejce zerowe [x0 = -b/2a]
            Jeżeli Delta<0 to: nie ma miejsc zerowych
        [gdy a jest równe 0 to mamy doczynienia z funkcją liniową (0x2 + bx + c = bx + c)]
    */
    float a,b,c,D; //D to delta
    cin>>a>>b>>c;
    
    if(a==0)
    {
        if(b==0)
            cout<<"Funkcja LINIOWA!\n Rownanie nieoznaczone (nieskończenie wiele rozwiazan)";
        else
            cout<<"Funkcja LINIOWA!\n Rownanie sprzeczne (brak rozwiazan)";
    }
    else
        D=b*b-4*a*c;
        cout<<"Delta = "<<D<<endl;
        
        if(D>0)
            cout<<"Dwa rozwiazania:\n"<<(-b-sqrt(D))/(2*a)<<";"<<(-b+sqrt(D))/(2*a);
        else
        {
            if(D==0)
                cout<<"Jedno rozwiazanie: "<<-b/(2*a);
            else
                cout<<"Brak rozwiazan";
        }
    
  return 0;
}

