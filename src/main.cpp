//============================================================================
// Name        : fitimage.cpp
// Author      : Sébastien Serre
// Version     :
// Copyright   : Your copyright notice
// Description : Fits/WCS/Tensorflow
//============================================================================

#include <CCfits/CCfits>
#include <iostream>

using namespace std;

int main() {

    CCfits::FITS *img = new CCfits::FITS( "support/images/img1.fits", 
                                                           CCfits::Read, true);
    CCfits::PHDU &image = img->pHDU();

    valarray<unsigned long> contents;
    image.readAllKeys();
    image.read(contents);

    cout << image << endl;

    long ax1(image.axis(0));
    long ax2(image.axis(1));

    for (long i = 0; i < ax2; i+=10) {
        ostream_iterator<short> c(cout, "\t");
        copy(&contents[i*ax1], &contents[(i+1)*ax1 - 1], c);
        cout << '\n';
    }

	return 0;
}
