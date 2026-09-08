import java.util.Scanner;
public static String lookAndSay(int n){
    String current="1";
    for(int term=2;term<=n;term++){
        StringBuilder next=new StringBuilder();
        int i=0;
        while(i<current.length()){
            char digit=current.charAt(i);
            int count=0;
            while(i<current.length()&&current.charAt(i)==digit){
                count++;
                i++;
            }
            next.append(count);
            next.append(digit);
        }
        current=next.toString();
    }
    return current;
}
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(t-->0){
        int n=sc.nextInt();
        System.out.println(lookAndSay(n));
    }
    sc.close();
  }
}
