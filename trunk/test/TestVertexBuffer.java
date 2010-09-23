import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestVertexBuffer {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestVertexBuffer.class);
    }

    @Test
    public void testInitialize () {
        VertexBuffer vbuf = new VertexBuffer ();

        assertEquals (0   , vbuf.getVertexCount());
        assertEquals (null, vbuf.getPositions(null));
        assertEquals (null, vbuf.getTexCoords(0, null));
        assertEquals (null, vbuf.getNormals());
        assertEquals (null, vbuf.getColors());
        assertEquals (0xffffffff, vbuf.getDefaultColor());
    }

    @Test
    public void testGetterSetter () {
        VertexBuffer vertices     = new VertexBuffer ();
        VertexArray  positions    = new VertexArray (4,3,2);
        VertexArray  colors       = new VertexArray (4,3,1);
        VertexArray  normals      = new VertexArray (4,3,2);
        VertexArray  tex_coords_0 = new VertexArray (4,3,2);
        VertexArray  tex_coords_1 = new VertexArray (4,3,2);
        float    scale     = 1;
        float[]  bias      = {1,2,3};
        float[]  scaleBias = new float[4];
        vertices.setPositions (positions, scale, bias);
        vertices.setNormals   (normals);
        vertices.setColors    (colors);
        vertices.setTexCoords (0, tex_coords_0, scale, bias);
        vertices.setTexCoords (1, tex_coords_1, scale, bias);

        assertEquals (positions, vertices.getPositions(scaleBias));
        assertEquals (scale,     scaleBias[0], 0.00001f);
        assertEquals (bias[0],   scaleBias[1], 0.00001f);
        assertEquals (bias[1],   scaleBias[2], 0.00001f);
        assertEquals (bias[2],   scaleBias[3], 0.00001f);
        assertEquals (normals,   vertices.getNormals());
        assertEquals (colors,    vertices.getColors());
        assertEquals (tex_coords_0, vertices.getTexCoords(0, scaleBias));
        assertEquals (scale,     scaleBias[0], 0.00001f);
        assertEquals (bias[0],   scaleBias[1], 0.00001f);
        assertEquals (bias[1],   scaleBias[2], 0.00001f);
        assertEquals (bias[2],   scaleBias[3], 0.00001f);
        assertEquals (tex_coords_1, vertices.getTexCoords(1, scaleBias));
        assertEquals (scale,     scaleBias[0], 0.00001f);
        assertEquals (bias[0],   scaleBias[1], 0.00001f);
        assertEquals (bias[1],   scaleBias[2], 0.00001f);
        assertEquals (bias[2],   scaleBias[3], 0.00001f);
    }
}

