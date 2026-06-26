# C vs Python: A Comparative Performance Study

A research project comparing **C** and **Python** across execution speed and development time, conducted as part of a controlled programming experiment involving 20 participant groups.

---

## Overview

This study examines two key dimensions of programming language performance:

- **Execution Speed** — How fast does the compiled/interpreted program run?
- **Development Time** — How long does it take a programmer to write and verify a solution?

Each participant group solved the same set of algorithmic problems in **both C and Python**, under identical conditions, allowing for a direct head-to-head comparison.

---

## Repository Structure

```
C-vs-Python-Study/
│
├── Analysis.ipynb              # Main analysis notebook (graphs, statistics)
├── Environment.txt             # Hardware/OS spec used for benchmarking
├── Problems.pdf                # Problem set description
│
├── Input/
│   ├── H1/                     # Dataset files for Problem H1 (1k, 5k, 10k integers)
│   └── H2/                     # Matrix input files for Problem H2 (100×100, 500×500, 1000×1000)
│
├── Raw Data/
│   ├── Execution Speed2.csv    # Measured execution times (ms) per language, problem, and dataset
│   └── Development Time2.csv   # Recorded development time (seconds) and lines of code per submission
│
└── Submissions/
    ├── T01/ ... T20/           # Individual group submissions (C and Python source files + screenshots)
```

---

## Problem Set

Problems are categorized by difficulty:

| Code | Difficulty | Description                                                              |
|------|------------|--------------------------------------------------------------------------|
| E1   | Easy       | Sum of three user-inputted integers                                      |
| E2   | Easy       | Basic arithmetic operation                                               |
| E3   | Easy       | Simple conditional / string output                                       |
| M1   | Medium     | Average of 5 values with grade classification (A/B/C/D)                  |
| M2   | Medium     | Arithmetic with multiple conditions                                      |
| M3   | Medium     | Pattern or iteration-based computation                                   |
| H1   | Hard       | Sorting + statistical summary (min, max, average) on N integers          |
| H2   | Hard       | Matrix input, display, and transpose operation                           |
| H3   | Hard       | Multi-step algorithmic problem                                           |

Problems H1 and H2 were additionally benchmarked for **execution speed** using scaled datasets:
- **H1**: arrays of 1,000 / 5,000 / 10,000 integers
- **H2**: matrices of 100×100 / 500×500 / 1,000×1,000

---

## Data Collected

### Execution Speed (`Raw Data/Execution Speed2.csv`)

Each program was run **5 times** and the average execution time (in milliseconds) was recorded.

| Language | Problem | Dataset     | Avg. Time (ms) |
|----------|---------|-------------|----------------|
| Python   | H1      | 1,000 ints  | 0.071          |
| Python   | H1      | 5,000 ints  | 0.425          |
| Python   | H1      | 10,000 ints | 0.882          |
| C        | H1      | 1,000 ints  | 1.6            |
| C        | H1      | 5,000 ints  | 33.0           |
| C        | H1      | 10,000 ints | 149.8          |
| Python   | H2      | 100×100     | 1.45           |
| Python   | H2      | 500×500     | 34.24          |
| Python   | H2      | 1,000×1,000 | 158.16         |
| C        | H2      | 100×100     | ~0             |
| C        | H2      | 500×500     | 1.4            |
| C        | H2      | 1,000×1,000 | 5.0            |

> Note: For H1, Python's measured time reflects pure computation (likely using built-in functions), while C includes I/O parsing overhead from `scanf`. For H2, C demonstrates a clear speed advantage at scale.

### Development Time (`Raw Data/Development Time2.csv`)

Each submission recorded:
- **Dev Time (seconds)** — Time from start to a working solution
- **Lines of Code (LOC)** — Total source lines written

---

## Environment

All benchmarks were run on a consistent hardware setup:

```
Device   : ASUS TUF Gaming A15 FA506IC
CPU      : AMD Ryzen 7 4800H
RAM      : 16 GB (8×2 GB, 3200 MHz)
GPU      : NVIDIA RTX 3050 (4 GB VRAM)
Storage  : 2 TB NVMe SSD
OS       : Windows 11 Home
```

---

## Participants

- **20 groups** (T01–T20) participated in the study
- Each group submitted solutions in both C (`.c` / `.cpp`) and Python (`.py`)
- Screenshots of program output were included as proof of correctness
- Some teams also submitted `.docx` files documenting their development time logs

---

## Analysis

The `Analysis.ipynb` notebook covers:

1. **Average Development Time** — C vs Python overall
2. **Average Development Time by Difficulty** — Easy / Medium / Hard breakdown
3. **Average Development Time per Problem** — Per-task comparison (E1–H3)
4. **Average Lines of Code (LOC)** — Verbosity comparison between languages

To run the notebook:

```bash
pip install jupyter pandas matplotlib
jupyter notebook Analysis.ipynb
```

---

## Key Findings (Summary)

- **Python** consistently required **fewer lines of code** and shorter **development time** across all difficulty levels, reflecting its higher-level syntax and built-in abstractions.
- **C** demonstrated significantly **faster execution** on compute-heavy tasks (H2: matrix operations), outperforming Python by up to ~30× at larger scales.
- For **sorting-heavy tasks (H1)**, Python's built-in functions provided competitive raw speed despite being interpreted, though at larger input sizes C's compiled speed advantage becomes apparent.
- The trade-off is clear: **Python favors developer productivity**, while **C favors runtime performance**.

---

## Course Context

This project was conducted as part of a **Research Methodology** course experiment, following a controlled volunteer-based study design where participants solved equivalent problems in both languages under timed conditions.

---

## License

This repository contains academic work submitted for course evaluation. All code belongs to the respective participant groups (T01–T20).
