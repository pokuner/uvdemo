#include <uv.h>
#include <iostream>

int main(int argc, char* argv[])
{
	uv_loop_t* loop = uv_default_loop();
	std::cout << "Now quitting.\n";
	uv_run(loop, UV_RUN_DEFAULT);
	return 0;
}