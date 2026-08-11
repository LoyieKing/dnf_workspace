# _ZN37Packet_DB_Save_Power_War_Point_RewardC2Ev

`Packet_DB_Save_Power_War_Point_Reward::Packet_DB_Save_Power_War_Point_Reward()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a5812` | `0x80` | `0x809b3e4` | `0x9d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x7df,0x8(%esp)
 movl   $0x6d9,0x4(%esp)
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
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN37Packet_DB_Save_Power_War_Point_RewardC1Ev+0x6f>
 mov    0x8(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,%ebx
-mov    $0xf9,%esi
-jmp    <T> <_ZN37Packet_DB_Save_Power_War_Point_RewardC1Ev+0x51>
-mov    %ebx,(%esp)
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0xf,%edx
+add    %edx,%eax
+mov    %eax,0x4(%esp)
+movl   $0x8,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN37Packet_DB_Save_Power_War_Point_RewardC1Ev+0x6b>
+mov    %eax,(%esp)
 call   <T> <_ZN19STPowerWarPointInfoC1Ev>
-add    $0x8,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+addl   $0x1,-0xc(%ebp)
+cmpl   $0xf9,-0xc(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN37Packet_DB_Save_Power_War_Point_RewardC1Ev+0x43>
+jne    <T> <_ZN37Packet_DB_Save_Power_War_Point_RewardC1Ev+0x3f>
 mov    0x8(%ebp),%eax
 add    $0xf,%eax
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

/* Packet_DB_Save_Power_War_Point_Reward::Packet_DB_Save_Power_War_Point_Reward() */

void __thiscall
Packet_DB_Save_Power_War_Point_Reward::_ZN37Packet_DB_Save_Power_War_Point_RewardC2Ev
          (Packet_DB_Save_Power_War_Point_Reward *this)

{
  STPowerWarPointInfo *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x6d9,0x7df);
  this[10] = (Packet_DB_Save_Power_War_Point_Reward)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  this_00 = (STPowerWarPointInfo *)(this + 0xf);
  for (iVar1 = 0xf9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STPowerWarPointInfo::_ZN19STPowerWarPointInfoC2Ev(this_00);
    this_00 = this_00 + 8;
  }
  memset(this + 0xf,0,2000);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 802 行）：

```cpp
Packet_DB_Save_Power_War_Point_Reward::Packet_DB_Save_Power_War_Point_Reward()
    : PacketHeader(0x6d9, 0x7df)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    for (int i = 0; i < 0xfa; i++) { new ((char*)this + 0xf + i * 0x8) STPowerWarPointInfo; }
    memset((char*)this + 0xf, 0, 2000);
}
```
