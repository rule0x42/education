public class SimpleDotCom {
    
    private int[] locationCells;
    private int numOfHits;


    public void setLocationCells(int[] cells) {
        locationCells = cells;
    }

    public String checkYourself(String stringGuess) {
        int guess = Integer.parseInt(stringGuess);
        String result = "miss";

        for (int cell: locationCells) {
        	if (cell == guess) {
        		numOfHits++;
        		result = "hit";
        		break;
        	}
        }

        if (numOfHits == locationCells.length) {
        	result = "kill";
        }
        
        System.out.println(result);

        return result;
    }
}
