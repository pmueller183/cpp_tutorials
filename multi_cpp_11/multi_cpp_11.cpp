//345678911234567892123456789312345678941234567895123456789612345678971234567898123456-

#include <string>

#include "lessons.h"

static std::string const _lesson_ndx_kf = "4c";

int main()
{
	if("0th" == _lesson_ndx_kf)
		lesson0th();
	else if("1st" == _lesson_ndx_kf)
		lesson1st();
	else if("2a" == _lesson_ndx_kf)
		lesson2a();
	else if("2b" == _lesson_ndx_kf)
		lesson2b();
	else if("2c" == _lesson_ndx_kf)
		lesson2c();
	else if("3rd" == _lesson_ndx_kf)
		lesson3rd();
	else if("4a" == _lesson_ndx_kf)
		lesson4a();
	else if("4b" == _lesson_ndx_kf)
		lesson4b();
	else if("4c" == _lesson_ndx_kf)
		lesson4c();

} // main
