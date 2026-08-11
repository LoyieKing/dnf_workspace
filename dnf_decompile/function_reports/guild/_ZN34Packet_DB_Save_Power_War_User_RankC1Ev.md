# _ZN34Packet_DB_Save_Power_War_User_RankC1Ev

`Packet_DB_Save_Power_War_User_Rank::Packet_DB_Save_Power_War_User_Rank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a571a` | `0x98` | `0x809b2c8` | `0xbb` |

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
 movl   $0x7e5,0x8(%esp)
 movl   $0x6d7,0x4(%esp)
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
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN34Packet_DB_Save_Power_War_User_RankC1Ev+0x8d>
 mov    0x8(%ebp),%eax
-add    $0x15,%eax
-mov    %eax,%ebx
-mov    $0xf9,%esi
-jmp    <T> <_ZN34Packet_DB_Save_Power_War_User_RankC1Ev+0x69>
-mov    %ebx,(%esp)
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0x15,%edx
+add    %edx,%eax
+mov    %eax,0x4(%esp)
+movl   $0x8,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN34Packet_DB_Save_Power_War_User_RankC1Ev+0x89>
+mov    %eax,(%esp)
 call   <T> <_ZN10STUserRankC1Ev>
-add    $0x8,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+addl   $0x1,-0xc(%ebp)
+cmpl   $0xf9,-0xc(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN34Packet_DB_Save_Power_War_User_RankC1Ev+0x5b>
+jne    <T> <_ZN34Packet_DB_Save_Power_War_User_RankC1Ev+0x5d>
 mov    0x8(%ebp),%eax
 add    $0x15,%eax
 movl   $0x7d0,0x8(%esp)
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

/* Packet_DB_Save_Power_War_User_Rank::Packet_DB_Save_Power_War_User_Rank() */

void __thiscall
Packet_DB_Save_Power_War_User_Rank::_ZN34Packet_DB_Save_Power_War_User_RankC1Ev
          (Packet_DB_Save_Power_War_User_Rank *this)

{
  STUserRank *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x6d7,0x7e5);
  this[10] = (Packet_DB_Save_Power_War_User_Rank)0x0;
  this[0xb] = (Packet_DB_Save_Power_War_User_Rank)0x0;
  this[0xc] = (Packet_DB_Save_Power_War_User_Rank)0x0;
  *(undefined4 *)(this + 0xd) = 0;
  *(undefined4 *)(this + 0x11) = 0;
  this_00 = (STUserRank *)(this + 0x15);
  for (iVar1 = 0xf9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STUserRank::_ZN10STUserRankC2Ev(this_00);
    this_00 = this_00 + 8;
  }
  memset(this + 0x15,0,2000);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 763 行）：

```cpp
Packet_DB_Save_Power_War_User_Rank::Packet_DB_Save_Power_War_User_Rank()
    : PacketHeader(0x6d7, 0x7e5)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned char*)((char*)this + 0xb) = 0x0;
    *(unsigned char*)((char*)this + 0xc) = 0x0;
    *(unsigned int*)((char*)this + 0xd) = 0;
    *(unsigned int*)((char*)this + 0x11) = 0;
    for (int i = 0; i < 0xfa; i++) { new ((char*)this + 0x15 + i * 0x8) STUserRank; }
    memset((char*)this + 0x15, 0, 2000);
}
```
