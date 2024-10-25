#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dayname1, dayname2, syntex1, syntex2, syntex3, syntex4;
    int day1, day2, hour1, minute1, second1, hour2, minute2, second2,c=0,totaldaysecond,total1, total2,totalsecond;
    int daycount = 0, hourcount = 0, minutecount = 0, secondcount = 0;

    cin >> dayname1 >> day1;
    cin >> hour1 >> syntex1 >> minute1 >> syntex2 >> second1;
    cin >> dayname2 >> day2;
    cin >> hour2 >> syntex3 >> minute2 >> syntex4 >> second2;
    if (day1==day2)
    {
        total1=hour1*3600+minute1*60+second1;
        total2=hour2*3600+minute2*60+second2;
        totalsecond=total2-total1;
        if(totalsecond>=3600)
        {
            hourcount=totalsecond/3600;
            totalsecond=totalsecond%3600;
        }
        if (totalsecond>=60)
        {
            minutecount=totalsecond/60;
            totalsecond=totalsecond%60;
        }else
        {
            secondcount=totalsecond;
        }
        printf("%d dia(s)\n", daycount);
        printf("%d hora(s)\n", hourcount);
    printf("%d minuto(s)\n", minutecount);
    printf("%d segundo(s)\n", secondcount);
        
    }else
    {
         for (int i=day1+1;i<day2;i++)
    {
        c++;
    }
     totaldaysecond = c * 86400;

    total1 = 86400 - (hour1 * 3600 + minute1 * 60 + second1);

     total2 = hour2 * 3600 + minute2 * 60 + second2;

     totalsecond = totaldaysecond + total1 + total2;

    daycount = totalsecond / 86400;
    totalsecond = totalsecond % 86400;

    hourcount = totalsecond / 3600;
    totalsecond = totalsecond % 3600;

    minutecount = totalsecond / 60;
    secondcount = totalsecond % 60;

    printf("%d dia(s)\n", daycount);
    printf("%d hora(s)\n", hourcount);
    printf("%d minuto(s)\n", minutecount);
    printf("%d segundo(s)\n", secondcount);
    }

   

    return 0;
}
