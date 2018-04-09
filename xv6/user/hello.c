#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	printf(1, "Sys Calls: %d\n", howmanysys());
	exit();
}
