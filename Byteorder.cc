#include <cstdlib>
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	union {
	  int16_t  s;	//	двухбайтовое число для проверки
	  int8_t   c[sizeof(int16_t)];
    } un;

	un.s = 0x0102;
	if (sizeof(int16_t) == 2) {
		//	обратный порядок байтов (используется в протоколах Интернета)
		if (un.c[0] == 1 && un.c[1] == 2) {
			cout << "big-endian" << endl;
		}
		//	прямой порядок байтов
		else if (un.c[0] == 2 && un.c[1] == 1) {
			cout << "little-endian" << endl;
		} else {
			cout << "unknown arch" << endl;
		}
	} else {
		cout << "sizeof(short) = " << sizeof(int16_t) << endl;
	}

	return EXIT_SUCCESS;
}
