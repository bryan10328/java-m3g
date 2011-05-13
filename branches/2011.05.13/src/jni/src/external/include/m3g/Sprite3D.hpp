#ifndef __M3G_SPRITE3D_HPP__
#define __M3G_SPRITE3D_HPP__

#include "m3g/Node.hpp"
#include <iosfwd>


namespace m3g {

    class Image2D;
    class Appearance;
    class RayIntersection;
    class Camera;

    /**
     * @~English  A scene graph node that represents a 2-dimensional image with a 3D position.
     * @~Japanese 3Dの位置情報を持った2D画像を表すシーングラフノード.
     */
    class Sprite3D : public Node
    {

        /**
         * @~English  Structure of defining crop region, for inner use.
         * @~Japanese クロップ領域を定義する内部使用の構造体.
         */
        struct CropRect
        {
            CropRect (float x_, float y_, float width_, float height_) : x(x_), y(y_), width(width_), height(height_) {};
            float x;
            float y;
            float width;
            float height;
        };

        /**
         * @~English  OpenGL data, for inner use.
         * @~Japanese OpenGLで使用するデータを定義する内部使用の構造体.
         */
        struct GLData {
            GLData (unsigned int t, unsigned int p, unsigned int tc, unsigned int i) : 
                tex_object(t), vbo_positions(p), vbo_tex_coords(tc), vbo_indices(i) {};
            unsigned int tex_object;
            unsigned int vbo_positions;
            unsigned int vbo_tex_coords;
            unsigned int vbo_indices;
        };


    public:

        /**
         * @~English  A scene graph node that represents a 2-dimensional image with a 3D position.
         * @~Japanese 指定されたスケーリングモード、画像、アピアランスを持ったSprite3Dの作成.
         */
        Sprite3D (bool scaled, Image2D* image, Appearance* appearance);

        /**
         * @~English  Destructs this object.
         * @~Japanese このオブジェクトを削除するデストラクタ.
         */
        virtual ~Sprite3D ();

        /**
         * @~English  Creates a duplicate of this Object3D. 
         * @~Japanese このオブジェクトの複製の作成.
         */
        Sprite3D* duplicate () const;

        /**
         * @~English  Gets the current Appearance of this Sprite3D.
         * @~Japanese このSprite3Dのカレントのアピアランスを取得.
         */
        Appearance* getAppearance () const;

        /**
         * @~English  Gets the current cropping rectangle height within the source image.
         * @~Japanese ソース画像のカレントのクロップ領域の高さの取得.
         */
        int getCropHeight () const;

        /**
         * @~English  Gets the current cropping rectangle width within the source image.
         * @~Japanese ソース画像のカレントのクロップ領域の高さの取得.
         */
        int getCropWidth () const;

        /**
         * @~English  Retrieves the current cropping rectangle X offset relative to the source image top left corner.
         * @~Japanese クロップ矩形のソース画像の左上からのX方向の相対オフセット.
         */
        int getCropX () const;

        /** 
         * @~English  Retrieves the current cropping rectangle Y offset relative to the source image top left corner.
         * @~Japanese クロップ矩形のソース画像の左上からのY方向の相対オフセット.
         */
        int getCropY () const;

        /**
         * @~English  Gets the current Sprite3D image.
         * @~Japanese カレントのSprite3D画像の取得.
         */
        Image2D* getImage () const;

        /**
         * 座標は全てNDC座標で渡す.
         */
        bool intersect (const Vector& org, const Vector& dir, const Camera* cam, RayIntersection* ri) const;

        /**
         * @~English  Returns the automatic scaling status of this Sprite3D.
         * @~Japanese このSprite3Dの自動スケーリングの状態を返す.
         */
        bool isScaled () const;

        /**
         * @~English  Sets the Appearancce of this Sprite3D.
         * @~Japanese このSprite3Dのアピアランスの設定.
         */
        void setAppearance (Appearance* appearance);

        /**
         * @~English  Sets a cropping rectangle within the source image.
         * @~Japanese ソース画像のクロッピング矩形の設定.
         */
        void setCrop (int crop_x, int crop_y, int crop_width, int crop_height);

        /**
         * @~English  Sets the sprite image to display.
         * @~Japanese 表示するスプライト画像の設定.
         */
        void setImage (Image2D* image);


        /**
         * @~English  Rrint out information of this object, for only debug.
         * @~Japanese このSprite3Dクラスの情報を表示する。デバッグ用.
         */
        virtual std::ostream& print (std::ostream& out) const;

    protected:

        /**
         * @~English  
         * @~Japanese 
         */
        virtual void addAnimationTrack_xxx (AnimationTrack* animation_track, bool accepted);

        /**
         * @~English  
         * @~Japanese 
         */
        virtual int animate_xxx (int world_time);

        /**
         * @~English  
         * @~Japanese 
         */
        virtual int getReferences_xxx (Object3D** references) const;

        /**
         * @~English  
         * @~Japanese 
         */
        virtual void render_xxx (RenderState& state) const;


    private:

        /**
         * @~English  Retrieves center of scaled sprite in NDC coordinate.
         * @~Japanese スケールドスプライトのNDC座標での中心点を取得.
         */
        Vector getCenterPoint (const Camera* cam) const;

        /**
         * @~English  Retrieves width of scaled sprite in NDC coordinate.
         * @~Japanese スケールドスプライトのNDC座標での横幅を取得.
         */
        float getScaledWidth (const Camera* cam) const;

        /**
         * @~English  Retrieves height of scaled sprite in NDC coordinate.
         * @~Japanese スケールドスプライトのNDC座標での立て幅を取得.
         */
        float getScaledHeight (const Camera* cam) const;


        /**
         * @~English  Retrieves width of unscaled sprite in NDC coordinate.
         * @~Japanese アンスケールドスプライトのNDC座標での横幅を取得.
         */
        float getUnscaledWidth () const;

        /**
         * @~English  Retrieves height of unscaled sprite in NDC coordinate.
         * @~Japanese アンスケールドスプライトのNDC座標での立て幅を取得.
         */
        float getUnscaledHeight () const;

        /**
         * @~English  Retrieves tex coord(bottom-left) of sprite.
         * @~Japanese 左下のテクスチャー座標を計算して取得.
         */
        Vector getTexCoord0 () const;

        /**
         * @~English  Retrieves tex coord(top-right) of sprite.
         * @~Japanese 右上のテクスチャー座標を計算して取得.
         */
        Vector getTexCoord1 () const;

    protected:

        /**
         * @~English  
         * @~Japanese 
         */
        virtual Sprite3D* duplicate_xxx (Object3D* obj) const;


    private:
        Sprite3D (const Sprite3D& spr);
        Sprite3D& operator= (const Sprite3D& spr);

    private:
        bool         scaled;
        Image2D*     image;
        Appearance*  appearance;
        CropRect     crop;
        GLData       gl;
    };

} // namespace m3g {

std::ostream& operator<< (std::ostream& out, const m3g::Sprite3D& s);


#endif
