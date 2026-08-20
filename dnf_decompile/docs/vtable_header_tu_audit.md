# 剩余类 vtable / 头文件 / TU 对照报告

## 范围

本次检查针对 `source/` 当前源码，重点覆盖剩余集中实现文件：

- `DNFServer/GameServer/Game/GameStubs_remaining.cpp`
- `ChannelOld/DNFChannelBridge/` 与 `ChannelOld/DNFChannelServer/` 的公共头

现有工作区有大量预先存在的删除与 `.gitignore` 修改，本报告不改变这些变更。

## 头文件清单与 virtual 确证

自动扫描命令：

```sh
python3 source/toolchain/audit_vtable_headers.py source
```

扫描得到 191 个含 `virtual` 的头文件、1482 条声明记录。结果包含重复头文件副本和继承类重复声明，不能把记录数直接当作 vtable 槽数；最终槽位仍需以 ORIG vtable 地址/析构 thunk 对照确认。

当前与剩余类直接相关、已在头文件中确证 `virtual` 的集合：

| 头文件 | 确证内容 |
|---|---|
| `ChannelOld/DNFChannelBridge/Service.h` | `IService` 纯虚接口；`LinuxService` 覆盖服务生命周期和运行接口 |
| `ChannelOld/DNFChannelBridge/Thread.h` | `Thread::~Thread`、`Thread::loop`（纯虚） |
| `ChannelOld/DNFChannelBridge/TCPThread.h` | `TCPThread::loop` |
| `ChannelOld/DNFChannelBridge/ScriptThread.h` | `ScriptThread::loop` |
| `ChannelOld/DNFChannelBridge/DebugLog.h` | `ITextOutputDevice::serialize/flush` 纯虚及两个实现类覆盖 |
| `ChannelOld/DNFChannelBridge/DNFChannelBridge.h` | `App` 的服务生命周期覆盖 |
| `ChannelOld/DNFChannelBridge/ChannelServiceApp.h` | `ChannelService`、TCP/UDP handler 及线程派生类虚函数 |
| `ChannelOld/DNFChannelServer/ChannelServiceApp.h` | 与 bridge 版本对应的 `ChannelService`/handler 虚函数 |

`GameStubs_remaining.cpp` 内的本地 `IEventBase` 明确声明 11 个 virtual（含纯虚）：析构、`StartEvent` 两重载、`EndEvent`、`StartAction`、`AppendInfo`、`GetAddInfo`、`changeCharacName`、`dailyresetData`、`deliveryStart/End/delivery`、`IsEventing const`。它是 TU 私有适配接口，不是公共头文件声明，不能据此声称已有完整 ORIG vtable 报告；应迁移到权威头后再做槽位确认。权威 `CGuildServerProxy.h` 的 `CEventBase` 已声明全部对应 virtual（vtable+0x10..+0x3c 注释），无缺漏。

## 非虚剩余类结论

本 TU 中已检查的 `CMap` 头部注释明确标为“无虚表”；`CMap`、`CTournamentDungeonReward`、`CClearCondition` 当前没有 virtual 声明。它们属于普通布局/成员函数对照，不应补写 `virtual`，否则会引入 vptr 并破坏 32 位布局。

## CStatisticContainer —— 确证 virtual（已补齐）

ORIG 证据（`df_game_r`）：

- `V vtable for CStatisticContainer` @ `0x08ce1308`；typeinfo @ `0x08ce1388`
- `CStatisticContainer::CStatisticContainer()` @ `0x08610474`：写 vptr = `0x08ce1310`，随后构造 `+0x04 std::map<int,int>`（布局：+0x00 vptr，+0x04 map）
- `CStatisticContainer::~CStatisticContainer()` @ `0x08610412`（weak）：复位 vptr 后析构 map
- `CCommonStatisticsMgr::InsertDatabase()` @ `0x0860e86e`：`mov (%eax),%eax; mov (%eax),%ecx; call *%ecx` —— **经 vtable 槽 0 虚调用**
- vtable 槽[0]（`0x08ce1310`）= `__cxa_pure_virtual` → **`InsertDatabase()` 为纯虚**
- 派生类覆盖（各自 vtable 槽 0）：`CPVPPlayerRate::InsertDatabase` @ `0x0860e9e0`、`CHelpedPartyCount` @ `0x0860e8aa`、`CPVPMapCount` @ `0x0860eb16`

结论：`CStatisticContainer::InsertDatabase` 确证为**纯虚**，当前两处本地定义（`GameStubs_remaining.cpp`、`CCommonStatisticsMgr.cpp`）原先写为非纯虚 `virtual void InsertDatabase();`，已补齐为 `virtual void InsertDatabase() = 0;`（2026-08-20 修正，两侧 TU 已同步）。`IncreaseQuantity(int)` 非虚（ORIG 直调 `0x0860e7f8`）。

## TU check

执行：

```sh
./source/toolchain/check_tu_game_orig.sh \
  source/DNFServer/GameServer/Game/GameStubs_remaining.cpp
```

结果：编译成功并进入 ORIG 对照阶段（退出码 0）。对照阶段仍报告大量 `DIFF`，因此只能确认 TU 可编译，不能标记为 identical。后续应按函数逐项修复，不把 TU 成功误判为 vtable 或语义已完成。

`CStatisticContainer` 修正后两个相关 TU（`GameStubs_remaining.cpp`、`CCommonStatisticsMgr.cpp`）均重新通过编译检查（rc=0）。

## 后续收口标准

1. 每个带 virtual 的剩余类，建立“头声明 → ORIG vtable 槽 → 实现 TU → TU check”四列记录。
2. 对 `IEventBase` 的 11 项接口找到权威头/ORIG 类型后再补 `override` 或纯虚标记（权威 `CEventBase` 已齐全）。
3. `audit_vtable_headers.py` 仅作发现工具；最终报告需去重继承覆盖项，并用 ORIG 符号确认槽位。
4. `CStatisticContainer` 三派生类中，`CHelpedPartyCount::InsertDatabase()` 已恢复到 `GameStubs_remaining.cpp`，并通过该 TU 的编译检查；`CPVPPlayerRate` / `CPVPMapCount` 仍待各自 TU 实现。
