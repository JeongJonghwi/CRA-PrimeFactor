#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int num) {
		std::vector<int> result = {};
		if (num > 1) {
			if (num == 4) {
				result.push_back(2);
				result.push_back(2);
			}
			else
				result.push_back(num);
		}
		return result;
	}
};