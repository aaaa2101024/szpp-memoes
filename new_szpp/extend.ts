interface animal {
    lenght: number;
    age: number;
}

interface plant extends animal{
    kusa: String
}

interface human extends animal{
    thinking: String;
}