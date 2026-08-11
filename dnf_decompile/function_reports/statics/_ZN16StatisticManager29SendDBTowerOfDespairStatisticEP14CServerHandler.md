# _ZN16StatisticManager29SendDBTowerOfDespairStatisticEP14CServerHandler

`StatisticManager::SendDBTowerOfDespairStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8074b4a` | `0xae` | `0x8074a68` | `0xb0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,41 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x368,%esp
-lea    -0x34a(%ebp),%eax
+lea    -0x352(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN35Packet_TowerOfDespair_Statistic_STDC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
 movzbl %al,%eax
-mov    %eax,-0x340(%ebp)
+mov    %eax,-0x10(%ebp)
+andl   $0xff,-0x10(%ebp)
 mov    0x8(%ebp),%eax
-add    $0x807,%eax
+lea    0x807(%eax),%edx
+lea    -0x352(%ebp),%eax
+add    $0x12,%eax
 movl   $0x328,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x34a(%ebp),%eax
-add    $0x12,%eax
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3setIjSt4lessIjESaIjEE4sizeEv>
-mov    %eax,-0x33c(%ebp)
-lea    -0x34a(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x352(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x837,0x8(%esp)
 movl   $"SendDBTowerOfDespairStatistic",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TOD Send to DB",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBTowerOfDespairStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager29SendDBTowerOfDespairStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  Packet_TowerOfDespair_Statistic_STD local_34e [10];
  uint local_344;
  undefined4 local_340;
  undefined1 auStack_33c [808];
  CMyFileLog local_14 [16];
  
  Packet_TowerOfDespair_Statistic_STD::Packet_TowerOfDespair_Statistic_STD(local_34e);
  local_344 = CServerHandler::GetServerGroupNo(param_1);
  local_344 = local_344 & 0xff;
  memcpy(auStack_33c,this + 0x807,0x328);
  local_340 = std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::size
                        ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
                         this);
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_34e);
  CMyFileLog::CMyFileLog(local_14,"SendDBTowerOfDespairStatistic",0x837);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/statistic","TOD Send to DB");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1496 行）：

```cpp
void StatisticManager::SendDBTowerOfDespairStatistic(CServerHandler* handler)
{
    Packet_TowerOfDespair_Statistic_STD pkt;
    unsigned int group = handler->GetServerGroupNo();
    group = group & 0xff;
    memcpy((char*)&pkt + 0x12, (char*)this + 0x807, 0x328);
    unsigned int size = m_serverList.size();
    handler->SendToDB((PacketHeader*)&pkt);
    DNF_LOG_SCOPE_LINE(0x837, "./log/statistic", "TOD Send to DB");
}
```
