# _ZN36Packet_DB_Insert_Guild_Cargo_HistoryC1Ev

`Packet_DB_Insert_Guild_Cargo_History::Packet_DB_Insert_Guild_Cargo_History()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a0462` | `0xa3` | `0x80927b4` | `0xf2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,69 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x66,0x8(%esp)
 movl   $0x711,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
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
-movb   $0xff,0x28(%eax)
+add    $0x28,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x29(%eax)
+add    $0x29,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x2d(%eax)
+add    $0x2d,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x31,%eax
+lea    0x31(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x35,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN36Packet_DB_Insert_Guild_Cargo_HistoryC1Ev+0xae>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11DnfItemInfoC1Ev>
+jmp    <T> <_ZN36Packet_DB_Insert_Guild_Cargo_HistoryC1Ev+0xae>
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
 add    $0x13,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x31,%eax
 movl   $0x35,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
-leave
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Insert_Guild_Cargo_History::Packet_DB_Insert_Guild_Cargo_History() */

void __thiscall
Packet_DB_Insert_Guild_Cargo_History::_ZN36Packet_DB_Insert_Guild_Cargo_HistoryC1Ev
          (Packet_DB_Insert_Guild_Cargo_History *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x711,0x66);
  this[10] = (Packet_DB_Insert_Guild_Cargo_History)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  *(undefined4 *)(this + 0xf) = 0;
  this[0x28] = (Packet_DB_Insert_Guild_Cargo_History)0xff;
  *(undefined4 *)(this + 0x29) = 0;
  *(undefined4 *)(this + 0x2d) = 0;
  DnfItemInfo::_ZN11DnfItemInfoC2Ev((DnfItemInfo *)(this + 0x31));
  memset(this + 0x13,0,0x15);
  memset(this + 0x31,0,0x35);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 466 行）：

```cpp
Packet_DB_Insert_Guild_Cargo_History::Packet_DB_Insert_Guild_Cargo_History()
    : PacketHeader(0x711, 0x66)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned char*)((char*)this + 0x28) = 0xff;
    *(unsigned int*)((char*)this + 0x29) = 0;
    *(unsigned int*)((char*)this + 0x2d) = 0;
    new ((char*)this + 0x31) DnfItemInfo;
    memset((char*)this + 0x13, 0, 0x15);
    memset((char*)this + 0x31, 0, 0x35);
}
```
