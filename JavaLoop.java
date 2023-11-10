 

public class JavaLoop {

	public static void main(String[] args) {
		long start = System.currentTimeMillis();  
		long j = 0;		
		for(long x=0; x < 100000000; x++) { 
 			//System.out.println("x=" + x);	
			j = x;
		}
 		 
		long end = System.currentTimeMillis(); 
                System.out.println("Counting to 100000000 takes " + (end - start) + " millisec");
	

	}

}
