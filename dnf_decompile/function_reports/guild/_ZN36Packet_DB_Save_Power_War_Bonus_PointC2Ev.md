# _ZN36Packet_DB_Save_Power_War_Bonus_PointC2Ev

`Packet_DB_Save_Power_War_Bonus_Point::Packet_DB_Save_Power_War_Bonus_Point()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a55c4` | `0x79` | `0x809b13c` | `0x94` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x10,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movl   $0x7de,0x8(%esp)
 movl   $0x6f4,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0x10,%eax
+movl   $0x0,(%eax)
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN36Packet_DB_Save_Power_War_Bonus_PointC1Ev+0x66>
 mov    0x8(%ebp),%eax
-add    $0xe,%eax
-mov    %eax,%ebx
-mov    $0xf9,%esi
-jmp    <T> <_ZN36Packet_DB_Save_Power_War_Bonus_PointC1Ev+0x4a>
-mov    %ebx,(%esp)
+mov    -0xc(%ebp),%edx
+shl    $0x3,%edx
+add    $0xe,%edx
+add    %edx,%eax
+mov    %eax,0x4(%esp)
+movl   $0x8,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN36Packet_DB_Save_Power_War_Bonus_PointC1Ev+0x62>
+mov    %eax,(%esp)
 call   <T> <_ZN11STUserPointC1Ev>
-add    $0x8,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
-setne  %al
+addl   $0x1,-0xc(%ebp)
+cmpl   $0xf9,-0xc(%ebp)
+setle  %al
 test   %al,%al
-jne    <T> <_ZN36Packet_DB_Save_Power_War_Bonus_PointC1Ev+0x3c>
+jne    <T> <_ZN36Packet_DB_Save_Power_War_Bonus_PointC1Ev+0x36>
 mov    0x8(%ebp),%eax
 add    $0xe,%eax
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

/* Packet_DB_Save_Power_War_Bonus_Point::Packet_DB_Save_Power_War_Bonus_Point() */

void __thiscall
Packet_DB_Save_Power_War_Bonus_Point::_ZN36Packet_DB_Save_Power_War_Bonus_PointC2Ev
          (Packet_DB_Save_Power_War_Bonus_Point *this)

{
  STUserPoint *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x6f4,0x7de);
  *(undefined4 *)(this + 10) = 0;
  this_00 = (STUserPoint *)(this + 0xe);
  for (iVar1 = 0xf9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STUserPoint::_ZN11STUserPointC2Ev(this_00);
    this_00 = this_00 + 8;
  }
  memset(this + 0xe,0,2000);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 713 行）：

```cpp
Packet_DB_Save_Power_War_Bonus_Point::Packet_DB_Save_Power_War_Bonus_Point()
    : PacketHeader(0x6f4, 0x7de)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    for (int i = 0; i < 0xfa; i++) { new ((char*)this + 0xe + i * 0x8) STUserPoint; }
    memset((char*)this + 0xe, 0, 2000);
}
```
