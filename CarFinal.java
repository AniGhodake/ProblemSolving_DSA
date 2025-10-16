class CarFinal{
    final int noOfWheels;
    final String model;
    final String engineInLiters;


    public CarFinal(int noOfWheels, String model, String engineInLiters){
        this.noOfWheels = noOfWheels;
        this.model = model;
        this.engineInLiters = engineInLiters;
    }
    public static void main(String args[]){
        CarFinal cr = new CarFinal(4, "Siera", "3500CC");
        System.out.print(cr.model);
    }
}