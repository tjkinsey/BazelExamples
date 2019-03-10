package test.java.com.files;
import main.java.com.files.C;
import org.junit.runner.RunWith;
import org.junit.runners.JUnit4;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

@RunWith(JUnit4.class)
public class CTest{

    C c1;
    C c2;

    @Before
    public void init(){
        c1 = new C(1965, "Ford", "Mustang");
        c2 = new C(2006, "Pontiac", "Sunfire");
    }

    @Test
    public void testCoolC1(){
        assertTrue(c1.isCool());
    }

    @Test
    public void testCoolC2(){
        assertFalse(c2.isCool());
    }

    @Test
    public void getYearC1(){
        assertEquals(1965, c1.getYear());
    }

    @Test
    public void getYearC2(){
        assertEquals(2006, c2.getYear());
    }
}