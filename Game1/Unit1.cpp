//---------------------------------------------------------------------------
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

int a=0, b=0, c=1, d=0, e=0, j=4, p=0;    // 300 maksymalnie

TForm1 *Form1;

void losowa()
{
        if(c>=b)
        {
        a= random(100)-50;
        if(e>0) a= -(abs(a));
        else if(a<0) a=abs(a);
        if(Form1->Tor1->Left<=40) a=100;
        else if(Form1->Tor1->Left>=440) a=-100;
        b=abs(a);
        c=0;
        if(a>0) e=1;
        else e=-1;
        }
}

void losowa2()
{
      d=random(300);
}



     int predokosc_samochodu=10;

     void Tor_przod()
     {


      if(Form1->Tor1->Left<=20) a=100;
      else if(Form1->Tor1->Left>=460) a=-100;

     Form1->Tor0->Top +=10;
     if(Form1->Tor0->Top>=900)
     {
     Form1->Tor0->Top=-150;
     Form1->Tor0->Left=Form1->Tor1->Left;
     }




     Form1->Tor1->Top +=10;
     if(Form1->Tor1->Top>=900)
     {
     Form1->Tor1->Top=-150;
     //Form1->Tor1->Left+=przesuwanie();
     c++;
     if(a>0) Form1->Tor1->Left=Form1->Tor2->Left+j;
     else if(a<0)  Form1->Tor1->Left=Form1->Tor2->Left-j;
     else  Form1->Tor1->Left=Form1->Tor2->Left;
     }




     Form1->Tor2->Top +=10;
     if(Form1->Tor2->Top>=900)
     {
     Form1->Tor2->Top=-150;
     //Form1->Tor2->Left+=przesuwanie();
     c++;
          if(a>0) Form1->Tor2->Left=Form1->Tor3->Left+j;
     else if(a<0)  Form1->Tor2->Left=Form1->Tor3->Left-j;
     else  Form1->Tor2->Left=Form1->Tor3->Left;
     }




     Form1->Tor3->Top +=10;
     if(Form1->Tor3->Top>=900)
     {
     Form1->Tor3->Top=-150;
     //Form1->Tor3->Left+=przesuwanie();
     c++;
          if(a>0) Form1->Tor3->Left=Form1->Tor4->Left+j;
     else if(a<0)  Form1->Tor3->Left=Form1->Tor4->Left-j;
     else  Form1->Tor3->Left=Form1->Tor4->Left;
     if(d%5==0||d%5==1) Form1->P1->Left=Form1->Tor3->Left+160;
     if(d%5==2) Form1->P1->Left=Form1->Tor3->Left+90;
     if(d%5==3||d%5==4) Form1->P1->Left=Form1->Tor3->Left+20;
     if(p<250) Form1->P1->Visible=false;
      else Form1->P1->Visible=true;

     }
      Form1->P1->Top=Form1->Tor3->Top+50;






     Form1->Tor4->Top +=10;
     if(Form1->Tor4->Top>=900)
     {
     Form1->Tor4->Top=-150;
     //Form1->Tor4->Left+=przesuwanie();
     c++;
          if(a>0) Form1->Tor4->Left=Form1->Tor5->Left+j;
     else if(a<0)  Form1->Tor4->Left=Form1->Tor5->Left-j;
     else  Form1->Tor4->Left=Form1->Tor5->Left;
     }
     Form1->Tor5->Top +=10;
     if(Form1->Tor5->Top>=900)
     {
     Form1->Tor5->Top=-150;
     //Form1->Tor5->Left+=przesuwanie();
     c++;
          if(a>0) Form1->Tor5->Left=Form1->Tor6->Left+j;
     else if(a<0)  Form1->Tor5->Left=Form1->Tor6->Left-j;
     else  Form1->Tor5->Left=Form1->Tor6->Left;
     }
     Form1->Tor6->Top +=10;
     if(Form1->Tor6->Top>=900)
     {
     Form1->Tor6->Top=-150;
     //Form1->Tor6->Left+=przesuwanie();
     c++;
          if(a>0) Form1->Tor6->Left=Form1->Tor7->Left+j;
     else if(a<0)  Form1->Tor6->Left=Form1->Tor7->Left-j;
     else  Form1->Tor6->Left=Form1->Tor7->Left;
     }



     Form1->Tor7->Top +=10;
     if(Form1->Tor7->Top>=900)
     {
     Form1->Tor7->Top=-150;
     //Form1->Tor7->Left+=przesuwanie();
     c++;
          if(a>0) Form1->Tor7->Left=Form1->Tor1->Left+j;
     else if(a<0)  Form1->Tor7->Left=Form1->Tor1->Left-j;
     else  Form1->Tor7->Left=Form1->Tor1->Left;
     if(d%5==0||d%5==1) Form1->P2->Left=Form1->Tor7->Left+160;
     if(d%5==2) Form1->P2->Left=Form1->Tor7->Left+90;
     if(d%5==3||d%5==4) Form1->P2->Left=Form1->Tor7->Left+20;
     if(p<550) Form1->P2->Visible=false;
     else Form1->P2->Visible=true;
     }
      Form1->P2->Top=Form1->Tor7->Top+50;

     if(c>=b)
     {
        losowa();
     }
     }

     void Trudnosc()
     {
     if(p<250) Form1->Timer1->Interval=20;
     else if(p<350) Form1->Timer1->Interval=18;
     else if(p<500) Form1->Timer1->Interval=17;
     else if(p<650) Form1->Timer1->Interval=16;
     else if(p<900) Form1->Timer1->Interval=15;
     else if(p<1800) Form1->Timer1->Interval=14;
     else if(p<2500) Form1->Timer1->Interval=10;
     else if(p<4000) Form1->Timer1->Interval=7;
     else if(p<6000) Form1->Timer1->Interval=5;
     else if(p<7000) Form1->Timer1->Interval=3;
     else if(p<8000) Form1->Timer1->Interval=2;
     else if(p<9000) Form1->Timer1->Interval=1;

     }

     void lose()
     {
         Form1->Timer1->Enabled=false;
         Form1->Timer2->Enabled=false;
         Form1->Lewo->Enabled=false;
         Form1->Prawo->Enabled=false;


        int i = p/10;
        char text[128];
        sprintf(text, "Gratualcje, Tw�j Wynik to: %d", i);
        MessageBox(NULL, text, "", MB_OK);
        Form1->Close();
     }


     void Kolizja()
     {
         if(Form1->Tor0->Top<Form1->Auto->Top+144 &&
          Form1->Tor0->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor0->Left+10 ||
          Form1->Auto->Left>Form1->Tor0->Left+220 ) )  lose();

          if(Form1->Tor1->Top<Form1->Auto->Top+144 &&
          Form1->Tor1->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor1->Left+10 ||
          Form1->Auto->Left>Form1->Tor1->Left+220 ) )  lose();

          if(Form1->Tor2->Top<Form1->Auto->Top+144 &&
          Form1->Tor2->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor2->Left+10 ||
          Form1->Auto->Left>Form1->Tor2->Left+220 ) )  lose();

          if(Form1->Tor3->Top<Form1->Auto->Top+144 &&
          Form1->Tor3->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor3->Left+10 ||
          Form1->Auto->Left>Form1->Tor3->Left+220 ) )  lose();

          if(Form1->Tor4->Top<Form1->Auto->Top+144 &&
          Form1->Tor4->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor4->Left+10 ||
          Form1->Auto->Left>Form1->Tor4->Left+220 ) )  lose();

          if(Form1->Tor5->Top<Form1->Auto->Top+144 &&
          Form1->Tor5->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor5->Left+10 ||
          Form1->Auto->Left>Form1->Tor5->Left+220 ) )  lose();

          if(Form1->Tor6->Top<Form1->Auto->Top+144 &&
          Form1->Tor6->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor6->Left+10 ||
          Form1->Auto->Left>Form1->Tor6->Left+220 ) )  lose();

          if(Form1->Tor7->Top<Form1->Auto->Top+144 &&
          Form1->Tor7->Top>Form1->Auto->Top-56 &&
          (Form1->Auto->Left<Form1->Tor7->Left+10 ||
          Form1->Auto->Left>Form1->Tor7->Left+220 ) )  lose();

          if( Form1->P1->Top+47<Form1->Auto->Top &&
          Form1->P1->Top+20>Form1->Auto->Top-29 &&
          Form1->P1->Left+93>Form1->Auto->Left &&
          Form1->P1->Left-40<Form1->Auto->Left &&
          Form1->P1->Visible==True ) lose();

          if( Form1->P2->Top+47<Form1->Auto->Top &&
          Form1->P2->Top+20>Form1->Auto->Top-29 &&
          Form1->P2->Left+93>Form1->Auto->Left &&
          Form1->P2->Left-40<Form1->Auto->Left &&
          Form1->P2->Visible==True ) lose();


     }





//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        DoubleBuffered=true;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if( Key == VK_LEFT ) Prawo->Enabled= true;
    if( Key == VK_RIGHT ) Lewo->Enabled= true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::LewoTimer(TObject *Sender)
{
   Auto->Left = Auto->Left + 4;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PrawoTimer(TObject *Sender)
{
    Auto->Left = Auto->Left - 4;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
     if( Key == VK_LEFT ) Prawo->Enabled= false;
     if( Key == VK_RIGHT ) Lewo->Enabled= false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Tor0->Top=-150;
Tor0->Left=264;
//Tor0->Enabled=false;
Tor1->Top=0;
Tor2->Top=150;
Tor3->Top=300;
Tor4->Top=450;
Tor5->Top=600;
Tor6->Top=750;
Tor7->Top=900;
Label4->Caption="WYNIK:";
P1->Visible=false;
P2->Visible=false;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

     p++;
     Label3->Caption=p/10;
     losowa2();
     Trudnosc();
     Tor_przod();

     Kolizja();
}
//---------------------------------------------------------------------------



















