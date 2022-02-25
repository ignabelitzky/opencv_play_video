# Play Video File (with opencv)
Simple program that reproduce video files.

## To compile in Linux
```console
g++ -o player main.cpp \`pkg-config --cflags --libs opencv\`
```

## To execute
```console
./player video_example.avi
```

## How to install opencv
to build the libraries and demos, you'll need GTK+ 2.x or higher, including headers.  
You'll also need gcc and the essential development packages, cmake and libtbb (Intel thread building blocks), and  
optionally zlib, libpng, libjpeg, libtiff, and libjasper with development files (i.r, the versions with -dev at the  
end of their package names).  

You'll need Python 2.6 or later with heades installed (developer package), as well as NumPy in order to make Python  
bindings work. You will also need libavcodec and the other libav* libraries (including headers) from ffmpeg.  

For the latter, install libav/ffmpeg packages supplied wih your distribution or download ffmpeg from http://www.ffmpeg.org.  

To actually build the library, you will need to unpack the .zip file and go into the created source directory, and do  
the following:

```console
mkdir realese && cd release  
cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local ..  
make  
sudo make install # optional
```

The first command create a new subdirectory and move you into it. The second command tells CMake how to configure  
your build. The example options we give are probably the right ones to get you started.  

## License
[GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html)
