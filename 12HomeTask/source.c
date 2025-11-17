#include <locale.h>
#include <stdio.h>

int main() {

	setlocale(LC_ALL, "RUS");

	char c;
	printf("Размер char = %d бaйтов\n", (char*)(&c + 1) - (char*)&c);

	short int si;
	printf("Размер short int = %d бaйтов\n", (char*)(&si + 1) - (char*)&si);

	unsigned short int usi;
	printf("Размер unsigned short int = %d бaйтов\n", (char*)(&usi + 1) - (char*)&usi);

	int i;
	printf("Размер int = %d бaйтов\n", (char*)(&i + 1) - (char*)&i);

	unsigned char uc;
	printf("Размер unsigned char = %d бaйтов\n", (char*)(&uc + 1) - (char*)&uc);

	wchar_t wct;
	printf("Размер wchar_t = %d бaйтов\n", (char*)(&wct + 1) - (char*)&wct);

	long long int lli;
	printf("Размер long long int = %d бaйтов\n", (char*)(&lli + 1) - (char*)&lli);

	size_t st;
	printf("Размер size_t = %d бaйтов\n", (char*)(&st + 1) - (char*)&st);

	float f;
	printf("Размер float = %d байтов\n", (char*)(&f + 1) - (char*)&f);

	double d;
	printf("Размер double = %d байтов\n", (char*)(&d + 1) - (char*)&d);

	signed int sii;
	printf("Размер signed int = %d байтов\n", (char*)(&sii + 1) - (char*)&sii);

	system("pause");
}