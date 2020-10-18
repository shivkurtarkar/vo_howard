#include <opencv2/opencv.hpp>
#include <iostream>
#include <algorithm>

char* getCmdOption(char **begin, char **end, const std::string& option){
	char** iter = std::find(begin, end, option);
	if(iter != end && ++iter != end){
		return *iter;
	}
	return 0;
}

bool getCmdOptionExists(char **begin, char **end, const std::string& option){
	return std::find(begin, end, option) != end;
}

int main(int argc, char** argv){

	if(getCmdOptionExists(argv, argv+argc, "-h")){
		std::cout<<"HELP -- is not implemented yet \n";
		// TODO: print help
		return 0;
	}

	char* filename = getCmdOption(argv, argv+argc, "-f");
	if(filename){
		std::cout<<" filename: "<<filename<<std::endl;
	}else{
		std::cout<<"please specify filename using '-f <filename>' \n";
	}
	
	return 0;

}