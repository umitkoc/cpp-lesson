#include <sys/time.h>
const int randomize(const int limit){
	struct timeval currentTime;
	gettimeofday(&currentTime, '\0');
	return (currentTime.tv_sec + currentTime.tv_usec)%limit;
}