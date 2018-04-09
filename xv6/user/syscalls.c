#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	printf(1, "Total number of sys calls is %d\n", howmanysys());
	exit();
}
