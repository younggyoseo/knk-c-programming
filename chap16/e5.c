#include <stdio.h>

struct date {
	int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
	struct date d1, d2;
	d1.year = 2018;
	d1.month = 10;
	d1.day = 4;
	
	d2.year = 2018;
	d2.month = 11;
	d2.day = 22;
	
	printf("%d %d\n", day_of_year(d1), day_of_year(d2));
	printf("%d\n", compare_dates(d1, d2));
	
	return 0;
}

int day_of_year(struct date d)
{
	static int monthly_date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day_cnt = 0;
	
	for (int i = 0; i < d.month-1; i++) {
		day_cnt += monthly_date[i];
	}
	day_cnt += d.day;
	
	/* Check Leap Year */
	if (d.year % 4 == 0)
		if (d.year % 100 != 0 || d.year % 400 == 0)
			day_cnt += 1;
	
	return day_cnt;
}

int compare_dates(struct date d1, struct date d2)
{
	int day_cnt1, day_cnt2;
	
	day_cnt1 = day_of_year(d1);
	day_cnt2 = day_of_year(d2);
	if (day_cnt1 < day_cnt2)
		return -1;
	else if (day_cnt1 == day_cnt2)
		return 0;
	else
		return 1;
}
