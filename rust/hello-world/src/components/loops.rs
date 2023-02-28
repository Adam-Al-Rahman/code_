pub fn loops() {
    // Used to execute over a block of code `forever`.
    // to stop use `break` keyword.
    println!("\n__Loops__");

    loop {
        println!("I am in `loop`.");
        break;
    }

    // conditional loop
    // run until the condition is false
    let mut x = 10;
    while x > 5 {
        println!("x: {x}");
        x -= 1;
    }

    // For loop
    let a = [10, 20, 30, 40];
    for element in a.iter() {
        println!("print a: {element}");
    }

    for item in 0..5 {
        println!("item: {item}");
    }
}
