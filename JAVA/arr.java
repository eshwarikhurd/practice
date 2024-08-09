import java.util.Arrays;

public class arr {
    public static void main(String[] args) {
        System.out.println("Arrays:");
        int[] marks = {95, 98, 93};

        int[][] finalmarks= {{92,93,90},{95,92,93}};
        System.out.println(marks[2]);

        //length
        System.out.println(marks.length);

        //sort
        Arrays.sort(marks);
        System.out.println(marks[2]);
        System.out.println(finalmarks[1][0]);
        System.out.println(finalmarks[0][1]);

    }
}
