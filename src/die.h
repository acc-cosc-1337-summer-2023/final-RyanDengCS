//die.h
class Die
{
public://access specifiers
    Die();  //constructor
    void roll();
    int rolled_value() const;

private://access specifiers
    int sides{6};//initialize sides variable
    int roll_value;
};