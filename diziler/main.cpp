#include <iostream>
using namespace std;

int main() {

  int numbers[3][4] = {
      {3, 6, 7, 5},
      {2, 3, 4, 6},
      {1, 2, 3, 8},
  };

  cout << numbers[0][0] << endl;
  cout << numbers[0][1] << endl;
  cout << numbers[0][2] << endl;
  cout << numbers[0][3] << endl;
  cout << "-------------------" << endl;

  cout << numbers[1][0] << endl;
  cout << numbers[1][1] << endl;
  cout << numbers[1][2] << endl;
  cout << numbers[1][3] << endl;
  cout << "-------------------" << endl;

  cout << numbers[2][0] << endl;
  cout << numbers[2][1] << endl;
  cout << numbers[2][2] << endl;
  cout << numbers[2][3] << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout <<numbers[i][j]<< endl;
    }
  }
}

/*
#include <iostream>
using namespace std;

int main() {
  string isimler[5]=
  {"ali",
  "veli",
  "ayþe",
  "fatma",
  };
  isimler[4]="ahmet";
  isimler[0]="mehmet";

  for (int i=0; i<5; i++){
    cout<<isimler[i]<<endl;
  }

}
*/
