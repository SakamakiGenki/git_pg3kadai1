#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main(void) {
	//初めは1970年の駅名リスト
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970年
	printf("1970年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++) {
		std::cout << *it_f << endl;
	}

	// 2019年
	printf("\n2019年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ) {
		// 「Nippori」の直前に「Nishi-Nippori」を追加
		if (strcmp(*it_f, "Nippori") == 0) {
			it_f = eki_list.insert(it_f, "Nishi-Nippori"); // 挿入後、it_fは" Nishi-Nippori"を指す
			std::cout << *it_f << endl;
			++it_f; // "Nippori"へ進める
		}
		std::cout << *it_f << endl;
		++it_f;
	}

	// 2022年
	printf("\n2022年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ) {
		// 「Sinagawa」の直前に「Takanawa Gateway」を追加
		if (strcmp(*it_f, "Sinagawa") == 0) {
			it_f = eki_list.insert(it_f, "Takanawa Gateway"); // 挿入後、it_fは" Takanawa Gateway"を指す
			std::cout << *it_f << endl;
			++it_f; // "Sinagawa"へ進める
		}
		std::cout << *it_f << endl;
		++it_f;
	}

	return 0;
}
