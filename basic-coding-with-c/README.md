# Basic Coding with C — Daily Practice

A first-year-friendly practice record containing all 150 exercises currently listed on the [reference website](https://maitysoumik.github.io/basic-coding-with-c/). Each exercise has its own C11 program and explanation. The website's stated pace—two questions per day for the first 50 days, then one per day—is followed.

The dates below are the intended practice schedule beginning 10 August 2026. They are not Git timestamps and do not assert that any question was completed on its scheduled date.

## Compiler requirements

Use a C11-compatible compiler. The programs were generated and tested with GCC using `-std=c11 -Wall -Wextra -pedantic` (and `-lm` for the math library where needed). Most inputs are read from standard input; file exercises state their required filenames.

The installed MinGW GCC completed all builds, but its format checker emitted warnings for standard C11 `%lld` input conversions in 13 programs. These warnings are recorded in [DAILY_PROGRESS.md](./DAILY_PROGRESS.md) and were not suppressed.

## Compile and run

From the relevant day folder, compile one program with GCC:

```sh
gcc -std=c11 -Wall -Wextra -pedantic Question_01.c -lm -o Question_01
./Question_01
```

On Windows, run the generated executable as `Question_01.exe`.

## Directory structure

```text
basic-coding-with-c/
├── README.md
├── QUESTION_INDEX.md
├── DAILY_PROGRESS.md
├── Day_01_2026-08-10/
│   ├── Question_01.c
│   ├── Question_01.md
│   └── Question_02.c / Question_02.md
└── ... through Day_100_2026-11-17/
```

## Daily schedule

| Day | Intended date | Questions |
|---:|---|---|
| 1 | 10 August 2026 | Q001, Q002 |
| 2 | 11 August 2026 | Q003, Q004 |
| 3 | 12 August 2026 | Q005, Q006 |
| 4 | 13 August 2026 | Q007, Q008 |
| 5 | 14 August 2026 | Q009, Q010 |
| 6 | 15 August 2026 | Q011, Q012 |
| 7 | 16 August 2026 | Q013, Q014 |
| 8 | 17 August 2026 | Q015, Q016 |
| 9 | 18 August 2026 | Q017, Q018 |
| 10 | 19 August 2026 | Q019, Q020 |
| 11 | 20 August 2026 | Q021, Q022 |
| 12 | 21 August 2026 | Q023, Q024 |
| 13 | 22 August 2026 | Q025, Q026 |
| 14 | 23 August 2026 | Q027, Q028 |
| 15 | 24 August 2026 | Q029, Q030 |
| 16 | 25 August 2026 | Q031, Q032 |
| 17 | 26 August 2026 | Q033, Q034 |
| 18 | 27 August 2026 | Q035, Q036 |
| 19 | 28 August 2026 | Q037, Q038 |
| 20 | 29 August 2026 | Q039, Q040 |
| 21 | 30 August 2026 | Q041, Q042 |
| 22 | 31 August 2026 | Q043, Q044 |
| 23 | 01 September 2026 | Q045, Q046 |
| 24 | 02 September 2026 | Q047, Q048 |
| 25 | 03 September 2026 | Q049, Q050 |
| 26 | 04 September 2026 | Q051, Q052 |
| 27 | 05 September 2026 | Q053, Q054 |
| 28 | 06 September 2026 | Q055, Q056 |
| 29 | 07 September 2026 | Q057, Q058 |
| 30 | 08 September 2026 | Q059, Q060 |
| 31 | 09 September 2026 | Q061, Q062 |
| 32 | 10 September 2026 | Q063, Q064 |
| 33 | 11 September 2026 | Q065, Q066 |
| 34 | 12 September 2026 | Q067, Q068 |
| 35 | 13 September 2026 | Q069, Q070 |
| 36 | 14 September 2026 | Q071, Q072 |
| 37 | 15 September 2026 | Q073, Q074 |
| 38 | 16 September 2026 | Q075, Q076 |
| 39 | 17 September 2026 | Q077, Q078 |
| 40 | 18 September 2026 | Q079, Q080 |
| 41 | 19 September 2026 | Q081, Q082 |
| 42 | 20 September 2026 | Q083, Q084 |
| 43 | 21 September 2026 | Q085, Q086 |
| 44 | 22 September 2026 | Q087, Q088 |
| 45 | 23 September 2026 | Q089, Q090 |
| 46 | 24 September 2026 | Q091, Q092 |
| 47 | 25 September 2026 | Q093, Q094 |
| 48 | 26 September 2026 | Q095, Q096 |
| 49 | 27 September 2026 | Q097, Q098 |
| 50 | 28 September 2026 | Q099, Q100 |
| 51 | 29 September 2026 | Q101 |
| 52 | 30 September 2026 | Q102 |
| 53 | 01 October 2026 | Q103 |
| 54 | 02 October 2026 | Q104 |
| 55 | 03 October 2026 | Q105 |
| 56 | 04 October 2026 | Q106 |
| 57 | 05 October 2026 | Q107 |
| 58 | 06 October 2026 | Q108 |
| 59 | 07 October 2026 | Q109 |
| 60 | 08 October 2026 | Q110 |
| 61 | 09 October 2026 | Q111 |
| 62 | 10 October 2026 | Q112 |
| 63 | 11 October 2026 | Q113 |
| 64 | 12 October 2026 | Q114 |
| 65 | 13 October 2026 | Q115 |
| 66 | 14 October 2026 | Q116 |
| 67 | 15 October 2026 | Q117 |
| 68 | 16 October 2026 | Q118 |
| 69 | 17 October 2026 | Q119 |
| 70 | 18 October 2026 | Q120 |
| 71 | 19 October 2026 | Q121 |
| 72 | 20 October 2026 | Q122 |
| 73 | 21 October 2026 | Q123 |
| 74 | 22 October 2026 | Q124 |
| 75 | 23 October 2026 | Q125 |
| 76 | 24 October 2026 | Q126 |
| 77 | 25 October 2026 | Q127 |
| 78 | 26 October 2026 | Q128 |
| 79 | 27 October 2026 | Q129 |
| 80 | 28 October 2026 | Q130 |
| 81 | 29 October 2026 | Q131 |
| 82 | 30 October 2026 | Q132 |
| 83 | 31 October 2026 | Q133 |
| 84 | 01 November 2026 | Q134 |
| 85 | 02 November 2026 | Q135 |
| 86 | 03 November 2026 | Q136 |
| 87 | 04 November 2026 | Q137 |
| 88 | 05 November 2026 | Q138 |
| 89 | 06 November 2026 | Q139 |
| 90 | 07 November 2026 | Q140 |
| 91 | 08 November 2026 | Q141 |
| 92 | 09 November 2026 | Q142 |
| 93 | 10 November 2026 | Q143 |
| 94 | 11 November 2026 | Q144 |
| 95 | 12 November 2026 | Q145 |
| 96 | 13 November 2026 | Q146 |
| 97 | 14 November 2026 | Q147 |
| 98 | 15 November 2026 | Q148 |
| 99 | 16 November 2026 | Q149 |
| 100 | 17 November 2026 | Q150 |

## Validation snapshot

- Questions and solution/explanation pairs created: 150
- Scheduled days: 100 (10 August–17 November 2026)
- Programs compiled successfully: 150/150; the 38 programs in Days 63–100 were independently recompiled with no warnings.
- New sample and special-case runs: completed for all 38 additions. The reference has inconsistent expected output for Q120 punctuation and Q123 character/word counts; both solutions preserve the described behavior and document the discrepancies.
- The original Days 1–62 have 13 recorded MinGW format-checker diagnostics; see [DAILY_PROGRESS.md](./DAILY_PROGRESS.md).
- Manual review status: not recorded; learner completion or understanding is not claimed.

See [QUESTION_INDEX.md](./QUESTION_INDEX.md) for every question and [DAILY_PROGRESS.md](./DAILY_PROGRESS.md) for per-question validation status.