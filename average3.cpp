#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float N1,N2,N3,N4;
    cin>>N1>>N2>>N3>>N4;
    float Average=(N1*2)+(N2*3)+(N3*4)+(N4*1);
    Average=Average/10;
    printf("Media: %.1f\n",Average);
    if (Average>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }else if (Average<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    if (Average>=5.0 && Average<=6.7)
    {
        cout<<"Aluno em exame."<<endl;
        float n;
        cin>>n;
        printf("Nota do exame: %.1f\n",n);
        float Finalaverage=((n+Average)/2);
        if (Finalaverage>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }else
        {
            cout<<"Aluno reprovado."<<endl;
        }
        printf("Media final: %.1f\n",Finalaverage);

     
    }



    return 0;
}