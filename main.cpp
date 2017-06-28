#include <iostream>

/**
 * Review section 1.8 later - June 20, 2017
 */

int main() {
    std::cout << -31 % 10 << std::endl;
    return 0;

    // 00100 = 4
    // 00001 = 1
    // 10101 = 21
    // 00101 = 5

    // Set Intersection: (*)
    /*
     * Often called set multiplication or set addition,
     * the operator forms a set containing elements
     * belonging to both sets:
     *
     * {1, 3, 5} * {3, 5, 7} -> {3, 5}
     */

    // Set Union: (+)
    /**
     * Join all members associated with either one, or both
     * of the unifying sets.
     *
     * {1, 3, 5} + {3, 5, 7} -> {1, 3, 5, 7}
     */

    // Set Difference: (-)
    /**
     * Preserves elements in A but not B, if A - B.
     *
     * {1, 3, 5} - (3, 5, 7} = {1}
     * {3, 5, 7} - {1, 3, 5} = {7}
     */

    // Symetric Set Difference: (/)
    /** Combines all elements found in only one, not
     * both, of the sets.
     *
     * {1, 3, 5} / {3, 5, 7} = {1, 7}
     */

    // Set Membership: (IN)
    /**
     * Denotes that an element is a member of a set.
     *
     * SET a = {1, 3, 5}
     * 1 IN a
     * 3 IN a
     * 5 IN a
     * FALSE -> 7 IN a
     */

    /**
     * The cardinality of a structured type (in this
     * context, the number of possible values that it
     * can possess) is equal to the product of the cardinalities
     * of its components. Therefore, we can produce a relation:
     *
     * card(T) = card(T0)^n
     */

    /**
     * A record is a structured type that, to a programmer, is
     * known as a class containing numerous arbitary types/values
     * relevant to the stucture. There arbitary types, may,
     * themselves, be structures as well. For example:
     *
     * Person
     * -----------------     -----------------
     * | String        |     | Ishac         |
     * | String        |     | Mario         |
     * | Date          | --> | 2 | 28 | 2003 | * Notice how this
     * | Type (sex)    |     | Male          |   is also a
     * | Type (martial)|     | Single        |   structured type!
     * -----------------     -----------------
     *
     * A record might not simulate its intended real-life counterpart
     * exactly. For example, the Data object permits the 30th of
     * February as a valid data due to the nature of its components'
     * types, yet this is clearly an invalid date in the real world.
     */

    /**
     * Random access in computer science refers to the capability
     * that each element can be accessed just as easily as the element
     * before or after it in the structure.
     *
     */

    /**
     * A sequence does not have a fixed size, as opposed to an array.
     * Therefore, dynamic storage allocation must be used. This difference
     * (fixed vs dynamic storage allocation) is the line between advanced
     * structures and fundamental structures such as arrays, records and
     * sets.
     */

    /**
     * A file provides an oppurtunity to retain the data a program
     * generates/produces post-termination. Therefore, the file variable
     * in a program is associated with the data on an external device
     * through numerous complex operations.
     *
     * A file is perceived as a sequence, and is read/written to this way,
     * rather than directly. This sequence is connected with a rider,
     * and the sequential access to the file is determined by the access
     * operators involved in the rider.
     */

    /**
     * New(f, name) - defines f to be the empty sequence.
     * Old(f, name) - defines f to be the sequence persistently
     *      stored with given name.
     * Set(r, f, pos) - associate rider r with sequence f, and place
     *      it at position pos.
     * Write(r, x) - place element with value x in the sequence
     *      designated by rider r, and advance.
     * Read(r, x) - assign to x the value of the element designated by
     *      rider r, and advance.
     * Close(f) - registers the written file f in the persistent
     * store (flush buffers).
     */

    /**
     * A buffer serves as a temporary waiting line in order to allow the rider
     * to synchronize with the hardware/IO limitations on reading and writing.
     * It allows data to be grouped together into blocks due to the waiting times
     * enforced.
     *
     * A buffer is first-in, first-out, and can be represented by the following
     * model:
     *
     * N = buffer size
     *
     * ----------------------------------------------
     * | 1  | 2  | 3  | 4  | 5  | 6  |... | N-1| N  |
     * ----------------------------------------------
     * | 'a'| 'd'| 'e'| '1'| ' '| 'o'| 'q'| '/'|    |
     * ----------------------------------------------
     *
     * Deposit(c: char) - insert char at end of buffer if buffer size
     *      has not been exceeded, otherwise halt
     * Fetch() -> c: char - fetch char at current position in buffer
     *      (note that this position is incremented by one every time
     *      Fetch() is called)
     */

    /**
     * A module whose procedure/methods are guaranteed to be executed
     * under mutual exclusion is identified as a monitor. All operators on
     * shared variables (variabled that are changed/used in various
     * procedures throughout the module) are deemed unsafe, and a
     * monitor is one solution to this problem.
     */

    /**
     * The standard and input and output practices we understand revolve
     * around the transfer of data from the compter system to external
     * agents such as a terminal, LED, etc. The fact that the supplier
     * of this data is the computer system makes one thing obvious,
     * the data must be transferred into human-readable data.
     */

    /**
     * A scanner allows the reading of textual input without the knowledge
     * of its type, which, unlike writing, is not a necessity. Each scan
     * inspects the type and value of the item read. The scanner is similar
     * to a rider in the context that it provides a gateway between the input
     * (file/text) and the processing of the input.
     */

    /**
     * Searching methods:
     *

    /**
     *  Linear Search:
     *  Proceeds through the data of the array sequentially until one
     *  of two conditions is met:
     *      1) The element is found, a[i] == x
     *      2) The entire array has been scanned, with no match found.
     *
     *  Due to the simplicity of the linear search, there is little chance for
     *  acceleration from the search. In fact, this little chance occurs from
     *  a guarantee that the element to be found is at the end of the search.
     *
     *  Below are two examples, encompassing linear search without and with
     *  the sentinel (the element at the end for the acceleration above) involved.
     *
     ** x is the element to be found
     * -------------------------------
     *  VAR array := ARRAY N of INTEGER
     *  i := 0
     *
     *  WHILE (i < N) & (array[i] != x)
     *      INC(i)
     *  ------------------------------
     *  VAR array := ARRAY N + 1 of INTEGER
     *  array[N] := x
     *  i := 0
     *
     *  WHILE (array[i] != x)
     *      INC(i)
     *  ------------------------------
     *
     *  In the second example, if i reached N, then no desired elements were
     *  found in the array apart from the sentinel.
     */

    /**
     * Binary Search:
     * It is impossible to optimize a search unless further information about
     * the data being searched is no. If the data is sorted (greatest -> least,
     * least -> greatest, alphabetical, etc.) then we can use a binary search,
     * which is faster than a linear search. A binary search uses the
     * valid assumption that, since the data is sorted...
     *
     * If x is greater than a certain element at certain index A, it is also
     * greater than all elements located before index A
     *
     * If x is less thn a certain element at certain index B, it is also
     * less than all elements located after index B
     *
     * The conditions to be met in order for the search to be terminated are
     * as follows:
     *      1) The element is found, a[m] (the middle of L and R) == x
     *      2) L > R (x was not found in the array)
     *
     * The following examples, for odd and even array lengths, respectively,
     * show how L can be > than R if no x is found.
     *
     * x = 7
     * - represents middle
     * L represents left boundary
     * R represents right boundary
     *
     * -------------------------
     * L                     RR
     * 1 2 3 4 5 6 8 9 10 11 12
     *           - 7 > 6
     *             L         RR
     *             8 9 10 11 12
     *                 -- 7 < 10
     *             L R
     *             8 9
     *             - 7 < 8
     *           R L
     *
     * L > R, element not found
     * -------------------------
     * L                  RR
     * 1 2 3 4 5 6 8 9 10 11
     *         - 7 > 5
     *           L        RR
     *           6 8 9 10 11
     *               - 7 < 9
     *           L R
     *           6 8
     *           - 7 > 6
     *             L
     *             R
     *             8
     *             - 7 < 8
     *           R L
     *
     * L > R, element not found
     * -------------------------
     * VAR array := ARRAY N of INTEGER
     * L := 0
     * R := N - 1
     * found := FALSE
     *
     * WHILE (L <= R) and !found
     *      m := (L + R) / 2 // Floor
     *      IF a[m] == x
     *          found = TRUE
     *      ELSE
     *          IF a[m] < x
     *              L := m + 1
     *          ELSE
     *              R := m - 1
     * --------------------------
     */

    /**
     * Straight String Search:
     * String searches solve a common scenario faced in text processoing
     * systems. This scenario is finding the first appearence of a string/pattern
     * B in text A. Thus follows the assumption that the length of A is greater
     * than B. In order for string B to be the first occurence of itself in string A,
     * it must meet the following two criteria:
     *      1) For all chracters in string B,
     *      A[character index in B + i] = B[character index in B]
     *      2) The above criteria is not satisfied for any i less than i
     * Where  i = index of first character of first B in A
     *
     * ---------------------------------------
     * i := -1
     * j := 0
     * // M is length of B
     * // N is length of A
     * REPEAT INC(i):
     *      j := 0
     *      WHILE j < M & (A[i+j] == B[j])
     *          INC(j)
     * UNTIL (j == M) OR (i == N - M)
     *
     * If termination is the result due to j == M, the string has been found
     * at index i.
     * If termination is the result due to i == N - M, the string has not been
     * found.
     */


    /**
     * The Knuth-Morris-Pratt String Search
     * This string search is an improvement on the straight string search,
     * as, unlike the straight string search, the KMP string search utilizes
     * information found in previous comparisons that is clearly discarded
     * in the straight string search.
     *
     * - ->  No Match
     * / -> Match
     * Hoola-Hooligans
     * Hooligan
     * / (i = 0, j = 0)
     *  / (i = 1, j = 1)
     *   / (i = 2, j = 2)
     *    / (i = 3, j = 3)
     *     - (i = 4, j = 4)
     *     Hooligan (i = 4, j = 0)
     *      Hooligan (
     *
     * Hooligan
     *     Hooligan
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *      i
     *   j
     * ABCABD
     *    ABD
     *
     * >
     * i = 0
     * j = 0
     *
     *
     *
     *
     *
     * j := D
     * J := j + 1
     * j :=
     *
     *
     *
     *
     *
     *
     */
}
