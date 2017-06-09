// File Name: Countdown.cpp 
// Programmer: Zailyn Tamayo

// Select a date and press "Countdown".
// Days remaining until the selected date will be displayed.

#using <System.dll> 
#using <System.Windows.Forms.dll> 
#using <System.Drawing.dll> 
 
using namespace System; 
using namespace System::Drawing; 
using namespace System::Windows::Forms; 

public ref class Form1: public Form 
{ 
  
 DateTimePicker^ dateTimePicker1; 
 Label^ label1; 

 public: 
 Form1() 
 {  
  label1 = gcnew Label; 
  label1->Location = Point(10, 70); 
  label1->Size = Drawing::Size(300, 100); 
  label1->Text = ""; 
   
  dateTimePicker1 = gcnew DateTimePicker; 
  dateTimePicker1->Location = Point(10, 10); 

 Button^ button1 = gcnew Button; 
  button1->Text = "Countdown"; 
  button1->Location = Point(220, 10); 
  button1->Size = Drawing::Size(70, 25); 
  button1->Click += gcnew EventHandler(this, &Form1::button1_Click);   
   
  Controls->Add(dateTimePicker1); 
  Controls->Add(label1); 
  Controls->Add(button1);     
   
  this->Size = Drawing::Size(320,150); 
 } 

 private: Void button1_Click(Object^ sender, EventArgs^ e) 
 { 

  int d = Convert::ToInt16(dateTimePicker1->Value.Day); 
  int m = Convert::ToInt16(dateTimePicker1->Value.Month); 
  int y = Convert::ToInt16(dateTimePicker1->Value.Year); 

  DateTime dt = DateTime::Now; 
  DateTime pick = DateTime(y, m, d); 

  if ((pick.DayOfYear - dt.DayOfYear) < 0) 
  {  
   label1->Text = "The " + DateTime::Now.Year + " has just passed!"; 
  } 
  else 
  { 
   label1->Text = "There are " + (pick.DayOfYear - dt.DayOfYear) +  
     " day(s) until " + pick.ToString("d");
  }

 } 
 
}; 
 
[STAThread] 
int main() 
{ 
 Application::Run(gcnew Form1); 
} 
 



