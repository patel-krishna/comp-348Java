import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

//Make sure all exceptions are caught. In case of format error
// or any particular runtime error, the program prints the details of the error and simply terminates.

public class Driver
{


    //need to use try-with-resources to open the file
    public static void main(String[] args) throws Exception {
        Shape[] shapes = new Shape[8];
        int i = 0;
        // Create a Scanner object for keyboard input.
        Scanner keyboard = new Scanner(System.in);

        // Get the filename.
        System.out.print("Enter the filename: ");
        String filename = keyboard.nextLine();

        try(BufferedReader file = new BufferedReader(new FileReader(filename))){
            Scanner inputFile = new Scanner(file);
            // Read lines from the file until no more are left.

            while (inputFile.hasNext())
            {
                System.out.println("qkldnfewlkfheorwjf");
                // Read the next name.
                String shape = inputFile.nextLine();

                if(shape.contains("Rectangle"))
                {
                    shapes[i] = Rectangle.parse(shape);

                }else{
                    shapes[i] = Circle.parse(shape);
                }

                i++;


                // Display the last name read.
                //System.out.println(shape);

            }

            Arrays.sort(shapes, new Comparator()
            {

                public int compare(Object o1, Object o2)
                {
                    Shape sa = (Shape) o1;
                    Shape sb = (Shape) o2;

                    int v = sa.compareTo(sb);

                    return v;

                    // it can also return 0, and 1
                }
            }   );


            Printable.print(java.util.Arrays.copyOf(shapes, shapes.length, Printable[].class));

            // Close the file.
            inputFile.close();
            keyboard.close();
        }



    }
}
