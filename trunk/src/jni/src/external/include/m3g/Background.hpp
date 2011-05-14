#ifndef __M3G_BACKGROUND_HPP__
#define __M3G_BACKGROUND_HPP__

#include <iosfwd>
#include "m3g/Object3D.hpp"


namespace m3g {

    class Image2D;

    /**
     * @~English  Defines whether and how to clear the viewport.
     * @~Japanese ビューポートのクリアとその設定.
     */
    class Background : public Object3D
    {
    public:

        /**
         * @~English  Specifies that the imaginary pixels outside of 
         *            the source image bondaries in X or Y direction
         *            are considered to have the background color.
         * @~Japanese 背景画像の領域外を指定した場合、背景色を返す設定を表す定数.
         */
        static const int BORDER = 32;
        /**
         * @~English  Specifies that the imaginary pixels outside of 
         *            the source image bondaries in X or Y direction
         *            are considered to have the same color as the pixel 
         *            in the correspondign position in the source iamge.
         * @~Japanese 背景画像の領域外を指定した場合、ソース画像を
         *            繰り返す設定を表す定数.
         */
        static const int REPEAT = 33;

        /**
         * @~English  Image mode of x or y direction, for inner use .
         * @~Japanese 画像処理モードを定義する内部使用の構造体.
         */
        struct ImageMode {
            ImageMode (int mode_x, int mode_y) : x(mode_x), y(mode_y) {};
            int x;
            int y;
        };

        /**
         * @~English  Crop rectangle, for inner use.
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
         * @~English  Construct a new Backgrround with default values.
         * @~Japanese Backgroundオブジェクトの作成.
         */
        Background ();

        /**
         * @~English  このBackgroundクラスのデストラクタ.
         * @~Japanese デストラクタ.
         */
        virtual ~Background ();

        /**
         * @~English  Creates a duplicate of this Object3D. 
         * @~Japanese このオブジェクトの複製の作成.
         */
        Background* duplicate () const;


        /**
         * @~English  Retrieves the current background color.
         * @~Japanese カレントの背景色の取得
         */
        int getColor () const;

        /**
         * @~English  Gets the current cropping rectangle height within the source image. 
         * @~Japanese カレントのソースイメージのクロップ領域の高さの取得.
         */
        int getCropHeight () const;

        /** 
         * @~English  Gets the current cropping rectangle width within the source image. 
         * @~Japanese カレントのソースイメージのクロップ領域の幅の取得
         */
        int getCropWidth () const;
    
        /**
         * @~English  Retrieves the current cropping recttangle X offset relativ to the source image top left corner.
         * @~Japanese クロップ領域のソースイメージ左上からのX方向の相対オフセットの取得.
         */
        int getCropX () const;

        /**
         * @~English  Retrieves the current cropping recttangle Y offset relativ to the source image top left corner.
         *  @~Japanese クロップ領域のソースイメージ左上からのY方向の相対オフセットの取得.
         */
        int getCropY () const;

        /**
         * @~English  Gets the current background image.
         * @~Japanese カレントのバックグラウンドイメージの取得.
         */
        Image2D* getImage () const;

        /**
         * @~English  Gets the current background image repeat mode for the X dimensiton.
         * @~Japanese カレントのバックグラウンドイメージのX方向のリピートモードの取得.
         */
        int getImageModeX () const;

        /**
         * @~English  Gets the current background image repeat mode for the Y dimensiton.
         * @~Japanese カレントのバックグラウンドイメージのY方向のリピートモードの取得.
         */
        int getImageModeY () const;

        /**
         * @~English  Queries whether color buffer clearing is enabled. 
         * @~Japanese カラーバッファーのクリアが有効かどうかの問い合わせ.
         */
        bool isColorClearEnabled () const;

        /**
         * @~English  Queries whether depth buffer clearing is enabled.
         * @~Japanese デプスバッファーのクリアが有効かどうかの問い合わせ.
         */
        bool isDepthClearEnabled () const;

        /**
         * @~English  Sets the background color.
         * @~Japanese バックグラウンドカラーの設定.
         */
        void setColor (int argb);

        /**
         * @~English  Enables or disables color buffer clearing.
         * @~Japanese カラーバッファーのクリアの有効化または無効化.
         */
        void setColorClearEnable (bool enable);

        /**
         * @~English  Sets a cropping rectangle within the background image.
         * @~Japanese バックグラウンドイメージのクロップ領域の設定.
         */
        void setCrop (int crop_x, int rop_y, int crop_width, int crop_height);

        /**
         * @~English  Enables or disables depth buffer clearing.
         * @~Japanese デプスバッファーのクリアの有効化または無効化.
         */
        void setDepthClearEnable (bool enable);
    
        /**
         * @~English  Sets the background image, or switches from background image mode to background color mode.
         * @~Japanese 背景画像の設定、または背景画像モードと背景色モードの切り替え.
         */
        void setImage (Image2D* image);

        /**
         * @~English  Sets the background iamge repeat mode for the X and Y directions.
         * @~Japanese 背景画像のX方向およびY方向のリピートモードの設定.
         */
        void setImageMode (int mode_x, int mode_y);

        /**
         * @~English  Print out information of this object.
         * @~Japanese このBackgroundクラスの情報を表示する。デバッグ用.
         */
        virtual std::ostream& print (std::ostream& out) const;

        /**
         * @~English  Render this object as default, for inner use.
         * @~Japanese このオブジェクトをデフォルトでレンダリングする内部使用の関数.
         */
        static void renderX ();

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
        virtual Background* duplicate_xxx (Object3D* obj) const;

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
        Background (const Background& bg);
        Background& operator= (const Background& bg);


    private:
        bool      color_clear_enable;
        bool      depth_clear_enable;
        int       color;
        Image2D*  image;
        ImageMode mode;
        CropRect  crop;
        GLData    gl;
    };

} //namespace m3g {

std::ostream& operator<< (std::ostream& out, const m3g::Background& bg);



#endif
