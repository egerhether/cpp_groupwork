#include "value.ih"

void Value::requireSpecial(Token token)
{
    switch (token)
    {
        case QUIT:
        break;
        
        case ERROR:
        break;
        
        case IDENT:
        break;
        
        default:
            cout << "Internal error: forcing token " << token << 
                    " to value QUIT\n";
            d_type = QUIT;
        break;
    }
}


// ES: Use switch
