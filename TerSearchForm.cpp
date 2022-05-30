
#include "Header.h"
#include "TerSearchForm.h"
#include <vector>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(cli::array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    TernarySearch::TerSearchForm form;
    Application::Run(% form);

}

int n;


System::Void TernarySearch::TerSearchForm::textBoxM_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void TernarySearch::TerSearchForm::textBoxN_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void TernarySearch::TerSearchForm::label3_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void TernarySearch::TerSearchForm::label2_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void TernarySearch::TerSearchForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void TernarySearch::TerSearchForm::buttonMin_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ m = textBoxM->Text; 
    int ms = m->Length;
    vector<string> v;

    string temp = "";
    for (int i = 0; i < ms; ++i) {

        if (m[i] == ',') {
            v.push_back(temp);
            temp = "";
        }
        else {
            temp.push_back(m[i]);
        }

    }
    v.push_back(temp);
    vector<double> vd;
    for (int i = 0; i < v.size(); i++) {
        vd.push_back(stod(v[i]));
    }
    n = vd.size();

 
    if (ms == 1) {
        textBoxN->Text = (textBoxM->Text);
    }
    else {
        double r = ternary_min(vd, n);
        textBoxN->Text = Convert::ToString(r);
    }
    ;
    return System::Void();
}

System::Void TernarySearch::TerSearchForm::buttonMax_Click(System::Object^ sender, System::EventArgs^ e)
{
   
    String^ m = textBoxM->Text;
    int ms = m->Length; 
    vector<string> v;

    string temp = "";
    for (int i = 0; i < ms; ++i) {

        if (m[i] == ',') {
            v.push_back(temp);
            temp = "";
        }
        else {
            temp.push_back(m[i]);
        }

    }
    v.push_back(temp);
    vector<double> vd;
    for (int i = 0; i < v.size(); i++) {
        vd.push_back(stod(v[i]));
    }
    n = vd.size();
    if (ms == 1) {
        textBoxN->Text = (textBoxM->Text);
    }
    else {
        double r = ternary_max(vd, n);


        textBoxN->Text = Convert::ToString(r);
    }
    ;
    return System::Void();
   
    return System::Void();
}
