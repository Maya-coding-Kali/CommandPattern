#pragma once
class Character
{
public:
	Character(std::string name) : _name(name)
	{
		x = 0;
		y = 0;
	}
	~Character() {}
	std::string GetName() {
		return _name;
	};
	void move(int _x, int _y) {
		y = _y;
		x = _x;

	}
private:
	int x;
	int y;
	std::string _name;

};