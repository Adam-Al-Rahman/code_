/// # Error Handling.
/// ## Using Panic.
/// A panic should only be used when a program comes to an unrecoverable state.
/// Rust emits a panic during code execution.
/// ```
/// let v = vec![0, 1, 2, 3];
/// println!("{}", v[6]) // this will cause a panic!
/// ```
///
/// ## Unwrap & Expect
/// `Unwrap` return the value inside the Ok variant.
/// Returns a panic! macro for the Err variant.
///
/// `Expect` return a value or called of panic! macro with
/// a detailed error message.
///
/// ## The `?` operator
/// Similar to a match statement.
pub fn error_handling() {
    let v = vec![0, 1, 2, 3];
    println!("Fourth: {}", v[3]);
}
