# _ZN25Packet_Notice_Guild_CargoC2Ev

`Packet_Notice_Guild_Cargo::Packet_Notice_Guild_Cargo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a03fe` | `0x63` | `0x809270a` | `0xaa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x18ee,0x8(%esp)
 movl   $0x712,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0xa(%eax)
+add    $0x10,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x12,%eax
+lea    0x12(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x18dc,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN25Packet_Notice_Guild_CargoC1Ev+0x84>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildCargoDBInfoC1Ev>
+jmp    <T> <_ZN25Packet_Notice_Guild_CargoC1Ev+0x84>
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
 add    $0x12,%eax
 movl   $0x18dc,0x8(%esp)
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

/* Packet_Notice_Guild_Cargo::Packet_Notice_Guild_Cargo() */

void __thiscall
Packet_Notice_Guild_Cargo::_ZN25Packet_Notice_Guild_CargoC2Ev(Packet_Notice_Guild_Cargo *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x712,0x18ee);
  *(undefined4 *)(this + 10) = 0xffffffff;
  *(undefined4 *)(this + 0xe) = 0;
  STGuildCargoDBInfo::_ZN18STGuildCargoDBInfoC2Ev((STGuildCargoDBInfo *)(this + 0x12));
  memset(this + 0x12,0,0x18dc);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildCargo.cpp](source/DNFServer/GameServer/Guild/GuildCargo.cpp)（约第 457 行）：

```cpp
Packet_Notice_Guild_Cargo::Packet_Notice_Guild_Cargo()
    : PacketHeader(0x712, 0x18ee)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    new ((char*)this + 0x12) STGuildCargoDBInfo;
    memset((char*)this + 0x12, 0, 0x18dc);
}
```
