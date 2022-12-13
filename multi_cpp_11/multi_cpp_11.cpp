//345678911234567892123456789312345678941234567895123456789612345678971234567898123456-

#include <vector>
#include <thread>
#include <iostream>

typedef std::vector<std::thread> thread_vec;

using std::cout;
using std::endl;

static void _hello_hf()
{
	cout << "Hello from thread " << std::this_thread::get_id() << endl;;
} // _hello_hf

int main()
{
	thread_vec the_threads;
	for(auto ii = 0; ii < 5; ++ii)
		the_threads.push_back(std::thread(_hello_hf));
	for(auto &ii: the_threads)
		ii.join();
} // main