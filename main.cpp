#include <thread>
#include <iostream>
#include <mutex>

int myAccount = 0;
std::mutex mtx;

void addMoney() {
	mtx.lock();
	++myAccount;
	mtx.unlock();
}

int main() {
	std::thread t1(addMoney);
	std::thread t2(addMoney);
	t1.join();
	t2.join();
	std::cout << myAccount << std::endl; // expected 2 but can can be not
}