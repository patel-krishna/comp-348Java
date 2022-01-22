public class Circle extends PrintableObject implements Shape
{
    private double radius;
    //maybe?
    private String name;

    public Circle()
    {
        this.radius = 0;
        this.name = "Rectangle";
    }

    public Circle(double radius, String name)
    {
        this.radius = radius;
        this.name = name;
    }

    public double getRadius()
    {
        return this.radius;
    }

    public void setRadius(double radius)
    {
        this.radius = radius;
    }

    //maybe
    public String getName()
    {
        return this.name;
    }

    //maybe
    public void setName(String name)
    {
        this.name = name;
    }

    @Override
    public String toString()
    {
        return this.name + ", " + this.radius;
    }

    public static Circle parse(String input)
    {}


    public double getParameter()
    {

    }

    public double getArea()
    {

    }
}
