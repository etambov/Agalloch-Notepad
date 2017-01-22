//---------------------------------------------------------------------------

#include <vcl.h>
#include <vcl\clipbrd.hpp>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
RichEdit1->SelText=Clipboard ()->AsText;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
Clipboard ()->AsText=RichEdit1->SelText;
RichEdit1->SelText="";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Clipboard ()->AsText=RichEdit1->SelText;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
RichEdit1->SelText="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
RichEdit1->Font->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
RichEdit1->Font->Color=clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
RichEdit1->Font->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
RichEdit1->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{
RichEdit1->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton6Click(TObject *Sender)
{
RichEdit1->Color=clGreen;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::N2Click(TObject *Sender)
{
if (OpenDialog1->Execute())
RichEdit1->Lines->LoadFromFile(OpenDialog1->FileName);
}

//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
if (SaveDialog1->Execute())
RichEdit1->Lines->SaveToFile(SaveDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
RichEdit1->SelText="";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N7Click(TObject *Sender)
{
Clipboard ()->AsText=RichEdit1->SelText;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
RichEdit1->SelText=Clipboard ()->AsText;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N6Click(TObject *Sender)
{
Clipboard ()->AsText=RichEdit1->SelText;
RichEdit1->SelText="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N16Click(TObject *Sender)
{
RichEdit1->Color=clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N17Click(TObject *Sender)
{
RichEdit1->Color=clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N18Click(TObject *Sender)
{
RichEdit1->Color=clRed;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N13Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------





//---------------------------------------------------------------------------



//---------------------------------------------------------------------------



void __fastcall TForm1::N21Click(TObject *Sender)
{
ColorDialog1->Execute();
RichEdit1->Color=ColorDialog1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N20Click(TObject *Sender)
{
FontDialog3->Execute();
RichEdit1->Font=FontDialog3->Font;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton1Click(TObject *Sender)
{
if (OpenDialog1->Execute())
RichEdit1->Lines->LoadFromFile(OpenDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton2Click(TObject *Sender)
{
if (SaveDialog1->Execute())
RichEdit1->Lines->SaveToFile(SaveDialog1->FileName);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton4Click(TObject *Sender)
{
Clipboard ()->AsText=RichEdit1->SelText;
RichEdit1->SelText="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton5Click(TObject *Sender)
{
Clipboard ()->AsText=RichEdit1->SelText;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton6Click(TObject *Sender)
{
RichEdit1->SelText=Clipboard ()->AsText;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton7Click(TObject *Sender)
{
RichEdit1->SelText="";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ToolButton10Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------







void __fastcall TForm1::ToolButton9Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton11Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N11Click(TObject *Sender)
{
TFontStyles ts;
if (N11->Checked) ts<<fsItalic;
if (N12->Checked) ts<<fsBold;
if (N13->Checked) ts<<fsUnderline;
if (N14->Checked) ts<<fsStrikeOut;
RichEdit1->SelAttributes->Style=ts;
}
//---------------------------------------------------------------------------

