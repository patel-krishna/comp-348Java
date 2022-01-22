public interface NamedObject
{

    //a method to return object's name. Provide a default implementation that returns the object's Runtime class name
    default Object getName()
    {
        return this.getClass.getSimpleName();
    }
}
