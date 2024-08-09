public class castng {
    public static void main(String[] args){
        //casting
        double price= 100.0;
        double finalp= price + 18;

        System.out.println(finalp);

        int p=100;
        double fp= p + 18.0;
        int fpp= p + (int)18.18;
        System.out.println(fp);
        System.out.println(fpp);

        //constants
        final float pi= 3.14F;

        //operators
        int a=1;
        int b=2;
        int sum= a + b;
        int diff= a-b;
        int mul= a*b;
        double div= (double) a/b;
        int mod= a%b;

        System.out.println(sum);
        System.out.println(diff);
        System.out.println(mul);
        System.out.println(div);
        System.out.println(mod);

        //assign
        int numb=1;
        System.out.println(++numb);

        System.out.println(numb--);
        numb++;
        System.out.println(numb);

        //maths
        System.out.println(Math.max(6,8));

        System.out.println((int)(Math.random()*100));
    }
}
