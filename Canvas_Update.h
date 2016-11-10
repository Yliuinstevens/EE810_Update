#ifndef CanvasUpdate_H
#define CanvasUpdate_H
#include <iostream>
#include <string>
#include <curl/curl.h>
#include <Canvas_Download>



class Canvas_Update
{
private:
    FILE *Data;// The grade file which we need to update to canvas
    string *filename;//the file name of the grade file
    const static string api;//URL of API
    string Auth;//the Auth used to get access to API
    
 
public:
    Canvas_Update();//construction function
    String writeJson();//convert the grades data into json 
    void writeRequest();//write the request
};




#endif
