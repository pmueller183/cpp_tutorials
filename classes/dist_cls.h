//345678911234567892123456789312345678941234567895123456789612345678971234567898123456-
#pragma once

class dist_cls 
{
public:
	// required constructors
	dist_cls();
	dist_cls(int feet, int inches);
	int &operator[](int ndx);
	int const &operator[](int ndx) const;

	int get_feet() const;
	void put_feet(int feet);
	int get_inches() const;
	void put_inches(int inches);

	//string to_string() const;

	operator std::string() const;

	friend ostream &operator<<(ostream &output, dist_cls const &the_dist);
	friend istream &operator>>(istream &input, dist_cls &the_dist);

private:
	mutable int feet_m;             // 0 to infinite
	mutable int inches_m;           // 0 to 12
	mutable bool is_dirty_m;
	void normalize() const;
}; // dist_cls

