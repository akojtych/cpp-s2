#include <iostream>
#include <chrono>

using namespace std;

int main()
{
	auto twsk1 = std::chrono::high_resolution_clock::now();
	for (unsigned n = 1; n <= 200000; ++n) {
		int* p = new int[n];
		delete[] p;
	}
	
	
	auto twsk2 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(twsk2 - twsk1).count();
	

	auto t3 = std::chrono::high_resolution_clock::now();
	int x = 1;
	for (int i = 1; i <= 200000; i++) {
		x = x + 10;
	}
	auto t4 = std::chrono::high_resolution_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(t4 - t3).count();
	
	cout << "Czas new/delete(w mikrosekundach): " << duration << "\n";
    cout << "Czas dodawanie(w mikrosekundach): " << duration2 << "\n";
	return 0;
}

// czas wykonywania operacji dodawania jest znacznie krótsza ni¿ new/delete 
