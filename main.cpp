#include <iostream>
#include "bitmap.h"
#include <vector>
#include <string>
using namespace std;

int main()
{
        Bitmap image;
        string imageName;
        bool validBmp=false;
        do{
            cout<<"Upload an image in the format Windows bmp"<<endl; //ask the user for the file name of an image in the format Windows BMP
            cin >> imageName;
            image.open(imageName);
            validBmp=image.isImage();  //determine if the file is correct or if there was an error
        }while(validBmp != true);
                vector<vector <Pixel> > bmp;
                Pixel rgb; //determine char r,g,b; r=red, g=green, b=blue;
                //       image.open("image");

                bmp=image.toPixelMatrix();
                //count the "rows" or width and "columns" or height of the image
                cout<<"Rows: " << bmp.size(); //row
                cout<<"\n"<<"Columns: " << bmp[0].size()<<endl;//col
                for(int i =0; i< bmp.size(); i++)
                {
                        for (int j=0; j<bmp[0].size();j++)
                        {
                                rgb= bmp[i][j];
                                int avg = (rgb.red +rgb.green +rgb.blue)/3;
                                rgb.red = avg;
                                rgb.green = avg;
                                rgb.blue = avg;
                                bmp[i][j] = rgb;

                        }
                }

               image.fromPixelMatrix(bmp);
               image.save("newImage.bmp");


                return 0;
}

//make each pixle into a vector with cooridates <r,g,b>
//determine values of r,g, and b
//convert the every pixle in the image from colors to a gray scale by taking the sum of the chars and dividing by the number of chars (r+g+b)/3
//repeat this for each vector or pixle until entire image has been converted
//save new image 


