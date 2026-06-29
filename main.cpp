#include<iostream>
int main()
{
    int i{1};
    const int end{10};
    do
    {
        std::cout<< i << ' '; ++i;

    } while(i<=end);
    std::cout<<std::endl;
    i=1;
    while(i<=end)
    {
        std::cout<<i<<' ';++i;

    }
    std::cout<<std::endl;

    
    for(i=1;i<=end;++i)
        std::cout<<i<<' ';
    std::cout<<std::endl;
    // std::cout<<"Enter 1,2 2, or 3 : ";
    // int x{};
    // std::cin>>x;
    // switch(x)
    // {
    //     case 1 : std::cout<<"one\n";break;
    //     case 2 : std::cout<<"two\n";break;
    //     case 3 : std::cout<<"three\n";break;
    //     default : std::cout<<"unknown\n";

    // }
    // std::cout<<"Enter two integers :  ";
    // int x{},y{},z{};
    // std::cin>> x >> y;
    // //if(x>y) z=x; else z=y;
    // z= x>y ? x:y;
    // std::cout<<z<<std::endl;

    // if(x>0) std::cout<<"positive\n";
    // else if(x<0) std::cout<<"negative\n";
    // else 
    //     std::cout<<"zero\n";
    



    // int n{2};
    // std::cout<<2*n++<<std::endl;
    // std::cout<<n<<std::endl;

    // int m{2};
    // std::cout<<2*++m<<std::endl;
    // std::cout<<m<<std::endl;



    // int numOfStudent{30};
    // numOfStudent=22;
    // std::cout << numOfStudent<<std::endl;
    // std::cout<<sizeof(numOfStudent)<<std::endl;
    // std::cout<<typeid(numOfStudent).name()<<std::endl;
    // std::cout<<typeid(static_cast<double>(numOfStudent)).name()<<std::endl;

    return 0;
}
