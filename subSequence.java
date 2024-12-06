import java.util.*;
//import java.util.StringBuilder;

class subSequence {
    
    public static void subSequences(String str,StringBuilder output,int index){
        if(index >= str.length()){
            System.out.println("->" + output);
            return;
        }
        
        subSequences(str,output,index+1);
        
       
        //output = output + ch;
       output.append(str.charAt(index));
        
        subSequences(str,output,index+1);
        if (output.length() > 0) {
            output.deleteCharAt(output.length() - 1);
        }
        
    }
    
    public static void main(String[] args) {
        String str = new String("abc");
        //String output = new String("");
        int index = 0;
        subSequences(str,new StringBuilder(),index);
    }
}