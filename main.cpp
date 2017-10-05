#include <iostream>
#include "bitmap.h"
#include <vector>
using namespace std;

int main()
{
        //determind char r,g,b;
        //r=red, g=green, b=blue;
        Bitmap image;
        vector<vector <Pixel> > bmp;
        Pixel rgb;
         
        image.open("machupicchu.bmp");
        bmp=image.toPixelMatrix();
        cout<<"Rows: " << bmp.size(); //row
        cout<<"\n"<<"Columns: " << bmp[0].size();//col

        
        //ask the user for the file name of an image in the format Windows BMP
        //determine if the file is correct or if there was an error
        //count the "rows" or width and "columns" or height of the image
        //make each pixle into a vector with cooridates <r,g,b>
        //determine values of r,g, and b
        //convert the every pixle in the image from colors to a gray scale by taking the sum of the chars and dividing by the number of chars (r+g+b)/3
        //repeat this for each vector or pixle until entire image has been converted
        //save new image 

        return 0;
}
