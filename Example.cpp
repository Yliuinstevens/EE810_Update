//this is a function to delete the assignment on Canvas, and we are going to make a package above the update function
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

	curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "Delete");
	curl_easy_setopt(hnd, CURLOPT_URL, "https://sit.instructure.com/api/v1/courses/133/assignments/46025");

	struct curl_slist *headers = NULL;
	headers = curl_slist_append(headers, "authorization: Bearer xxxxxxxxx");
	headers = curl_slist_append(headers, "accept: application/json");
	headers = curl_slist_append(headers, "content-type: application/json");
	curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);
  // Cannot post or put the data now, meet some problem
	//curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, "{\"id\": \"46025\", \"description\": \"\"}");
	CURLcode ret = curl_easy_perform(hnd);
	system("pause");
	return 0;
}




