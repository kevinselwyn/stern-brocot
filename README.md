# stern-brocot

Generates a [Stern-Brocot sequence](https://oeis.org/A002487) of variable size

## Installation

```bash
make && sudo make install
```

## Usage

```bash
stern-brocot (<start> <limit>)
             -h|--help
```

## Explanation

The Stern-Brocot sequence is very similar to the Fibonacci sequence. Digits at positions `i` and `i + 1` are added together and appended to the end of the sequence, followed by copying `i + 1` directly after. This causes the Stern-Brocot sequence to grow exponentially instead of linearly like the Fibonacci sequence.

Read more about it on the [On-Line Encyclopedia of Integer Sequences](https://oeis.org/A002487).

Or watch [Numberphile's video](https://www.youtube.com/watch?v=DpwUVExX27E) on the subject.
