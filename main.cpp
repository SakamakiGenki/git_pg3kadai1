#include <cstdio>

using namespace std;

// 抽象クラス Animal
class Animal {
public:

    virtual void sound() const = 0;
};

// 犬クラス Dog（Animal を継承）
class Dog : public Animal {
public:

    void sound() const override {

        printf("イヌ鳴き声：ワン\n");
    }
};

// 猫クラス Cat（Animal を継承）
class Cat : public Animal {
public:

    void sound() const override {

        printf("ネコ鳴き声:ニャー\n");
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