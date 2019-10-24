#include <iostream>
#include <cmath> //używam do pierwiastków i potęd w zadaniu 3. i 4.

using namespace std;
int main()
{
    float a=0,b=0,c=0;
    cout<<"1. Sprawdzanie warunku trójkąta \n podaj długości boków (3): ";
    while(a<=0)
       {
           cout<<"podaj a:";
           cin>>a;
       }
    while(b<=0)
       {
           cout<<"podaj b:";
           cin>>b;
       }
    while(c<=0)
       {
           cout<<"podaj c:";
           cin>>c;
       }
    //Warunek istnienia trójkąta: suma dwóch krótsych boków jest większa od najdłuższego, ponieważ my na początku nie ustalamy który bok jest który, porównujemy wszsytkie
    if(a+b>c && a+c>b && b+c>a)
        cout<<"trójkąt może powstać \n";
    else
        cout<<"trójkąt nie może powstać \n";
    cout<<"____________________\n\n";
    
    
    cout<<"2. Określanie prostopadłości i równoległości prostych \n y=ax+b \n podaj parametry pierwszej funkcji:";
    cout<<"podaj a:"; cin>>a; //wykorzystam zmienne a i b z poprzedniego zadania
    cout<<"podaj b:"; cin>>b;
    
    float a2,b2;
    cout<<"podaj parametry drugiej funkcji:";
    cout<<"podaj a:"; cin>>a2;
    cout<<"podaj b:"; cin>>b2;
    
    if(a==a2)
        cout<<"proste równoległe \n";
    else
    {
        if(a==-a2)
            cout<<"proste prostopadłe \n";
        else
            cout<<"proste nie są prostopadłe ani równoległe \n";
    }
    cout<<"____________________\n\n";
    
    
    cout<<"3. Obliczanie długości odcinka";
    //długość odcinka oblcizamy x=pierwiastek((y1-y2)^2 + (x1-x2)^2)    (przekształcenie z tweirdzenia pitagorasa)      A(x1;y1), B(x2;y2)
    //UŻYWAM ZMIENNYCH ZADEKLAROWANYCH W POPRZEDNICH ZADANIACH
    cout<<"podaj współrzędne pierwszego punktu:";
    cout<<"\n\t podaj x: "; cin>>a;    cout<<"\n\t podaj y: "; cin>>b;
    
    cout<<"podaj współrzędne drugiego punktu:";
    cout<<"\n\t podaj x: "; cin>>a2;    cout<<"\n\t podaj y: "; cin>>b2;
    
    cout<<"długość odcinka to:"<<sqrt(pow(a-b,2)+pow(a2-b2,2))<<endl;
    cout<<"____________________\n\n";
    
    cout<<"Obliczanie odległości punktu od prostej \n Wzór funkcji: Ax+By+C \n Punkt(X,Y)";
    //UŻYWAM ZMIENNEJ ZADEKLAROWANEJ W POPRZEDNICH ZADANIACH (c)
    cout<<"Podaj A:"; cin>>a; cout<<"Podaj B:"; cin>>b; cout<<"Podaj C:"; cin>>c;
    float x,y;
    cout<<"Podaj X:"; cin>>x; cout<<"Podaj Y:"; cin>>y;
    cout<<"Odległość punktu od prostej wynosi: "<< (abs(a*x+b*y+c))/(sqrt(a*a+b*b));
    
    return 0;
}

