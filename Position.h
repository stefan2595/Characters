#ifndef POSITION_H
#define POSITION_H

class Position
{
private:
	uint32_t x, y;

public:
	Position()
	{
		x = 0;
		y = 0;
	}

	const uint32_t& getX()
	{
		return x;
	}

	const uint32_t& getY()
	{
		return y;
	}

	Position(uint32_t startX, uint32_t startY)
	{
		x = startX;
		y = startY;
	}

	void clear()
	{
		x = 0;
		y = 0;
	}

	void setPosition(uint32_t newX, uint32_t newY)
	{
		x = newX;
		y = newY;
	}
};

#endif //POSITION_H