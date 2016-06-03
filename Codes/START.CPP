#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<dos.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
class project
{
private:
char name[20],address[20],password[20],pincode[20],yn;
int no;
void loading1();
void loading2();
void loading3();
void loading4();
void loading5();
void loading6();
void loading7();
void loading8();
void loading9();
void loading10();
void loading11();
void loading12();
void loading13();
void loading14();
void loading15();
void loading16();
void loading17();
void loading18();
void loading19();
void loading();
void line();
void sinfo();
void linfo();
void sname(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10);
void saddress(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10);
void spincode(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10);
void spassword(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10);
void luserid(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10);
void lpassword(int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10);
void spage();
void lpage();
public:
void start();
}project;
void project::line()
{
for(int i=0;i<160;i++)
{
cout<<"~";
}
}
void project::loading1()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t                 \n";
cout<<"\t\t\t\t     ,*     *,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading2()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,         \n";
cout<<"\t\t\t\t     ,**         \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading3()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,*        \n";
cout<<"\t\t\t\t     ,***        \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading4()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,**       \n";
cout<<"\t\t\t\t     ,****       \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading5()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***      \n";
cout<<"\t\t\t\t     ,*****      \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading6()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,******     \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     `******     \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading7()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     `*****      \n";
cout<<"\t\t\t\t       `***      \n";
delay(25);
}
void project::loading8()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     `****       \n";
cout<<"\t\t\t\t       `**       \n";
delay(25);
}
void project::loading9()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **          \n";
cout<<"\t\t\t\t     `***        \n";
cout<<"\t\t\t\t       `*        \n";
delay(25);
}
void project::loading10()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t      *     *    \n";
cout<<"\t\t\t\t                 \n";
delay(25);
}
void project::loading11()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t           **`   \n";
cout<<"\t\t\t\t                 \n";
delay(25);
}
void project::loading12()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t          ***`   \n";
cout<<"\t\t\t\t          *`     \n";
delay(25);
}
void project::loading13()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t         ****`   \n";
cout<<"\t\t\t\t         **`     \n";
delay(25);
}
void project::loading14()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t     ,*******,   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t        *****`   \n";
cout<<"\t\t\t\t        ***`     \n";
delay(25);
}
void project::loading15()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t      *******,   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t       ******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading16()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t       ,***,     \n";
cout<<"\t\t\t\t       ******,   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading17()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t        ***,     \n";
cout<<"\t\t\t\t        ****,   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading18()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t         **,     \n";
cout<<"\t\t\t\t         ****,   \n";
cout<<"\t\t\t\t            **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading19()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t       |           |             \n";
cout<<"\t\t\t       |    _  _. _|o._  _       \n";
cout<<"\t\t\t       |___(_)(_](_]|[ )(_]....  \n";
cout<<"\t\t\t                        ._|      \n";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t                 \n";
cout<<"\t\t\t\t           **,   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     **     **   \n";
cout<<"\t\t\t\t     `*******`   \n";
cout<<"\t\t\t\t       `***`     \n";
delay(25);
}
void project::loading()
{
for(int i=0;i<5;i++)
{
loading1();
loading2();
loading3();
loading4();
loading5();
loading6();
loading7();
loading8();
loading9();
loading10();
loading11();
loading12();
loading13();
loading14();
loading15();
loading16();
loading17();
loading18();
loading19();
}
}
void project::sinfo()
{
clrscr();
cout<<"\n\n\n";
line();
cout<<"\n\n\n\t\t\t   Details Required For SignUp   \n\n\n\n";
line();
cout<<"\n\n\n\t  Enter Name : ";
gets(name);
cout<<"\n\n\n\t  Enter The Address : ";
gets(address);
cout<<"\n\n\n\t  Enter Pincode : ";
gets(pincode);
cout<<"\n\n\n\t  Enter NeW Password : ";
gets(password);
cout<<"\n\n\n";
line();
cout<<"\n\n\n\t   You Have Successfully Added Yourself In Customer Database\n\n\n\n\n";
line();
}
void project::sname(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10)
{
clrscr();
cout<<"                                                 | Main content | Accessibility|";
cout<<" Welcome TO INDIAN GOVERNMENTAL DEPARTMENT                | Options | Site Map |";
cout<<"                                             | Add to Favourite |Tell a Friend |";
cout<<"                                                       | Feedback | Contact Us |";
cout<<"  d8,                d8b    d8,                                                 ";
cout<<" `8P                 88P   `8P                                                  ";
cout<<"                    d88                      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"  88b  88bd88b  d888888     88b d888b8b     |                                  |";
cout<<"  88P  88P' ?8bd8P' ?88     88Pd8P' ?88                    SIGNUP               ";
cout<<" d88  d88   88P88b  ,88b   d88 88b  ,88b    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                                    ";
cout<<"                                            |              ,,,,,,,,,,,,,,,,,,  |";
cout<<" d888b8b   d8888b ?88   d8P   88b  88bd88b     NAME     : |";
cout<<a;
for(int i=0;i<(18-n);i++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b |              ``````````````````  |";
cout<<"88b  ,88b 88b  d88?8b ,88'   d88  d88   88P                ,,,,,,,,,,,,,,,,,,   ";
cout<<"`?88P'`88b`?8888P'`?888P' * d88' d88'   88b |  ADDRESS  : |                  | |";
cout<<"       )88                                                 ``````````````````   ";
cout<<"      ,88P      satyamev jayate             |              ,,,,,,,,,,,,,,,,,,  |";
cout<<"  `?8888P                                      PINCODE  : |                  |  ";
cout<<"                                            |              ``````````````````  |";
cout<<"                                                           ,,,,,,,,,,,,,,,,,,   ";
cout<<"                                            |  PASSWORD : |                  | |";
cout<<"  This Website includes :                                  ``````````````````   ";
cout<<"                                            |    ,,,,,,,,,,,,                  |";
cout<<"  * Aviation Department                         |   SIGNUP   |                  ";
cout<<"                                            |    ````````````                  |";
cout<<"  * Billing Department                          ALREADY HAVE AN                 ";
cout<<"                                            |   ACCOUNT                        |";
cout<<"  * Railways Department                          ,,,,,,,,,,,                    ";
cout<<"                                            |   |   LOGIN   |                  |";
cout<<"  * Tourism Department                           ```````````                    ";
cout<<"                                            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"                                                                                ";
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"|                ||                                                            |";
cout<<"   NEWS UPDATES                           ADVERTISEMENT                         ";
cout<<"|_ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
cout<<"                                                                                ";
cout<<"|"<<a1;
for(int i1=0;i1<(16-n1);i1++)
{
cout<<" ";
}
cout<<"|| KK COACHING,FOR  |  |   PARAG JAIN'S   | |    A-RUSHI'S    |";
cout<<" "<<a2;
for(int i2=0;i2<(16-n2);i2++)
{
cout<<" ";
}
cout<<"	  IIT-JEE TUTION        SHADI MUBARAK        DAYCARE  CENTER  ";
cout<<"|"<<a3;
for(int i3=0;i3<(16-n3);i3++)
{
cout<<" ";
}
cout<<"||   CENTER CLICK   |  |  CLICK HERE TO   | |  CLICK HERE TO  |";
cout<<" "<<a4;
for(int i4=0;i4<(16-n4);i4++)
{
cout<<" ";
}
cout<<"	  HERE TO JOIN NOW     BOOK YOUR MARRIAGE     FOR MORE INFO   ";
cout<<"|"<<a5;
for(int i5=0;i5<(16-n5);i5++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ |  |_ _ _ _ _ _ _ _ _ | |_ _ _ _ _ _ _ _ _|";
cout<<" "<<a6;
for(int i6=0;i6<(16-n6);i6++)
{
cout<<" ";
}
cout<<"				   			              ";
cout<<"|"<<a7;
for(int i7=0;i7<(16-n7);i7++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<" "<<a8;
for(int i8=0;i8<(16-n8);i8++)
{
cout<<" ";
}
cout<<"								      ";
cout<<"|"<<a9;
for(int i9=0;i9<(16-n9);i9++)
{
cout<<" ";
}
cout<<"||    WANT TO DONATE FOR AAMIR KHAN'S SATYAMEV JAYATE CLICK   |";
cout<<" "<<a10;
for(int i10=0;i10<(16-n10);i10++)
{
cout<<" ";
}
cout<<"         HERE FOR FURTHER INFORMATION RELATED TO DONATION      ";
cout<<"|_ _ _ _ _ _ _ _ ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
}
void project::saddress(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10)
{
clrscr();
cout<<"                                                 | Main content | Accessibility|";
cout<<" Welcome TO INDIAN GOVERNMENTAL DEPARTMENT                | Options | Site Map |";
cout<<"                                             | Add to Favourite |Tell a Friend |";
cout<<"                                                       | Feedback | Contact Us |";
cout<<"  d8,                d8b    d8,                                                 ";
cout<<" `8P                 88P   `8P                                                  ";
cout<<"                    d88                      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"  88b  88bd88b  d888888     88b d888b8b     |                                  |";
cout<<"  88P  88P' ?8bd8P' ?88     88Pd8P' ?88                    SIGNUP               ";
cout<<" d88  d88   88P88b  ,88b   d88 88b  ,88b    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                                    ";
cout<<"                                            |              ,,,,,,,,,,,,,,,,,,  |";
cout<<" d888b8b   d8888b ?88   d8P   88b  88bd88b     NAME     : |"<<name;
int m=strlen(name);
for(int j=0;j<(18-m);j++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b |              ``````````````````  |";
cout<<"88b  ,88b 88b  d88?8b ,88'   d88  d88   88P                ,,,,,,,,,,,,,,,,,,   ";
cout<<"`?88P'`88b`?8888P'`?888P' * d88' d88'   88b |  ADDRESS  : |";
cout<<a;
for(int i=0;i<(18-n);i++)
{
cout<<" ";
}
cout<<"| |";
cout<<"       )88                                                 ``````````````````   ";
cout<<"      ,88P      satyamev jayate             |              ,,,,,,,,,,,,,,,,,,  |";
cout<<"  `?8888P                                      PINCODE  : |                  |  ";
cout<<"                                            |              ``````````````````  |";
cout<<"                                                           ,,,,,,,,,,,,,,,,,,   ";
cout<<"                                            |  PASSWORD : |                  | |";
cout<<"  This Website includes :                                  ``````````````````   ";
cout<<"                                            |    ,,,,,,,,,,,,                  |";
cout<<"  * Aviation Department                         |   SIGNUP   |                  ";
cout<<"                                            |    ````````````                  |";
cout<<"  * Billing Department                          ALREADY HAVE AN                 ";
cout<<"                                            |   ACCOUNT                        |";
cout<<"  * Railways Department                          ,,,,,,,,,,,                    ";
cout<<"                                            |   |   LOGIN   |                  |";
cout<<"  * Tourism Department                           ```````````                    ";
cout<<"                                            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"                                                                                ";
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"|                ||                                                            |";
cout<<"   NEWS UPDATES                           ADVERTISEMENT                         ";
cout<<"|_ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
cout<<"                                                                                ";
cout<<"|"<<a1;
for(int i1=0;i1<(16-n1);i1++)
{
cout<<" ";
}
cout<<"|| KK COACHING,FOR  |  |   PARAG JAIN'S   | |    A-RUSHI'S    |";
cout<<" "<<a2;
for(int i2=0;i2<(16-n2);i2++)
{
cout<<" ";
}
cout<<"	  IIT-JEE TUTION        SHADI MUBARAK        DAYCARE  CENTER  ";
cout<<"|"<<a3;
for(int i3=0;i3<(16-n3);i3++)
{
cout<<" ";
}
cout<<"||   CENTER CLICK   |  |  CLICK HERE TO   | |  CLICK HERE TO  |";
cout<<" "<<a4;
for(int i4=0;i4<(16-n4);i4++)
{
cout<<" ";
}
cout<<"	  HERE TO JOIN NOW     BOOK YOUR MARRIAGE     FOR MORE INFO   ";
cout<<"|"<<a5;
for(int i5=0;i5<(16-n5);i5++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ |  |_ _ _ _ _ _ _ _ _ | |_ _ _ _ _ _ _ _ _|";
cout<<" "<<a6;
for(int i6=0;i6<(16-n6);i6++)
{
cout<<" ";
}
cout<<"				   			              ";
cout<<"|"<<a7;
for(int i7=0;i7<(16-n7);i7++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<" "<<a8;
for(int i8=0;i8<(16-n8);i8++)
{
cout<<" ";
}
cout<<"								      ";
cout<<"|"<<a9;
for(int i9=0;i9<(16-n9);i9++)
{
cout<<" ";
}
cout<<"||    WANT TO DONATE FOR AAMIR KHAN'S SATYAMEV JAYATE CLICK   |";
cout<<" "<<a10;
for(int i10=0;i10<(16-n10);i10++)
{
cout<<" ";
}
cout<<"         HERE FOR FURTHER INFORMATION RELATED TO DONATION      ";
cout<<"|_ _ _ _ _ _ _ _ ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
}
void project::spincode(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10)
{
clrscr();
cout<<"                                                 | Main content | Accessibility|";
cout<<" Welcome TO INDIAN GOVERNMENTAL DEPARTMENT                | Options | Site Map |";
cout<<"                                             | Add to Favourite |Tell a Friend |";
cout<<"                                                       | Feedback | Contact Us |";
cout<<"  d8,                d8b    d8,                                                 ";
cout<<" `8P                 88P   `8P                                                  ";
cout<<"                    d88                      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"  88b  88bd88b  d888888     88b d888b8b     |                                  |";
cout<<"  88P  88P' ?8bd8P' ?88     88Pd8P' ?88                    SIGNUP               ";
cout<<" d88  d88   88P88b  ,88b   d88 88b  ,88b    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                                    ";
cout<<"                                            |              ,,,,,,,,,,,,,,,,,,  |";
cout<<" d888b8b   d8888b ?88   d8P   88b  88bd88b     NAME     : |"<<name;
int m=strlen(name);
for(int j=0;j<(18-m);j++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b |              ``````````````````  |";
cout<<"88b  ,88b 88b  d88?8b ,88'   d88  d88   88P                ,,,,,,,,,,,,,,,,,,   ";
cout<<"`?88P'`88b`?8888P'`?888P' * d88' d88'   88b |  ADDRESS  : |"<<address;
int m1=strlen(address);
for(int j1=0;j1<(18-m1);j1++)
{
cout<<" ";
}
cout<<"| |";
cout<<"       )88                                                 ``````````````````   ";
cout<<"      ,88P      satyamev jayate             |              ,,,,,,,,,,,,,,,,,,  |";
cout<<"  `?8888P                                      PINCODE  : |";
cout<<a;
for(int i=0;i<(18-n);i++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"                                            |              ``````````````````  |";
cout<<"                                                           ,,,,,,,,,,,,,,,,,,   ";
cout<<"                                            |  PASSWORD : |                  | |";
cout<<"  This Website includes :                                  ``````````````````   ";
cout<<"                                            |    ,,,,,,,,,,,,                  |";
cout<<"  * Aviation Department                         |   SIGNUP   |                  ";
cout<<"                                            |    ````````````                  |";
cout<<"  * Billing Department                          ALREADY HAVE AN                 ";
cout<<"                                            |   ACCOUNT                        |";
cout<<"  * Railways Department                          ,,,,,,,,,,,                    ";
cout<<"                                            |   |   LOGIN   |                  |";
cout<<"  * Tourism Department                           ```````````                    ";
cout<<"                                            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"                                                                                ";
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"|                ||                                                            |";
cout<<"   NEWS UPDATES                           ADVERTISEMENT                         ";
cout<<"|_ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
cout<<"                                                                                ";
cout<<"|"<<a1;
for(int i1=0;i1<(16-n1);i1++)
{
cout<<" ";
}
cout<<"|| KK COACHING,FOR  |  |   PARAG JAIN'S   | |    A-RUSHI'S    |";
cout<<" "<<a2;
for(int i2=0;i2<(16-n2);i2++)
{
cout<<" ";
}
cout<<"	  IIT-JEE TUTION        SHADI MUBARAK        DAYCARE  CENTER  ";
cout<<"|"<<a3;
for(int i3=0;i3<(16-n3);i3++)
{
cout<<" ";
}
cout<<"||   CENTER CLICK   |  |  CLICK HERE TO   | |  CLICK HERE TO  |";
cout<<" "<<a4;
for(int i4=0;i4<(16-n4);i4++)
{
cout<<" ";
}
cout<<"	  HERE TO JOIN NOW     BOOK YOUR MARRIAGE     FOR MORE INFO   ";
cout<<"|"<<a5;
for(int i5=0;i5<(16-n5);i5++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ |  |_ _ _ _ _ _ _ _ _ | |_ _ _ _ _ _ _ _ _|";
cout<<" "<<a6;
for(int i6=0;i6<(16-n6);i6++)
{
cout<<" ";
}
cout<<"				   			              ";
cout<<"|"<<a7;
for(int i7=0;i7<(16-n7);i7++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<" "<<a8;
for(int i8=0;i8<(16-n8);i8++)
{
cout<<" ";
}
cout<<"								      ";
cout<<"|"<<a9;
for(int i9=0;i9<(16-n9);i9++)
{
cout<<" ";
}
cout<<"||    WANT TO DONATE FOR AAMIR KHAN'S SATYAMEV JAYATE CLICK   |";
cout<<" "<<a10;
for(int i10=0;i10<(16-n10);i10++)
{
cout<<" ";
}
cout<<"         HERE FOR FURTHER INFORMATION RELATED TO DONATION      ";
cout<<"|_ _ _ _ _ _ _ _ ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
}
void project::spassword(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10)
{
clrscr();
cout<<"                                                 | Main content | Accessibility|";
cout<<" Welcome TO INDIAN GOVERNMENTAL DEPARTMENT                | Options | Site Map |";
cout<<"                                             | Add to Favourite |Tell a Friend |";
cout<<"                                                       | Feedback | Contact Us |";
cout<<"  d8,                d8b    d8,                                                 ";
cout<<" `8P                 88P   `8P                                                  ";
cout<<"                    d88                      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"  88b  88bd88b  d888888     88b d888b8b     |                                  |";
cout<<"  88P  88P' ?8bd8P' ?88     88Pd8P' ?88                    SIGNUP               ";
cout<<" d88  d88   88P88b  ,88b   d88 88b  ,88b    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                                    ";
cout<<"                                            |              ,,,,,,,,,,,,,,,,,,  |";
cout<<" d888b8b   d8888b ?88   d8P   88b  88bd88b     NAME     : |"<<name;
int m=strlen(name);
for(int j=0;j<(18-m);j++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b |              ``````````````````  |";
cout<<"88b  ,88b 88b  d88?8b ,88'   d88  d88   88P                ,,,,,,,,,,,,,,,,,,   ";
cout<<"`?88P'`88b`?8888P'`?888P' * d88' d88'   88b |  ADDRESS  : |"<<address;
int m1=strlen(address);
for(int j1=0;j1<(18-m1);j1++)
{
cout<<" ";
}
cout<<"| |";
cout<<"       )88                                                 ``````````````````   ";
cout<<"      ,88P      satyamev jayate             |              ,,,,,,,,,,,,,,,,,,  |";
cout<<"  `?8888P                                      PINCODE  : |"<<pincode;
int m2=strlen(pincode);
for(int j2=0;j2<(18-m2);j2++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"                                            |              ``````````````````  |";
cout<<"                                                           ,,,,,,,,,,,,,,,,,,   ";
cout<<"                                            |  PASSWORD : |";
cout<<a;
for(int i=0;i<(18-n);i++)
{
cout<<" ";
}
cout<<"| |";
cout<<"  This Website includes :                                  ``````````````````   ";
cout<<"                                            |    ,,,,,,,,,,,,                  |";
cout<<"  * Aviation Department                         |   SIGNUP   |                  ";
cout<<"                                            |    ````````````                  |";
cout<<"  * Billing Department                          ALREADY HAVE AN                 ";
cout<<"                                            |   ACCOUNT                        |";
cout<<"  * Railways Department                          ,,,,,,,,,,,                    ";
cout<<"                                            |   |   LOGIN   |                  |";
cout<<"  * Tourism Department                           ```````````                    ";
cout<<"                                            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"                                                                                ";
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"|                ||                                                            |";
cout<<"   NEWS UPDATES                           ADVERTISEMENT                         ";
cout<<"|_ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
cout<<"                                                                                ";
cout<<"|"<<a1;
for(int i1=0;i1<(16-n1);i1++)
{
cout<<" ";
}
cout<<"|| KK COACHING,FOR  |  |   PARAG JAIN'S   | |    A-RUSHI'S    |";
cout<<" "<<a2;
for(int i2=0;i2<(16-n2);i2++)
{
cout<<" ";
}
cout<<"	  IIT-JEE TUTION        SHADI MUBARAK        DAYCARE  CENTER  ";
cout<<"|"<<a3;
for(int i3=0;i3<(16-n3);i3++)
{
cout<<" ";
}
cout<<"||   CENTER CLICK   |  |  CLICK HERE TO   | |  CLICK HERE TO  |";
cout<<" "<<a4;
for(int i4=0;i4<(16-n4);i4++)
{
cout<<" ";
}
cout<<"	  HERE TO JOIN NOW     BOOK YOUR MARRIAGE     FOR MORE INFO   ";
cout<<"|"<<a5;
for(int i5=0;i5<(16-n5);i5++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ |  |_ _ _ _ _ _ _ _ _ | |_ _ _ _ _ _ _ _ _|";
cout<<" "<<a6;
for(int i6=0;i6<(16-n6);i6++)
{
cout<<" ";
}
cout<<"				   			              ";
cout<<"|"<<a7;
for(int i7=0;i7<(16-n7);i7++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<" "<<a8;
for(int i8=0;i8<(16-n8);i8++)
{
cout<<" ";
}
cout<<"								      ";
cout<<"|"<<a9;
for(int i9=0;i9<(16-n9);i9++)
{
cout<<" ";
}
cout<<"||    WANT TO DONATE FOR AAMIR KHAN'S SATYAMEV JAYATE CLICK   |";
cout<<" "<<a10;
for(int i10=0;i10<(16-n10);i10++)
{
cout<<" ";
}
cout<<"         HERE FOR FURTHER INFORMATION RELATED TO DONATION      ";
cout<<"|_ _ _ _ _ _ _ _ ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
}
void project::spage()
{
char x[25],x1[25],x2[25],x3[25];
sinfo();
ofstream f;
ifstream f1;
f.open("sname.txt");
f<<name;
f.close();
int a=strlen(name);
if(a>=1)
{
f1.open("sname.txt");
f1.getline(x,2);
sname(x,1,"> Democracy can-",16,"not be allowed",16,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
f1.close();
if(a>=2)
{
f1.open("sname.txt");
f1.getline(x,3);
sname(x,2,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7);
delay(500);
f1.close();
if(a>=3)
{
f1.open("sname.txt");
f1.getline(x,4);
sname(x,3,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16);
f1.close();
delay(500);
if(a>=4)
{
f1.open("sname.txt");
f1.getline(x,5);
sname(x,4,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13);
f1.close();
delay(500);
if(a>=5)
{
f1.open("sname.txt");
f1.getline(x,6);
sname(x,5,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15);
f1.close();
delay(500);
if(a>=6)
{
f1.open("sname.txt");
f1.getline(x,7);
sname(x,6,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13);
f1.close();
delay(500);
if(a>=7)
{
f1.open("sname.txt");
f1.getline(x,8);
sname(x,7,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12);
f1.close();
delay(500);
if(a>=8)
{
f1.open("sname.txt");
f1.getline(x,9);
sname(x,8,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14);
f1.close();
delay(500);
if(a>=9)
{
f1.open("sname.txt");
f1.getline(x,10);
sname(x,9,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15);
f1.close();
delay(500);
if(a>=10)
{
f1.open("sname.txt");
f1.getline(x,11);
sname(x,10,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15);
f1.close();
delay(500);
if(a>=11)
{
f1.open("sname.txt");
f1.getline(x,12);
sname(x,11,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7);
f1.close();
delay(500);
if(a>=12)
{
f1.open("sname.txt");
f1.getline(x,13);
sname(x,12,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12);
f1.close();
delay(500);
if(a>=13)
{
f1.open("sname.txt");
f1.getline(x,14);
sname(x,13,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13);
f1.close();
delay(500);
if(a>=14)
{
f1.open("sname.txt");
f1.getline(x,15);
sname(x,14,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15);
f1.close();
delay(500);
if(a>=15)
{
f1.open("sname.txt");
f1.getline(x,16);
sname(x,15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15);
f1.close();
delay(500);
if(a>=16)
{
f1.open("sname.txt");
f1.getline(x,17);
sname(x,16,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12);
f1.close();
delay(500);
if(a>=17)
{
f1.open("sname.txt");
f1.getline(x,18);
sname(x,17,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12,"Prez Patil",10);
f1.close();
delay(500);
if(a>=18)
{
f1.open("sname.txt");
f1.getline(x,19);
sname(x,18,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
f1.close();
delay(500);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
ofstream f2;
ifstream f3;
f2.open("saddress.txt");
f2<<address;
f2.close();
int a1=strlen(address);
if(a1>=1)
{
f3.open("saddress.txt");
f3.getline(x1,2);
saddress(x1,1,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
f3.close();
if(a1>=2)
{
f3.open("saddress.txt");
f3.getline(x1,3);
saddress(x1,2,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7);
delay(500);
f3.close();
if(a>=3)
{
f3.open("saddress.txt");
f3.getline(x1,4);
saddress(x1,3,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16);
f3.close();
delay(500);
if(a1>=4)
{
f3.open("saddress.txt");
f3.getline(x1,5);
saddress(x1,4,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13);
f3.close();
delay(500);
if(a1>=5)
{
f3.open("saddress.txt");
f3.getline(x1,6);
saddress(x1,5,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15);
f3.close();
delay(500);
if(a1>=6)
{
f3.open("saddress.txt");
f3.getline(x1,7);
saddress(x1,6,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13);
f3.close();
delay(500);
if(a1>=7)
{
f3.open("saddress.txt");
f3.getline(x1,8);
saddress(x1,7,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12);
f3.close();
delay(500);
if(a1>=8)
{
f3.open("saddress.txt");
f3.getline(x1,9);
saddress(x1,8,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14);
f3.close();
delay(500);
if(a1>=9)
{
f3.open("saddress.txt");
f3.getline(x1,10);
saddress(x1,9,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15);
f3.close();
delay(500);
if(a1>=10)
{
f3.open("saddress.txt");
f3.getline(x1,11);
saddress(x1,10,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15);
f3.close();
delay(500);
if(a1>=11)
{
f3.open("saddress.txt");
f3.getline(x1,12);
saddress(x1,11,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7);
f3.close();
delay(500);
if(a1>=12)
{
f3.open("saddress.txt");
f3.getline(x1,13);
saddress(x1,12,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12);
f3.close();
delay(500);
if(a1>=13)
{
f3.open("saddress.txt");
f3.getline(x1,14);
saddress(x1,13,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13);
f3.close();
delay(500);
if(a1>=14)
{
f3.open("saddress.txt");
f3.getline(x1,15);
saddress(x1,14,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15);
f3.close();
delay(500);
if(a1>=15)
{
f3.open("saddress.txt");
f3.getline(x1,16);
saddress(x1,15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15);
f3.close();
delay(500);
if(a1>=16)
{
f3.open("saddress.txt");
f3.getline(x1,17);
saddress(x1,16,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12);
f3.close();
delay(500);
if(a1>=17)
{
f3.open("saddress.txt");
f3.getline(x1,18);
saddress(x1,17,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12,"Prez Patil",10);
f3.close();
delay(500);
if(a1>=18)
{
f3.open("saddress.txt");
f3.getline(x1,19);
saddress(x1,18,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
f3.close();
delay(500);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
ofstream f4;
ifstream f5;
f4.open("spincode.txt");
f4<<pincode;
f4.close();
int a2=strlen(pincode);
if(a2>=1)
{
f5.open("spincode.txt");
f5.getline(x2,2);
spincode(x2,1,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
f5.close();
if(a2>=2)
{
f5.open("spincode.txt");
f5.getline(x2,3);
spincode(x2,2,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7);
delay(500);
f5.close();
if(a2>=3)
{
f5.open("spincode.txt");
f5.getline(x2,4);
spincode(x2,3,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16);
f5.close();
delay(500);
if(a2>=4)
{
f5.open("spincode.txt");
f5.getline(x2,5);
spincode(x2,4,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13);
f5.close();
delay(500);
if(a2>=5)
{
f5.open("spincode.txt");
f5.getline(x2,6);
spincode(x2,5,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15);
f5.close();
delay(500);
if(a2>=6)
{
f5.open("spincode.txt");
f5.getline(x2,7);
spincode(x2,6,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13);
f5.close();
delay(500);
if(a2>=7)
{
f5.open("spincode.txt");
f5.getline(x2,8);
spincode(x2,7,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12);
f5.close();
delay(500);
if(a2>=8)
{
f5.open("spincode.txt");
f5.getline(x2,9);
spincode(x2,8,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14);
f5.close();
delay(500);
if(a2>=9)
{
f5.open("spincode.txt");
f5.getline(x2,10);
spincode(x2,9,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15);
f5.close();
delay(500);
if(a2>=10)
{
f5.open("spincode.txt");
f5.getline(x2,11);
spincode(x2,10,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15);
f5.close();
delay(500);
if(a2>=11)
{
f5.open("spincode.txt");
f5.getline(x2,12);
spincode(x2,11,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7);
f5.close();
delay(500);
if(a2>=12)
{
f5.open("spincode.txt");
f5.getline(x2,13);
spincode(x2,12,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12);
f5.close();
delay(500);
if(a2>=13)
{
f5.open("spincode.txt");
f5.getline(x2,14);
spincode(x2,13,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13);
f5.close();
delay(500);
if(a2>=14)
{
f5.open("spincode.txt");
f5.getline(x2,15);
spincode(x2,14,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15);
f5.close();
delay(500);
if(a2>=15)
{
f5.open("spincode.txt");
f5.getline(x2,16);
spincode(x2,15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15);
f5.close();
delay(500);
if(a2>=16)
{
f5.open("spincode.txt");
f5.getline(x2,17);
spincode(x2,16,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12);
f5.close();
delay(500);
if(a2>=17)
{
f5.open("spincode.txt");
f5.getline(x2,18);
spincode(x2,17,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12,"Prez Patil",10);
f5.close();
delay(500);
if(a2>=18)
{
f5.open("spincode.txt");
f5.getline(x2,19);
spincode(x2,18,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
f5.close();
delay(500);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
ofstream f6;
ifstream f7;
f6.open("spassword.txt");
f6<<password;
f6.close();
int a3=strlen(password);
if(a3>=1)
{
f7.open("spassword.txt");
f7.getline(x3,2);
spassword(x3,1,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
f7.close();
if(a3>=2)
{
f7.open("spassword.txt");
f7.getline(x3,3);
spassword(x3,2,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7);
delay(500);
f7.close();
if(a3>=3)
{
f7.open("spassword.txt");
f7.getline(x3,4);
spassword(x3,3,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16);
f7.close();
delay(500);
if(a3>=4)
{
f7.open("spassword.txt");
f7.getline(x3,5);
spassword(x3,4,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13);
f7.close();
delay(500);
if(a3>=5)
{
f7.open("spassword.txt");
f7.getline(x3,6);
spassword(x3,5,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15);
f7.close();
delay(500);
if(a3>=6)
{
f7.open("spassword.txt");
f7.getline(x3,7);
spassword(x3,6,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13);
f7.close();
delay(500);
if(a3>=7)
{
f7.open("spassword.txt");
f7.getline(x3,8);
spassword(x3,7,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12);
f7.close();
delay(500);
if(a3>=8)
{
f7.open("spassword.txt");
f7.getline(x3,9);
spassword(x3,8,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14);
f7.close();
delay(500);
if(a3>=9)
{
f7.open("spassword.txt");
f7.getline(x3,10);
spassword(x3,9,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15);
f7.close();
delay(500);
if(a3>=10)
{
f7.open("spassword.txt");
f7.getline(x3,11);
spassword(x3,10,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15);
f7.close();
delay(500);
if(a3>=11)
{
f7.open("spassword.txt");
f7.getline(x3,12);
spassword(x3,11,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7);
f7.close();
delay(500);
if(a3>=12)
{
f7.open("spassword.txt");
f7.getline(x3,13);
spassword(x3,12,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12);
f7.close();
delay(500);
if(a3>=13)
{
f7.open("spassword.txt");
f7.getline(x3,14);
spassword(x3,13,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13);
f7.close();
delay(500);
if(a3>=14)
{
f7.open("spassword.txt");
f7.getline(x3,15);
spassword(x3,14,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15);
f7.close();
delay(500);
if(a3>=15)
{
f7.open("spassword.txt");
f7.getline(x3,16);
spassword(x3,15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15);
f7.close();
delay(500);
if(a3>=16)
{
f7.open("spassword.txt");
f7.getline(x3,17);
spassword(x3,16,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12);
f7.close();
delay(500);
if(a3>=17)
{
f7.open("spassword.txt");
f7.getline(x3,18);
spassword(x3,17,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12,"Prez Patil",10);
f7.close();
delay(500);
if(a3>=18)
{
f7.open("spassword.txt");
f7.getline(x3,19);
spassword(x3,18,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
f7.close();
delay(500);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
void project::linfo()
{
clrscr();
cout<<"\n\n\n";
line();
cout<<"\n\n\n\t\t\t   Details Required For SignIn   \n\n\n\n";
line();
cout<<"\n\n\n\t  Enter Name : ";
gets(name);
cout<<"\n\n\n\t  Enter Password : ";
gets(password);
cout<<"\n\n\n";
line();
cout<<"\n\n\n\t   You Have Successfully Added Yourself In Customer Database\n\n\n\n\n";
line();
}
void project::luserid(char a[],int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10)
{
clrscr();
cout<<"                                                 | Main content | Accessibility|";
cout<<" Welcome TO INDIAN GOVERNMENTAL DEPARTMENT                | Options | Site Map |";
cout<<"                                             | Add to Favourite |Tell a Friend |";
cout<<"                                                       | Feedback | Contact Us |";
cout<<"  d8,                d8b    d8,                                                 ";
cout<<" `8P                 88P   `8P                                                  ";
cout<<"                    d88                      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"  88b  88bd88b  d888888     88b d888b8b     |                                  |";
cout<<"  88P  88P' ?8bd8P' ?88     88Pd8P' ?88                    LOGIN                ";
cout<<" d88  d88   88P88b  ,88b   d88 88b  ,88b    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                                    ";
cout<<"                                            |              ,,,,,,,,,,,,,,,,,,  |";
cout<<" d888b8b   d8888b ?88   d8P   88b  88bd88b     USER ID  : |";
cout<<a;
for(int i=0;i<(18-n);i++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b |              ``````````````````  |";
cout<<"88b  ,88b 88b  d88?8b ,88'   d88  d88   88P       []  Keep me logged in         ";
cout<<"`?88P'`88b`?8888P'`?888P' * d88' d88'   88b |              ,,,,,,,,,,,,,,,,,,  |";
cout<<"       )88                                     PASSWORD : |                  |  ";
cout<<"      ,88P      satyamev jayate             |              ``````````````````  |";
cout<<"  `?8888P                                         Forgot your password ?        ";
cout<<"                                            |                                  |";
cout<<"                                                  ,,,,,,,,,,,                   ";
cout<<"                                            |    |   LOGIN   |                 |";
cout<<"  This Website includes :                         ```````````                   ";
cout<<"                                            |                                  |";
cout<<"  * Aviation Department                          Haven't Logged In Yet          ";
cout<<"                                            |                                  |";
cout<<"  * Billing Department                           Create An Acount CLICK SIGNUP  ";
cout<<"                                            |                                  |";
cout<<"  * Railways Department                          ,,,,,,,,,,,,                   ";
cout<<"                                            |   |   SIGNUP   |                 |";
cout<<"  * Tourism Department                           ````````````                   ";
cout<<"                                            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"                                                                                ";
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"|                ||                                                            |";
cout<<"   NEWS UPDATES                           ADVERTISEMENT                         ";
cout<<"|_ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
cout<<"                                                                                ";
cout<<"|"<<a1;
for(int i1=0;i1<(16-n1);i1++)
{
cout<<" ";
}
cout<<"|| KK COACHING,FOR  |  |   PARAG JAIN'S   | |    A-RUSHI'S    |";
cout<<" "<<a2;
for(int i2=0;i2<(16-n2);i2++)
{
cout<<" ";
}
cout<<"	  IIT-JEE TUTION        SHADI MUBARAK        DAYCARE  CENTER  ";
cout<<"|"<<a3;
for(int i3=0;i3<(16-n3);i3++)
{
cout<<" ";
}
cout<<"||   CENTER CLICK   |  |  CLICK HERE TO   | |  CLICK HERE TO  |";
cout<<" "<<a4;
for(int i4=0;i4<(16-n4);i4++)
{
cout<<" ";
}
cout<<"	  HERE TO JOIN NOW     BOOK YOUR MARRIAGE     FOR MORE INFO   ";
cout<<"|"<<a5;
for(int i5=0;i5<(16-n5);i5++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ |  |_ _ _ _ _ _ _ _ _ | |_ _ _ _ _ _ _ _ _|";
cout<<" "<<a6;
for(int i6=0;i6<(16-n6);i6++)
{
cout<<" ";
}
cout<<"				   			              ";
cout<<"|"<<a7;
for(int i7=0;i7<(16-n7);i7++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<" "<<a8;
for(int i8=0;i8<(16-n8);i8++)
{
cout<<" ";
}
cout<<"								      ";
cout<<"|"<<a9;
for(int i9=0;i9<(16-n9);i9++)
{
cout<<" ";
}
cout<<"||    WANT TO DONATE FOR AAMIR KHAN'S SATYAMEV JAYATE CLICK   |";
cout<<" "<<a10;
for(int i10=0;i10<(16-n10);i10++)
{
cout<<" ";
}
cout<<"         HERE FOR FURTHER INFORMATION RELATED TO DONATION      ";
cout<<"|_ _ _ _ _ _ _ _ ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
}
void project::lpassword(int n,char a1[],int n1,char a2[],int n2,char a3[],int n3,char a4[],int n4,char a5[],int n5,char a6[],int n6,char a7[],int n7,char a8[],int n8,char a9[],int n9,char a10[],int n10)
{
clrscr();
cout<<"                                                 | Main content | Accessibility|";
cout<<" Welcome TO INDIAN GOVERNMENTAL DEPARTMENT                | Options | Site Map |";
cout<<"                                             | Add to Favourite |Tell a Friend |";
cout<<"                                                       | Feedback | Contact Us |";
cout<<"  d8,                d8b    d8,                                                 ";
cout<<" `8P                 88P   `8P                                                  ";
cout<<"                    d88                      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"  88b  88bd88b  d888888     88b d888b8b     |                                  |";
cout<<"  88P  88P' ?8bd8P' ?88     88Pd8P' ?88                    LOGIN                ";
cout<<" d88  d88   88P88b  ,88b   d88 88b  ,88b    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                                    ";
cout<<"                                            |              ,,,,,,,,,,,,,,,,,,  |";
cout<<" d888b8b   d8888b ?88   d8P   88b  88bd88b     USER ID  : |";
cout<<name<<"@bvn.com";
int m=strlen(name);
int m1=(m+8);
for(int j=0;j<(18-m1);j++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b |              ``````````````````  |";
cout<<"88b  ,88b 88b  d88?8b ,88'   d88  d88   88P       []  Keep me logged in         ";
cout<<"`?88P'`88b`?8888P'`?888P' * d88' d88'   88b |              ,,,,,,,,,,,,,,,,,,  |";
cout<<"       )88                                     PASSWORD : |";
for(int i=0;i<n;i++)
{
cout<<"*";
}
for(int j1=0;j1<(18-n);j1++)
{
cout<<" ";
}
cout<<"|  ";
cout<<"      ,88P      satyamev jayate             |              ``````````````````  |";
cout<<"  `?8888P                                         Forgot your password ?        ";
cout<<"                                            |                                  |";
cout<<"                                                  ,,,,,,,,,,,                   ";
cout<<"                                            |    |   LOGIN   |                 |";
cout<<"  This Website includes :                         ```````````                   ";
cout<<"                                            |                                  |";
cout<<"  * Aviation Department                          Haven't Logged In Yet          ";
cout<<"                                            |                                  |";
cout<<"  * Billing Department                           Create An Acount CLICK SIGNUP  ";
cout<<"                                            |                                  |";
cout<<"  * Railways Department                          ,,,,,,,,,,,,                   ";
cout<<"                                            |   |   SIGNUP   |                 |";
cout<<"  * Tourism Department                           ````````````                   ";
cout<<"                                            |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<"                                                                                ";
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
cout<<"|                ||                                                            |";
cout<<"   NEWS UPDATES                           ADVERTISEMENT                         ";
cout<<"|_ _ _ _ _ _ _ _ || _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|";
cout<<"                                                                                ";
cout<<"|"<<a1;
for(int i1=0;i1<(16-n1);i1++)
{
cout<<" ";
}
cout<<"|| KK COACHING,FOR  |  |   PARAG JAIN'S   | |    A-RUSHI'S    |";
cout<<" "<<a2;
for(int i2=0;i2<(16-n2);i2++)
{
cout<<" ";
}
cout<<"	  IIT-JEE TUTION        SHADI MUBARAK        DAYCARE  CENTER  ";
cout<<"|"<<a3;
for(int i3=0;i3<(16-n3);i3++)
{
cout<<" ";
}
cout<<"||   CENTER CLICK   |  |  CLICK HERE TO   | |  CLICK HERE TO  |";
cout<<" "<<a4;
for(int i4=0;i4<(16-n4);i4++)
{
cout<<" ";
}
cout<<"	  HERE TO JOIN NOW     BOOK YOUR MARRIAGE     FOR MORE INFO   ";
cout<<"|"<<a5;
for(int i5=0;i5<(16-n5);i5++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ |  |_ _ _ _ _ _ _ _ _ | |_ _ _ _ _ _ _ _ _|";
cout<<" "<<a6;
for(int i6=0;i6<(16-n6);i6++)
{
cout<<" ";
}
cout<<"				   			              ";
cout<<"|"<<a7;
for(int i7=0;i7<(16-n7);i7++)
{
cout<<" ";
}
cout<<"||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
cout<<" "<<a8;
for(int i8=0;i8<(16-n8);i8++)
{
cout<<" ";
}
cout<<"								      ";
cout<<"|"<<a9;
for(int i9=0;i9<(16-n9);i9++)
{
cout<<" ";
}
cout<<"||    WANT TO DONATE FOR AAMIR KHAN'S SATYAMEV JAYATE CLICK   |";
cout<<" "<<a10;
for(int i10=0;i10<(16-n10);i10++)
{
cout<<" ";
}
cout<<"         HERE FOR FURTHER INFORMATION RELATED TO DONATION      ";
cout<<"|_ _ _ _ _ _ _ _ ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |";
}
void project::lpage()
{
char x[25];
linfo();
ofstream f;
ifstream f1;
f.open("lname.txt");
f<<name;
f<<"@bvn.com";
f.close();
int b=strlen(name);
int a=(8+b);
if(a>=1)
{
f1.open("lname.txt");
f1.getline(x,2);
luserid(x,1,"> Democracy can-",16,"not be allowed",16,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
f1.close();
if(a>=2)
{
f1.open("lname.txt");
f1.getline(x,3);
luserid(x,2,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7);
delay(500);
f1.close();
if(a>=3)
{
f1.open("lname.txt");
f1.getline(x,4);
luserid(x,3,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16);
f1.close();
delay(500);
if(a>=4)
{
f1.open("lname.txt");
f1.getline(x,5);
luserid(x,4,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13);
f1.close();
delay(500);
if(a>=5)
{
f1.open("lname.txt");
f1.getline(x,6);
luserid(x,5,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15);
f1.close();
delay(500);
if(a>=6)
{
f1.open("lname.txt");
f1.getline(x,7);
luserid(x,6,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13);
f1.close();
delay(500);
if(a>=7)
{
f1.open("lname.txt");
f1.getline(x,8);
luserid(x,7,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12);
f1.close();
delay(500);
if(a>=8)
{
f1.open("lname.txt");
f1.getline(x,9);
luserid(x,8,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14);
f1.close();
delay(500);
if(a>=9)
{
f1.open("lname.txt");
f1.getline(x,10);
luserid(x,9,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15);
f1.close();
delay(500);
if(a>=10)
{
f1.open("lname.txt");
f1.getline(x,11);
luserid(x,10,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15);
f1.close();
delay(500);
if(a>=11)
{
f1.open("lname.txt");
f1.getline(x,12);
luserid(x,11,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7);
f1.close();
delay(500);
if(a>=12)
{
f1.open("lname.txt");
f1.getline(x,13);
luserid(x,12,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12);
f1.close();
delay(500);
if(a>=13)
{
f1.open("lname.txt");
f1.getline(x,14);
luserid(x,13,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13);
f1.close();
delay(500);
if(a>=14)
{
f1.open("lname.txt");
f1.getline(x,15);
luserid(x,14,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15);
f1.close();
delay(500);
if(a>=15)
{
f1.open("lname.txt");
f1.getline(x,16);
luserid(x,15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15);
f1.close();
delay(500);
if(a>=16)
{
f1.open("lname.txt");
f1.getline(x,17);
luserid(x,16,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12);
f1.close();
delay(500);
if(a>=17)
{
f1.open("lname.txt");
f1.getline(x,18);
luserid(x,17,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12,"Prez Patil",10);
f1.close();
delay(500);
if(a>=18)
{
f1.open("lname.txt");
f1.getline(x,19);
luserid(x,18,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
f1.close();
delay(500);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
int m2=strlen(password);
if(m2>=1)
{
lpassword(1,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
if(m2>=2)
{
lpassword(2,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7);
delay(500);
if(m2>=3)
{
lpassword(3,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16);
delay(500);
if(m2>=4)
{
lpassword(4,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13);
delay(500);
if(m2>=5)
{
lpassword(5,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15);
delay(500);
if(m2>=6)
{
lpassword(6,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13);
delay(500);
if(m2>=7)
{
lpassword(7,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12);
delay(500);
if(m2>=8)
{
lpassword(8,"functioning : PM",16,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14);
delay(500);
if(m2>=9)
{
lpassword(9,"> Parliament",12,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15);
delay(500);
if(m2>=10)
{
lpassword(10,"independence",12,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15);
delay(500);
if(m2>=11)
{
lpassword(11,"must be",7,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7);
delay(500);
if(m2>=12)
{
lpassword(12,"preserved: sonia",16,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12);
delay(500);
if(m2>=13)
{
lpassword(13,"> Yeddu calls",13,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13);
delay(500);
if(m2>=14)
{
lpassword(14,"Gowda betrayer,",15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15);
delay(500);
if(m2>=15)
{
lpassword(15,"praises Sonia",13,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15);
delay(500);
if(m2>=16)
{
lpassword(16,"and Congress",12,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12);
delay(500);
if(m2>=17)
{
lpassword(17,"> Supremacy of",14,"Parliament must",15,"be preserved : ",15,"Leaders",7,"> Proceeding",12,"towards being",13,"vibrant,healthy",15,"democracy a big",15,"challenge : ",12,"Prez Patil",10);
delay(500);
if(m2>=18)
{
lpassword(18,"> Democracy can-",16,"not be allowed ",15,"to a falter :",13,"President",9,"> Disruptions",13,"lead to question",16,"on Parliament's",15,"functioning : PM",16,"> Parliament",12,"independence",12);
delay(500);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
void project::start()
{
clrscr();
cout<<"\n";
line();
cout<<"\n\n";
cout<<"                   WELCOME TO INDIAN GOVERNMENTAL DEPARTMENT :                  ";
cout<<"\n\n\n";
line();
cout<<"\n\n";
cout<<"                     d8,                d8b    d8,                              ";
cout<<"                    `8P                 88P   `8P                               ";
cout<<"                                       d88                                      ";
cout<<"                     88b  88bd88b  d888888     88b d888b8b                      ";
cout<<"                     88P  88P' ?8bd8P' ?88     88Pd8P' ?88                      ";
cout<<"                    d88  d88   88P88b  ,88b   d88 88b  ,88b                     ";
cout<<"                   d88' d88'   88b`?88P'`88b d88' `?88P'`88b  *                 ";
cout<<"\n";
cout<<"                    d888b8b   d8888b ?88   d8P   88b  88bd88b                   ";
cout<<"                   d8P' ?88  d8P' ?88d88  d8P'   88P  88P' ?8b                  ";
cout<<"                   88b  ,88b 88b  d88?8b ,88'   d88  d88   88P                  ";
cout<<"                   `?88P'`88b`?8888P'`?888P' * d88' d88'   88b                  ";
cout<<"                          )88                                                   ";
cout<<"                         ,88P      satyamev jayate                              ";
cout<<"                     `?8888P                                                    ";
cout<<"\n\n\n\n\n";
cout<<"                    1 : If YOU ARE AN EXSISTING MEMBER : LOGIN                ";
cout<<"\n\n\n";
cout<<"                    2 : If YOU ARE A NEW MEMBER        : SIGNUP               ";
cout<<"\n\n\n";
cout<<"                    3 :           EXIT THE WEBSITE                                     ";
cout<<"\n\n\n";
cout<<"                        ENTER THE NUMBER OF YOUR CHOICE : ";
cin>>no;
if(no==1)
{
lpage();
cout<<"\t\t\t\t\t   PRESS ENTER ";
getch();
loading();
}
else if(no==2)
{
spage();
cout<<"\t\t\t\t\t   PRESS ENTER ";
getch();
loading();
}
else if(no==3)
{
cout<<"\n\n";
cout<<"   Are You Sure You Want To Leave The Website (Enter Y/y : Yes & N/n : No) : ";
cin>>yn;
if(yn=='y'||yn=='Y')
{
cout<<"\n\n                              Press Any Key To Exit ";
}
else if(yn=='n'||yn=='N')
{
start();
}
else
{
cout<<"\n\n\t            -X- ERROR -X- ERROR -X- ERROR  -X- ERROR-X-";
getch();
}
}
else
{
cout<<"\n\n\t            -X- ERROR -X- ERROR -X- ERROR  -X- ERROR-X-";
getch();
}
}
void main()
{
project.start();
}
