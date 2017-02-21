public class SimpleDotComGame {

    public static void main (String[] args) {
        GameHelper helper = new GameHelper();
        SimpleDotCom netscape = new SimpleDotCom();
        int numberOfGuesses = 0;
        int x = (int)(Math.random() * 5);
        int[] locations = {x, x + 1, x + 2};
        netscape.setLocationCells(locations);
        boolean isAlive = true;
        while (isAlive == true) {
            String userGuess = helper.getUserInput("Enter a number: ");
            String result = netscape.checkYourself(userGuess);
            numberOfGuesses++;
            if (result.equals("kill")) {
                isAlive = false;
                System.out.println("You took " + numberOfGuesses + " guesses.");
            }
        }
    }
}
