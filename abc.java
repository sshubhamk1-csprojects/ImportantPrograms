public class abc{
    public static void main(String[] args) {
        long startTime=System.nanoTime();
        for(int i=0;i<100000;i++){
            for(int j=0;j<100000;j++){

            }
        }
        long endTime=System.nanoTime();
        System.out.println("Time in nanosecond: "+(endTime-startTime));
    }
}