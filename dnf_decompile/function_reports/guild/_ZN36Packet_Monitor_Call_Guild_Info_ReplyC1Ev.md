# _ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev

`Packet_Monitor_Call_Guild_Info_Reply::Packet_Monitor_Call_Guild_Info_Reply()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8089aa6` | `0x6c` | `0x807e17e` | `0xb6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movl   $0xad6,0x8(%esp)
 movl   $0x40d,0x4(%esp)
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
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev+0xa3>
 mov    0x8(%ebp),%eax
-add    $0x13,%eax
+mov    -0x1c(%ebp),%edx
+imul   $0x1d,%edx,%edx
+add    $0x13,%edx
+lea    (%eax,%edx,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0x20,(%esp)
+call   <T> <_ZnwjPv>
 mov    %eax,%ebx
-mov    $0x5e,%esi
-jmp    <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev+0x5b>
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev+0x9f>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15STGuildCallInfoC1Ev>
+jmp    <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev+0x9f>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
 mov    %ebx,(%esp)
-call   <T> <_ZN15STGuildCallInfoC1Ev>
-add    $0x1d,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x5e,-0x1c(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev+0x4d>
-add    $0x10,%esp
+jne    <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev+0x4e>
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Call_Guild_Info_Reply::Packet_Monitor_Call_Guild_Info_Reply() */

void __thiscall
Packet_Monitor_Call_Guild_Info_Reply::_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev
          (Packet_Monitor_Call_Guild_Info_Reply *this)

{
  STGuildCallInfo *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x40d,0xad6);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  this[0x12] = (Packet_Monitor_Call_Guild_Info_Reply)0x0;
  this_00 = (STGuildCallInfo *)(this + 0x13);
  for (iVar1 = 0x5e; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildCallInfo::_ZN15STGuildCallInfoC2Ev(this_00);
    this_00 = this_00 + 0x1d;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5583 行）：

```cpp
Packet_Monitor_Call_Guild_Info_Reply::Packet_Monitor_Call_Guild_Info_Reply()
    : PacketHeader(0x40d, 0xad6)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    for (int i = 0; i < 0x5f; i++) { new ((char*)this + 0x13 + i * 0x1d) STGuildCallInfo; }
}
```
