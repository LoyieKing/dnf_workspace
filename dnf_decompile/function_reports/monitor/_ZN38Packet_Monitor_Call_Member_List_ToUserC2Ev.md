# _ZN38Packet_Monitor_Call_Member_List_ToUserC2Ev

`Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80928e0` | `0x31` | `0x807e944` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x1e1,0x8(%esp)
 movl   $0x4be,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 add    $0x12,%eax
+movl   $0x1cf,0x8(%esp)
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN16STMemberListInfoC1Ev>
+call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser() */

void __thiscall
Packet_Monitor_Call_Member_List_ToUser::_ZN38Packet_Monitor_Call_Member_List_ToUserC2Ev
          (Packet_Monitor_Call_Member_List_ToUser *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x4be,0x1e1);
  STMemberListInfo::_ZN16STMemberListInfoC2Ev((STMemberListInfo *)(this + 0x12));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5877 行）：

```cpp
Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser()
    : PacketHeader(0x4be, 0x1e1)
{
    memset((char*)this + 0x12, 0, 0x1cf);
}
```
