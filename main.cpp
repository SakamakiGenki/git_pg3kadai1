#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main(void) {
	//���߂�1970�N�̉w�����X�g
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970�N
	printf("1970�N\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++) {
		std::cout << *it_f << endl;
	}

	// 2019�N
	printf("\n2019�N\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ) {
		// �uNippori�v�̒��O�ɁuNishi-Nippori�v��ǉ�
		if (strcmp(*it_f, "Nippori") == 0) {
			it_f = eki_list.insert(it_f, "Nishi-Nippori"); // �}����Ait_f��" Nishi-Nippori"���w��
			std::cout << *it_f << endl;
			++it_f; // "Nippori"�֐i�߂�
		}
		std::cout << *it_f << endl;
		++it_f;
	}

	// 2022�N
	printf("\n2022�N\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ) {
		// �uSinagawa�v�̒��O�ɁuTakanawa Gateway�v��ǉ�
		if (strcmp(*it_f, "Sinagawa") == 0) {
			it_f = eki_list.insert(it_f, "Takanawa Gateway"); // �}����Ait_f��" Takanawa Gateway"���w��
			std::cout << *it_f << endl;
			++it_f; // "Sinagawa"�֐i�߂�
		}
		std::cout << *it_f << endl;
		++it_f;
	}

	return 0;
}
