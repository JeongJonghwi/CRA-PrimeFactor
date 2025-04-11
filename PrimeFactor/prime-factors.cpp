#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int num) {
		std::vector<int> result = {};
		if (num == 2) {
			result.push_back(num);
		}
		return result;
	}
};