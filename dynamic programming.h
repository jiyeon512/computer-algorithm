#include <stdio.h> 

int main() { 	
int T, num, i; 	
long long temp; 	
scanf("%d", &T); 	
while (T <= 100 && T-- > 0) 	
{ 		
long long arr[5] = { 1, 1, 1, 2, 2 }; 		scanf("%d", &num); 		
if (num <= 5) 			
printf("%lld\n", arr[num - 1]); 		
else { 			
i = 5; 			
while (++i <= num) { 				
temp = arr[(i - 1) % 5] + arr[(i - 2) % 5]; 				arr[(i - 1) % 5] = temp; 			
} 			
printf("%lld\n", temp); 		
} 	
} 	
return 0; 
}
