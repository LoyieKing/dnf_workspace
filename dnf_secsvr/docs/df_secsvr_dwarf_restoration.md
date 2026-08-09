# secsvr 三件套 DWARF 桩还原报告（gunnersvr / zergsvr / secagent）

生成时间：2026-08-09

本文档记录主工程 `decompile_order.md`（secsvr 已移出队列）中**带完整 DWARF、尚未开动**
的 secsvr 三件套二进制
（`gunnersvr` / `zergsvr` / `secagent`）的 DWARF 桩还原结果。本次只做**文件与结构还原**：
全部工程编译单元与头文件的镜像、类型信息（namespace / class / struct / union / enum /
typedef / 成员变量 / 方法签名）以及参数/局部变量名字；**函数体按约定保持为空**，具体内容
（逻辑）暂未动。
> 三件套已迁入独立工作区 `dnf_secsvr/`（本工作区），不再位于主工程队列内；本报告随迁。

> `df_game_r` 也带 DWARF 但为**部分**（21 CU 只覆盖 `../../Include/` 共享库与静态 FreeType，
> GameServer 核心无调试信息），且按 order 文档固定为队尾最低优先级，本次未纳入还原范围；
> 其 DWARF 覆盖的 `../../Include/` 层后续可单独按同一生成器补桩。

## 1. 目标二进制与 DWARF 概览（实测）

| 二进制 | 大小 | ELF | 编译器 | C++ CU | 源码树（CI tag） |
|---|---:|---|---|---:|---|
| `gunnersvr` | 13.5 MB | ELF32 EXEC i386 | GCC 4.1.0 SUSE（76 CU）+ 4.1.2（12 CU） | 88 | `g3_release_suse32` |
| `zergsvr` | 15.5 MB | ELF32 EXEC i386 | GCC 4.1.0 SUSE（86 CU）+ 4.1.2（12 CU） | 98 | `g3_release_suse32_bugfix_tag296` |
| `secagent` | 18.7 MB | ELF32 EXEC i386 | GCC 4.1.0 SUSE（91 CU）+ 4.1.2（59 CU） | 150 | `g3_release_suse32_bugfix_tag435` |

- 三个二进制均为 DWARF v2；4.1.2 的 CU 全部是加密库（`src/*.cpp`：TenHash / md2~sha1 /
  TenCrypt / twofish / blowfish 等）。
- 三者共享 `commlib/framework`、`commlib/zenlib`、`protocol/common` 与加密库 `src/`，
  源码路径前缀均为 `/data/secci/ci/jenkins/workspace/<tag>/src/...`。

## 2. 还原方法

生成器：`../toolchain/gen_dwarf_stubs.py`（依赖 pyelftools，纯读取 DWARF，不修改原始 ELF）。

流程：

1. 遍历 `.debug_info` 全部 CU，跳过 C/汇编（glibc csu、init.c）与系统 CU；
2. 用 `.debug_line` 文件表还原每个 CU 的**完整 include 闭包**与每个 DIE 的声明文件
   （`DW_AT_decl_file`；正确处理 DWARF2 的 1-based 目录表与 4.1.2 CU 的相对目录）；
3. 跨 CU 登记命名类型（class/struct/union/enum/typedef，按 namespace/类作用域限定名去重合并）、
   自由函数、成员方法（`DW_AT_specification` 关联定义↔声明）与全局变量；
4. 按声明文件分组输出：
   - **头文件桩**：guard + include + namespace 嵌套 + 类型完整定义（含 sizeof 注释、访问级别、
     基类、位域、静态成员、方法签名）+ 自由函数/全局变量声明；
   - **.cpp 桩**：原始 include 闭包 + 成员方法/自由函数定义（签名带参数名，函数体为空，
     局部变量名以 `// local: 类型 名字;` 注释保留）+ 全局变量定义。
5. 行表中出现但没有 DIE 的头文件输出空桩，保证文件镜像完整。

路径镜像：去掉 CI workspace 前缀，输出到 `../source/<binary>/` 下，保留原始目录结构。

## 3. 生成结果统计

| 指标 | gunnersvr | zergsvr | secagent |
|---|---:|---:|---:|
| 生成文件总数 | 337 | 363 | 481 |
| ├ 头文件桩（.h/.inl/.tcc） | 249 | 265 | 331 |
| └ 编译单元桩（.cpp） | 88 | 98 | 150 |
| 生成代码行数 | 35,166 | 41,379 | 62,408 |
| 命名类型（class/enum/typedef） | 141 | 168 | 442 |
| 成员方法定义（spec 关联） | 1,525 | 1,626 | 3,363 |
| 自由函数定义 | 22 | 21 | 99 |
| 命名自由函数（含声明） | 666 | 864 | 902 |
| 形参名覆盖率（定义函数） | 96.4%（3,675/3,811） | 95.6%（3,752/3,925） | 98.1%（9,154/9,332） |
| 成员变量名覆盖率 | 99.8%（10,483/10,506） | 99.8%（12,713/12,739） | 99.6%（21,082/21,168） |
| 局部变量名注释条数 | 2,560 | 2,832 | 7,046 |

说明：形参名取自函数**定义** DIE（GCC 4.1 在声明 DIE 上通常不写参数名），
通过 `DW_AT_specification` 与类内声明对齐；个别无名字段回退为 `argN`。

## 4. 输出布局（以 gunnersvr 为例）

```
source/gunnersvr/
├── src/
│   ├── commsvr/gunnersvr/         # gunner_*.cpp / gunner_*.h 服务专属代码
│   ├── commlib/framework/         # comm_* 通信框架
│   ├── commlib/zenlib/            # zen_* 基础库
│   ├── protocol/common/           # Tdr* / comm_conf_* / comm_proto_public_*
│   └── md5.cpp / TenHash.cpp ...  # 加密库编译单元（4.1.2 CU，相对路径）
├── inc/                           # 加密库头（adler32.h、md5.h ...）
├── output/commlib/.../include/    # 构建产物安装头（zenlib/framework/protocol，编译时实际引用）
└── import/include/...             # 第三方/内部 SDK 头（rapidxml/mysqlclient/tencrypt/tsf4g，多为空桩）
```

zergsvr 结构相同（`src/commsvr/zergsvr/zerg_*`），secagent 额外有
`src/formmog/secagent/secagent_*` 与 `protocol/formmog/`、`src/TenCrypt.cpp` 等加密库。

## 5. 还原效果样例

`source/gunnersvr/src/commsvr/gunnersvr/gunner_app.h`：

```cpp
// sizeof = 552
struct GunnerSvrApp : public Comm_SvrdApp_NonCtrl { // line 22
public:
    static const int TICK_TIME;
private:
    GunnerChannelMgr::LPCONFIG config_;
    static GunnerSvrApp *instance_;
public:
    GunnerSvrApp(const GunnerSvrApp &arg0);
    GunnerSvrApp(); // line 25
    virtual ~GunnerSvrApp(); // line 30
    virtual int process_recv_appframe(Comm_App_Frame *recv_frame); // line 45
    virtual int proc(size_t &proc_data_num); // line 62
    ...
};
```

`source/gunnersvr/src/commsvr/gunnersvr/gunner_app.cpp`：

```cpp
int GunnerSvrApp::register_timer() {
    // local: ZEN_Timer_Queue *timer_queue;
    // local: ZEN_Time_Value delay;
    // local: ZEN_Time_Value interval;
}
```

`source/secagent/src/TenCrypt.cpp`：

```cpp
// mangled: _Z11TenThreeWayPhbS_j
// line 937
void TenThreeWay(unsigned char *key, bool benc, unsigned char *buf, unsigned int buflen) {
}
```

## 6. 已知限制与说明

- **模板实参缺失**：GCC 4.1 的 DWARF2 不输出 `DW_TAG_template_*`，`std::vector` 等模板类
  在签名中渲染为 `std::vector`（无 `<T>`），后续人工还原时补全实参。
- **匿名类型**：匿名 struct/union 作为成员已内联展开（保留完整子成员与行号）；出现在函数
  签名中的匿名类型降级为 `/*anon struct*/ int` 并加注释。
- **声明无参数名**：类内声明 DIE 的形参无名字，已尽力从定义 DIE 对齐；无定义或类型不匹配时
  用 `argN`。
- **编译器生成物**：`__tcf_*`、`_GLOBAL__I_*`、`__static_initialization_and_destruction_0`
  及 inline 克隆（仅 `DW_AT_abstract_origin`、无 `DW_AT_specification` 的 out-of-line 实例）
  不输出到桩——它们对应已还原的类方法，避免噪音（每二进制约 354~608 个）。
- **系统头**：以 `#include <...>` 形式引用（不镜像文件）；`import/` 下第三方 SDK 头输出空桩，
  保证 include 引用不断链。
- **函数体为空**：未还原任何逻辑；局部变量名以注释保留，供后续人工补全时对照。
- 生成器只读原始 ELF，未改动 `dnf_installer/` 下任何文件。

## 7. 与后续还原计划的衔接

- 三个桩树已生成于 `../source/`，是本工作区“有完整 DWARF 组：补桩路线”的起点：
  `commlib` / `protocol` / 加密库在三者间同构，可交叉复用（先 `gunnersvr` → `zergsvr` →
  `secagent`，与 `df_game_secsvr_dbmw_basic_info.md` 建议一致）。
- 后续每服务先补 `main` 使目标可链接，再逐文件补函数体；构建基线需按 GCC 4.1.0 SUSE 单独评估
  （首次出现的工具链版本，32 位 / C++98 / O0 基准不变）。
- 验收沿用 `source/compare_df_community_functions.py` 同款方法（符号命中、字符串命中、助记符重叠），
  桩内保留的行号 / mangled 名 / 参数名可直接用于对照 Ghidra 反编译结果。

## 关联材料

- 专属还原顺序与策略：`decompile_order.md`（本目录）
- game/secsvr/dbmw 基本信息与计划：`df_game_secsvr_dbmw_basic_info.md`（副本）
- 生成器：`../toolchain/gen_dwarf_stubs.py`
- 主工程 order 文档（已不含 secsvr 队列）：`../../dnf_decompile/docs/decompile_order.md`
