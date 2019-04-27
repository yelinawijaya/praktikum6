#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode;
cout<<"Masukkan Kode Barang [A..C}:";
cin>>kode;
switch(kode)
{
case'A':
case'a':
cout<<"Alat Olah Raga";
break;
case 'B':
case 'b':
cout<<"Alat Elektronik";
break;
case 'C':
case 'c':
cout<<"Alat Masak:";
break;
default:
cout<<"Anda salah memasukkan kode";
break;
}
getch();
return 0;
}

