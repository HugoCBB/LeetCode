mod leetcode;

fn main(){
    let value: Vec<i32> = leetcode::two_sum::two_sum(vec![1,1,4,2], 3);
    println!("{:?}", value);
}