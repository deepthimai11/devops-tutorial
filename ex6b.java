interface shape
{
public void draw();
}
class Circle implements shape
{
public void draw()
{
System.out.println("circle is drawing");
}
}
class Rectangle implements shape
{
public void draw()
{
System.out.println("rectangle is drawing");
}
}
public class ex6b
{
public static void main(String args[])
{
shape s1=new Circle();
shape s2=new Rectangle();
s1.draw();
s2.draw();
}
}
