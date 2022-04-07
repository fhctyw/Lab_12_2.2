#include "String.h"
#include <string>

String::String()
{
    str = nullptr;
}

String::String(const char* s)
{
    int size = strlen(s) + 1;
    str = new char[size];
    strcpy_s(str, size, s);
}

String::String(const String& s)
{
    *this = s;
}

String::~String()
{
    if (str != nullptr)
        delete[] str;
}

String& String::operator=(const String& s)
{
    if (&s == this) return *this; 
    if (str != nullptr)
        delete[] str;

    int size = strlen(s.str) + 1;
    str = new char[size];
    strcpy_s(str, size, s.str);
    
    return *this;
}

String operator+(const String& s1, const String& s2)
{
    string a = string(s1) + string(s2);
    return a.c_str();
}

String operator-(const String& s1, const String& s2)
{
    string s = string(s1); 
    size_t i = s.find(s2);
    if (i != string::npos)
        s.erase(i, string(s2).length());
    return s.c_str();
}

unsigned int operator*(const String& s1, const String& s2)
{
    size_t i;
    return i = string(s1).find(s2);
}

ostream& operator<<(ostream& out, const String& s)
{
    out << (string)s;
    return out;
}

istream& operator>>(istream& in, String& s)
{
    cout << "Введіть рядок символів: "; 
    string tmp;
    getline(cin, tmp);
    s = tmp.c_str();
    return in;
}
