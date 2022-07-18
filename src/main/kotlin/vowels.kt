fun main(args: Array<String>) {
    var line = "My Name Is NiLay."
    var vowels = 0
    var consonants = 0
    var digits = 0
    var spaces = 0

    line = line.toLowerCase()
    for (i in 0..line.length - 1) {
        val ch = line[i]
        when (ch) {
            'a', 'e', 'i', 'o', 'u' -> ++vowels
            in 'a'..'z' -> ++consonants
            in '0'..'9' -> ++digits
            ' ' -> ++spaces
        }
    }

    println("Vowels: $vowels")
    println("Consonants: $consonants")
    println("Digits: $digits")
    println("White spaces: $spaces")
}