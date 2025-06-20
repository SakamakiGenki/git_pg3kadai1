#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main(void) {
	//初めは1970年の駅名リスト
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970年の駅一覧を表示
	printf("1970年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++) {
		std::cout << *it_f << endl;
	}

	// 2019年: 西日暮里を日暮里の後に追加
	printf("\n2019年\n");
	list<const char*>::iterator it_f;
	for (it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		std::cout << *it_f << endl;

		if (strcmp(*it_f, "Nippori") == 0) {
			++it_f; // Tabataの前に挿入するために1つ進めてからinsert
			it_f = eki_list.insert(it_f, "Nishi-Nippori");
			std::cout << *it_f << endl;
		}
	}

	// 2022年: 高輪ゲートウェイを品川の後に追加
	printf("\n2022年\n");
	for (it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		std::cout << *it_f << endl;

		if (strcmp(*it_f, "Sinagawa") == 0) {
			++it_f; // Tamachiの前に挿入
			it_f = eki_list.insert(it_f, "Takanawa Gateway");
			std::cout << *it_f << endl;
		}
	}

	return 0;
}