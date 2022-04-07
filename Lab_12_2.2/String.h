#pragma once
#include <iostream>
using namespace std;

#pragma pack(push, 1)

class String
{
	char* str;
public:
	String();
	String(const char* s);
	String(const String& s);
	~String();

	const char* getStr() const { return str; }
	void setStr(char* s) { str = s; }

	friend String operator+(const String& s1, const String& s2);
	friend String operator-(const String& s1, const String& s2);
	friend unsigned int operator*(const String& s1, const String& s2);

	String& operator=(const String& s);
	operator string() const { return str; }
	friend ostream& operator<<(ostream& out, const String& s);
	friend istream& operator>>(istream& in, String& s);
};

#pragma pack(pop)