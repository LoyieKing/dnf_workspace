# _ZN41Packet_Monitor_Notice_Guild_Create_ToUserC2Ev

`Packet_Monitor_Notice_Guild_Create_ToUser::Packet_Monitor_Notice_Guild_Create_ToUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80899c2` | `0x3b` | `0x807e4dc` | `0x80` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,42 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x2d,0x8(%esp)
 movl   $0x40c,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-add    $0xa,%eax
+lea    0x10(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x1f,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN41Packet_Monitor_Notice_Guild_Create_ToUserC1Ev+0x6c>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21ST_GuildCreateFromWebC1Ev>
+jmp    <T> <_ZN41Packet_Monitor_Notice_Guild_Create_ToUserC1Ev+0x6c>
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
-movl   $0xffffffff,0x29(%eax)
-leave
+add    $0x29,%eax
+movl   $0xffffffff,(%eax)
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Notice_Guild_Create_ToUser::Packet_Monitor_Notice_Guild_Create_ToUser() */

void __thiscall
Packet_Monitor_Notice_Guild_Create_ToUser::_ZN41Packet_Monitor_Notice_Guild_Create_ToUserC2Ev
          (Packet_Monitor_Notice_Guild_Create_ToUser *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x40c,0x2d);
  ST_GuildCreateFromWeb::_ZN21ST_GuildCreateFromWebC2Ev((ST_GuildCreateFromWeb *)(this + 10));
  *(undefined4 *)(this + 0x29) = 0xffffffff;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5570 行）：

```cpp
Packet_Monitor_Notice_Guild_Create_ToUser::Packet_Monitor_Notice_Guild_Create_ToUser()
    : PacketHeader(0x40c, 0x2d)
{
    new ((char*)this + 0x10) ST_GuildCreateFromWeb;
    *(unsigned int*)((char*)this + 0x29) = 0xffffffff;
}
```
