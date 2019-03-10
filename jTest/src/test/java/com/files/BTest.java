package test.java.com.files;
import main.java.com.files.B;
import org.junit.runner.RunWith;
import org.junit.runners.JUnit4;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

@RunWith(JUnit4.class)
public class BTest{
    
    B b1;
    B b2;
    B b3;

    @Before
    public void init(){
        b1 = new B("Tanner", "Kinsey", 29);
        b2 = new B("Amanda","Kinsey", 27);
        b3 = new B("Test", "Old", 1000);
    }

    @Test
    public void testGetFirstName(){
        assertEquals("Tanner", b1.getFirstName());
    }

    @Test
    public void testGetLastName(){
        assertEquals("Kinsey", b2.getLastName());
    }

    @Test
    public void testGetAge(){
        assertEquals(27, b2.getAge());
    }

    @Test
    public void testIsOldFalse(){
        assertFalse(b1.isOld());
    }

    @Test
    public void testIsOldTrue(){
        assertTrue(b3.isOld());
    }
}