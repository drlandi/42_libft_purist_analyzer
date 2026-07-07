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