#include <stdio.h> 
int main () { 

int a,b,c,d,e,u=0, i=0, min=0, max=0, sum=0; 
printf(" vvedite 5 chisel: "); 
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e); 
for ( int i=0; i<5; i++) { 
if (i==0) { 
if( (a>b) && (a>c) &&( a>d) && (a>e)) 
max=a; 
else {if( (a>b) || (a>c) ||( a>d) || (a>e)) {u++;} else {min=a;}} 
} 

if (i==1) { 
if ((b>a) && (b>c) && (b>d) && ( b>e)) 
max=b; 
else {if( (b>a) || (b>c) ||( b>d) || (b>e)){u++;} else {min=b;} } 

} 

if (i==2) { 
if ((c>a) && (c>b) && (c>d) && (c>e)) 
max=c; 
else if( (c>b) || (c>a) ||( c>d) || (c>e)){u++;} else { min=c;} 

} 

if (i==3) { 
if ((d>a) && (d>b) && (b>c) && (b>e)) 
max=d; 
else if( (d>b) || (d>c) || ( d>a) || (d>e)){u++;} else {min=d;} 

} 

if (i==4) { 
if ((e>a) && (e>b) && (e>c) && (e>d)) 
max=e; 
else {if( (e>b) || (e>c) ||( e>d) || (e>a)) {u++;} else {min=e;} } 
} 
} 
sum=max+min; 
printf ("%d\n", sum); 

return 0; 

}
