# _ZN35Packet_DB_Save_Power_War_Guild_RankC2Ev

`Packet_DB_Save_Power_War_Guild_Rank::Packet_DB_Save_Power_War_Guild_Rank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a567a` | `0x87` | `0x809b9c0` | `0xa3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x330,0x8(%esp)
 movl   $0x6d6,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0x10,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0xb(%eax)
+add    $0xb,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
+add    $0xc,%eax
+movl   $0x0,(%eax)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN35Packet_DB_Save_Power_War_Guild_RankC1Ev+0x78>
 mov    0x8(%ebp),%eax
-add    $0x10,%eax
-mov    %eax,%ebx
-mov    $0x63,%esi
-jmp    <T> <_ZN35Packet_DB_Save_Power_War_Guild_RankC1Ev+0x58>
-mov    %ebx,(%esp)
+mov    -0xc(%ebp),%edx
+add    $0x2,%edx
+shl    $0x3,%edx
+add    %edx,%eax
+mov    %eax,0x4(%esp)
+movl   $0x8,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN35Packet_DB_Save_Power_War_Guild_RankC1Ev+0x74>
+mov    %eax,(%esp)
 call   <T> <_ZN11STGuildRankC1Ev>
-add    $0x8,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x63,-0xc(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN35Packet_DB_Save_Power_War_Guild_RankC1Ev+0x4a>
+jne    <T> <_ZN35Packet_DB_Save_Power_War_Guild_RankC1Ev+0x48>
 mov    0x8(%ebp),%eax
 add    $0x10,%eax
 movl   $0x320,0x8(%esp)
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

/* Packet_DB_Save_Power_War_Guild_Rank::Packet_DB_Save_Power_War_Guild_Rank() */

void __thiscall
Packet_DB_Save_Power_War_Guild_Rank::_ZN35Packet_DB_Save_Power_War_Guild_RankC2Ev
          (Packet_DB_Save_Power_War_Guild_Rank *this)

{
  STGuildRank *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x6d6,0x330);
  this[10] = (Packet_DB_Save_Power_War_Guild_Rank)0x0;
  this[0xb] = (Packet_DB_Save_Power_War_Guild_Rank)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  this_00 = (STGuildRank *)(this + 0x10);
  for (iVar1 = 99; iVar1 != -1; iVar1 = iVar1 + -1) {
    STGuildRank::_ZN11STGuildRankC2Ev(this_00);
    this_00 = this_00 + 8;
  }
  memset(this + 0x10,0,800);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 720 行）：

```cpp
Packet_DB_Save_Power_War_Guild_Rank::Packet_DB_Save_Power_War_Guild_Rank()
    : PacketHeader(0x6d6, 0x330)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned char*)((char*)this + 0xb) = 0x0;
    *(unsigned int*)((char*)this + 0xc) = 0;
    for (int i = 0; i < 0x64; i++) { new ((char*)this + 0x10 + i * 0x8) STGuildRank; }
    memset((char*)this + 0x10, 0, 800);
}
```
