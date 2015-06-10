#include<stdio.h>

int main(){
  
  int arg1, arg2;
  int t_arg1, t_arg2;
  
  while(scanf("%d %d", &arg1, &arg2)!=EOF){
    t_arg1= arg1;
    t_arg2 = arg2;
    if(arg1>arg2){
      int temp = arg2;
      arg2= arg1;
      arg1 = temp;
    }
    int cycles =0;
    int index = 0;
    int maxCycles=0;
    for(index=arg1;index<=arg2;index++){
      int numberNow = index;
      for(cycles=0;numberNow!=1;cycles++){
	if(numberNow%2==0){
	  numberNow= numberNow/2;
	}else{
	  numberNow = numberNow*3 + 1;
	}
      }
      cycles = cycles+1;
      if(cycles>maxCycles){
	maxCycles=cycles;
      }
      
    }
    printf("%d %d %d\n",t_arg1, t_arg2, maxCycles);
  }
  return 0;
}
