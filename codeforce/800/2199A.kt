import java.util.Scanner

fun solve(scanner: Scanner) {
    val k = scanner.nextInt()
    val a1 = scanner.nextInt()
    val b1 = scanner.nextInt()
    val a2 = scanner.nextInt()
    val b2 = scanner.nextInt()
    
    val totB = b1 + b2
    val totA = a1 + a2
    
    // Melhor cenario
    val winBob = totB + k
    // Pior cenario
    val loserAlice = totA + 0
    
    if (winBob > loserAlice) {
        println("YES") 
    } else if (winBob == loserAlice) {
        var roundBob = 0
        if (b1 > a1) roundBob++
        if (b2 > a2) roundBob++
        
        // Cenario de desempate
        /*
            Se bob pontuar k pontos e alice pontuar 0 bob ira ganhar
            pelo fato de sempre ser k>=1
        */             
        if (k > 0) roundBob++
        
        if (roundBob >= 2) {
            println("YES")
        } else {
            println("NO")
        } 
    
    } else {
        println("NO")
    }
}

fun main() {
    val scanner = Scanner(System.`in`)
    
    if (scanner.hasNextInt()) {
        val caseTest = scanner.nextInt()
        
        repeat(caseTest) {
            solve(scanner)
        }
    }
}