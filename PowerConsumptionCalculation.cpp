#include <cstdio>
int main (){
  
  int n(0),p1(0),p2(0),p3(0),t1(0),t2(0);
  scanf ("%d %d %d %d %d %d ",&n,&p1,&p2,&p3,&t1,&t2);
  
  long total(0),prevousTime(-1);
  
  for(int k = 0; k < n; k++){

        int start(0), finish(0); scanf("%d %d", &start, &finish);
        if(previousTime < 0){previousTime = start;}
        total += P1 * (finish - start);

        int timeIdle = start - previousTime;
        if(timeIdle > T1 + T2){total += (timeIdle - T1 - T2) * P3; timeIdle = T1+ T2;}
        if(timeIdle > T1){total += (timeIdle - T1) * P2; timeIdle = T1;}
        total += timeIdle * P1;

        previousTime = finish;
    }

    printf("%ld\n", total);

    return 0;
}
