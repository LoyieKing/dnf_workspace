# _ZN34Packet_Guild_Attendance_Info_ReplyC1Ev

`Packet_Guild_Attendance_Info_Reply::Packet_Guild_Attendance_Info_Reply()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808aa58` | `0x4c` | `0x8097874` | `0x95` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x2f,0x8(%esp)
 movl   $0x1bc7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0x10,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x12(%eax)
+add    $0x12,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x13,%eax
+lea    0x13(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x1c,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN34Packet_Guild_Attendance_Info_ReplyC1Ev+0x8d>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16STAttendanceInfoC1Ev>
-leave
+jmp    <T> <_ZN34Packet_Guild_Attendance_Info_ReplyC1Ev+0x8d>
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

/* Packet_Guild_Attendance_Info_Reply::Packet_Guild_Attendance_Info_Reply() */

void __thiscall
Packet_Guild_Attendance_Info_Reply::_ZN34Packet_Guild_Attendance_Info_ReplyC1Ev
          (Packet_Guild_Attendance_Info_Reply *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x1bc7,0x2f);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  this[0x12] = (Packet_Guild_Attendance_Info_Reply)0x0;
  STAttendanceInfo::_ZN16STAttendanceInfoC2Ev((STAttendanceInfo *)(this + 0x13));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 158 行）：

```cpp
Packet_Guild_Attendance_Info_Reply::Packet_Guild_Attendance_Info_Reply()
    : PacketHeader(0x1bc7, 0x2f)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    new ((char*)this + 0x13) STAttendanceInfo;
}
```
