#include<stdio.h>

int main() {
	//���߂�1970�N�̉w�����X�g
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	IShape* shape[2];

	shape[0] = new Circle();
	shape[1] = new Rectangle();

	printf("�~�̔��a:4\n�Z�`�̒��:2\n�Z�`�̍���:3\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Size();


	printf("\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Draw();

	return 0;
}