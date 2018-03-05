# Integer arithmetics

## Signed integer overflow

### How many square roots of 1?

Run `int/sq.c` with following values of `a`:

* `INT32_MAX`
* `INT32_MAX - 1`
* `INT32_MIN`
* `INT32_MIN + 1`

### Integer simplifications

Run `int/simpl_0.c`, `int/simpl_1a.c` and `int/simpl_1b.c` compiled with `gcc` vs. `clang` at
different optimization levels (`-O0` to `-O3`)

### Identity elements

Run `int/id_elem.c` (the result is independent of the optimization level).

### Comparison optimization

Run `int/comp_0a.c` and `int/comp_0b.c` compiled with `gcc` vs. `clang` at
different optimization levels (`-O0` to `-O3`)

### Absolute value

Do you think it's always nonnegative? Run `int/abs.c`.


# Float arithmetics

## `NaN`s and partial order

Run `float/comp.c`, `float/irreflexivity_0.c` and `float/irreflexivity_1.c`.
Floats are only strictly partially ordered (the reflexivity is violated), since `NaN != NaN`.
Except you compile with `-Ofast` or `-ffast-math`. `¯\_(ツ)_/¯`

## Associativity of addition, associativity of multiplication

This is the simplest one. Floats are non-associative since they can over- and underflow.
Run `float/associativity_add.c` and `float/associativity_mult.c`.

## Distributivity of multiplication and addition

Run `float/distributivity.c`. Also, try compiling with `-Ofast`.

## Underflow

Run `float/sq.c`.

## Subnormals

Run `float/inf_challenge.c`.
