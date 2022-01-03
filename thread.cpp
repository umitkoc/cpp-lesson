
#include <iostream>
#include <thread>
#include <conio.h>
void foo(int Z)
{
	for (int i = 0; i < Z; i++) {
		std::cout << "Thread using function"
			" pointer as callable\n";
	}
}

class thread_obj {
public:
	void operator()(int x)
	{
		for (int i = 0; i < x; i++)
			std::cout << "Thread using function"
				" object as callable\n";
	}
};

int main()
{
	std::cout << "Threads 1 and 2 and 3 "
		"operating independently\n";
	std::thread th1(foo, 3);
	std::thread th2(thread_obj(), 3);
	auto f = [](int x) {
		for (int i = 0; i < x; i++)
			std::cout << "Thread using lambda"
			" expression as callable\n";
	};
	std::thread th3(f, 3);
	th1.join();
	th2.join();
	th3.join();

    getchar();
	return 0;
}
