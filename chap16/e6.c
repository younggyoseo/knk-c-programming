#include <stdio.h>

struct time {
	int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
	struct time t1;
	
	t1 = split_time(30000);
	
	printf("%d %d %d\n", t1.hours, t1.minutes, t1.seconds);
	
	return 0;
}

struct time split_time(long total_seconds)
{
	struct time t1;
	
	t1.seconds = total_seconds % 60;
	total_seconds /= 60;
	t1.minutes = total_seconds % 60;
	total_seconds /= 60;
	t1.hours = total_seconds % 24;
	
	return t1;
}

