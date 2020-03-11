### Deadline:

This is a two week assignment with two deadlines:

* Implementation: **Friday 4th March**
* Evaluation: **Friday 11th March**

Work for both weeks will be stored in this repository.

### Instructions:

To pass the assignment, you must do all of the tasks. Small errors are acceptable, but the most important thing is that you attempt all the tasks. If you get stuck, then help is available in the labs.

Please note that this is individual work. You may discuss the work with other students, but it is absolutely forbidden to submit copies of other student's work as your own. Please read and consider the [Code of Honour](https://www.kth.se/csc/utbildning/hederskodex) carefully.

### Submission:

* All required work must be committed to your KTH Github Repository
* A week-19 repository will be created for you automatically and it can be found [here](https://gits-15.sys.kth.se/INDA15)
* Please refer to the Kurswiki for help, contact your teaching assistant, or course leader if you get stuck

### Homework

Study the following course literature:

* [Quicksort](http://www.nada.kth.se/~snilsson/algoritmer/qsort/)

### Week 1 - Implementing Quicksort

In the first week, you will implement the Quicksort algorithm, as well as several variations of the basic algorithm.  Once you have implemented your set of algorithms, you can test them by using Kattis.

#### Sort Interface

Each Quicksort algorithm variation should be a single class that implements the `IntSorter` interface:

	public interface IntSorter {
	    /**
	     * Sorts the array into ascending numerical order.
	     */
	    void sort(int[] v);
	}

This will make it easier to run repeated tests and measurments on different versions of your algorithms during the empirical evaluation.

Create an implementation of this interface as a warmup:

* `InsertionSort` - reuse your earlier implementation

#### Variations of Quicksort

Implement four variations of the Quicksort algorithm:

* `QuicksortFixedPivot` - uses a fixed pivot
* `QuicksortRandomPivot` - uses a randomly selected pivot
* `QuicksortFixedPivotInsertion` - fixed pivot with cut-off to insertion sort at k.  Instead of stopping the recursion when the sub array only has at most one element, implement a version where sub arrays that contain at most `k` elements are sorted with insertion sort. `k` can be decided by experimentation.
* `QuicksortRandomPivotInsertion` - as above, but with a random pivot

Make sure you test each implementation to ensure it performs as expected.  Make sure you test against arrays that are random, sorted, reversed and containing elements that are all equall (see `Data` class for a utility to create datasets).

#### Kattis Test

We will use Kattis this week to check your implementations and discover if they work as expected and how fast they run (_...perhaps you can become the champion of INDA15..._). You can read more about Kattis [here](https://www.kattis.com/universities.php).  Information on the Quicksort task will appear [here](https://kth.kattis.com/courses/DD1338/alginda15) soon.

### Week 2 - Empirical Evaluation

In the second week, you will perform an empirical evaluation of your implmentations and produce a short report to be presented at the final övning.

#### Timing Execution

The class `Stopwatch` implments a simple stopwatch for timing execution.  It's usage can be seen in the `TimingExample` class.  Run `TimingExample` and pay attention to the results.  You should notice that the result varies. Modify `TimingExample` so that it:

* Discard results that are anomalous or affected by JVM warmup
* Finds the average for `n` experiments
* Prints the minimum, mean (average) and maximum times

#### Evaluating Sorting Algorithms

The `Data` class has been provided for you to generate different datasets for evaluating your variations of the Quicksort algorithm.  Read the source code to become familiar on how it is to be used.  You should gather results for the following tests, according to the table template below.  Make sure you use the method you developed above to ensure the results are more accurate and try to control variables in the computing environment as much as possbile.

* Test 1: Random Data
* Test 2: Sorted Data
* Test 3: Reversed Data
* Test 4: Equal Data

Example table of execution time costs for different algorithms and problem sizes (produce one table per test):

| Test 1: Random Data |               |                          |               |
| ------------------  | ------------- | ------------------------ | ------------- |
| Problem Size        | InsertionSort | Quicksort Variations 1-4 | Arrays.sort † |
| 100                 |               |                          |               |
| 1000                |               |                          |               |
| 10000               |               |                          |               |
| 100000              |               |                          |               |
| 1000000             |               |                          |               |

† [Arrays.sort(int[] a)](http://grepcode.com/file_/repository.grepcode.com/java/root/jdk/openjdk/8u40-b25/java/util/Arrays.java/?v=source) is from the Java standard library, and for your interest, it also uses Quicksort, but with a dual-pivot variation :-)

#### Report

Finally, you should prepare a short report in either markdown or latex (templates are in the docs directory).  The report will contain the following sections:

1. Characteristics and complexity of Quicksort algorithm
2. Explantion of each Quicksort variation you implemented
3. Explanation of each test you performed and how you ensured accurate results
4. Presentation of results using tables and appropriate charts for all tests
5. Discussion of your findings

You should be prepared to discuss your implmenation, experiments and findings at the final övning.

---

Please commit any written answers or diagrams to the "docs" folder as a PDF (or Markdown) document, and commit any Java code developed to the "code" folder of your KTH Github repo. Remember to push to KTH Github.
