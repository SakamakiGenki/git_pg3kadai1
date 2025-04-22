#include<stdio.h>

template <typename T>

T Min(T a, T b) 
{
	if (a < b) 
	{
		return (a);
	} else {
		return (b);
	}
	
}

template <>
char Min<char>(char a, char b) {

	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñB");
	return 0;
}

int main() {

	printf("%d\n", Min<int>(2, 0));
	printf("%c\n", Min<char>('g','d'));
	printf("%.1f\n", Min<float>(200.0f, 300.0f));
	printf("%.1lf\n", Min<double>(200.0f, 300.0f));
	return 0;
}
