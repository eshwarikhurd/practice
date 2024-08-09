public class strings {

public static void main(String[] args) {
    System.out.println("Hello world!");

    //Remember strings are immutable in java
    String name1= "Eshwari";
    String name2= " M";
    String name3= "Khurd";

    //concatenate
    String name4= name1 + name2 + " " + name3;
    System.out.println(name4);

    //charat
    System.out.println(name4.charAt(0));

    //length
    System.out.println(name1.length());

    //replace
    String name5= name1.replace('a','b');
    System.out.println(name5);

    //substr
    System.out.println(name1.substring(0,3));

}
}
