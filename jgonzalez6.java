//Jovanny Gonzalez
//CSC 321-40

public class jgonzalez6 {
	public static void main(String[] args){
		int x = 4;
		int y = 6;
		double dx = 4;
		double dy = 6;
		int a, b, c;
		double da, db, dc;

		a = x + y * x / y - x;
		b = -x - y / x * y + x;
		c = x + y - x / y;
		da = dx + dy * dx / dy - dx;
		db = -dx - dy / dx * dy + dx;
		dc = dx + dy - dx / dy;		
		
		System.out.println("The value of x is "+x+", and the value of y is "+y+".");
		System.out.println("With the result being int,");
		System.out.println("x+y*x/y-x="+a);
		System.out.println("-x-y/x*y+x="+b);
		System.out.println("x+y-x/y;="+c);

		System.out.println("\nThe value of dx is "+dx+", and the value of dy is "+dy+".");
		System.out.println("With the result being double,");
		System.out.println("dx+dy*dx/dy-dx="+da);
		System.out.println("-dx-dy/dx*dy+dx="+db);
		System.out.println("dx+dy-dx/dy;="+dc);
		System.out.println("NOTE: The result of the double for java and the c program seem to be different.");
		System.out.println("NOTE: Though their actual value is the same, the java version displays more of the decimals.");

	}
}
