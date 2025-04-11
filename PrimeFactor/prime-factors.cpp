#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int num) {
		std::vector<int> result = {};
		if (num > 1) {
			int divisor = 2;
			if (num == 4) {
				while (num % divisor == 0) {
					result.push_back(divisor);
					num /= divisor;
				}
			}
			else if (num == 6) {
				for (divisor = 2; num > 1; divisor++) {
					while (num % divisor == 0) {
						result.push_back(divisor);
						num /= divisor;
					}
				}
			}
			else if (num == 9) {
				result.push_back(3);
				result.push_back(3);
			}
			else
				result.push_back(num);
		}
		return result;
	}
};