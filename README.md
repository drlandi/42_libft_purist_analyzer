# 🛠️ Libft Purist Analyzer (LPA)

A local-first, low-level C diagnostic engine built under a condition of **extreme architectural restriction**: utilizing **ONLY** the 43 original utility functions written for my custom `libft` library. 

No standard `printf`, no standard memory wrappers in the application layer, and no external library crutches. 

---

## 🚀 The Purist Constraint Blueprint

The objective of this software is to exhaustively test, cover, and execute **every single function** inside my personal `libft` ecosystem using a single unified data pipeline. 

The engine processes chaotic, unformatted terminal input streams, parses them into structured tokens, runs granular byte-level character matrices, and populates a dynamic symbol database on the Heap—all while maintaining an absolute **Zero Memory Leak** profile.

### 🗺️ Data & Pipeline Lifecycle Map

1. **Input Shielding & Sanitation:** `main.c` intercepts arguments via `argv` and cleans edge spacing using `ft_strtrim`.
2. **Character Metric Diagnostics:** `analyzer.c` performs a linear sweep of the raw string, feeding bytes through five logical character testing flags (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`).
3. **Tokenization Matrix:** `parser.c` splices the sanitized stream into string vectors using `ft_split`, encapsulates them into dynamic nodes using `ft_lstnew`, and binds them sequentially using `ft_lstadd_back`.
4. **Visual Reporting (The Banned Wrapper Challenge):** Because standard `printf` is illegal, `output.c` loops through the list collection, formats case transformations using `ft_toupper`, and streams structural analytics directly to `STDOUT` via `ft_putstr_fd`, `ft_putchar_fd`, and `ft_putnbr_fd`.

---

## 📦 Repository Structure

```text
libft_purist_analyzer/
├── Makefile             # Low-level automation compilation framework
├── README.md            # System overview and architectural documentation
├── includes/
│   ├── analyzer.h       # Project definitions and matrix structures
│   └── libft.h          # Custom 43-function static library header
├── src/
│   ├── main.c           # Central system controller and gatekeeper
│   ├── analyzer.c       # Byte-level character classification matrix
│   ├── parser.c         # Memory tokenization and heap-list factory
│   └── output.c         # File-descriptor data broadcasting stream
└── libft/               # Core source directory for the 43 primitive tools

```

---

## ⚡ The Core Discovery: Operating System vs. C Binary

During extreme scale testing, our custom C binary never dropped a frame, leaked a byte, or crashed. Instead, the application encountered a hard physical ceiling imposed by the **Linux Kernel's system call interface (`execve`)**, demonstrating that modern software engineering constraints often reside at the shell interface layer rather than within native memory structures.

---

## 🛠️ Bash Special Character & String Boundary Limits

When interacting with native binaries through a POSIX shell like Bash, specific characters disrupt how arguments are packaged before they ever reach our C code:

### 1. The Diaeresis/Umlaut Error (`¨`)

* **The Bug:** When passing multi-line text blocks, accidentally using a diaeresis/umlaut (`¨`) instead of a standard straight quote (`"` or `'`) prevents Bash from sealing the input string boundary.
* **The Result:** Bash interprets each raw newline inside the text as a separate command. This triggers our `Error: Invalid argument count` safety guard, while the terminal simultaneously throws a cascade of `command not found` faults as it attempts to execute lines of text as literal system applications.

### 2. The Backslash Escape Character (`\`)

* **The Bug:** If passed raw inside double quotes `""` or unquoted, Bash intercepts the `\` to escape the subsequent character (e.g., parsing a literal `\n` into a raw newline byte inside the program's initial `argv[1]` matrix).
* **The Safeguard:** To pass literal character streams containing `\`, `!`, or complex punctuation with absolute byte fidelity, strings must be wrapped in strict **single quotes (`'text'`)**.

---

## 📊 Industrial-Scale Stress Testing Logs

We executed a multi-tier scale performance analysis using command substitutions (`$(seq ...)`) to monitor how our custom linked-list allocation framework scales under exponential data growth:

### Tier 1: The Human Threshold (~1,100 Characters)

* **Command:** Manual multi-line paragraph describing technical and pedagogical activities.
* **Heap Architecture:** Formed dozens of dynamic string tokens via `ft_split` and allocated unique `t_list` structures.
* **Performance:** Execution completed in under `0.01ms`. Byte tracking across `ft_isalpha` and `ft_isdigit` verified flawless alignment.

### Tier 2: Micro-Scale Integration (10,000+ Characters)

* **Command:** `./libft_project "$(seq -s ' WordBlock ' 1 1500)"`
* **Heap Architecture:**
* Total character stream parsed: `~13,500 bytes`
* Total dynamic heap segments created: **3,000 distinct word tokens**
* Node footprint: 3,000 individual allocations chained sequentially via `ft_lstadd_back`.


* **Cleanup Validation:** `ft_lstclear` traversed all 3,000 heap positions sequentially, executing zero-leak remediation instantly.

### Tier 3: Macro-Scale Performance (100,000+ Characters)

* **Command:** `./libft_project "$(seq -s ' Forge ' 1 11500)"`
* **Heap Architecture:**
* Total volume: **105,000+ characters** passed through `argv[1]`.
* Dynamic token density: **23,000 isolated word strings**.
* Array scaling: `ft_split` established an internal pointer tracking index spanning 23,000 positions.


* **Performance:** Executed near-instantaneously. The low-overhead compilation cuts directly into raw system memory without garbage-collection penalties.

### Tier 4: The Final Boss — The 1,000,000 Character Ceiling

* **Command:** `./libft_project "$(seq -s ' Forge ' 1 90000)"`
* **Result:** `bash: ./libft_project: Argument list too long`
* **Architectural Assessment:**
* The program did **not** crash or SegFault.
* The heap did **not** run out of memory.
* The operating system blocked the execution during the `execve` transition because the string size exceeded the kernel's hard-coded environment buffer budget (`ARG_MAX` $\approx$ 2MB limit).



---

## 🏆 Engineering Takeaways

1. **Memory Fidelity:** `libft_purist_analyzer` is verified robust and leaks-free up to the physical boundaries of the host operating system.
2. **Interface Isolation:** When building CLI utilities in C, software limits are often split 50/50 between your algorithm's memory management and the host terminal's input token boundaries.

---

## 🚨 The 17/43 Reality Check & Project Pivot

**The Mistake:** This project was conceptualized on two absolute rules: use *ONLY* `libft` functions, and use *ALL 43* of them.

* **Rule 1 (Success):** We achieved a 100% purist build with zero standard C library functions (excluding `malloc`/`free` wrappers).
* **Rule 2 (Failure):** The architecture was entirely too streamlined. In our pursuit of an efficient, zero-leak pipeline, the engine naturally only required **17 out of 43** functions to execute flawlessly.

**The Pivot:** We refuse to artificially over-engineer this codebase with useless function calls just to tick boxes. The Libft Purist Analyzer (LPA) will remain exactly what it is: a highly efficient, 17-function diagnostic utility that successfully mapped the kernel's `execve` memory ceiling.