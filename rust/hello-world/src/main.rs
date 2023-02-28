#![forbid(unsafe_code)]

pub mod components;
use crate::components::basics::scalar_data;
use crate::components::basics::variable;
use crate::components::compound_datatypes::array;
use crate::components::compound_datatypes::tuples;
use crate::components::controlflow::if_else;
use crate::components::controlflow::match_statement;
use crate::components::error_handling::error_handling;
use crate::components::functions::last_char;
use crate::components::loops::loops;
use crate::components::structure_enum::enumeration;
use crate::components::structure_enum::structure;

// Memory management
use crate::components::memory_management::borrowing::borrowing;
use crate::components::memory_management::borrowing::mut_borrowing;
use crate::components::memory_management::ownership::ownership;

fn main() {
    println!("Variable Function return: {}", variable());
    scalar_data();
    array();
    tuples();
    println!("Last character: {}", last_char("Hello World"));
    structure();
    enumeration();
    if_else();
    match_statement();
    loops();
    error_handling();
    ownership();
    borrowing();
    mut_borrowing();
}
