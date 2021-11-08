#include <iostream>
using namespace std ;


class liczba {
public :
float a;
float b;
float c;
void dlugosc() {
cout<< "Dlugosc w M : "<<a<< endl;
cout<<"Dlugosc w Inch : "<< b<< endl;
cout<<"Dlugosc w Ft : "<<c<<endl;
}
void metryczka(){
cout<<"Program napisal \n Amir Berezhnov"<<endl;
};
};
int main () {
liczba l1;
l1.metryczka();
cout<<"podaj liczbe w metrach"<<endl;
cin>>l1.a;
l1.b = l1.a * 39.37;
l1.c = l1.a * 3.2808;
l1.dlugosc();
return 0;
}
