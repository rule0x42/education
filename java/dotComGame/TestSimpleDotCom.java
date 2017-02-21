public class TestSimpleDotCom {

    public static void main (String[] args) {
        SimpleDotCom test_run = new SimpleDotCom();
        int[] locations = {1, 2, 3};
        test_run.setLocationCells(locations);
        String userGuess = "1";
        String result = test_run.checkYourself(userGuess);
    
        String testResult = "failed";
        if (result.equals("hit") ) {
            testResult = "passed";
        }
        System.out.println(testResult);
    }
}
