import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestVertexArray {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestVertexArray.class);
    }

    @Test
    public void testInitialize () {
        VertexArray varry = new VertexArray (3, 2, 1);
        
        assertEquals (3, varry.getVertexCount());
        assertEquals (2, varry.getComponentCount());
        assertEquals (1, varry.getComponentType());
    }

    @Test
    public void testGetterSetter () {

        VertexArray char_varry           = new VertexArray (3, 2, 1);
        byte[]      expected_char_values = {1,2, 3,4, 5,6};
        byte[]      char_values          = new byte[6];

        char_varry.set (0, 3, expected_char_values);
        char_varry.get (0, 3, char_values);

        for (int i = 0; i < 6; i++) {
            assertEquals (expected_char_values[i], char_values[i]);
        }

        VertexArray short_varry           = new VertexArray (3, 2, 2);
        short[]     expected_short_values = {1,2, 3,4, 5,6};
        short[]     short_values          = new short[6];

        short_varry.set (0, 3, expected_short_values);
        short_varry.get (0, 3, short_values);

        for (int i = 0; i < 6; i++) {
            assertEquals (expected_short_values[i], short_values[i]);
        }

        VertexArray float_varry           = new VertexArray (3, 2, 4);
        float[]     expected_float_values = {1,2, 3,4, 5,6};
        float[]     float_values          = new float[6];

        float_varry.set (0, 3, expected_float_values);
        float_varry.get (0, 3, float_values);

        for (int i = 0; i < 6; i++) {
            assertEquals (expected_float_values[i], float_values[i], 0.00001f);
        }
    }

    // こっちはトリッキーなset/getのテスト
    @Test
    public void testGetterSetter2 () {
        VertexArray varry    = new VertexArray (3, 2, 2);
        short[]     values   = new short[6];

        varry.set (0, 3, new short[]{1,2, 3,4, 5,6});

        varry.get (2, 1, values);
        assertEquals (5, values[0]);
        assertEquals (6, values[1]);

        varry.get (1, 2, values);
        assertEquals (3, values[0]);
        assertEquals (4, values[1]);
        assertEquals (5, values[2]);
        assertEquals (6, values[3]);
        
        varry.set (1, 1, new short[]{7,8});
        varry.set (2, 1, new short[]{9,10});

        varry.get (0, 3, values);
        assertEquals (1, values[0]);
        assertEquals (2, values[1]);
        assertEquals (7, values[2]);
        assertEquals (8, values[3]);
        assertEquals (9, values[4]);
        assertEquals (10, values[5]);

    }


}