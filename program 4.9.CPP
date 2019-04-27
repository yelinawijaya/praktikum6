#include <conio.h>
#include <iosttream.h>

main(){
int op1,op2,pilih;
float Hasil;
cout<<"Operator 1: ";
cin>>op1;
cout<<"Operator 2: ";
cin>>op2;
cout<<"1. Operator +\n";
cout<<"2. Operator -\n";
cout<<"3. Operator *\n";
cout<<"4. Operator /\n";
cout<<"Pilih Operator : ";
cin>>pilih;
switch(pilih){
case 1 : {Hasil = op1 + op2;break}
case 2 : {Hasil = op1 - op2;break}
case 3 : {Hasil = op1 * op2;break}
case 4 : {if (Op2 != 0)}
cout<<op1/op2;
else

cout<<"error";
break;}
}
cout<<"Hasil dari perhitungan tersebut adalah "<<Hasil;
getch();
return 0;
}
