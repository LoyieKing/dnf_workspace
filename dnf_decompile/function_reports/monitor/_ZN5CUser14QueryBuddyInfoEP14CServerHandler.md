# _ZN5CUser14QueryBuddyInfoEP14CServerHandler

`CUser::QueryBuddyInfo(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e102` | `0x33` | `0x80892ea` | `0x3b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
 lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DBMW_Query_Buddy_InfoC1Ev>
+lea    -0x16(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xc(%ebp)
+mov    %eax,0xa(%ebx)
 lea    -0x16(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::QueryBuddyInfo(CServerHandler*) */

void __thiscall
CUser::_ZN5CUser14QueryBuddyInfoEP14CServerHandler(CUser *this,CServerHandler *param_1)

{
  Packet_DBMW_Query_Buddy_Info local_1a [10];
  undefined4 local_10;
  
  Packet_DBMW_Query_Buddy_Info::Packet_DBMW_Query_Buddy_Info(local_1a);
  local_10 = _ZN5CUser13GetUniqCharNoEv(this);
  CServerHandler::SendToDB(param_1,(PacketHeader *)local_1a);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 344 行）：

```cpp
void CUser::QueryBuddyInfo(CServerHandler* handler)
{
    Packet_DBMW_Query_Buddy_Info pkt;
    ((RA_UINT<10>*)&pkt)->v = GetUniqCharNo();
    handler->SendToDB(&pkt);
}
```
