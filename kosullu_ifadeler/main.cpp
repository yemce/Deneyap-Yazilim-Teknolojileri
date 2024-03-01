#include <iostream>
using namespace std;

int main() {

  int sayi;

  cout<< "Bir sayi giriniz: ";
  cin>>sayi;

  if(sayi>=0){

    if(sayi%3==0){
      cout<< "Sayi 3'e tam bolunur.";
    }

    else{
      cout<<"Sayi 3'e tam bolunmez";
    }
  }
  else{
    cout<<"Sayi negatif";
  }
  }

/*
#include <iostream>
using namespace std;

int main() {
  int puan;
  cout<<"Puanýnýzý giriniz: ";
  cin>>puan;

  switch(puan){
    case 1:
    cout<<"puan kötü";
    break;

    case 2:
    cout<<"puan iyi";
    break;

    case 3:
    cout<<"puan çok iyi";
    break;

    default:
    cout<<"geçersiz puan";
    break;

  }

}
*/
