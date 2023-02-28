/// ## Variable
pub fn variable() -> i32 {
    println!("\n__Variable__");
    let mut x = 1;
    println!("x: {x}");

    const FIRST_STRING: &str = "Hello World";

    x = 2;
    println!("Mut x: {x}\nConst string: {FIRST_STRING}");

    // shadow `x` variable using the `let`
    let x = 3;
    println!("Shadow x value: {x}");

    let _y = true; // not used y variable is indicated as _y
    return x;
}

/// ## Scalar Data type
pub fn scalar_data() {
    println!("\n__Scalar-DataType__");
    // ### Integers
    // - Signed: Both -ve and +ve
    // - Unsigned: Always +ve
    // - Default: i32
    // ### Others
    // - Float, bool, char

    let value = 88;
    println!("Integer value: {value}");

    // you cannot do
    // ```rs
    // let mut value: i32 = 88;
    // value: f64 = 324.23;
    // ```

    let value = 324.23; // shadowing
    println!("Floating value: {value}");

    let character_literal = 'A';
    println!("Character literal: {character_literal}");

    let boolean = true;
    println!("Boolean value: {boolean}");
}
