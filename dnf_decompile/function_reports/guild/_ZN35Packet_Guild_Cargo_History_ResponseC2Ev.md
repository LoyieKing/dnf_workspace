# _ZN35Packet_Guild_Cargo_History_ResponseC2Ev

`Packet_Guild_Cargo_History_Response::Packet_Guild_Cargo_History_Response()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808a5b6` | `0x83` | `0x807f144` | `0xd1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x972,0x8(%esp)
 movl   $0x70b,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0xa(%eax)
+add    $0x10,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
-mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movl   $0x0,(%eax)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev+0xa0>
+mov    0x8(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+add    %eax,%eax
+add    %edx,%eax
+shl    $0x4,%eax
 add    $0x12,%eax
+lea    (%ecx,%eax,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0x30,(%esp)
+call   <T> <_ZnwjPv>
 mov    %eax,%ebx
-mov    $0x31,%esi
-jmp    <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev+0x54>
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev+0x9c>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15STGuildCargoLogC1Ev>
+jmp    <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev+0x9c>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
 mov    %ebx,(%esp)
-call   <T> <_ZN15STGuildCargoLogC1Ev>
-add    $0x30,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x31,-0x1c(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev+0x46>
+jne    <T> <_ZN35Packet_Guild_Cargo_History_ResponseC1Ev+0x45>
 mov    0x8(%ebp),%eax
 add    $0x12,%eax
 movl   $0x960,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-add    $0x10,%esp
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Guild_Cargo_History_Response::Packet_Guild_Cargo_History_Response() */

void __thiscall
Packet_Guild_Cargo_History_Response::_ZN35Packet_Guild_Cargo_History_ResponseC2Ev
          (Packet_Guild_Cargo_History_Response *this)

{
  STGuildCargoLog *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x70b,0x972);
  *(undefined4 *)(this + 10) = 0xffffffff;
  *(undefined4 *)(this + 0xe) = 0;
  this_00 = (STGuildCargoLog *)(this + 0x12);
  for (iVar1 = 0x31; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildCargoLog::_ZN15STGuildCargoLogC2Ev(this_00);
    this_00 = this_00 + 0x30;
  }
  memset(this + 0x12,0,0x960);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5854 行）：

```cpp
Packet_Guild_Cargo_History_Response::Packet_Guild_Cargo_History_Response()
    : PacketHeader(0x70b, 0x972)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    for (int i = 0; i < 0x32; i++) { new ((char*)this + 0x12 + i * 0x30) STGuildCargoLog; }
    memset((char*)this + 0x12, 0, 0x960);
}
```
