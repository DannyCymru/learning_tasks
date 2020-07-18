use crate::rand::Rng;
use std::cmp::Ordering;

#[macro_use]
extern crate text_io;
extern crate rand;

fn main() {
    println!("Guess the number!");

    let secret_number: u32 = rand::thread_rng().gen_range(1, 100);

    println!("Please Input your guess: ");

    loop {
        let guess: u32 = read!();

    	println!("You guessed: {}",guess);

    	match guess.cmp(&secret_number) {
    		Ordering::Less => println!("Too small :("),
    		Ordering::Greater => println!("Too big..."),
    		Ordering::Equal => {
				println!("You guessed the secret number!");
    			break;
    		}
    	}
    }
}
