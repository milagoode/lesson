//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <Windows.h>
//
//using namespace std;
//
//void Random(int* arr, int size);
//int Maximum(int* arr, int size);
//void ReplaceZero(int* arr, int size);
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(nullptr));
//    const int size = 7;
//    int arr[size];
//
//    cout << "Заповнення масиву випадковими числами:" << endl;
//    Random(arr, size);
//
//    int max = Maximum(arr, size);
//    cout << "\nМаксимальне число: " << max << endl;
//
//    ReplaceZero(arr, size);
//
//    cout << "Масив після заміни максимального значення на нуль:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << ' ';
//    }
//    cout << endl;
//
//    return 0;
//}
//
//void Random(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        *(arr + i) = -10 + rand() % (10 + 10 + 1); // int num = min + rand() % (max - min + 1);
//        cout << *(arr + i) << ' ';
//    }
//}
//
//int Maximum(int* arr, int size) {
//    int max = *arr;
//    for (int i = 1; i < size; ++i) {
//        if (max < *(arr + i)) {
//            max = *(arr + i);
//        }
//    }
//    return max;
//}
//
//void ReplaceZero(int* arr, int size) {
//    int max = Maximum(arr, size);
//    for (int i = 0; i < size; ++i) {
//        if (*(arr + i) == max) {
//            *(arr + i) = 0; 
//            break; 
//        }
//    }
//}

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Динамічне виділення пам'яті" << endl;
	cout << "Розмір масиву" << endl;
	int a;
	cin >> a;
	int* arr = new int[a];
	for (int i = 0; i < a; ++i) {
		 *(arr + i) = -10 + rand() % (10 + 10 + 1); // int num = min + rand() % (max - min + 1);
		 cout << *(arr + i) << ' ';
		 }
	delete[] arr;


	return 0;
}
