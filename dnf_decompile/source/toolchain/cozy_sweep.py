#!/usr/bin/env python3
"""Sweep official non-IDENTICAL functions with cozy_compare, resume-safe.

Runs each symbol in a child process so a hang/OOM cannot kill the batch.

  /path/to/cozy-venv/bin/python source/toolchain/cozy_sweep.py --workers 2
"""
from __future__ import annotations

import argparse
import csv
import os
import signal
import subprocess
import sys
import time
from collections import Counter
from pathlib import Path

ROOT = Path("/home/loyieking/dnf_workspace")
TOOL = Path(__file__).resolve().parent / "cozy_compare.py"
REPORT_DIR = ROOT / "dnf_decompile/function_reports"
DEFAULT_OUT = Path("/tmp/grok-goal-62d2c03162ca/implementer/cozy_sweep.tsv")
SERVICES = ("statics", "guild", "monitor", "manager", "dbmw")


def size_timeout(sz: int, base: int) -> int:
    if sz <= 0x80:
        return min(base, 25)
    if sz <= 0x100:
        return min(base, 40)
    if sz <= 0x200:
        return min(base, 55)
    if sz <= 0x400:
        return min(base, 80)
    if sz <= 0x800:
        return min(base, 110)
    return min(base, 140)


def load_done(path: Path) -> set[tuple[str, str]]:
    done = set()
    if not path.exists():
        return done
    with path.open() as f:
        for row in csv.DictReader(f, delimiter="\t"):
            done.add((row["svc"], row["name"]))
    return done


def collect_jobs(services, statuses, max_size, skip_alias):
    want = set(statuses)
    jobs = []
    for svc in services:
        rows = []
        with (REPORT_DIR / svc / "manifest.tsv").open() as f:
            for row in csv.DictReader(f, delimiter="\t"):
                if row["status"] not in want:
                    continue
                try:
                    sz = int(row["orig_size"], 16)
                except Exception:
                    continue
                if sz > max_size:
                    continue
                rows.append(row)
        names = {r["name"] for r in rows}
        for row in rows:
            name = row["name"]
            if skip_alias and (name.endswith("C2Ev") or name.endswith("D2Ev")):
                alt = name.replace("C2Ev", "C1Ev").replace("D2Ev", "D1Ev")
                if alt in names:
                    continue
            sz = int(row["orig_size"], 16)
            jobs.append((svc, name, row["status"], sz))
    jobs.sort(key=lambda t: (t[3], t[0], t[1]))
    return jobs


VERDICTS = (
    "SEMANTIC_EQ",
    "SEMANTIC_DIFF",
    "INCONCLUSIVE",
    "TIMEOUT",
    "ERROR",
    "MISSING",
    "PATH_EQ",
    "PATH_DIFF",
    "PATH_INCONCLUSIVE",
)


def parse_verdict(stdout, stderr, returncode):
    verdict = "ERROR"
    detail = ""
    for line in (stdout or "").splitlines():
        if line.startswith("  ") and line[2:].split(None, 1)[0] in VERDICTS:
            parts = line.strip().split(None, 1)
            verdict = parts[0]
            detail = parts[1] if len(parts) > 1 else ""
            break
    if verdict == "ERROR" and not detail:
        err = (stderr or "").strip().splitlines()
        tail = err[-3:] if err else ["exit %s" % returncode]
        detail = " | ".join(tail)[:400]
    return verdict, detail


def run_compare(py, svc, name, timeout_s, path_only=False):
    cmd = [py, str(TOOL), svc, name, "--timeout", str(timeout_s)]
    if path_only:
        cmd.append("--path-only")
        timeout_s = min(timeout_s, 20)
    p = subprocess.run(
        cmd,
        capture_output=True,
        text=True,
        timeout=timeout_s + 20,
        env={**os.environ, "PYTHONUNBUFFERED": "1"},
    )
    verdict, detail = parse_verdict(p.stdout, p.stderr, p.returncode)
    return verdict, detail


def run_one(py, svc, name, status, sz, timeout_s):
    t0 = time.time()
    try:
        verdict, detail = run_compare(py, svc, name, timeout_s)
    except subprocess.TimeoutExpired:
        try:
            verdict, detail = run_compare(py, svc, name, 15, path_only=True)
            detail = "fallback hard-kill %ds; %s" % (timeout_s + 20, detail)
        except Exception as e:
            verdict = "TIMEOUT"
            detail = "hard-kill after %ds size=0x%x path-fallback %s" % (
                timeout_s + 20,
                sz,
                e,
            )
    except Exception as e:
        return {
            "svc": svc,
            "status": status,
            "name": name,
            "verdict": "ERROR",
            "detail": "%s: %s" % (type(e).__name__, e),
            "size": hex(sz),
        }
    if verdict == "TIMEOUT":
        try:
            verdict, detail = run_compare(py, svc, name, 15, path_only=True)
            detail = "fallback invoke-timeout; %s" % detail
        except Exception as e:
            verdict = "TIMEOUT"
            detail = "invoke-timeout then path-fallback %s" % e
    return {
        "svc": svc,
        "status": status,
        "name": name,
        "verdict": verdict,
        "detail": detail.replace("\t", " ").replace("\n", " "),
        "size": hex(sz),
        "elapsed": "%.1f" % (time.time() - t0),
    }


def append_row(out: Path, row: dict, header_needed: bool):
    fields = ["svc", "status", "name", "verdict", "size", "detail"]
    with out.open("a") as f:
        if header_needed:
            f.write("\t".join(fields) + "\n")
        f.write("\t".join(row.get(k, "") for k in fields) + "\n")
        f.flush()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--python", default=sys.executable)
    ap.add_argument("--out", default=str(DEFAULT_OUT))
    ap.add_argument("--services", default=",".join(SERVICES))
    ap.add_argument("--status", default="NEAR,DIFF")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x10000)
    ap.add_argument("--timeout", type=int, default=140, help="cap per function")
    ap.add_argument("--workers", type=int, default=2)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--no-skip-alias", action="store_true")
    args = ap.parse_args()

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    done = load_done(out)
    header_needed = not out.exists() or out.stat().st_size == 0

    jobs = collect_jobs(
        [s.strip() for s in args.services.split(",") if s.strip()],
        [s.strip() for s in args.status.split(",") if s.strip()],
        args.max_size,
        skip_alias=not args.no_skip_alias,
    )
    pending = [j for j in jobs if (j[0], j[1]) not in done]
    if args.limit:
        pending = pending[: args.limit]
    print(
        "jobs=%d done=%d pending=%d workers=%d out=%s"
        % (len(jobs), len(done), len(pending), args.workers, out),
        flush=True,
    )

    from concurrent.futures import ThreadPoolExecutor, as_completed

    counts = Counter()
    submitted = 0

    def submit(ex, job):
        svc, name, status, sz = job
        to = size_timeout(sz, args.timeout)
        return ex.submit(run_one, args.python, svc, name, status, sz, to)

    with ThreadPoolExecutor(max_workers=max(1, args.workers)) as ex:
        futs = {}
        for job in pending[: args.workers * 2 or 1]:
            futs[submit(ex, job)] = job
            submitted += 1
        next_i = submitted
        finished = 0
        while futs:
            for fut in as_completed(list(futs.keys()), timeout=None):
                job = futs.pop(fut)
                try:
                    row = fut.result()
                except Exception as e:
                    svc, name, status, sz = job
                    row = {
                        "svc": svc,
                        "status": status,
                        "name": name,
                        "verdict": "ERROR",
                        "detail": str(e),
                        "size": hex(sz),
                    }
                append_row(out, row, header_needed)
                header_needed = False
                counts[row["verdict"]] += 1
                finished += 1
                print(
                    "[%d/%d] %s %s %s"
                    % (finished, len(pending), row["verdict"], row["svc"], row["name"]),
                    flush=True,
                )
                if next_i < len(pending):
                    futs[submit(ex, pending[next_i])] = pending[next_i]
                    next_i += 1
                break

    print("SUMMARY", dict(counts), "n=%d" % sum(counts.values()), flush=True)
    print("OUT", out, flush=True)


if __name__ == "__main__":
    main()
