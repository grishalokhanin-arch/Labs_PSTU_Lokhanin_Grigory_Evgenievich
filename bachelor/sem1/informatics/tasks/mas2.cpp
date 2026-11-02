#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    bool f=false;
    int m[10]={1,6,3,85,56,4,9,7,1,85},i=0,a,b;
    while ((!f) && (i<10-1))
    {
        a=m[i];
        b=m[i+1];
        if (a>=b) f=true;
        i+=1;
    }
    if (f) cout<<"posledovatelnost ne uporyadochena";
    else cout << "posledovatelnost uporyadochena";
    return 0;
}