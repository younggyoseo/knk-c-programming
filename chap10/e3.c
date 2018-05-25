/* Exercises 3
 * This program could contain infinite number of variables named i with nested blocks.
 */
 
int main(void)
{
    int i = 0;
    {
        int i = 1;
        {
            int i = 2;
            {
                int i = 3;
                // .....
            }
        }
    }
}
