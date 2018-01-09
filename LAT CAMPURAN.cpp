#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int N1,N2,N3,H,H1,H2;
cout <<" Masukan Nilai 1:";cin>>N1;
cout <<"\nMasukan Nilai 2:";cin>>N2;
cout <<"\nMasukan Nilai 3:";cin>>N3;
H=N1+N2*N3;
H1=N1+(N2*N3);
H2=(N1+N2)*N3;
clrscr();
cout <<"========================\n";
cout <<"     Hasil Akhir        \n";
cout <<"=========================\n";
cout <<"\nHasil Akhir         :"<<H<<ends;
cout <<"\nHasil Akhir         :"<<H1<<ends;
cout <<"\nHasil Akhir         :"<<H2<<ends;
getch();
}