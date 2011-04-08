
#ifndef __M3G_WRITER_HPP__
#define __M3G_WRITER_HPP__

#include <iosfwd>
#include "OutMemoryStream.hpp"
#include "M3GStruct.hpp"


/**
 */
class M3GWriter
{
public:
    M3GWriter (const char* name);
    ~M3GWriter ();

    void writeID      ();
    void startSection (int compression_scheme=0);
    void endSection   ();
    void startObject  (int object_type, unsigned int* object_index);
    void endObject    ();

    void writeHeader              (const M3GHeaderStruct&              header              );
    void writeExternalReference   (const M3GExternalReferenceStruct&   external_reference  );
    void writeAnimationController (const M3GAnimationControllerStruct& animation_controller);
    void writeAnimationTrack      (const M3GAnimationTrackStruct&      animation_track     );
    void writeAppearance          (const M3GAppearanceStruct&          appearance          );
    void writeBackground          (const M3GBackgroundStruct&          background          );
    void writeCamera              (const M3GCameraStruct&              camera              );
    void writeCompositingMode     (const M3GCompositingModeStruct&     compositing_mode    );
    void writeFog                 (const M3GFogStruct&                 fog                 );
    void writeGroup               (const M3GGroupStruct&               group               );
    void writeImage2D             (const M3GImage2DStruct&             image               );
    void writeIndexBuffer         (const M3GIndexBufferStruct&         index_buffer        );
    void writeKeyframeSequence    (const M3GKeyframeSequenceStruct&    keyframe_sequence   );
    void writeLight               (const M3GLightStruct&               light               );
    void writeMaterial            (const M3GMaterialStruct&            material            );
    void writeMesh                (const M3GMeshStruct&                mesh                );
    void writeMorphingMesh        (const M3GMorphingMeshStruct&        morphing_mesh       );
    void writeNode                (const M3GNodeStruct&                node                );
    void writeObject3D            (const M3GObject3DStruct&            object3d            );
    void writePolygonMode         (const M3GPolygonModeStruct&         polygon_mode        );
    void writeSkinnedMesh         (const M3GSkinnedMeshStruct&         skinned_mesh        );
    void writeSprite3D            (const M3GSprite3DStruct&            sprite              );
    void writeTransformable       (const M3GTransformableStruct&       transformable       );
    void writeTriangleStripArray  (const M3GTriangleStripArrayStruct&  tri_strip_array     );
    void writeTexture2D           (const M3GTexture2DStruct&           texture             );
    void writeVertexArray         (const M3GVertexArrayStruct&         vertex_array        );
    void writeVertexBuffer        (const M3GVertexBufferStruct&        vertex_buffer       );
    void writeWorld               (const M3GWorldStruct&               world               );
    void writeString              (const char*                         format, ...         );


    unsigned int adler32 (const unsigned char* data, int len) const;
    unsigned int adler32 (const char* file_name, int start, int end) const;

    void putBoolean      (bool           value);
    void putByte         (char           value);
    void putUInt16       (unsigned short value);
    void putInt32        (int            value);
    void putUInt32       (unsigned int   value);
    void putFloat32      (float          value);
    void putRGB          (unsigned int   value);
    void putRGBA         (unsigned int   value);
    void putByteArray    (const char*    value, int size);
    void putFloat32Array (const float*   value, int size);
    void putString       (const char*    str);

    float* calcBias  (float** vector_value, int keyframe_count, int component_count) const;
    float* calcScale (float** vector_value, int keyframe_count, int component_count) const;

private:

    const char*      name;
    OutMemoryStream* stream;


    unsigned int object_index;
    unsigned int start_of_section;
    unsigned int start_of_object;             // ここstart_of_objectsの間違えでは?
    unsigned int position_of_header_section;
    unsigned int position_of_header;
    unsigned int position_of_header_checksum;

    int compression_scheme;
};

#endif

