# _ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev

`Packet_Monitor_Call_Guild_Members_ToChannel::Packet_Monitor_Call_Guild_Members_ToChannel()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092c28` | `0x9e` | `0x8058fb6` | `0xc3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x17d4,0x8(%esp)
 movl   $0x401,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0xa(%eax)
+add    $0xa,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x12(%eax)
+add    $0x12,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x2d(%eax)
+add    $0x2d,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x2e(%eax)
-mov    0x8(%ebp),%eax
+add    $0x2e,%eax
+movl   $0x0,(%eax)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev+0x98>
+mov    0x8(%ebp),%ecx
+mov    -0xc(%ebp),%edx
+mov    %edx,%eax
+shl    $0x6,%eax
+sub    %edx,%eax
 add    $0x34,%eax
-mov    %eax,%ebx
-mov    $0x5f,%esi
-jmp    <T> <_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev+0x6f>
-mov    %ebx,(%esp)
+lea    (%ecx,%eax,1),%eax
+mov    %eax,0x4(%esp)
+movl   $0x3f,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev+0x94>
+mov    %eax,(%esp)
 call   <T> <_ZN17ST_Guild_Mem_InfoC1Ev>
-add    $0x3f,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x5f,-0xc(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev+0x61>
+jne    <T> <_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev+0x63>
 mov    0x8(%ebp),%eax
 add    $0x16,%eax
 movl   $0x17,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Call_Guild_Members_ToChannel::Packet_Monitor_Call_Guild_Members_ToChannel() */

void __thiscall
Packet_Monitor_Call_Guild_Members_ToChannel::_ZN43Packet_Monitor_Call_Guild_Members_ToChannelC1Ev
          (Packet_Monitor_Call_Guild_Members_ToChannel *this)

{
  ST_Guild_Mem_Info *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x401,0x17d4);
  *(undefined4 *)(this + 10) = 0xffffffff;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 0x12) = 0;
  this[0x2d] = (Packet_Monitor_Call_Guild_Members_ToChannel)0x0;
  *(undefined4 *)(this + 0x2e) = 0;
  this_00 = (ST_Guild_Mem_Info *)(this + 0x34);
  for (iVar1 = 0x5f; iVar1 != -1; iVar1 = iVar1 + -1) {
    ST_Guild_Mem_Info::_ZN17ST_Guild_Mem_InfoC2Ev(this_00);
    this_00 = this_00 + 0x3f;
  }
  memset(this + 0x16,0,0x17);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/shared/packet/include/Packet_Monitor_Call_Guild_Members_ToChannel.h](source/shared/packet/include/Packet_Monitor_Call_Guild_Members_ToChannel.h)（约第 35 行）：

```cpp
    Packet_Monitor_Call_Guild_Members_ToChannel() : PacketHeader(0x401, 0x17d4)
    {
        *(unsigned int*)((char*)this + 0xa) = 0xffffffff;
        *(unsigned int*)((char*)this + 0xe) = 0;
        *(unsigned int*)((char*)this + 0x12) = 0;
        *(unsigned char*)((char*)this + 0x2d) = 0;
        *(unsigned int*)((char*)this + 0x2e) = 0;
        for (int i = 0; i < 96; i++)
        {
            new ((char*)this + 0x34 + i * 0x3f) ST_Guild_Mem_Info;
        }
        memset((char*)this + 0x16, 0, 0x17);
    }
```
