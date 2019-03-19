#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
char nim[12], nama [30], jenis_kelamin[10], jurusan [6] ;
int main()
{
int data[5];
int i, total, rata, tmp;

                cout<<"input data diri mahasiswa "<<endl;
                cout<<"----------------------------------"<<endl;
                cout<<"Tuliskan NIM :";gets(nim);
                cout<<"Tuliskan Nama Lengkap :";gets(nama);
                cout<<"Tuliskan Jenis Kelamin :";gets(jenis_kelamin);
                cout<<"Tuliskan Jurusan :";gets(jurusan);
                cout<<"------------------------------"<<endl;
                cout<<"Masukkan Nilai Harian Mahasiswa : "<<endl;
                    total=0;
                    for(i=0; i<3; i++)
                    {
                        cout<<"Masukkan nilai ke-"<<(i+1)<<" : "; cin>>data[i];
                        total = total+data[i];
                    }
                cout<<endl;
                cout<<"--------------------------------------------"<<endl;
                cout<<"Mahasiswa yang bernama "<<nama<<" mempunyai nilai sebagai berikut "<<endl;
                                for(i=0;i<3;i++){
                                cout<<"["<<(0)<<" "<<(i)<<" ] : "<< data [i]<<" "<<endl; }
                                cout<<"--------------------------------------------"<<endl;
                                cout<<"Rata-rata nilai "<<nama<<":"<<endl;
                                {
                                    rata = total / 3;
                                    cout<<"Total : "<<total<<endl;
                                    cout<<"Rata - Rata nilai : "<<rata<<endl;
                                }


    getch();

}
