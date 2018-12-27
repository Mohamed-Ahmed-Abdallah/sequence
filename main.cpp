#include <iostream>
#include <fstream>
#include <cstring>

#include "sequence.cpp"
#include "DNA.cpp"
#include "RNA.cpp"
#include "codons.cpp"


using namespace std;

int main()
{

    int num;
    int n;
    cout<<"1-for DNA\n2-for RNA\n3-LoadCodonsFromFile\n\n";

    for (int i=0; i<=20; i++)
    {

        cout<<"please enter a number : ";
        cin>>num;
        cout<<endl<<endl;

        if (num==1)
        {
            cout<<"You choose DNA sequence\n\n";
            cout<<"PLEASE WRITE LETTERS A,C,G,T ONLY\n\n";
            cout<<"Choose the DNA Genre\n\n1-promoter  2-motif  3-tail  4-noncoding\n\n";
            cout<<"Please Enter a number for genre : ";
            cin>>n;
            cout<<endl<<endl;

            if (n==1)
            {
                cout<<"Promoter\n"<<endl;
            }
            else if (n==2)
            {
                cout<<"motif\n"<<endl;
            }
            else if (n==3)
            {
                cout<<"tail\n"<<endl;
            }
            else if (n==4)
            {
                cout<<"noncoding\n"<<endl;
            }

            cout<<"please enter the sequence : ";
            DNA d(5);

            cout<<"\n\nThe BuildComplementaryStrand is : ";
            d.BuildComplementaryStrand();
            d.Print();

            cout<<"\n\nThe sequence after convert to RNA  is : ";
            d.ConvertToRNA();
            d.Print();
            cout<<"\n\n****************************************************\n\n";
        }

        else if (num==2)
        {
            cout<<"You choose RNA sequence\n\n";
            cout<<"PLEASE WRITE LETTERS A,C,G,U ONLY\n\n";
            cout<<"Choose the RNA Genre\n\n1-mRNA   2-pre_mRNA   3-mRNA_exon   4-mRNA_intron\n\n";
            cout<<"Please Enter a number for genre : ";
            cin>>n;
            cout<<endl<<endl;

            if (n==1)
            {
                cout<<"mRNA\n"<<endl;
            }
            else if (n==2)
            {
                cout<<"pre_mRNA\n"<<endl;
            }
            else if (n==3)
            {
                cout<<"mRNA_exon\n"<<endl;
            }
            else if (n==4)
            {
                cout<<"mRNA_intron\n"<<endl;
            }

            cout<<"please enter the sequence : ";
            RNA R(5);
            cout<<"\n\nThe sequence after convert to RNA  is : ";
            R.ConvertToDNA();
            R.Print();
            cout<<"\n\n****************************************************\n\n";
        }


        else if (num==3)
        {
            CodonsTable c;
            c.LoadCodonsFromFile();
            cout<<"\n\n****************************************************\n\n";
        }

    }
}
