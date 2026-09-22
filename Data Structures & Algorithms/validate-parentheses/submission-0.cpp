class Solution {
public:
    bool isValid(string s) {
        stack <char> st;

        for(char x:s)
        {
            if(x=='('||x=='{'||x=='[')
            {
                st.push(x);
            }

            else{
                if(st.empty()){return false;}

                char y=st.top();
                st.pop();
                if((x==')'&&y!='(')||(x=='}'&&y!='{')||(x==']'&&y!='['))
                {return false;}
            }
        }

        if(st.empty()){return true;}
        else{return false;}
    }
};
