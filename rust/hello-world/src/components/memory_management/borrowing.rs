/// # Borrowing
/// - Create a `reference` to a value.
/// - By default borrowing is immutable;
///
/// ## Rule of Borrowing
///
/// - At any given time, you can have either:
///     - One mutable reference, or
///     - Any number of immutable references
/// - References must always be `valid`.
///
pub fn borrowing() {
    println!("\n__Borrowing__");
    let say = String::from("Cat");
    print_out(&say); // passing reference of say so that we can satisfy the ownership rules.
    println!("Again: {}", say);
}

fn print_out(to_print: &String) {
    // parameter as reference string.
    println!("{}", to_print);
}

/// ## Mutable Borrowing
/// we use `&mut argument` to make the mutable borrow. And in the function parameter we write `&mut parameter_name`.
pub fn mut_borrowing() {
    println!("\n__Mutable-Borrowing__");
    let mut vector = vec![1, 2, 3];
    println!("{:?}", vector);
    add_to_vec(&mut vector); // reference a mutable vector, so that is we can push value 4 in vector.
    println!("{:?}", vector);
}

fn add_to_vec(a_vector: &mut Vec<i32>) {
    a_vector.push(4);
}
