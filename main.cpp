#include <cstdio>

using namespace std;

// ���ۃN���X Animal
class Animal {
public:

    virtual void sound() const = 0;
};

// ���N���X Dog�iAnimal ���p���j
class Dog : public Animal {
public:

    void sound() const override {

        printf("�C�k�����F����\n");
    }
};

// �L�N���X Cat�iAnimal ���p���j
class Cat : public Animal {
public:

    void sound() const override {

        printf("�l�R����:�j���[\n");
    }
};

int main() {

    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound();
    animal2->sound();

    delete animal1;
    delete animal2;

    return 0;
}