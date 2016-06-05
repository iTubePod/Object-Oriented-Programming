#include<iostream>
#include<string.h>
using namespace std;
void remove_alternate_dup(char* str)
{
    int len=strlen(str);
    bool *h=(bool*)calloc(sizeof(bool),len);
    int tail=0;
    int i=0;
    int flag_space=0;
    while(i<len)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            if(str[i]>=65&&str[i]<=90)
            {
                if(h[str[i]]==0||h[str[i]+32]==0)
                {
                    h[str[i]]=1;
                    h[str[i]+32]=1;
                    str[tail++]=str[i++];
                }
                else if(h[str[i]]==1||h[str[i]+32]==1)
                {
                    h[str[i]]=0;
                    h[str[i]+32]=0;
                    i++;
                    
                }
                
            }
            else if(str[i]>=97&&str[i]<=122)
            {
                if(h[str[i]]==0||h[str[i]-32]==0)
                {
                    h[str[i]]=1;
                    h[str[i]-32]=1; 
                    str[tail++]=str[i++]; 
                } 
                else if(h[str[i]]==1||h[str[i]-32]==1) 
                { 
                    h[str[i]]=0; 
                    h[str[i]-32]=0; 
                    i++; 
                    
                } 
            } 
            
        } 
        else 
        { 
            if(flag_space==0) 
            { 
                str[tail++]=str[i++]; 
                flag_space=1; 
            } 
            else 
            { 
                flag_space=0; 
                i++; 
            } 
            
            
            
        } 
        
    } 
    
    str[tail]='\0'; 
} 
int main() 
{ 
    char str[]="Today is the day"; 
    remove_alternate_dup(str); 
    cout<<str<<endl; 
    return 0; 
}