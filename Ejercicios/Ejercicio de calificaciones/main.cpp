#include <iostream.h>
#include<conio.h>

void main()
{int n, nota,ca=0,cb=0,cc=0,cd=0,ce=0,c=0,cnc=0,nb=101,na=-1;
clrscr();

cout<<"Ingresar cantidad de alumnos:";
cin>>n;

while(c<n)
{
cout<<"Ingresar nota:";
cin>>nota;

if(nota==100)
cnc=cnc+1;
 else
 if(nota<99 && nota>=90)
  ca=ca+1;
  else

 if(nota<90 && nota>=80)
  cb=cb+1;
  else
 if(nota<80 && nota>=70)
  cc=cc+1;

  else
 if(nota<70 && nota>=60)
  cd=cd+1;
  else
  ce=ce+1;
  c=c+1;

if(nota<nb)
nb=nota;
if(nota>na)
na=nota;
}

 cout<<"notas con a:"<<ca<<endl;
 cout<<"notas con b:"<<cb<<endl;
 cout<<"notas con c:"<<cc<<endl;
 cout<<"notas con d:"<<cd<<endl;
 cout<<"notas con e:"<<ce<<endl;
 cout<<"notas con 100:"<<cnc<<endl;
 cout<<"nota alta:"<<na<<endl;
 cout<<"nota baja:"<<nb;

getch();
}