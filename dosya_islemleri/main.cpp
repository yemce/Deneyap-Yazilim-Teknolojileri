#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream dosyam("ornek.txt",ios::app);
  dosyam<<"Yeni metin eklendi"<<endl;
  dosyam.close();

  ifstream okuma("ornek.txt");
  string satir;
  while(getline(okuma,satir)){
  cout<<satir<<endl;
  }
}
