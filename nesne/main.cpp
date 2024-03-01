#include <iostream>
using namespace std;

class Arabalar{
public:
string marka;
int yil;
void hizlan(){
  cout<<"araba hýzlandý"<<endl;
}
Arabalar(){
  cout<<"nesne oluþtu"<<endl;
}
Arabalar(string m,int y){
  marka=m;
  yil=y;
}
//~Arabalar(){
//  cout<<"nesne yok edildi"<<endl;
//}

};

int main(){
  Arabalar araba1;
  araba1.marka="BMW";
  araba1.yil=2020;
  cout<<araba1.marka<<endl;
  cout<<araba1.yil<<endl;

  Arabalar araba2("mercedes",2010);
  cout<<araba2.marka<<endl;
  cout<<araba2.yil<<endl;

  Arabalar araba3("togg",2023);
  Arabalar araba4;
}

/*
#include <iostream>
using namespace std;

class Kisi {
private:
  int numara;
public:
  string isim;
  int boy;
  int yas;
  void atama(int num){
    numara = num;
  }
  void yazdir(){
    cout<<numara<<endl;
  }

};

int main() {
  Kisi ahmet;
  ahmet.isim = "Ahmet";
  ahmet.boy = 180;
  ahmet.yas = 20;
  cout<<ahmet.isim<<endl;
  cout<<ahmet.boy<<endl;
  cout<<ahmet.yas<<endl;
  ahmet.atama(10);
  ahmet.yazdir();
}
*/
