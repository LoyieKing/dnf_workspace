# _ZN40Packet_DB_Load_Request_Guild_Board_WriteC2Ev

`Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ab82` | `0x56` | `0x8097a3c` | `0xa1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0xbc,0x8(%esp)
 movl   $0x232f,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-add    $0x17,%eax
+lea    0x17(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0xa5,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN40Packet_DB_Load_Request_Guild_Board_WriteC1Ev+0x6c>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
+jmp    <T> <_ZN40Packet_DB_Load_Request_Guild_Board_WriteC1Ev+0x6c>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0x10,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xb(%eax)
+add    $0xb,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xf(%eax)
+add    $0xf,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x13(%eax)
-leave
+add    $0x13,%eax
+movl   $0x0,(%eax)
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write() */

void __thiscall
Packet_DB_Load_Request_Guild_Board_Write::_ZN40Packet_DB_Load_Request_Guild_Board_WriteC2Ev
          (Packet_DB_Load_Request_Guild_Board_Write *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x232f,0xbc);
  STGuildBoardDBInfo::_ZN18STGuildBoardDBInfoC2Ev((STGuildBoardDBInfo *)(this + 0x17));
  this[10] = (Packet_DB_Load_Request_Guild_Board_Write)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  *(undefined4 *)(this + 0xf) = 0;
  *(undefined4 *)(this + 0x13) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PacketCounter.cpp](source/DNFServer/GameServer/Guild/PacketCounter.cpp)（约第 188 行）：

```cpp
Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write()
    : PacketHeader(0x232f, 0xbc)
{
    new ((char*)this + 0x17) STGuildBoardDBInfo;
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned int*)((char*)this + 0x13) = 0;
}
```
