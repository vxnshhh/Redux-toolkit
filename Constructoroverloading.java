public class Constructoroverloading {
    public int age;
    public String name;
    public int rollno;

    public Constructoroverloading(int age, String name, int rollno) {
        this.age = age;
        this.name= name;
        this.rollno = rollno;
        
    }
    public Constructoroverloading(String name, int rollno) {
        this.(22,"Manjot", 19);
        this.name= name;
        this.rollno = rollno;
    }
    public static void main(String[] args) {
        Constructoroverloading m1 = new Constructoroverloading();
        
    }
    
}
