# build_recon —— 重建的原始构建树骨架

本目录是 secsvr 三件套**原始构建树结构的重建骨架**（只含目录与说明，不复制源码）。
每个节点用 README 说明其角色、构建方式与证据；实际桩源码见 `../source/`，
详细分析与证据见 `../docs/df_secsvr_build_recon.md`。

```
src/                 主工程源码（GCC 4.1.0 SUSE，共享，按 tag 构建）
output/              各库构建产物（release/include 已由 DWARF 证实，release/lib 推断）
import/include/      三方/内部 SDK 头（rapidxml / mysqlclient / TenCrypt / tsf4g-TDR）
include/ inc/        tencrypt_new 独立工程的对外/内部头
```

加密库独立工程 `tencrypt_new`（`/data/yunfeiyang/dev/branch/src/common/tencrypt_new`，
GCC 4.1.2）不在主树内，其头文件在 `include/` 与 `inc/` 处表示。
