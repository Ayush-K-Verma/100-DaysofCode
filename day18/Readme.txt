1.      using switch case in infinite loop , here we are using exit(0);

        There are primarily two types of exit();
        1. exit(0) which is the exit successfully which means program has run successfully and then it is terminated. i.e. program has been executed without any error or interrupt.
        2. exit(1) Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors.

        #include<iostream>
        #include<climits>
        using namespace std;


        int main()
        {
            int n;
            cin >> n;
            while(INT_MIN){
                switch (n){
                    case 1: cout <<"bla"<< endl;
                    break;
                    case 2: cout << "int" << endl;
                    default: cout << "defalut" << endl;
                }
                exit(0);
            }
            return 0;
        }

2.      Why we cant use the continue statement inside the switch?
        We can not use a continue with the switch statement. The break statement terminates the whole loop early. The continue statement brings the next iteration early. It stops the execution of the loop.