#include<stdio.h>

int Recursive(int kyuryou, int kotei, int jikan) {

	//if
	if (kyuryou > kotei) {

		printf("%dŠÔŒã‚É’´‚¦‚é", jikan);
		return jikan;
	} 
	//printf
	printf("%d %d\n", kyuryou, kotei);
	kyuryou += kyuryou * 2 - 50;

	return (Recursive(kyuryou, ++jikan, kotei += 1072));

}

int main() {

	int ippan = 1072;
	int sai = 100;
	int jikan = 1;
	int result = Recursive(sai, jikan, ippan);;

	return 0;
}