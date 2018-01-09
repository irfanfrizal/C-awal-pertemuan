#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int a,b,c,d,na,nt,nut,nas,ne;
cout <<" Masukan Nilai Absen:";cin>>na;
cout <<"\nMasukan Nilai Tugas:";cin>>nt;
cout <<"\nMasukan Nilai uts:";cin>>nut;
cout <<"\nMasukan Nilai uas:";cin>>nas;
a=na*20/100;
b=nt*25/100;
c=nut*25/100;
d=nas*30/100;
ne=a+b+c+d;
clrscr();
cout <<"========================\n";
cout <<"     Hasil Akhir        \n";
cout <<"=========================\n";
cout <<"\nHasil Akhir absen        :"<<a<<ends;
cout <<"\nHasil Akhir tugas        :"<<b<<ends;
cout <<"\nHasil Akhir uts        :"<<c<<ends;
cout <<"\nHasil Akhir uas       :"<<d<<ends;
cout <<"\nHasil Akhir keseluruhan;"<<ne<<ends;
getch();
}