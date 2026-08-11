# _ZN29Packet_DBMW_Reponse_BlackListC1Ev

`Packet_DBMW_Reponse_BlackList::Packet_DBMW_Reponse_BlackList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1c9c` | `0x79` | `0x807c050` | `0xc6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x19e,0x8(%esp)
 movl   $0x5e1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
-mov    0x8(%ebp),%eax
+add    $0xa,%eax
+movl   $0x0,(%eax)
+movl   $0x9,-0x1c(%ebp)
+jmp    <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev+0x95>
+mov    0x8(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
 add    $0xe,%eax
+lea    (%ecx,%eax,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0x28,(%esp)
+call   <T> <_ZnwjPv>
 mov    %eax,%ebx
-mov    $0x9,%esi
-jmp    <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev+0x4a>
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev+0x91>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17STBlackUserDBTypeC1Ev>
+jmp    <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev+0x91>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
 mov    %ebx,(%esp)
-call   <T> <_ZN17STBlackUserDBTypeC1Ev>
-add    $0x28,%ebx
-sub    $0x1,%esi
-cmp    $0xffffffff,%esi
+call   <T> <_ZdlPvS_>
+mov    -0x2c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+subl   $0x1,-0x1c(%ebp)
+cmpl   $0xffffffff,-0x1c(%ebp)
 setne  %al
 test   %al,%al
-jne    <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev+0x3c>
+jne    <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev+0x39>
 mov    0x8(%ebp),%eax
 add    $0xe,%eax
 movl   $0x190,0x8(%esp)
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

/* Packet_DBMW_Reponse_BlackList::Packet_DBMW_Reponse_BlackList() */

void __thiscall
Packet_DBMW_Reponse_BlackList::_ZN29Packet_DBMW_Reponse_BlackListC1Ev
          (Packet_DBMW_Reponse_BlackList *this)

{
  STBlackUserDBType *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x5e1,0x19e);
  *(undefined4 *)(this + 10) = 0;
  this_00 = (STBlackUserDBType *)(this + 0xe);
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STBlackUserDBType::_ZN17STBlackUserDBTypeC2Ev(this_00);
    this_00 = this_00 + 0x28;
  }
  memset(this + 0xe,0,400);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 51 行）：

```cpp
Packet_DBMW_Reponse_BlackList::Packet_DBMW_Reponse_BlackList()
    : PacketHeader(0x5e1, 0x19e)
{
    *(int*)((char*)this + 0xa) = 0;
    for (int i = 9; i != -1; i--)
        new ((STBlackUserDBType*)((char*)this + 0xe + i * 0x28)) STBlackUserDBType;
    memset((char*)this + 0xe, 0, 0x190);
}
```
