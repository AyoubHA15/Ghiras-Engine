#include <iostream>
class LOG {
public:
	enum level
	{
		Error, Warning, Info
	};
private:
	int Level = Info;
public:
	void SetLevel(level _level) {
		Level = _level;
	}
	void Err(const char* messege) {
		if (Level <= Error) {
			std::cout << "[EREURE]: " << messege << std::endl;
		}
	}
	void Warr(const char* messege) {
		if (Level >= Warning) {
			std::cout << "[WARRNING]: " << messege << std::endl;
		}
	}
	void Inf(const char* messege) {
		if (Level >= Warning) {
			std::cout << "[INFO]: " << messege << std::endl;
		}
	}
};
int main() {
	LOG log;
}