#!/usr/bin/env python3
"""Scan official non-IDENTICAL functions with encounter/objdiff.

Extracts each FUNC from ORIG and rebuild into tiny ET_REL objects, then runs
objdiff-cli for an instruction-match percent. This is structural matching
(like a decomp progress bar), not cozy semantic equivalence.

  python3 source/toolchain/objdiff_sweep.py --limit 20
"""
from __future__ import annotations

import argparse
import csv
import json
import os
import subprocess
import sys
import tempfile
import time
from collections import Counter
from pathlib import Path

ROOT = Path("/home/loyieking/dnf_workspace")
REPORT_DIR = ROOT / "dnf_decompile/function_reports"
ORIG_DIR = ROOT / "dnf_installer/build/dnf_data/home/template/neople"
NEW_DIR = ROOT / "dnf_decompile/build"
DEFAULT_CLI = Path("/tmp/grok-goal-62d2c03162ca/implementer/objdiff-cli")
DEFAULT_OUT = Path("/tmp/grok-goal-62d2c03162ca/implementer/objdiff_sweep.tsv")
EXTRACT = Path(__file__).resolve().parent / "objdiff_extract.py"

SERVICE_ORIG = {
    "statics": ORIG_DIR / "statics/df_statics_r",
    "guild": ORIG_DIR / "guild/df_guild_r",
    "monitor": ORIG_DIR / "monitor/df_monitor_r",
    "manager": ORIG_DIR / "manager/df_manager_r",
    "dbmw": ORIG_DIR / "dbmw_guild/df_dbmw_r",
    "coserver": ORIG_DIR / "coserver/df_coserver_r",
}
SERVICE_NEW = {
    "statics": NEW_DIR / "statics/df_statics_r",
    "guild": NEW_DIR / "guild/df_guild_r",
    "monitor": NEW_DIR / "monitor/df_monitor_r",
    "manager": NEW_DIR / "manager/df_manager_r",
    "dbmw": NEW_DIR / "dbmw/df_dbmw_r",
    "coserver": NEW_DIR / "coserver/df_coserver_r",
}
SERVICES = ("statics", "guild", "monitor", "manager", "dbmw")

sys.path.insert(0, str(Path(__file__).resolve().parent))
from objdiff_extract import extract_one  # noqa: E402


def collect_jobs(services, statuses, skip_alias, max_size):
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
            jobs.append((svc, name, row["status"], int(row["orig_size"], 16)))
    jobs.sort(key=lambda t: (t[3], t[0], t[1]))
    return jobs


def load_done(path: Path):
    done = set()
    if not path.exists():
        return done
    with path.open() as f:
        for row in csv.DictReader(f, delimiter="\t"):
            done.add((row["svc"], row["name"]))
    return done


def parse_match(js: dict) -> tuple[str, str]:
    """Return (verdict, detail) from objdiff one-shot JSON."""
    left_syms = (js.get("left") or {}).get("symbols") or []
    right_syms = (js.get("right") or {}).get("symbols") or []
    if not left_syms or not right_syms:
        return "MISSING", "left=%d right=%d" % (len(left_syms), len(right_syms))
    # pick the first function-like symbol that has match_percent
    hits = []
    for s in left_syms + right_syms:
        if "match_percent" in s:
            hits.append(s)
    if not hits:
        l0 = left_syms[0]
        r0 = right_syms[0]
        return (
            "NO_MATCH_FIELD",
            "lsize=%s rsize=%s lflags=%s" % (l0.get("size"), r0.get("size"), l0.get("flags")),
        )
    s = hits[0]
    try:
        pct = float(s["match_percent"])
    except Exception:
        pct = -1.0
    detail = "match=%.2f size=%s kind=%s flags=%s" % (
        pct,
        s.get("size"),
        s.get("kind"),
        s.get("flags"),
    )
    if pct >= 100.0:
        return "OBJ_IDENTICAL", detail
    if pct >= 95.0:
        return "OBJ_NEAR", detail
    if pct >= 0.0:
        return "OBJ_DIFF", detail
    return "NO_MATCH_FIELD", detail


def run_one(cli: Path, svc: str, name: str, status: str, sz: int, timeout_s: int, scratch: Path):
    t0 = time.time()
    o_elf = SERVICE_ORIG[svc]
    n_elf = SERVICE_NEW[svc]
    o_rel = scratch / ("%s__%s__orig.o" % (svc, name.replace("/", "_")[:80]))
    n_rel = scratch / ("%s__%s__new.o" % (svc, name.replace("/", "_")[:80]))
    out_json = scratch / ("%s__%s.json" % (svc, name.replace("/", "_")[:80]))
    try:
        extract_one(o_elf, name, o_rel)
        extract_one(n_elf, name, n_rel)
    except Exception as e:
        return {
            "svc": svc,
            "status": status,
            "name": name,
            "verdict": "EXTRACT_FAIL",
            "size": hex(sz),
            "detail": "%s: %s" % (type(e).__name__, e),
            "elapsed": "%.1f" % (time.time() - t0),
        }
    try:
        p = subprocess.run(
            [
                str(cli),
                "diff",
                "-1",
                str(o_rel),
                "-2",
                str(n_rel),
                "-o",
                str(out_json),
                "--format",
                "json",
                name,
            ],
            capture_output=True,
            text=True,
            timeout=timeout_s,
        )
    except subprocess.TimeoutExpired:
        return {
            "svc": svc,
            "status": status,
            "name": name,
            "verdict": "TIMEOUT",
            "size": hex(sz),
            "detail": "objdiff-cli killed after %ds" % timeout_s,
            "elapsed": "%.1f" % (time.time() - t0),
        }
    if p.returncode != 0 or not out_json.exists() or out_json.stat().st_size == 0:
        err = (p.stderr or p.stdout or "").strip().splitlines()
        tail = " | ".join(err[-3:])[:300]
        return {
            "svc": svc,
            "status": status,
            "name": name,
            "verdict": "ERROR",
            "size": hex(sz),
            "detail": tail or ("exit %s" % p.returncode),
            "elapsed": "%.1f" % (time.time() - t0),
        }
    try:
        js = json.loads(out_json.read_text())
        verdict, detail = parse_match(js)
    except Exception as e:
        verdict, detail = "ERROR", "json %s: %s" % (type(e).__name__, e)
    # drop per-func artifacts; keep TSV only
    for pth in (o_rel, n_rel, out_json):
        try:
            pth.unlink()
        except Exception:
            pass
    return {
        "svc": svc,
        "status": status,
        "name": name,
        "verdict": verdict,
        "size": hex(sz),
        "detail": detail.replace("\t", " ").replace("\n", " "),
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
    ap.add_argument("--cli", default=str(DEFAULT_CLI))
    ap.add_argument("--out", default=str(DEFAULT_OUT))
    ap.add_argument("--services", default=",".join(SERVICES))
    ap.add_argument("--status", default="NEAR,DIFF")
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x10000)
    ap.add_argument("--timeout", type=int, default=20)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--no-skip-alias", action="store_true")
    args = ap.parse_args()

    cli = Path(args.cli)
    if not cli.exists():
        sys.stderr.write("missing objdiff-cli at %s\n" % cli)
        sys.exit(2)

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    done = load_done(out)
    header_needed = not out.exists() or out.stat().st_size == 0
    jobs = collect_jobs(
        [s.strip() for s in args.services.split(",") if s.strip()],
        [s.strip() for s in args.status.split(",") if s.strip()],
        skip_alias=not args.no_skip_alias,
        max_size=args.max_size,
    )
    pending = [j for j in jobs if (j[0], j[1]) not in done]
    if args.limit:
        pending = pending[: args.limit]
    print(
        "jobs=%d done=%d pending=%d out=%s"
        % (len(jobs), len(done), len(pending), out),
        flush=True,
    )

    scratch = Path(tempfile.mkdtemp(prefix="objdiff_sweep_", dir="/tmp"))
    counts = Counter()
    try:
        for i, (svc, name, status, sz) in enumerate(pending, 1):
            row = run_one(cli, svc, name, status, sz, args.timeout, scratch)
            append_row(out, row, header_needed)
            header_needed = False
            counts[row["verdict"]] += 1
            print(
                "[%d/%d] %s %s %s %s"
                % (i, len(pending), row["verdict"], svc, name, row["detail"][:80]),
                flush=True,
            )
    finally:
        try:
            os.rmdir(scratch)
        except Exception:
            pass
    print("SUMMARY", dict(counts), "n=%d" % sum(counts.values()), flush=True)
    print("OUT", out, flush=True)


if __name__ == "__main__":
    main()
