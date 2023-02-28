/// # Ownership
/// - Related to how your program manages memory.
/// - Rust stores data in two differently structures parts of memory.
///     - Stack.
///     - Heap.
///
/// Example:
/// Vector is mutable. Vector object stored on `stack` with `pointer to heap`.
/// Value of vector is stored in heap.,
///
/// ```
/// let mut vector = vec![1, 2, 3];
/// vector.push(4) // added the value;
/// println!("{:?}", vector); // return's [1, 2, 3, 4]
/// ```
///
/// ## Rule of Ownership
/// - Each value in rust has a variable that is called its `owner`.
/// - There can only be one owner at at time.
/// - When the owner goes out of `scope`, the `value` will be `dropped`.
///
pub fn ownership() {
    let say = String::from("Cat");
    print_out(say);
    // when we pass "say" to the print_out function, we transfer the ownership to that function.
    // println!("Again: {}", say); // this become invalid, and can see red color underline under 'say';
}

fn print_out(to_print: String) {
    println!("{}", to_print);
}
