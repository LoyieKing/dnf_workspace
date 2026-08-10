#!/bin/bash
# Wave C 全量验证：重建 13 个服务 + 重新比对（豁免口径已生效）。
# 用法: bash source/toolchain/verify_wave_c.sh
# 输出: /tmp/wave_c_verify/<svc>.water （每服务水位）+ overall.txt
set -u
cd "$(dirname "$0")/../.."
ROOT="$(pwd)"
OUT=/tmp/wave_c_verify
mkdir -p "$OUT"
: > "$OUT/overall.txt"

run_svc() {
  local svc="$1"; shift
  echo "===== $svc =====" | tee -a "$OUT/overall.txt"
  "$@" 2>&1 | tee "$OUT/$svc.build.log"
}

# DWARF 五服务：重建 + fast_strict（豁免口径）
for svc in stun channel bridge auction point; do
  ( run_svc "$svc" bash "$ROOT/source/toolchain/build-$svc.sh" \
      || echo "$svc BUILD FAILED" >> "$OUT/overall.txt" ) || true
done

cp -f "$ROOT/build/stun/df_stun_r" /tmp/cmp_bins/st_new
cp -f "$ROOT/build/channel/df_channel_r" /tmp/cmp_bins/ch_new
cp -f "$ROOT/build/bridge/df_bridge_r" /tmp/cmp_bins/br_new
cp -f "$ROOT/build/auction/df_auction_r" /tmp/cmp_bins/auc_new
cp -f "$ROOT/build/point/df_point_r" /tmp/cmp_bins/pt_new

python3 /tmp/fast_strict.py /tmp/cmp_bins/ch_orig /tmp/cmp_bins/ch_new /tmp/ch_ ch 2>&1 | tee "$OUT/channel.water"
python3 /tmp/fast_strict.py /tmp/cmp_bins/br_orig /tmp/cmp_bins/br_new /tmp/br_ br 2>&1 | tee "$OUT/bridge.water"
python3 /tmp/fast_strict.py /tmp/cmp_bins/auc_orig /tmp/cmp_bins/auc_new /tmp/auc_ auc 2>&1 | tee "$OUT/auction.water"
python3 /tmp/fast_strict.py /tmp/cmp_bins/pt_orig /tmp/cmp_bins/pt_new /tmp/auc_ pt 2>&1 | tee "$OUT/point.water"
python3 "$ROOT/source/toolchain/compare_stun.py" /tmp/cmp_bins/st_new 2>&1 | tee "$OUT/stun.water"

# 无 DWARF 服务：重建 + 各自比对脚本
for svc in coserver statics relay guild monitor manager dbmw; do
  ( run_svc "$svc" bash "$ROOT/source/toolchain/build-$svc.sh" \
      || echo "$svc BUILD FAILED" >> "$OUT/overall.txt" ) || true
done

python3 "$ROOT/source/toolchain/compare_statics.py" 2>&1 | tee "$OUT/statics.water"
python3 /tmp/wave_c/relay/compare_relay.py 2>&1 | tee "$OUT/relay.water"
python3 /tmp/wave_c/coserver/compare_all.py "$ROOT/build/coserver/df_coserver_r" 2>&1 | tee "$OUT/coserver.water"
python3 "$ROOT/source/toolchain/compare_monitor.py" 2>&1 | tee "$OUT/monitor.water"
python3 "$ROOT/source/toolchain/compare_dbmw.py" 2>&1 | tee "$OUT/dbmw.water"
python3 "$ROOT/source/toolchain/compare_manager.py" 2>&1 | tee "$OUT/manager.water"

# guild：compare_guild 读 /tmp/guildlib.py（NEW 已指向 build/guild）
python3 "$ROOT/source/toolchain/compare_guild.py" --nosigcache 2>&1 | tee "$OUT/guild.water"

# community：CMake 增量重建 + 官方口径
cmake --build "$ROOT/build/community" --target df_community_r -j"$(nproc)" 2>&1 | tee "$OUT/community.build.log"
python3 "$ROOT/source/compare_df_community_functions.py" 2>&1 | tee "$OUT/community.water"

echo "===== DONE =====" | tee -a "$OUT/overall.txt"
