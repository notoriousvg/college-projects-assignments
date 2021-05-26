
//Written By:   Victor Garcia
//Assignment: Practice
//Initiated Date: 05/23/2021
//Last Updated: 05/26/2021
//Description: Write a program that will tell you the output of chocolate bars that
//should be consumed to maintain a certain weight for the appropriate sex depending
//on certain variables: age, height, and weight
import java.util.Scanner
fun printDesc() {
    println("This program should then output the number of chocolate bars that should be consumed to maintain a" +
            "\ncertain weight for the appropriate sex of the specified weight, height, and age.\n")
}
fun calculations()  {
    UserData.BMR = when(UserData.gender) {
        'm' ->  66 + (6.3 * UserData.weightInPounds) + (12.9 * UserData.heightInInches) - (6.8 * UserData.age)
        'M' -> 66 + (6.3 * UserData.weightInPounds) + (12.9 * UserData.heightInInches) - (6.8 * UserData.age)
        'f' -> 655 + (4.3 * UserData.weightInPounds) + (4.7 * UserData.heightInInches) - (4.7 * UserData.age)
        'F' -> 655 + (4.3 * UserData.weightInPounds) + (4.7 * UserData.heightInInches) - (4.7 * UserData.age)
        else -> -1.0
    }

}
object UserData {
    //Declared local variables in order to be able to call/change them later at will
    open var age : Int = 0
    open var heightInInches : Double = 0.0
    open var weightInPounds : Double = 0.0
    open var gender : Char? = null
    open var userIs : String? = null
    open var BMR : Double = 0.0

    fun getUserInfo() {
        var scanner = Scanner(System.`in`) //there was a problem where the arguments in the function were not being passed through corectly because the scanner was val and the variables where var
        println("Please enter your weight in pounds:")
        weightInPounds = scanner.nextDouble()
        println("Great! now, please enter your height in inches: ")
        heightInInches = scanner.nextDouble()
        println("Another qucik thing, enter your age: ")
        age = scanner.nextInt()
        println("Finally, please enter your gender('M' for Male or 'F' for Female: ")
        gender = scanner.next().single()

        userIs = when(gender) {
            'm' -> "👨🏻"
            'M' -> "\uD83D\uDC68\uD83C\uDFFB"
            'f' -> "👩🏻"
            'F' -> "\uD83D\uDC69\uD83C\uDFFB"
            else -> null
        }
    }

    fun printInfo() {
        println("Your info: \n" +
                "${UserData.weightInPounds.toInt()} pounds\n" +
                "${UserData.heightInInches.toInt()} inches\n" +
                "${UserData.age} years\n" +
                "gender: ${UserData.userIs}\n" +
                "You BMR is appromimately: ${UserData.BMR} Kcal per day")
    }
}

fun main() {
    val chocolateBarCal = 230.0
    printDesc()
    UserData.getUserInfo()
    calculations()
    UserData.printInfo()
    println(UserData.age)

    println(UserData.age)
}
