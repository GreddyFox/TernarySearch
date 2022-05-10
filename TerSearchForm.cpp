
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

int n; // размер массива


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
    //n = Convert::ToInt32(textBoxN->Text); // получили длину массива
    String^ m = textBoxM->Text; // полученный массив ввиде строки через зарятую
    int ms = m->Length;// длина массива в виде строки (вместе с запятыми)
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
        vd.push_back(stof(v[i]));
    }

  /*  for (int i = 0; i < ms; i++) {
        if (m[i] != ',') {
            v.push_back(m[i] - '0');
        }
    }*/
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
    //n = Convert::ToInt32(textBoxN->Text); // получили длину массива
    String^ m = textBoxM->Text; // полученный массив ввиде строки через зарятую
    int ms = m->Length; // длина массива в виде строки (вместе с запятыми)
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
        vd.push_back(stof(v[i]));
    }
    if (ms == 1) {
        textBoxN->Text = (textBoxM->Text);
    }
    else {
        double r = ternary_max(vd, n);
        textBoxN->Text = Convert::ToString(r);
    }
    ;
    return System::Void();
    //MessageBox::Show(Convert::ToString(r));
    //textBoxN->Text= Convert::ToString(r);

  /*  double l = 0;                работающий максимум!!!!
    double r = n - 1;

    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        if (v[m1] < v[m2]) {
            l = m1;
        }
        else
        {
            r = m2;
        }
    }*/
    

   
    
    
    //cli::array<int>^ iArr = Array::ConvertAll(textBoxM->Text->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries), gcnew Converter<String^, int>(Convert::ToInt32));
    /*for (int i = 0; i < ms; i++) {
        if (m[i] != ' ') {
            int a=atoi(m);
            v.push_back(atoi(m[i]));
        }
    }*/
    return System::Void();
}
