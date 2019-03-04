package test.java.com.files;
import main.java.com.files.B;

import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

public class BTest{
    
    B b1;
    B b2;

    @Before
    public void init(){
        b1 = new B("Tanner", "Kinsey", 29);
        b2 = new B("Amanda","Kinsey", 27);
    }

    @Test
    public void test1(){
        assertTrue(true);
        assertFalse(b2.isOld());
    }


}