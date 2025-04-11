#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int num) {
		std::vector<int> result = {};
		if (num > 1) {
			if (num == 4) {
				while (num % 2 == 0) {
					result.push_back(2);
					num /= 2;
				}
			}
			else if (num == 6) {
				result.push_back(2);
				result.push_back(3);
			}
			else
				result.push_back(num);
		}
		return result;
	}
};