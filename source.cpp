#include <iostream>
int main() {
	int n;
	int i = 0;
	int maxi = 0;
	std::cin >> n;
	while (n != 1) {
		if (n > maxi) {
			maxi = n;
		}
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = (n * 3) + 1;
		}
		//количество шагов
		i += 1;
	}
	std::cout << i << " " << maxi << std::endl;
	return 0;
}