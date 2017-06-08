import java.util.*;
class Factorial{
public static void main(String args[]){
Scanner in=new Scanner(System.in);
int n,f=1;
n=in.nextInt();
for(i=1;i<=n;i++)
{
f=f*i;
}
System.out.pritln(f);
}
}
