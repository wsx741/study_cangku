#ifndef PROXY_H
#define PROXY_H
#include <string>
class Image{
    public:
        virtual ~Image() = default;
        virtual void dispImage() = 0;
};

class ImageReady : public Image{
    public:
        ImageReady(std::string filepath);
        void dispImage() override;

    protected:
        void loadImage();
        std::string filepath;
};

class ImageProxy : public Image{
    public:
        ImageProxy(std::string filepath);
        void dispImage() override;

    protected:
        std::string filepath;
        ImageReady *img = nullptr;
};

#endif








