// File Name: User input read.cpp 
// Programmer: Zailyn Tamayo

// This app prompts the user to mouse click or use arrows.
// It then reads the input and shows a message box
// stating what the user inputted.

#using <System.dll> 
#using <System.Windows.Forms.dll> 
#using <System.Drawing.dll> 
 
using namespace System; 
using namespace System::Drawing; 
using namespace System::Windows::Forms; 
 
public ref class Form1: public Form 
{ 
 Label^ label1; 
 
 public: 
 Form1() 
 {  
  label1 = gcnew Label; 
  label1->Size = Drawing::Size(300,25); 
  label1->Location = Point(10, 10);
  label1->Text = "Press a MOUSE button or an ARROW key."; 
  this->Controls->Add(label1); 
   
  this->Size = Drawing::Size(300,150); 

  this->MouseClick += gcnew MouseEventHandler(this, &Form1::Form1_MouseClick); 

  this->KeyDown += gcnew KeyEventHandler(this, &Form1::Form1_KeyDown); 
 } 

 private:  
 Void Form1_MouseClick(Object^ sender, MouseEventArgs^ e) 
 { 
  if (e->Button == ::System::Windows::Forms::MouseButtons::Left) 
  { 
    MessageBox::Show("You LEFT-clicked.");
  } 
 
   else if ( e->Button == ::System::Windows::Forms::MouseButtons::Right)
  { 
    MessageBox::Show("You RIGHT-clicked.");
  }
 }

 private: 
 Void Form1_KeyDown(Object^ sender, KeyEventArgs^ e) 
 { 
  if (e->KeyCode == Keys::Left)
  {
   MessageBox::Show("You pressed LEFT.");
  }
  else if (e->KeyCode == Keys::Right)
  {
   MessageBox::Show("You pressed RIGHT.");
  }
 }

};

[STAThread] 
int main() 
{ 
 Application::Run(gcnew Form1); 
}