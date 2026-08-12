# _ZN16StatisticManager24SendDBRandomboxStatisticEP14CServerHandler

`StatisticManager::SendDBRandomboxStatistic(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8072d74` | `0x6e` | `0x8072ede` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 lea    -0x3e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_Randombox_statistic_DBC1Ev>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN16StatisticManager24SendDBRandomboxStatisticEP14CServerHandler+0x4f>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN16StatisticManager24SendDBRandomboxStatisticEP14CServerHandler+0x66>
+lea    -0x3e(%ebp),%eax
+mov    -0xc(%ebp),%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+lea    (%eax,%edx,1),%edx
+mov    0x8(%ebp),%eax
 mov    -0xc(%ebp),%ecx
-mov    0x8(%ebp),%edx
-add    $0xd0,%ecx
-mov    0x8(%edx,%ecx,4),%edx
-mov    %edx,-0x34(%ebp,%eax,4)
+add    $0xd2,%ecx
+shl    $0x2,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x3e(%ebp),%eax
 mov    -0xc(%ebp),%edx
+shl    $0x2,%edx
+add    $0x1e,%edx
+lea    (%eax,%edx,1),%edx
+mov    0x8(%ebp),%eax
 mov    -0xc(%ebp),%ecx
-mov    0x8(%ebp),%eax
-add    $0xd4,%ecx
-mov    0xc(%eax,%ecx,4),%eax
-add    $0x4,%edx
-mov    %eax,-0x30(%ebp,%edx,4)
+add    $0xd7,%ecx
+shl    $0x2,%ecx
+add    %ecx,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x4,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN16StatisticManager24SendDBRandomboxStatisticEP14CServerHandler+0x1a>
 lea    -0x3e(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBRandomboxStatistic(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager24SendDBRandomboxStatisticEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  Packet_Randombox_statistic_DB local_42 [10];
  undefined4 auStack_38 [5];
  undefined4 auStack_24 [5];
  int local_10;
  
  Packet_Randombox_statistic_DB::Packet_Randombox_statistic_DB(local_42);
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    auStack_38[local_10] = *(undefined4 *)(this + (local_10 + 0xd0) * 4 + 8);
    auStack_24[local_10] = *(undefined4 *)(this + (local_10 + 0xd4) * 4 + 0xc);
  }
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_42);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1326 行）：

```cpp
void StatisticManager::SendDBRandomboxStatistic(CServerHandler* handler)
{
    Packet_Randombox_statistic_DB pkt;
    for (int i = 0; i < 5; i++)
    {
        *(unsigned int*)((char*)&pkt + 0xa + i * 4) =
            *(unsigned int*)((char*)this + (i + 0xd0) * 4 + 8);
        *(unsigned int*)((char*)&pkt + 0x1e + i * 4) =
            *(unsigned int*)((char*)this + (i + 0xd4) * 4 + 0xc);
    }
    handler->SendToDB((PacketHeader*)&pkt);
}
```
