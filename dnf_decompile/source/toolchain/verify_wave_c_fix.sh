#!/bin/bash
# verify_wave_c.sh 修正后的补跑：DWARF cp+重测、community 重建+重测、coserver/guild 重测。
set -u
cd "$(dirname "$0")/../.."
ROOT="$(pwd)"
OUT=/tmp/wave_c_verify
mkdir -p "$OUT"

cp -f "$ROOT/build/stun/df_stun_r" /tmp/cmp_bins/st_new
cp -f "$ROOT/build/channel/df_channel_r" /tmp/cmp_bins/ch_new
cp -f "$ROOT/build/bridge/df_bridge_r" /tmp/cmp_bins/br_new
cp -f "$ROOT/build/auction/df_auction_r" /tmp/cmp_bins/auc_new
cp -f "$ROOT/build/point/df_point_r" /tmp/cmp_bins/pt_new

python3 /tmp/fast_strict.py /tmp/cmp_bins/ch_orig /tmp/cmp_bins/ch_new /tmp/ch_ ch 2>&1 | tee "$OUT/channel.water"
python3 /tmp/fast_strict.py /tmp/cmp_bins/br_orig /tmp/cmp_bins/br_new /tmp/br_ br 2>&1 | tee "$OUT/bridge.water"
python3 /tmp/fast_strict.py /tmp/cmp_bins/auc_orig /tmp/cmp_bins/auc_new /tmp/auc_ auc 2>&1 | tee "$OUT/auction.water"
python3 /tmp/fast_strict.py /tmp/cmp_bins/pt_orig /tmp/cmp_bins/pt_new /tmp/auc_ pt 2>&1 | tee "$OUT/point.water"
python3 "$ROOT/toolchain/compare_stun.py" /tmp/cmp_bins/st_new 2>&1 | tee "$OUT/stun.water"

cmake --build "$ROOT/build/community" --target df_community_r -j"$(nproc)" 2>&1 | tee "$OUT/community.build.log"
python3 "$ROOT/compare_df_community_functions.py" 2>&1 | tee "$OUT/community.water"

python3 /tmp/wave_c/coserver/compare_all.py "$ROOT/build/coserver/df_coserver_r" 2>&1 | tee "$OUT/coserver.water"
python3 -c "import sys; sys.path.insert(0,'/tmp'); import guildlib; guildlib.NEW='$ROOT/build/guild/df_guild_r'; sys.argv=['compare_guild.py','--nosigcache']; import compare_guild; compare_guild.main()" 2>&1 | tee "$OUT/guild.water"

echo "===== FIX DONE ====="
