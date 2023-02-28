struct Person {
    name: String,
    age: u8,
    like_cat: bool,
}

// Tuple type structure
struct Point2D(u32, u32);

pub fn structure() {
    // A user defined datatype.
    // can contain different types.
    // Three flavors of structs
    //  - Classic, Tuple, Unit
    println!("\n__Structure__");

    let aman = Person {
        name: String::from("Aman"),
        like_cat: true,
        age: 18,
    };

    println!(
        "Person name: {}\nPerson age: {}\nPerson like's cat: {}",
        aman.name, aman.age, aman.like_cat
    );

    let origin = Point2D(100, 200);
    println!("Point @: {}, {}", origin.0, origin.1);

    // Destructing
    let Point2D(x, y) = origin;
    println!("x: {}, y: {}", x, y);
}

enum IpAddrKind {
    V4,
    V6,
}

pub fn enumeration() {
    println!("\n__Enumeration__");

    struct IpAddr {
        _kind: IpAddrKind,
        address: String,
    }

    let home = IpAddr {
        _kind: IpAddrKind::V4,
        address: String::from("127.0.0.1"),
    };

    let _office = IpAddr {
        _kind: IpAddrKind::V6,
        address: String::from(" fe08::512:5dff:feeb:01cc"),
    };

    println!("Ip address: {}", home.address);
}
