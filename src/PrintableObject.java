public abstract class PrintableObject implements NamedObject, Printable
{

    //overridden, returns the object's name by calling getName() method.
    @Override
    public String toString()
    {
        NamedObject name = (NamedObject) this.getName();

        return name.toString();
    }

    //prints the text returned by toString() method. The information is
    //printed in single line.
    public void print()
    {
        System.out.print(this.toString());
    }
}
