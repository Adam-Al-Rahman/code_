pub fn array() {
    // Continuous group of items
    // Fixed length
    // length known at compile time
    // Homogeneous: same datatype element

    println!("\n__Array__");

    let numbers: [u32; 3] = [1, 2, 4];

    // Access item by indexing
    println!("Number at [2]: {}", numbers[2]);
}

pub fn tuples() {
    // Continuous group of items
    // Fixed length
    // Length known at compile time
    // Heterogenous: different datatype element.
    // Empty tuple called `unit`.
    println!("\n__Tuple__");

    let tuple: (bool, u32, u32, &str) = (true, 2, 3, "Hello World");

    // Accessed by `number dot method`;
    println!("Element `tuple.3`: {}", tuple.3);
}
