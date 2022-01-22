public interface Printable
{

    //a void method to print object's info to the console.
    public void print();

    //method that receives a list of printables and calls their print()
    //methods
    static String print(Printable p)
    {

    }
}
