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
