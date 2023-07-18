#include "server.hpp"

int Server::pass(int fd, std::string str)
{
	if(str != getPassword())
	{
		quit(fd, "Wrong Password!!");
		return (-1);
	}
	firstPassCall[fd] = 1;
	return (0);
}