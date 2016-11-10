This repository is for the update part of EE810 Canvas group

In update section,
we use libcurl lib https://curl.haxx.se/ and JosephP91/curlcpp lib https://github.com/JosephP91/curlcpp 
This two libs is used to connect with Canvas API, and we use the api to update the data to Canvas.

The use in project 

        #include <iostream>
        #include <string>
        #include <curl/curl.h>
        using namespace std;

        #ifdef _debug
        #pragma comment(lib, "/libcurl_a_debug.lib")
        #else
        #pragma comment(lib, "/libcurl_a.lib")
        #endif
        int main()
        {
                CURL *hnd = curl_easy_init();

                curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "PUT");
                curl_easy_setopt(hnd, CURLOPT_URL, "https://sit.instructure.com/api/v1/courses/133/assignments/46025");

                struct curl_slist *headers = NULL;
                headers = curl_slist_append(headers, "authorization: Bearer 1030~OpcB3LJZe8H6l2yp2Tu8E6CtN7QuRyWYqFiLD1fVGABKI0utFN7Sdd43S3kcwdIk");
                headers = curl_slist_append(headers, "accept: application/json");
                headers = curl_slist_append(headers, "content-type: application/json");
                curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);

                curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, "{\"id\": \"46025\", \"description\": \"\"}");

                CURLcode ret = curl_easy_perform(hnd);
                system("pause");
                return 0;
        }
