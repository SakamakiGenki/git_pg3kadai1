#include <iostream>
#include <thread>

using namespace std;

void PrintThread(uint32_t num) {
	cout << "thread" << num << endl;
}

int main() {

	thread t1(PrintThread, 1);
	t1.join();  // t1 のスレッドが終了するまで待つ

	thread t2(PrintThread, 2);
	t2.join();  // t2 のスレッドが終了するまで待つ

	thread t3(PrintThread, 3);
	t3.join();  // t3 のスレッドが終了するまで待つ

	return 0;
}