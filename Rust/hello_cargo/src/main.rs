#[macro_use]
extern crate text_io;

fn main() {
    println!("Hello. Cargo? Please enter a number you would like to count to: ");
    let num: i32 = read!();
    count(num);
}

fn count(num:i32){

	for n in 1..=num {
		println!("{}", n);
	}
}