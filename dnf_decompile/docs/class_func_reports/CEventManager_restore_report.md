# CEventManager 未还原函数分析报告

> 独立新版报告。对象为 `df_game_r` 的 `CEventManager`，地址依据 `docs/class_func_reports/CEventManager.md` 的反汇编与源码 `source/DNFServer/GameServer/Game/CEventManager.cpp` 交叉核对。

## 1. 结论摘要

| 函数 | 二进制地址 | 当前源码 | 还原判断 | 建议 |
|---|---:|---|---|---|
| `InitEventManager()` | `0x08114dcc` | 缺失 | 尚未还原 | 优先实现，按二进制顺序注册 50 个事件并调用 DB 加载 |
| `LoadEventFromDB()` | `0x081159b6` | 缺失 | 尚未还原 | 第二优先，依赖 DBMgr/MySQL 接口与 `TriggerEventStart` |
| `MakeNotiEventInfo(PacketGuard&, CUser*)` | `0x08115de2` | 已实现 | 主流程已还原，需校正边界/数据布局 | 先补协议级测试，再定稿 |
| `BroadcastEventInfo()` | `0x08116108` | 已实现 | 基本等价 | 可保留，补空世界和用户状态测试 |
| `eventDeliveryNotify(int, DeliveryMsg&)` | `0x08116874` | 缺失 | 尚未还原 | 最容易实施，先补声明、转发实现和链接验证 |

二进制中事件槽位是 `0..0xa5` 共 166 个，`CEventManager` 的 `CDelivery*` 位于对象偏移 `+0x298`。构造函数先清零 `0x298` 字节，再在 `+0x298` 放置 `CDelivery`，因此初始化不得破坏该布局。

## 2. `InitEventManager`：高优先级可实施函数

### 二进制行为

反汇编显示该函数反复执行：

1. `operator new(事件对象大小)`；
2. 调用对应事件构造函数；
3. 写入 `this + 槽位 * 4`；
4. 全部对象创建成功后调用 `LoadEventFromDB()`；
5. `LoadEventFromDB()` 返回真则返回真；异常或失败返回假。

报告中的构造顺序为：

`CUnlimitFatigueEvent(1)`、`CMaxFatigueFactorEvent(2)`、`CExpDoubleEvent(3)`、`CCoinEventPerDay(4)`、`CCoinEventOnCharCreate(5)`、`CLeadingChannelEvent(6)`、`CItemDropRatioEvent(7)`、`CPCRoomBurningEvent(8)`、`CPCRoomFatigueEvent(10)`、`CReformingDanjinEvent(11)`、`CCoinRefillEvent(13)`、`CBurningFatigueEvent(15)`、`CClearRewardCardEvent(16)`、`CCeraShopBonusItemEvent(17)`、`CTournamentPvPEvent(18)`、`CGoldCardBlankItemEvent(19)`、`CPcRoomCardBlankItemEvent(29)`、`CPowerWarEvent(30)`、`CCollectArchieveEventLog(21)`、`CPCRoomWorldDropEvent(22)`、`CPartyExpBonusEvent(24)`、`CStabToDeathEvent(32)`、`CSchoolMatchEvent(9)`、`CAutoMarketConditionsControlEvent(34)`、`CVendingMachineBonusEvent(35)`、`CBurnigGoldMonsterEvent(36)`、`CNoNeedGoldOnGuildCreateEvent(38)`、`CDeathTowerWinPointEvent(39)`、`CNotApplyBalkeunEvent(40)`、`CCharacterDayEvent(41)`、`CRestrictCharacCreationEvent(49)`、`CReduceUpgradeItemPay(50)`、`COnTimeEvent(51)`、`CBreakAwayPreventEvent(52)`、`CPowerWarVictoriousEvent(53)`、`CSecretShopEvent(58)`、`CFatigueAttendance(86)`、`CWeekendBonusEvent(87)`、`CConditionEvent(113)`、`CUXGameLogEvent(91)`、`BlueMarbleDungeonEvent(95)`、`CStopOverlabExpEvent(102)`、`CEventAdvanceAltarOpen(119)`、`CAradRyosikaEvent(116)`、`Arad_MomijiEvent(155)`、`LevelupSupportEvent(158)`、`CEventStayTime(159)`、`CEventCreateDnf(160)`、`EventGiveMeBox(165)`。

这里的括号是槽位，不是构造参数。`CGuildWarEvent` 也会创建，但其槽位为 `33`；报告的 Ghidra 伪 C 中存在按成员偏移展示而非槽位顺序的现象，实施时应以汇编写入偏移为准，不能照伪 C 的局部变量顺序盲抄。

### 实施注意

- 推荐用显式 `AddEvent(slot, new EventType())`，但必须保持上述槽位映射；不要用连续数组索引推断事件类型。
- 异常路径要释放已创建对象，避免 `InitEventManager` 中途失败泄漏。二进制通过统一 catch 返回 0；源码可用局部 `try/catch` 或先构造临时数组再提交。
- `LoadEventFromDB()` 失败时，二进制不会回滚已构造对象；为兼容行为不应擅自添加回滚。
- 当前事件类声明/构造函数是否都可见，是落地前唯一需要逐项编译确认的接口问题。

## 3. `LoadEventFromDB`：第二优先级

### SQL 与字段

二进制执行的查询为：

```sql
seLect event_type, parameter1, parameter2
from dnf_event_log
where end_time = 0
  and server_id in (0, %d)
  and unix_timestamp() >= start_time
order by start_time
```

`%d` 来自 `G_CEnvironment()->offset 0x378` 的服务器 ID。数据库句柄来自 `DBMgr::GetDBHandle(GlobalData::s_db_mgr, 1, 0)`。

### 每行流程

1. `exec(true)` 失败立即返回 `false`；
2. 按行 `fetch()`；
3. 第 0 列读 `int event_type`；
4. 第 1、2 列分别读 `ushort parameter1/parameter2`；
5. 将两个 `ushort` 按低 16 位/高 16 位组成 `Word_Param`；
6. 调用 `TriggerEventStart(event_type, Word_Param)`；返回非真立即返回 `false`；
7. 记录事件码和两个参数；所有行成功后返回 `true`。

### 风险点

- `Word_Param` 的打包方向必须是 `parameter1 | (parameter2 << 16)`；报告反汇编明确显示低位先读入。
- `TriggerEventStart` 自身会执行 `filterEvent`、广播、`deliveryStart`、`StartAction`。DB 恢复不能直接调用事件虚函数，否则会漏掉广播和 delivery 生命周期。
- `event_type` 必须依赖 `GetRepeatEvent` 的 `0..0xa5` 边界；非法事件会使 `TriggerEventStart` 返回假，从而使整个加载失败。
- 当前源码没有 `MySQL`/`DBMgr` 包装调用示例，落地前应先搜索同一 TU/相邻类的 `set_query → exec → fetch → get_int/get_ushort` 用法，避免伪造接口。

## 4. `MakeNotiEventInfo`：协议行为核对

二进制协议流程：

1. `clear()`；写 header `(0, 0x6c)`；
2. 保存当前 index，写一个占位 `short`；
3. 第一次遍历 `0..0xa5`：若事件存在且 `IsEventing(user)`，写事件 ID，并累加 active 数；同时调用 `GetAddInfo()`，若低 16 位按 `short` 看为非负，则缓存 `(eventId, low16, high16)`；
4. 回填 active 数；
5. 第二次遍历所有 active 事件并调用 `AppendInfo(packet)`；
6. 写附加信息数量（`byte`），再写每项三个 `short`；无附加信息时写 `0`；
7. `finalize(true)`。

当前源码 `CEventManager.cpp:98-142` 与该行为基本一致，且已正确使用 `GetAddInfo()` 的低/高 16 位拆分。需特别确认：源码使用 `event->IsEventing(user)`，而二进制伪 C 对应同一虚调用；不要改成无用户参数的全局状态判断。

建议补强：对附加信息数量超过 `255` 的情况记录/断言，确认 `put_byte` 的协议截断行为；不要改变线上包格式。

## 5. `BroadcastEventInfo`：基本已还原

二进制从 `G_GameWorld()->m_UserInWorld`（偏移 `+0x134`）取 `begin/end`，遍历每个 `CUser*`；仅当 `get_state() > 2` 时创建一个 `PacketGuard`，调用 `MakeNotiEventInfo` 后 `CUser::Send`。

当前源码 `CEventManager.cpp:144-160` 等价，并额外安全处理了空 world、空 user；这些是二进制未显式保护的安全增强，不影响正常行为。建议保留。需要注意 `PacketGuard` 应在每个用户循环内创建，以匹配二进制的生命周期，当前实现正确。

## 6. `eventDeliveryNotify`：最低风险、可先落地

二进制仅做一层空指针保护：

```cpp
if (*reinterpret_cast<CDelivery**>(m_pad + 0x298) != 0)
    delivery->notify(type, msg);
```

该函数地址为 `0x08116874`，签名是 `void eventDeliveryNotify(int, DeliveryMsg&)`。当前 `CGuildServerProxy.h` 的 `CEventManager` 声明尚未包含它，`CEventManager.cpp` 也没有定义；`CDelivery::notify(int, DeliveryMsg&)` 的声明/实现需要从对应 delivery TU 复用，不能用空 stub 替代真实转发。

推荐实施顺序：

1. 在可见的 `CEventManager` 声明中加入 `void eventDeliveryNotify(int, DeliveryMsg&);`；
2. 在 `CEventManager.cpp` 添加偏移 `+0x298` 的 `CDelivery*` 读取与 `notify` 转发；
3. 编译验证符号名和 ABI（引用参数、thiscall）；
4. 再处理 `InitEventManager` 与 DB 接口。

## 7. 下一步可执行计划

### P0：先恢复链路

- 实现 `eventDeliveryNotify`，补声明并完成链接验证。
- 修正/确认 `CDelivery` 构造、析构、`notify` 的真实符号绑定；当前 `sub_CDelivery_C1/D1` 是空函数，不能视为完整 delivery 还原。

### P1：恢复启动

- 按汇编写入偏移制作 `InitEventManager` 的显式注册表。
- 对每个事件类做“类名、槽位、构造大小、源码可见性”四列核对。
- 增加失败路径内存释放，最后调用 `LoadEventFromDB`。

### P2：恢复持久化事件

- 复用仓库现有 MySQL 调用模式实现 `LoadEventFromDB`。
- 用一个包含两行有效事件、一行非法事件、DB exec 失败的最小测试/模拟验证返回值和调用顺序。

### P3：协议回归

- 为 `MakeNotiEventInfo` 验证：无事件、一个普通事件、带 `GetAddInfo` 事件、多个事件以及 `IsEventing(user)==false`。
- 为 `BroadcastEventInfo` 验证状态 `2` 不发送、状态 `3` 发送、空 world 不崩溃。

## 8. 最终判定

可立即实施的是 `eventDeliveryNotify`；最关键但工作量最大的是 `InitEventManager`；`LoadEventFromDB` 需要先对齐仓库 DB API。`BroadcastEventInfo` 不需要重写，`MakeNotiEventInfo` 不应整体重写，只需按协议测试确认当前实现，并修复发现的边界问题。