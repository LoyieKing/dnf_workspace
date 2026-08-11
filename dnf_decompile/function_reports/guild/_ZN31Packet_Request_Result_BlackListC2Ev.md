# _ZN31Packet_Request_Result_BlackListC2Ev

`Packet_Request_Result_BlackList::Packet_Request_Result_BlackList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8089e6a` | `0x51` | `0x807e98c` | `0x9c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
+sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x19f,0x8(%esp)
 movl   $0x5e0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
-mov    0x8(%ebp),%eax
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN31Packet_Request_Result_BlackListC1Ev+0x89>
+mov    0x8(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
 add    $0xf,%eax
+lea    (%ecx,%eax,1),%esi
+mov    %esi,0x4(%esp)
+movl   $0x28,(%esp)
+call   <T> <_ZnwjPv>
 mov    %eax,%ebx
-mov    $0x9,%esi
-jmp    <T> <_ZN31Packet_Request_Result_BlackListC1Ev+0x40>
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN31Packet_Request_Result_BlackListC1Ev+0x85>
+mov    %ebx,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17STBlackUserDBTypeC1Ev>
+jmp    <T> <_ZN31Packet_Request_Result_BlackListC1Ev+0x85>
+mov    %edx,%edi
+mov    %eax,-0x2c(%ebp)
+mov    %esi,0x4(%esp)
 mov    %ebx,(%esp)
-call   <T> <_ZN17STBlackUserDBTypeC1Ev>
-add    $0x28,%ebx
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
-jne    <T> <_ZN31Packet_Request_Result_BlackListC1Ev+0x32>
-add    $0x10,%esp
+jne    <T> <_ZN31Packet_Request_Result_BlackListC1Ev+0x2d>
+add    $0x3c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Request_Result_BlackList::Packet_Request_Result_BlackList() */

void __thiscall
Packet_Request_Result_BlackList::_ZN31Packet_Request_Result_BlackListC2Ev
          (Packet_Request_Result_BlackList *this)

{
  STBlackUserDBType *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x5e0,0x19f);
  this_00 = (STBlackUserDBType *)(this + 0xf);
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    STBlackUserDBType::_ZN17STBlackUserDBTypeC2Ev(this_00);
    this_00 = this_00 + 0x28;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5680 行）：

```cpp
Packet_Request_Result_BlackList::Packet_Request_Result_BlackList()
    : PacketHeader(0x5e0, 0x19f)
{
    for (int i = 0; i < 9; ++i)
        new ((char*)this + 0xf + i * 0x28) STBlackUserDBType;
}
```
