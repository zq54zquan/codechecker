#include <vector>
#include <iostream>
class Stub {
public:
	friend int main(int ,char**);
	explicit Stub(int i):v(i) {}
	Stub() = default;
private:
	int v = 0;
};

using sv = std::vector<Stub>;
int main(int args, char **argv) {
	sv v;
	int i = 1;
	v.emplace_back(i);
	for (auto it = v.begin(); it != v.end(); ++it) {
		std::cout<<it->v<<std::endl;
	}
	return 0;
}
