#include <iostream>

using namespace std;

int main()
{
string nama, nim; //kata/karakter
int usia; //bilangan bulat

cout << "Nama: ";
cin >> nama;
cout << "usia: ";
cin >> usia;

//lopping/petualangan
for(int i = 0; i < usia; i++) {

cout << nama << endl;

}

int i = 0;
while(i<= usia) {
cout<< nama << endl;
i++;
}

int k=0;
do {
cout << nama << endl;
k++;
} while (k<= usia);

return 0;

}
