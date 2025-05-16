#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

// コールバック関数
void DispResult(int* s, int* kye) {
    int dice = rand() % 2;

    if (dice == *kye) {
        if (dice == 0)
            printf("%dで丁(偶数)でした。当たり\n", dice);
        else
            printf("%dで半(奇数)でした。当たり\n", dice);
    } else {
        if (dice == 1)
            printf("%dで半(奇数)でした。はずれ\n", dice);
        else
            printf("%dで丁(偶数)でした。はずれ\n", dice);
    }
}

// setTimeout関数
void setTimeout(std::function<void(int*, int*)> p, int second, int kye) {
    for (int i = 0; i < second; i++) {
        Sleep(1000);  // 1秒待つ
        printf("%d...\n", second - i);
    }
    p(&second, &kye);  // コールバック関数を呼ぶ
}

int main() {
    int kye;

    srand((unsigned int)time(NULL));
    printf("丁(偶数)なら0、半(奇数)なら1を打つ\n");
    scanf_s("%d", &kye);

    if (kye == 0) {
        puts("あなたは丁(偶数)を選びました");
    } else {
        puts("あなたは半(奇数)を選びました");
    }

    // 関数ポインタとしてラムダ関数をstd::function型に代入
    std::function<void(int*, int*)> p = [](int* s, int* kye) {
        DispResult(s, kye);
        };

    setTimeout(p, 3, kye);

    return 0;
}

