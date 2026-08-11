# _ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev

`Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a21aa` | `0x9d` | `0x8053634` | `0xbd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x688,0x8(%esp)
 movl   $0x232c,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
+movl   $0x8,-0xc(%ebp)
+jmp    <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev+0x5d>
 mov    0x8(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,%ebx
-mov    $0x9,%esi
-jmp    <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev+0x43>
-mov    %ebx,(%esp)
+mov    -0xc(%ebp),%edx
+imul   $0xa5,%edx,%edx
+add    $0x16,%edx
+add    %edx,%eax
+mov    %eax,0x4(%esp)
+movl   $0xa5,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev+0x59>
+mov    %eax,(%esp)
 call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
-add    $0xa5,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
+subl   $0x1,-0xc(%ebp)
+cmpl   $0xffffffff,-0xc(%ebp)
 setne  %al
 test   %al,%al
-jne    <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev+0x32>
+jne    <T> <_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev+0x2a>
 mov    0x8(%ebp),%eax
-movw   $0x0,0xa(%eax)
+add    $0xa,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0xc(%eax)
+add    $0xc,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xd(%eax)
+add    $0xd,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x11(%eax)
+add    $0x11,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x15(%eax)
+add    $0x15,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x16,%eax
 movl   $0x672,0x8(%esp)
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

/* Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open() */

void __thiscall
Packet_DB_Load_Reply_Guild_Board_Open::_ZN37Packet_DB_Load_Reply_Guild_Board_OpenC1Ev
          (Packet_DB_Load_Reply_Guild_Board_Open *this)

{
  STGuildBoardDBInfo *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x232c,0x688);
  this_00 = (STGuildBoardDBInfo *)(this + 0x16);
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildBoardDBInfo::_ZN18STGuildBoardDBInfoC2Ev(this_00);
    this_00 = this_00 + 0xa5;
  }
  *(undefined2 *)(this + 10) = 0;
  this[0xc] = (Packet_DB_Load_Reply_Guild_Board_Open)0x0;
  *(undefined4 *)(this + 0xd) = 0;
  *(undefined4 *)(this + 0x11) = 0;
  this[0x15] = (Packet_DB_Load_Reply_Guild_Board_Open)0x0;
  memset(this + 0x16,0,0x672);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1917 行）：

```cpp
Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open()
    : PacketHeader(0x232c, 0x688)
{
    for (int i = 8; i != -1; i--)
        new ((STGuildBoardDBInfo*)((char*)this + 0x16 + i * 0xa5)) STGuildBoardDBInfo;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(char*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0xd) = 0;
    *(int*)((char*)this + 0x11) = 0;
    *(char*)((char*)this + 0x15) = 0;
    memset((char*)this + 0x16, 0, 0x672);
}
```
