#include <iostream>

using namespace std;

void countSort(int nilai[], int inputan, int k){
 int output[inputan];
     int i, NILAI[inputan] = {0};

     for (i = 0; i < inputan; i++){
         NILAI[ (nilai[i]/k)%10 ]++;
  }
  for (i = 1; i < 10; i++){
         NILAI[i] += NILAI[i - 1];
   }
      for (i = inputan - 1; i >= 0; i--){
         output[NILAI[ (nilai[i]/k)%10 ] - 1] = nilai[i];
         NILAI[ (nilai[i]/k)%10 ]--;
     }
     for (i = 0; i < inputan; i++){
         nilai[i] = output[i];
     }
}
void radixSort(int nilai[], int inputan){
 int z = nilai[0];
    for (int i = 1; i < inputan; i++){
        if (z < nilai[i]){
            z = nilai[i];
  }
 }
 int m = z;
    for (int k = 1; m/k > 0; k*=10){
  countSort(nilai, inputan, k);
 }
}
void print(int nilai[], int inputan){
 for (int i = 0; i < inputan; i++){
        cout << nilai[i] << " ";
 }
}
int main()
{
 int inputan;
    cout << "Berapa inputan yang diingingkan : ";
    cin >> inputan;
    int nilai[inputan];
    for (int l = 0; l < inputan; l++){
  cout << "Input Nilai " << l + 1 << " : ";
  cin >> nilai[l];
 }
 cout << endl;
 cout <<"Data nilai yang belum diurutkan" << endl;
 for (int l = 0; l < inputan; l++){
  cout << nilai[l] << " ";
 }
 cout << endl;
 cout << endl;

 cout << "Data nilai yang telah diurutkan : "<<endl;
 radixSort (nilai, inputan);
 print (nilai, inputan);
    return 0;
}
