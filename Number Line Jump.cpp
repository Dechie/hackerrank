/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {
    string yes = "YES", no = "NO", result;
    int jump1, jump2, stop;
    
    jump1 = x1; jump2 = x2;
   // x1 = 0, v1 = 3, x2 = 4, v2 = 2
    result = no;
    do 
    {     
        if (stop == 5000)
            break;
            
        stop++;
        
        jump1 += v1;
        jump2 += v2;
        
        if (jump1 == jump2)
        {
            result = yes;
            break;
        }
    } while (jump1 != jump2);
    
    return result;
}
