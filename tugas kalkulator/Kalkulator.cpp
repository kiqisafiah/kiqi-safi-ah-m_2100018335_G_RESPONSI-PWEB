#include<iostream>
#include<math.h>

using namespace std;

int tambah(int angka1,int angka2){
	int total= angka1 + angka2;
	return total;
}
int kurang(int angka1,int angka2){
	int total = angka1-angka2;
	return total;
}
int perkalian(int angka1,int angka2){
	int total = angka1 * angka2;
	return total;
}
float pembagian(float angka1,float angka2){
	float total= angka1 / angka2;
	return total;
}
int pangkat(int angka1,int angka2){
	int total= pow(angka1,angka2);
	return total;
}
float akar_pangkat(float angka1){
	float total= sqrt(angka1);
	return total;
}
int main(){
	int bil1,bil2,x;
	cout << "MASUKKAN ANGKA PERTAMA : ";
	cin >> bil1;
	cout << "MASUKKAN ANGKA KEDUA : ";
	cin >> bil2;
	cout << "HASILNYA ADALAH = " << tambah(bil1,bil2) << endl;
	cout << "HASILNYA ADALAH = " << kurang (bil1,bil2) << endl;
	cout << "HASILNYA ADALAH = " << perkalian (bil1,bil2) << endl;
	cout << "HASILNYA ADALAH = " << pembagian (bil1,bil2) << endl;
	cout << "HASILNYA ADALAH = " << pangkat (bil1,bil2) << endl;
	cout << "HASILNYA ADALAH = " << akar_pangkat(bil1);
}
