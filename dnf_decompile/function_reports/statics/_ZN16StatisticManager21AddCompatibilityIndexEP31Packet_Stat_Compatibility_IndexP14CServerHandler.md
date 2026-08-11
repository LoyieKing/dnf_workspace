# _ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler

`StatisticManager::AddCompatibilityIndex(Packet_Stat_Compatibility_Index*, CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074d66` | `0x2c` | `0x8074cba` | `0x26` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler+0x26>
+je     <T> <_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler+0x24>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler+0x29>
+je     <T> <_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler+0x24>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler+0x2a>
-nop
-jmp    <T> <_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler+0x2a>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::AddCompatibilityIndex(Packet_Stat_Compatibility_Index*, CServerHandler*) */

void __thiscall
StatisticManager::
_ZN16StatisticManager21AddCompatibilityIndexEP31Packet_Stat_Compatibility_IndexP14CServerHandler
          (StatisticManager *this,Packet_Stat_Compatibility_Index *param_1,CServerHandler *param_2)

{
  if ((param_1 != (Packet_Stat_Compatibility_Index *)0x0) && (param_2 != (CServerHandler *)0x0)) {
    CServerHandler::SendToDB(param_2,(PacketHeader *)param_1);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Statics/Statistics.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 619 个文件*
