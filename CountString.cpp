#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int CountWord(char s[])
{
	int count = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			count++;
	}
	if (s[0] != ' ') count+=1;
	return count;
}
void CountCharAWord(char s[])
{
	int count = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != ' ') count++;
		else
		{
			cout << count << " ";
			count = 0;
		}
	}
	cout << count << " ";
}
int CountWordinChar(char s[], int k)
{
	int chr = 0, count = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != ' ') chr++;
		else
		{
			if (chr == k)	count++;
			chr = 0;
		}

	}
	if (chr == k) 
		return count + 1;
	return count;
}
void ConvertUpper(char s[])
{
	_strlwr(s);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			s[i + 1] -= 32;
	}
	if (s[0] != ' ') s[0] -= 32;
}
void CountVowel(char s[])
{
	int Vowel = 0, Consonant = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i')
			Vowel++;
		else Consonant++;
	}
	cout << "So ki tu nguyen am la:" << Vowel << endl;
	cout << "So ki tu phu am la:" << Consonant << endl;
}
void Delete(char s[], int k)
{

	for (int i = k + 1; i < strlen(s); i++)		//bat dau tu ki tu phia sau ki tu chuan bi xoa
	{
		s[i - 1] = s[i];
	}
	s[strlen(s) - 1] = '\0';	//cho ki tu cuoi cung cua chuoi sau khi xoa la ki tu \0
}
void DelSpaceFirst(char s[])
{
	while (true)
	{
		if (s[0] == ' ')
			Delete(s, 0);
		else
			break;
	}
}
void DelSpaceLast(char s[])
{
	for (int i = strlen(s) - 1;; i--)
	{
		if (s[strlen(s) - 1] == ' ')
			Delete(s, i);
		else
			break;
	}
}
int main()
{
	char s[30];
	cout << "Nhap chuoi:";
	gets_s(s,256);
	cout << "So tu trong chuoi la:" << CountWord(s) << endl;
	CountCharAWord(s);
	
	int k;
	cout << "\nNhap so ki tu moi tu can dem:";
	cin >> k;
	cout << "So ki tu co " << k << " ki tu la:" << CountWordinChar(s, k) << endl;
	
	ConvertUpper(s);
	cout << s << endl;
	CountVowel(s);
	DelSpaceFirst(s);
	cout <<"Chuoi da xoa khoang trang dau dong:"<< s << endl;
	DelSpaceLast(s);
	cout << "Chuoi da xoa khoang trang cuoi dong:" << s << endl;
	system("pause");

}