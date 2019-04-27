#include <iostream.h>
#include <conio.h>
void main()
{
int bil;
clrscr();
cout<<"Masukkan bilangan: ";
cin>>bil;
switch(bil)
{
case 1:cout<<"Anda memasukkan bil.satu";
case 2:cout<<"Anda memasukkan bil.dua";
case 3:cout<<"Anda memasukkan bil.tiga";
default:cout<<"Anda memasukkan bil. selain 1,2,dan 3";
}
getch();
}
