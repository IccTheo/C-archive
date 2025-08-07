#include <iostream>
#include <iomanip>//input output manipulation, via formating

int main(){

    std::cout << std::setw(30)<<"Leaderboard\n";
    //scoreboard
    std::left;
    std::cout<<"Name"<<std::setw(30)<<"Score"<<std::setw(15)<<"kills"<<std::endl;
    /*player names
    Take note that you can add variables to score and kills incase of a everchanging / update status on it */
    std::cout<<"IC Theo"<<std::setw(27)<<"488"<<std::setw(15)<<"41"<<std::endl;
    std::cout<<"IC Edward"<<std::setw(25)<<"425"<<std::setw(15)<<"39"<<std::endl;
    std::cout<<"IC Edwin"<<std::setw(26)<<"412"<<std::setw(15)<<"37"<<std::endl;
    std::cout<<"La Neptune"<<std::setw(24)<<"398"<<std::setw(15)<<"35"<<std::endl;    
    std::cout<<"Nerf Nodoka"<<std::setw(23)<<"388"<<std::setw(15)<<"33"<<std::endl;
    
    return 0;
}