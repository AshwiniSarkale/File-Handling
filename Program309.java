// java file is present or not means exists

import java.util.*;
import java.io.*;

class Program309
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file : ");
        String FileName = sobj.nextLine();

        try
        {
           File fobj = new File(FileName);

           boolean bret = false;

           bret =  fobj.exists();
           if(bret == true)
           {
               System.out.println("File is present");
           }
           else
           {
                System.out.println("Three is no such file");
           }
        }

        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }
}