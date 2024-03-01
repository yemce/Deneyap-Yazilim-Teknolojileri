#include <iostream>
using namespace std;

int main() {

  int sayý;

  for(int i=0;i<3;i++){
   cout<<"bir sayi giriniz:";
    cin>>sayý;

    if(sayý>0){
      cout<<"sayi pozitif"<<endl;

    }
    else{
      cout<<"sayi negatif"<<endl;
    }
  }
}

/*
#include <iostream>
using namespace std;

int main() {

  int sayac = 0;

  while(sayac<=10){

    if(sayac%2==0){
      cout<<"çift sayý: "<<sayac<<endl;
    }
    else{
      cout<<"tek sayý: "<<sayac<<endl;
    }
    sayac++;
  }
}
*/
