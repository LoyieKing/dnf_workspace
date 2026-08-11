# _ZN35Packet_Channel_Guild_Cargo_Pop_ItemC1Ev

`Packet_Channel_Guild_Cargo_Pop_Item::Packet_Channel_Guild_Cargo_Pop_Item()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808a73c` | `0x7e` | `0x807f37c` | `0xcb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x50,0x8(%esp)
 movl   $0x70e,0x4(%esp)
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
-movl   $0x0,0x12(%eax)
+add    $0x12,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-add    $0x16,%eax
+lea    0x16(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x35,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN35Packet_Channel_Guild_Cargo_Pop_ItemC1Ev+0x90>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11DnfItemInfoC1Ev>
+jmp    <T> <_ZN35Packet_Channel_Guild_Cargo_Pop_ItemC1Ev+0x90>
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
-movb   $0x0,0x4b(%eax)
+add    $0x4b,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4c(%eax)
+add    $0x4c,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x16,%eax
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

/* Packet_Channel_Guild_Cargo_Pop_Item::Packet_Channel_Guild_Cargo_Pop_Item() */

void __thiscall
Packet_Channel_Guild_Cargo_Pop_Item::_ZN35Packet_Channel_Guild_Cargo_Pop_ItemC1Ev
          (Packet_Channel_Guild_Cargo_Pop_Item *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x70e,0x50);
  *(undefined4 *)(this + 10) = 0xffffffff;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 0x12) = 0;
  DnfItemInfo::_ZN11DnfItemInfoC2Ev((DnfItemInfo *)(this + 0x16));
  this[0x4b] = (Packet_Channel_Guild_Cargo_Pop_Item)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  memset(this + 0x16,0,0x35);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5891 行）：

```cpp
Packet_Channel_Guild_Cargo_Pop_Item::Packet_Channel_Guild_Cargo_Pop_Item()
    : PacketHeader(0x70e, 0x50)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    new ((char*)this + 0x16) DnfItemInfo;
    *(unsigned char*)((char*)this + 0x4b) = 0x0;
    *(unsigned int*)((char*)this + 0x4c) = 0;
    memset((char*)this + 0x16, 0, 0x35);
}
```
