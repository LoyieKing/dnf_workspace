# _ZN38Packet_Monitor_Call_Member_List_ToUserC2Ev

`Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80928e0` | `0x31` | `0x807e7c0` | `0x74` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x1e1,0x8(%esp)
 movl   $0x4be,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-add    $0x12,%eax
+lea    0x12(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0xb,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN38Packet_Monitor_Call_Member_List_ToUserC1Ev+0x6c>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16STMemberListInfoC1Ev>
-leave
+jmp    <T> <_ZN38Packet_Monitor_Call_Member_List_ToUserC1Ev+0x6c>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
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

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5889 行）：

```cpp
Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser()
    : PacketHeader(0x4be, 0x1e1)
{
    // ORIG：lea 0x12(%eax) + call STMemberListInfo::STMemberListInfo()
    // （GCC 4.4.x 不接受 ->Type::Type() 形式，用 placement new 等价展开）
    new ((void*)((char*)this + 0x12)) STMemberListInfo;
}
```
