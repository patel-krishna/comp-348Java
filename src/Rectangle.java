
public class Rectangle extends PrintableObject implements Shape
{
    private double length, height;
    //maybe?
    private String name;

    public Rectangle()
    {
        this.length = 0;
        this.height = 0;
        this.name = "Rectangle";
    }

    public Rectangle(double length, double height, String name)
    {
        this.length = length;
        this.height = height;
        this.name = name;
    }

    public double getLength()
    {
        return this.length;
    }

    public double getHeight()
    {
        return this.height;
    }

    //maybe
    public String getName()
    {
        return this.name;
    }

    public void setLength(double length)
    {
        this.length = length;
    }

    public void setHeight(double height)
    {
        this.height = height;
    }

    //maybe
    public void setName(String name)
    {
        this.name = name;
    }

    @Override
    public String toString()
    {
        return this.name + ", " + this.length + ", " + this.height;
    }

    public static Rectangle parse(String input){}


    public double getParameter()
    {

    }

    public double getArea()
    {

    }

}
