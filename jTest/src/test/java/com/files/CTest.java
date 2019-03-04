package test.java.com.files;
import main.java.com.files.C;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

public class CTest{

    C c1;
    C c2;

    @Before
    public void init(){
        c1 = new C(1965, "Ford", "Mustang");
        c2 = new C(2006, "Pontiac", "Sunfire");
    }

    @Test
    public void testCool(){
        assertTrue(c1.isCool());
        assertFalse(c2.isCool());
    }

    @Test
    public void getYear(){
        assertEquals(1965, c1.getYear());
        assertFalse(c2.getYear() == 2000);
    }
}