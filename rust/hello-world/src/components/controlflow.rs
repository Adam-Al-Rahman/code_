pub fn if_else() {
    println!("\n__If_Else__");
    if 1 == 2 {
        println!("Maths is broken!");
    } else if 1 == 1 {
        println!("That's true.");
    } else {
        println!("Everything is fine.");
    }

    let formal = true;
    let _greeting = if formal {
        println!("Good Evening");
    } else {
        println!("Hiiii!!!");
    };
}

pub fn match_statement() {
    println!("\n__Match__");

    let boolean = true;

    let binary = match boolean {
        false => 0,
        true => 1,
    };
    println!("Binary value: {binary}");
}
