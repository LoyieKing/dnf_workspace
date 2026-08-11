# _ZN16StatisticManager29SendDBDisjointAvatarInfoTotalEP14CServerHandler

`StatisticManager::SendDBDisjointAvatarInfoTotal(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072bb4` | `0x89` | `0x8072b3a` | `0x8a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x178,%esp
 lea    -0x15e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Avater_Disjoint_Statistic_DBC1Ev>
 mov    0x8(%ebp),%eax
-add    $0x1e8,%eax
-movl   $0x144,0x8(%esp)
-mov    %eax,0x4(%esp)
+lea    0x1e8(%eax),%edx
 lea    -0x15e(%ebp),%eax
 add    $0xa,%eax
+movl   $0x144,0x8(%esp)
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x15e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x5fa,0x8(%esp)
 movl   $&_ZZN16StatisticManager29SendDBDisjointAvatarInfoTotalEP14CServerHandlerE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Packet_Avater_Disjoint_Statistic_DB",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBDisjointAvatarInfoTotal(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager29SendDBDisjointAvatarInfoTotalEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  Packet_Avater_Disjoint_Statistic_DB local_162 [10];
  undefined1 auStack_158 [324];
  CMyFileLog local_14 [16];
  
  Packet_Avater_Disjoint_Statistic_DB::Packet_Avater_Disjoint_Statistic_DB(local_162);
  memcpy(auStack_158,this + 0x1e8,0x144);
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_162);
  CMyFileLog::CMyFileLog(local_14,"SendDBDisjointAvatarInfoTotal",0x5fa);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/statistic","Packet_Avater_Disjoint_Statistic_DB");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1248 行）：

```cpp
void StatisticManager::SendDBDisjointAvatarInfoTotal(CServerHandler* handler)
{
    Packet_Avater_Disjoint_Statistic_DB pkt;
    memcpy((char*)&pkt + 0xa, (char*)this + 0x1e8, 0x144);
    handler->SendToDB((PacketHeader*)&pkt);
    DNF_LOG_SCOPE_LINE(0x5fa, "./log/statistic", "Packet_Avater_Disjoint_Statistic_DB");
}
```
