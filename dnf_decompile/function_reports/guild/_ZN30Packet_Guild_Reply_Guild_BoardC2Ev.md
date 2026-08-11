# _ZN30Packet_Guild_Reply_Guild_BoardC2Ev

`Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808aaa4` | `0xa6` | `0x80974ac` | `0xf6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,46 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x68a,0x8(%esp)
 movl   $0x2328,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev+0x85>
 mov    0x8(%ebp),%eax
-add    $0x18,%eax
+mov    -0x1c(%ebp),%edx
+imul   $0xa5,%edx,%edx
+add    $0x18,%edx
+lea    (%eax,%edx,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0xa5,(%esp)
+call   <T> <_ZnwjPv>
 mov    %eax,%ebx
-mov    $0x9,%esi
-jmp    <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev+0x43>
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev+0x81>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
+jmp    <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev+0x81>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
 mov    %ebx,(%esp)
-call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
-add    $0xa5,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x8,-0x1c(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev+0x32>
+jne    <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev+0x2d>
 mov    0x8(%ebp),%eax
-movw   $0x0,0xa(%eax)
+add    $0xa,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0x0,0xc(%eax)
+add    $0xc,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0xe(%eax)
+add    $0xe,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xf(%eax)
+add    $0xf,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x13(%eax)
+add    $0x13,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x17(%eax)
+add    $0x17,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 movl   $0x672,0x8(%esp)
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

/* Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board() */

void __thiscall
Packet_Guild_Reply_Guild_Board::_ZN30Packet_Guild_Reply_Guild_BoardC2Ev
          (Packet_Guild_Reply_Guild_Board *this)

{
  STGuildBoardDBInfo *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,9000,0x68a);
  this_00 = (STGuildBoardDBInfo *)(this + 0x18);
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildBoardDBInfo::_ZN18STGuildBoardDBInfoC2Ev(this_00);
    this_00 = this_00 + 0xa5;
  }
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  this[0xe] = (Packet_Guild_Reply_Guild_Board)0x0;
  *(undefined4 *)(this + 0xf) = 0;
  *(undefined4 *)(this + 0x13) = 0;
  this[0x17] = (Packet_Guild_Reply_Guild_Board)0x0;
  memset(this + 0x18,0,0x672);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 173 行）：

```cpp
Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board()
    : PacketHeader(0x2328, 0x68a)
{
    for (int i = 0; i < 9; ++i)
        new ((char*)this + 0x18 + i * 0xa5) STGuildBoardDBInfo;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(unsigned short*)((char*)this + 0xc) = 0;
    *(unsigned char*)((char*)this + 0xe) = 0x0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned int*)((char*)this + 0x13) = 0;
    *(unsigned char*)((char*)this + 0x17) = 0x0;
    memset((char*)this + 0x18, 0, 0x672);
}
```
