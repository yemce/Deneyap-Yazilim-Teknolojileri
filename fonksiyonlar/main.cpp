#include <iostream>
using namespace std;

int dizi_toplama(int dizi[5]){
  int toplam=0;

  for(int i = 0; i < 5; i++){
    toplam += dizi[i];
  }
  return toplam;
}


int main() {

  int sayilar2[5] = {2,4,6,8,10};

  int sonuc=dizi_toplama(sayilar2);
  cout<<sonuc;
}

/*
#include <iostream>
using namespace std;

void selam1() {
  cout << 10 << endl;
}

int selam2() {
  return 30;
}

int main() {
  selam1();
  int a=selam2();
  cout<<a;
}
*/
