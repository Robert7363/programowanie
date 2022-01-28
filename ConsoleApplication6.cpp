

#include <iostream>
using namespace std;
int foo(int *wsk, int *wsk2)
{if (*wsk < *wsk2)
    return *wsk;
else
return *wsk2;
}
int main()
{
    int *wsk;
    int zmienna=5;
    wsk = &zmienna;
    int roz=0;
    int zmienna2 = 11;
    int *wsk2;
    wsk2 = &zmienna2;
    int zmienna3 = 20;
    int *wsk3;
    wsk3 = &zmienna3;
    int srednia = 0;

    cout << "Wartosc zmiennej wynosi " << *wsk << endl;
    cout << "Adres zmiennej wynosi " << wsk << endl;
  
    roz = (*wsk2) - (*wsk);
    cout << "roznica zmiennych wynosi " << roz << endl;

    srednia = ((*wsk) + (*wsk2) + (*wsk3)) / 3;
    cout << "Srednia 3 liczb wynosi " << srednia << endl;

 


    int a, b;
    cin >> a >> b;
    cout << foo(&a, &b);
    return 0;
}





