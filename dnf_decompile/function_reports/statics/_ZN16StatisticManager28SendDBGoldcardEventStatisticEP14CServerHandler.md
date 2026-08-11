# _ZN16StatisticManager28SendDBGoldcardEventStatisticEP14CServerHandler

`StatisticManager::SendDBGoldcardEventStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074a30` | `0x53` | `0x8074ac0` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x3a8,%esp
 lea    -0x38d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_Goldcard_Event_Statistic_STDC1Ev>
 mov    0x8(%ebp),%eax
-add    $0x48c,%eax
-movl   $0x37b,0x8(%esp)
-mov    %eax,0x4(%esp)
+lea    0x48c(%eax),%edx
 lea    -0x38d(%ebp),%eax
 add    $0xa,%eax
+movl   $0x37b,0x8(%esp)
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x38d(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBGoldcardEventStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager28SendDBGoldcardEventStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  Packet_Goldcard_Event_Statistic_STD local_391 [10];
  undefined1 auStack_387 [899];
  
  Packet_Goldcard_Event_Statistic_STD::Packet_Goldcard_Event_Statistic_STD(local_391);
  memcpy(auStack_387,this + 0x48c,0x37b);
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_391);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1633 行）：

```cpp
void StatisticManager::SendDBGoldcardEventStatistic(CServerHandler* handler)
{
    Packet_Goldcard_Event_Statistic_STD pkt;
    memcpy((char*)&pkt + 10, (char*)this + 0x48c, 0x37b);
    handler->SendToDB((PacketHeader*)&pkt);
}
```
