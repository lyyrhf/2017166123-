import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.text.NumberFormat;

public class danci{

    public class java {

    }
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream("word.txt")));
        int[] count  = new int[26];
    
        char[] c = new char[1];
        int len = br.read(c);
        while(len!=-1) {
            
            if(c[0]<='Z'&&c[0]>='A') {
                int number = c[0];
                count[number-65]++;
//                COUNT[number-65]++;
            }
            if(c[0]<='z'&&c[0]>='a') {
                int number = c[0];
                count[number-97]++;
            }
            len = br.read(c);
        }
        count=Paixu(count);
        Print(count);
        System.out.print("文件读取完毕");
        br.close();
        
    }
    public static int[] Paixu(int[] count)
    {
        int temp;
        int size=count.length;
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(count[i]<count[j])
                {
                    temp=count[j];
                    count[j]=count[i];
                    count[i]=temp;
                    
                }
            }
        }
        return count;
        
    }
    public static void Print(int[] count) {
        NumberFormat numberFormat = NumberFormat.getInstance();
         
        
        numberFormat.setMaximumFractionDigits(2);

        int sum=0;
        for(int i=0;i<count.length;i++)
        {
            sum=count[i]+sum;
        }
        String[] a=new String[count.length];
        for(int i=0;i<count.length;i++)
        {
             a[i] = numberFormat.format((float) count[i] / (float) sum * 100);
        }
        for(int i=0;i<26;i++) {
            if(count[i]>0) {
                char lowerCase = (char)(i+97);
                System.out.println(lowerCase+"("+count[i]+")"+"("+a[i]+"%)");
            }
        }
        
    }


}