# _ZN16StatisticManager21SendDBServerMatchDataEP14CServerHandler

`StatisticManager::SendDBServerMatchData(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x807457e` | `0x59` | `0x80743fa` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
-mov    0x438(%eax),%eax
+add    $0x438,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN16StatisticManager21SendDBServerMatchDataEP14CServerHandler+0x56>
+je     <T> <_ZN16StatisticManager21SendDBServerMatchDataEP14CServerHandler+0x68>
 lea    -0x1b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_Server_Match_data_DBMWC1Ev>
+lea    -0x1b(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x438(%eax),%eax
-mov    %al,-0x11(%ebp)
+add    $0x438,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x1b(%ebp),%eax
+lea    0xb(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x43c(%eax),%eax
-mov    %eax,-0x10(%ebp)
+add    $0x43c,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x1b(%ebp),%eax
+lea    0xf(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x440(%eax),%eax
-mov    %eax,-0xc(%ebp)
+add    $0x440,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 lea    -0x1b(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN16StatisticManager21SendDBServerMatchDataEP14CServerHandler+0x57>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* StatisticManager::SendDBServerMatchData(CServerHandler*) */

void __thiscall
StatisticManager::_ZN16StatisticManager21SendDBServerMatchDataEP14CServerHandler
          (StatisticManager *this,CServerHandler *param_1)

{
  Packet_Server_Match_data_DBMW local_1f [10];
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(this + 0x438) != 0) {
    Packet_Server_Match_data_DBMW::Packet_Server_Match_data_DBMW(local_1f);
    local_15 = (undefined1)*(undefined4 *)(this + 0x438);
    local_14 = *(undefined4 *)(this + 0x43c);
    local_10 = *(undefined4 *)(this + 0x440);
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_1f);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/Statistics.cpp](source/DNFServer/GameServer/Statics/Statistics.cpp)（约第 1398 行）：

```cpp
void StatisticManager::SendDBServerMatchData(CServerHandler* handler)
{
    if (*(int*)((char*)this + 0x438) != 0)
    {
        Packet_Server_Match_data_DBMW pkt;
        *(char*)((char*)&pkt + 0xa) = *(char*)((char*)this + 0x438);
        *(unsigned int*)((char*)&pkt + 0xb) = *(unsigned int*)((char*)this + 0x43c);
        *(unsigned int*)((char*)&pkt + 0xf) = *(unsigned int*)((char*)this + 0x440);
        handler->SendToDB((PacketHeader*)&pkt);
    }
}
```
