class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setlength(int l);
      void setwidth(int w);
      void setheight(int h);
      int getlength();
      int getwidth();
      int getheight();
      int calcVolume();
};
