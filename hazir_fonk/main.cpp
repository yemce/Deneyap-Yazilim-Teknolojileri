#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char mesaj[] = "Merhaba Dunya";

  for (int i = 0; i < strlen(mesaj); i++) {
    if(islower(mesaj[i])){
      mesaj[i] = toupper(mesaj[i]);
    }
  }

  cout<<mesaj;
}

/*
#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char mesaj[] = "Merhaba Dunya Selam";
  int bosluk_sayisi=0;
  for(int i=0;i<strlen(mesaj);i++){
    if(mesaj[i]==' '){
      bosluk_sayisi++;
    }
  }
  cout<<"kelime sayisi: "<<bosluk_sayisi+1<<endl;
}
*/
