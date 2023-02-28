pub fn last_char(string: &str) -> char {
    println!("\n__Function with param__");
    if string.is_empty() {
        return '#';
    }
    return string.chars().next_back().unwrap();
}
