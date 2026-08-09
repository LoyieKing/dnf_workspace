# 宏生成代码识别与通用宏重构报告

生成时间：2026-08-09

## 1. 概述

对 `source/`（排除 `Library3rd/`、`build-*/`）做了宏生成痕迹普查，确认以下重复代码形态来自原始源码中的宏展开（重构版本手工展开成了冗长代码），并已抽回通用宏：

| 形态 | 原始宏形态（推测） | 现抽宏 | 落点 |
|---|---|---|---|
| 包构造器 `memset+setCategory+setPacketID+setSize` | `PACKET_CTOR_BODY(cat,pid,sz)` | `PACKET_CTOR_BODY` | 38 处 |
| 包构造器（无 memset，bridge 树） | `setCategory+setPacketID+setSize` | `PACKET_HEADER_SET` | 4 处 |
| 进出函数日志 `Lock; <<"In/Out"<<函数名<<endl; Unlock` | `LOG_IN()/LOG_OUT()` | `DNF_LOG_IN/DNF_LOG_OUT` | 20 处 |
| statics 包初始化 `new ((void*)this) PacketHeader(id,sz)` | 构造辅助宏 | `PACKET_HEADER_INIT` | 31 处 |
| monitor 协议注册表 `m_handlers[id]=(void*)CPacketTranslater::fn` | `REG_HANDLER(id,fn)` | `REG_HANDLER` | 119 处 |
| 服务错误注册 `sprintf+map.insert` 对 | `REGISTER_ERROR(err)` | `REGISTER_SERVICE_ERROR` | 52 处 |
| ChannelService 处理函数骨架 `on##name` 签名 + `DNF_LOG_IN/OUT` + `return 1` | `HANDLER_BEGIN(name)/HANDLER_END()` | `CHANNEL_HANDLER_BEGIN/END` | 11 处（8 完整 + 3 仅头部） |
| `gFileLogInfo.Lock(); << ... << endl; Unlock();` 三连 | `GLOG(stream, ...)` | `GLOG` | 166 处 |
| dbmw 通用 try/catch：`DNF_LOG_SCOPE_LINE + log(file, "MSG Exception Break...")` 对 | `CATCH_LOG(file,msg,line_e,line_all)` | `DNF_CATCH_LOG` | 89 处 |
| dbmw 通用 try/catch：`printf + throw` / `puts + throw` 对 | `CATCH_RETHROW(msg)` | `DNF_CATCH_RETHROW` | 4 处 |

## 2. 宏定义

### 2.1 `PACKET_CTOR_BODY(cat, pid, sz)`（shared 与 ChannelOld 各定义一份）

定义位置：`shared/common/include/PacketDesign.h`、`ChannelOld/DNFChannelServer|Bridge/ChannelServiceApp.h`

```cpp
#define PACKET_CTOR_BODY(cat, pid, sz) \
    memset(this, 0, sz); \
    setCategory(cat); \
    setPacketID(pid); \
    setSize(sz)
```

用于：`PacketDesign.h`（4）、`DNFPacket.h`（1）、`AuctionPacket.h`（25，由原 `AUCTION_PACKET_CTOR_BODY` 统一改名）、channel server `ChannelService.cpp`（5）、`CheckThread.cpp`（3）。

### 2.2 `PACKET_HEADER_SET(cat, pid, sz)`（ChannelOld 两树）

```cpp
#define PACKET_HEADER_SET(cat, pid, sz) \
    setCategory(cat); \
    setPacketID(pid); \
    setSize(sz)
```

bridge 树的 4 个包构造器原始代码没有 `memset`（与 server 树不同），必须用无 memset 变体保持机器码一致。

### 2.3 `DNF_LOG_IN()` / `DNF_LOG_OUT()`（ChannelOld 两树 `ChannelServiceApp.h`）

```cpp
#define DNF_LOG_IN() \
    gFileLogInfo.Lock(); \
    gFileLogInfo << "In  " << __FUNCTION__ << endl; \
    gFileLogInfo.Unlock()
#define DNF_LOG_OUT() \
    gFileLogInfo.Lock(); \
    gFileLogInfo << "Out " << __FUNCTION__ << endl; \
    gFileLogInfo.Unlock()
```

依据：20 处日志字符串与所在函数名逐一比对全部一致；GCC 4.4 的 `__FUNCTION__` 在成员函数内输出短函数名（已实测），展开后生成的 rodata 字符串内容与原文完全相同（`"In  "`、`"onSC_GET_SCRIPT"` 等已在重建二进制中验证）。

### 2.4 `PACKET_HEADER_INIT(id, sz)`（`statics/StaticsPacket.cpp` 局部）

```cpp
#define PACKET_HEADER_INIT(id, sz) new ((void*)this) PacketHeader(id, sz)
```

31 个包构造器第一行统一替换。

### 2.5 `REG_HANDLER(id, fn)`（`monitor/MonitorTypes.cpp` 局部）

```cpp
#define REG_HANDLER(id, fn) m_handlers[id] = (void*)CPacketTranslater::fn
```

119 行协议注册表统一替换（保留行尾包头注释）。

### 2.6 `REGISTER_SERVICE_ERROR(enum_type, err)`（`ServiceError.cpp` 局部）

```cpp
#define REGISTER_SERVICE_ERROR(enum_type, err) \
    sprintf(nsl::___errstr_tmp___, "[%d:%s]", err, #err); \
    nsl::___errstr_map___.insert(std::make_pair<enum_type, char(&)[2048]>(err, nsl::___errstr_tmp___))
```

52 个「sprintf + map.insert」对压缩为单行。`#err` 字符串化结果与原有错误名字符串逐一验证一致（52/52）。`InitServiceErrorStr` 中 5 个非标准串（如 `"***GetErrorStr() failed***"`）不适合 `#err`，保留原样。

### 2.7 `CHANNEL_HANDLER_BEGIN(name)` / `CHANNEL_HANDLER_END()`（ChannelOld 两树 `ChannelServiceApp.h`）

```cpp
#define CHANNEL_HANDLER_BEGIN(name) \
    DWORD ChannelServiceApp::ChannelService::on##name(LPPACKET_HEADER pPCK, TCPUser* u) \
    { \
        DNF_LOG_IN();

#define CHANNEL_HANDLER_END() \
        DNF_LOG_OUT(); \
        return 1; \
    }
```

`on##name` 直接编码了「on 后跟协议大写名」的命名约定，展开与原函数签名 + In/Out 日志逐 token 相同。

完整转换（BEGIN+END，8 处）：
- server：`onSC_GET_SCRIPT`、`onSC_CHECK_SCRIPT_VERSION`、`onCS_GET_SCRIPT`、`onCS_ASK_CHANNEL_INFO`
- bridge：`onCS_NOTICE_CHANNEL_SERVER`、`onCS_CHECK_SCRIPT_VERSION`、`onCS_GET_SCRIPT`、`onCS_GET_GC_INFO`

仅 BEGIN（3 处，结尾各异保留手写）：server `onCS_CONNECT`（无 OUT）、`onCS_UPDATE_CHANNEL_INFO`（OUT 在函数中部）、`onCS_CHECK_SCRIPT_VERSION`（结尾是原始 `"Out  "` 双空格字符串，不能并入单空格 `DNF_LOG_OUT`）。

未转换（结构不匹配）：server `onSC_ASK_CHANNEL_INFO`/`onSC_GET_GC_INFO`（无日志）、bridge `onCS_UPDATE_CHANNEL_INFO`（单参数签名、无日志）。

各 handler 体内的 `tag##name*` 强转仅在部分 handler 出现且局部变量名各异，未纳入宏（强转保持显式一行）。

### 2.8 `GLOG(stream, ...)`（ChannelOld 两树 `ChannelServiceApp.h`）

```cpp
#define GLOG(stream, ...) \
    (stream).Lock(); \
    (stream) << __VA_ARGS__ << endl; \
    (stream).Unlock()
```

覆盖 ChannelOld 全部 cpp 中的 166 处 `gFileLogInfo.Lock(); gFileLogInfo << ... << endl; gFileLogInfo.Unlock();` 三连（含多行 `<<` 链与 `ChannelServiceApp::` 限定名调用）。用法：

```cpp
GLOG(gFileLogInfo, "Key " << getEncKey());
```

`DNF_LOG_IN/OUT` 也改为基于 `GLOG` 定义。`(stream)` 括号化展开与原 `stream.Lock()` 编译结果相同。

未转换的 6 处：4 处 `Lock()` 与 `<<` 之间夹着局部声明（`onCS_UPDATE_CHANNEL_INFO` 内，移动声明会改变指令顺序）；2 处 `Lock()` 在 `if` 块内而 `<<`/`Unlock()` 在块外（原反编译形态即如此，无法用三连宏表达）。

### 2.9 `DNF_CATCH_LOG` / `DNF_CATCH_RETHROW`（`DNFFileLog.h`）

```cpp
#define DNF_CATCH_LOG(logfile, msg, line_e, line_all) \
    catch (CDNFException& e) \
    { \
        DNF_LOG_SCOPE_LINE(line_e); \
        log(logfile, msg " : %s\n", e.what()); \
    } \
    catch (...) \
    { \
        DNF_LOG_SCOPE_LINE(line_all); \
        log(logfile, msg "\n"); \
    }

#define DNF_CATCH_RETHROW(msg) \
    catch (CDNFException& e) \
    { \
        printf(msg " : %s\n", e.what()); \
        throw; \
    } \
    catch (...) \
    { \
        puts(msg); \
        throw; \
    }
```

dbmw 中 93 个「try + CDNFException + catch-all」块收敛为单行（89 个 log 家族 + 4 个 printf+throw 家族）。`msg " : %s\n"` 为编译期字符串拼接，展开与手写逐 token 相同。剩余 10 个未转换：韩文编码消息、两 catch 日志文件不一致、`throw CDNFException("...")` 重抛等特殊变体。

> 附带修复（dbmw 外部改动带进的 WIP）：`ManagerTypes.h` 缺 `Packet_Load_Periodic_Message` 前置声明（补一行）；`CMySql::set_query` 调 `IncreQureyCount(q)` 缺第二参——原二进制反汇编确认为 `IncreQureyCount(q, fmt)`。

## 3. 识别为宏生成但未抽取的形态

| 形态 | 数量 | 未抽原因 |
|---|---:|---|
| `CMyFileLog log("Name", 0xNN)` | 1472 | 已恢复 `DNF_LOG_SCOPE()` / `DNF_LOG_SCOPE_LINE(line)` / `DNF_LOG_SCOPE_AT(name,line)` 三档宏并全量替换（值不变）；仅 `guild/GuildUdp.cpp` 完成 `__LINE__` 行号对齐，其余文件显式传值过渡，见 `docs/line_number_alignment_report.md` |
| `log("./log/XXX", ...)` 日志路径 | 数百 | 是数据常量而非重复代码；抽宏反而更长（`log(LOG_PATH("X"),...)`） |
| `m_pfnMsg[wIndex] = &ChannelService::onXXX;`（wIndex 先赋值） | 13 | 每项两行且带索引赋值，语义由反编译寄存器物化而来；抽宏收益低、增加 channel/bridge DWARF 对齐风险 |
| `gFileLogError.Lock()` 等其它流 | 少量 | 同样可用 `GLOG(stream, ...)`，但多数块内夹着局部声明，暂未批量转换 |
| 186 个 `Packet_X() : PacketHeader(0xID, 0xSZ){}` 包头文件 | 186 | 已是单行定义，宏化会损失包头类名可读性 |
| `m_handlers[i] = NULL` 等循环初始化 | — | 普通循环，非宏生成痕迹 |

## 4. 验证

### 4.1 构建

改动涉及全部服务已用原始工具链重编并链接通过：`channel`、`bridge`、`monitor`、`statics`、`auction`（全量 TU）、`point`、`guild`、`coserver`、`manager`、`dbmw`、`relay`。

### 4.2 DWARF 机器码校验（channel/bridge/auction）

运行 `dwarf_validate.py compare`：

| 服务 | IDENTICAL | NEAR | DIFF | MISSING |
|---|---:|---:|---:|---:|
| channel | 1108（全部 text 符号） | 278 | 75 | 11 |
| bridge | 736（项目符号 919） | 153 | 29 | 0 |
| auction | 4150（项目符号 4737） | 449 | 137 | 0 |

> 注：表内 channel 为全部 text 符号口径（含 libstdc++ 内部符号），bridge/auction 为项目符号口径（DWARF 列表 ∩ ORIG），与 README/docs 中严格口径基线不可直接比较；判定无回归的依据是下述逐函数反汇编核对。表内为 `GLOG` 引入后的最终重跑值（bridge 736/153/29 在 `CHANNEL_HANDLER_BEGIN/END`、`GLOG` 两次改动前后逐项相同；channel 在 1108/278/75 与 1108/279/74 之间摆动，仅一个无关函数 DIFF↔NEAR，非本次改动导致）。

对改动函数做了逐字节反汇编核对：
- `tagSC_GET_SCRIPT::tagSC_GET_SCRIPT()`（PACKET_CTOR_BODY 展开）：与 ORIG 地址归一化后完全一致（33 行逐条相同）。
- `onSC_GET_SCRIPT`（DNF_LOG_IN/OUT 展开）：日志序列指令结构相同，重建二进制 rodata 中 `"In  "`/`"onSC_GET_SCRIPT"` 内容与 ORIG 一致；函数剩余 DIFF 为既有的栈偏移/`lea vs sub` 代码生成差异，与本次日志改动无关。
- `SetAuctionServiceErrorStr`/`GetErrorStr`/`InitServiceErrorStr`（REGISTER_SERVICE_ERROR 展开）：NEAR 且指令数完全相等（9582/9582、203/203、835/835，call_mis=0）。
- `CHANNEL_HANDLER_BEGIN/END` 展开后的 11 个 handler：neardiff 中类别与字节数与宏化前逐一相同（如 server `onSC_GET_SCRIPT` DIFF 370/367、`onCS_CONNECT` NEAR 534/534、bridge `onCS_NOTICE_CHANNEL_SERVER` DIFF 2004/2012 原样），确认宏展开与原代码逐 token 等价。
