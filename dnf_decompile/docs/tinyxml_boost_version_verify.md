# TinyXML / Boost 真实版本鉴定与机器码校验（2026-08-09）

## 结论

- 工程原始三方库版本：**TinyXML 2.6.2**（2010-11-27 发布）、**Boost 1.48.0**（2011-11-01 发布）。
- 与工程 GCC 时代吻合：原始二进制 `.comment` 为 Red Hat GCC 4.1.2-52 / 4.4.4-13 / 4.4.6-3 / 4.4.7 混合链接，构建年份约 2012；TinyXML 2.6.2 与 Boost 1.48 正好处于该窗口（2010-11 ~ 2011-11）。
- 替换内容：
  - `source/DNFServer/ServerCommon/tinyxml.h/.cpp` → 纯净上游 2.6.2，新增 `tinyxmlerror.cpp`、`tinyxmlparser.cpp`（恢复原始 4 文件布局）；
  - `source/shared/BoostPool.h`（手写复刻版）删除，`Community/src/NetworkSession.cpp` 改用真实 `<boost/pool/object_pool.hpp>`；
  - 新增 `source/Library3rd/Boost/Include/boost/`（官方 Boost 1.48.0 头文件子集，与原始工程 `Library3rd/Boost/Include` 路径一致）；
  - 构建脚本（build-auction/point/guild、w4_compile.sh、CMakeLists）按原始编译形态给 tinyxml 三个 TU 使用专属标志，并统一 `-DBOOST_DISABLE_ASSERTS`。

## 版本证据

### TinyXML = 2.6.2

1. **版本常量**：原始 ELF（auction/point/guild/monitor 四个服务）中 `TIXML_MAJOR_VERSION/MINOR/PATCH` 常量值均为 **(2, 6, 2)**（auction 从 DWARF 地址 0x81534d4 直接读出）。
2. **2.6.2 独有函数**：原始 auction ELF 含 `TiXmlElement::QueryUnsignedAttribute`、`QueryBoolAttribute`（2.6.1 无，2.6.2 新增）；`TiXmlElement::operator=` 返回 `TiXmlElement&`。
3. **错误串**：原始二进制含 2.6.x 的 16 条错误串（2.5.3 独有的 `Memory allocation failed.` 不存在）。
4. **断言行号**：原始 `__assert_fail` 参数（断言串、文件名、行号）与 2.6.2 源码逐行吻合（tinyxml.cpp:393/1299/1509/1517/1544、tinyxmlparser.cpp:210/407/519/543/804、tinyxml.h:333）。
5. **头文件行号**：DWARF 中 tinyxml.h 各声明行号 = 2.6.2 行号 + 3（DNF 在文件头加了 3 行注释）。

### Boost = 1.48.0

1. **pool 布局/API**：原始 auction DWARF 符号 `boost::pool<default_user_allocator_new_delete>::pool(unsigned,unsigned,unsigned)`（3 参构造）、`object_pool<T,...>::object_pool(unsigned,unsigned)`（2 参）、`details::PODptr<unsigned>`、`min_alloc_size`/`min_align` —— 与官方 1.48.0 `pool.hpp` 完全一致。
2. **`min_align` 是 1.48 引入**：1.47 的 pool.hpp 只有 `min_alloc_size`，1.48 才新增 `min_align`（DWARF 中恰有 `pool::min_align` 与 `boost::detail::alignment_logic/alignment_of_impl` 符号）。
3. **boost/move 目录**：DWARF 包含 `Library3rd/Boost/Include/boost/move` 路径；Boost.Move 自 1.48 起成为独立库。
4. **alloc_size 无断言**：原始 `pool::alloc_size()` 无反查；1.48 官方头在 alloc_size 有 2 行 `BOOST_ASSERT`，需 `-DBOOST_DISABLE_ASSERTS`（原始生产构建禁用 boost 断言）——验证后机器码完全一致。

## 原始 tinyxml 编译形态（关键发现）

原始 tinyxml 是**独立对象**（无 DWARF CU），与工程其它 -O0/gnu++0x TU 不同，它是：

- 编译器：GCC 4.4.6-3（`/tmp/cc1plus446bin/cc1plus`，Red Hat 4.4.6-3）；guild 为 4.4.4-13
- 优化：**-O3**（证据：`TiXmlFOpen` 为 tail-call `jmp fopen`、Parse 内联 TiXmlParsingData 构造、`.clone` 符号）
- 标准：**gnu++98**（-O3+gnu++98 命中 143+，-O3+gnu++0x 反而降到 141）
- libstdc++ 头：**4.4.6**（`/tmp/lsd44/v4.4.6`，与 DWARF 显示的 `/usr/include/c++/4.4.6` 一致）
- 宏：`TIXML_USE_STL`（DWARF 证实 `LoadFile(const std::string&,...)`），断言开启（二进制含 `__assert_fail`）

## 机器码校验结果（归一化：指令序列相同、忽略链接地址与对齐 nop）

### auction（有 DWARF 金标准，GCC 4.4.6-3）

| 组件 | 替换前（手写重建，-O0） | 替换后（真实版本，原始编译形态） |
|---|---|---|
| tinyxml 函数 | 12/148 identical | **149/150 identical**（仅 `GetEntity` 不同：DNF 在源码里手工展开了 5 次实体循环，编译器标志无法复现；语义等价） |
| boost 函数 | 45/46（community 口径）/ 120/121（auction 口径） | **120/121 identical**（唯一 DIFF 为 DNF 自家包装类 `nsl::object_pool_by_boost_pool::construct()`，非 boost） |
| 全量函数（原始字节） | 2190 identical | **2233 identical**（提升 43 个） |

### point（与 auction 同源，GCC 4.4.6-3）

- tinyxml **149/150**、boost **120/121**（与 auction 一致）。

### guild（无 DWARF，原始 tinyxml 由 GCC 4.4.4-13 编译）

- 4.4.4 编译 tinyxml 后：**145/148 identical**（仅 `TiXmlDocument` D0/D1/D2 三个析构的 string 析构内联决策不同，编译器内部行为）。

### community（混合工具链：c6-g++ 4.4.x + 4.1.2 静态 libstdc++）

- 用真实 Boost 1.48.0 头替换手写 BoostPool.h 后：**boost 函数 46/46 identical**（手写版为 45/46，`ordered_malloc_need_resize` 差 1 条；真实头反而补齐），boost 符号集 **50/50 与原始完全一致**（无 missing/extra）。

## 替换清单

```
source/DNFServer/ServerCommon/tinyxml.h          ← TinyXML 2.6.2 上游
source/DNFServer/ServerCommon/tinyxml.cpp        ← TinyXML 2.6.2 上游
source/DNFServer/ServerCommon/tinyxmlerror.cpp   ← 新增（2.6.2）
source/DNFServer/ServerCommon/tinyxmlparser.cpp  ← 新增（2.6.2）
source/Library3rd/Boost/Include/boost/           ← Boost 1.48.0 官方头子集（426 文件）
source/shared/BoostPool.h                        ← 删除（手写复刻）
source/Community/src/NetworkSession.cpp          ← #include <boost/pool/object_pool.hpp>
source/toolchain/build-auction.sh / build-point.sh / build-guild.sh / w4_compile.sh
source/CMakeLists.txt                            ← tinyxml 专属标志 + vendored boost 路径
```

tinyxml 三个 TU 的专属标志（build-auction/point）：`-O3 -std=gnu++98 -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS` + 4.4.6 libstdc++ 头（`C6LIBSTDCXX446` 可覆盖路径）；guild 用 4.4.4 cc1plus（`TINYXML_CXX`）。

## 剩余差异定性

- `TiXmlBase::GetEntity`：DNF 在 tinyxmlparser.cpp 中手工展开实体搜索循环（5 次 strncmp），stock 2.6.2 为 `for(i=0;i<NUM_ENTITY;++i)` 循环；已穷举 -O3/-O2/-Os/-funroll-loops（全开/单文件）均无法复现，判定为第三方库源码补丁，语义完全一致。
- `TiXmlDocument` D0/D1/D2（guild）与 `boost::object_pool_by_boost_pool::construct`（DNF 包装类）：编译器内联/布局微差，语义一致，非本项目可修。

## 与 git HEAD 版本的差异（重要）

git HEAD（提交 `7f6fb0d`，标题含「TinyXML 2.6.2 原始源码」）里 tinyxml.h/.cpp 实为**被改过的 2.6.2**：把 `TiXmlNode::NextSibling()`（无参）与 `TiXmlDocument::LoadFile(const std::string&,...)` 从 2.6.2 头文件内联实现改成了「头文件只声明 + tinyxml.cpp 外联定义」。

原始二进制证据表明这种改动**与原始不符**：原始 auction ELF 中这两个函数是 **W（弱符号）**，位于 ServerXml TU 的 0x8090336/0x80903c2（即 2.6.2 头文件内联版在 -O0 消费者 TU 中发出的外联副本）；若按 HEAD 外联版编译会变成 tinyxml.o 里的强符号，符号类型与原始不一致。

因此本次替换使用**纯净上游 2.6.2**（sourceforge `tinyxml_2_6_2.tar.gz`，`tinyxmlerror.cpp`/`tinyxmlparser.cpp` 与上游逐字节一致；`tinyxml.h`/`tinyxml.cpp` 恢复为上游内联形态）。当前工作区已放回 stock 2.6.2，与 HEAD 的 diff 为 7+/13- 行；**请勿让 Windows 侧同步/编辑器用 HEAD 版本覆盖回外联版**（建议后续将 stock 2.6.2 提交入库固化）。
