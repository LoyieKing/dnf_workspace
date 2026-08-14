#!/usr/bin/env bash
# Isolated cozy-re environment. cozy-re 1.5.4 pins angr==9.2.130, which
# breaks on pycparser 3.x (CLexer.filename has no setter). Keep pycparser<3
# in this venv only; do not mix with the angr 9.2.213 venv.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
# Keep the venv off the repo tree. Override with COZY_VENV if needed.
VENV="${COZY_VENV:-/tmp/dnf-cozy-venv}"

python3 -m venv "$VENV"
"$VENV/bin/pip" install -U pip setuptools wheel
"$VENV/bin/pip" install 'pycparser>=2.21,<3'
"$VENV/bin/pip" install 'cozy-re==1.5.4'
# re-assert the pin in case angr pulled a newer pycparser
"$VENV/bin/pip" install 'pycparser>=2.21,<3'

"$VENV/bin/python" - <<'PY'
import pycparser, angr, cozy, claripy
print("pycparser", pycparser.__version__)
print("angr", angr.__version__)
print("claripy", claripy.__version__)
print("cozy", cozy.__file__)
assert pycparser.__version__.startswith("2."), pycparser.__version__
assert angr.__version__ == "9.2.130", angr.__version__
print("OK")
PY

echo "COZY_VENV=$VENV"
echo "python=$VENV/bin/python"
