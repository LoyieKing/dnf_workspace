# _ZN40Packet_Monitor_Notice_Guild_Enter_ToUserC2Ev

`Packet_Monitor_Notice_Guild_Enter_ToUser::Packet_Monitor_Notice_Guild_Enter_ToUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092a6a` | `0x45` | `0x80586dc` | `0x5f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x5a,0x8(%esp)
 movl   $0x3fd,0x4(%esp)
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
 add    $0x14,%eax
+mov    %eax,0x4(%esp)
+movl   $0x41,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN40Packet_Monitor_Notice_Guild_Enter_ToUserC1Ev+0x5d>
 mov    %eax,(%esp)
 call   <T> <_ZN21ST_Notice_Guild_EnterC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Notice_Guild_Enter_ToUser::Packet_Monitor_Notice_Guild_Enter_ToUser() */

void __thiscall
Packet_Monitor_Notice_Guild_Enter_ToUser::_ZN40Packet_Monitor_Notice_Guild_Enter_ToUserC2Ev
          (Packet_Monitor_Notice_Guild_Enter_ToUser *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x3fd,0x5a);
  *(undefined4 *)(this + 10) = 0xffffffff;
  *(undefined4 *)(this + 0xe) = 0;
  ST_Notice_Guild_Enter::_ZN21ST_Notice_Guild_EnterC2Ev((ST_Notice_Guild_Enter *)(this + 0x14));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2253 行）：

```cpp
Packet_Monitor_Notice_Guild_Enter_ToUser::Packet_Monitor_Notice_Guild_Enter_ToUser()
    : PacketHeader(0x3fd, 0x5a)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    new ((char*)this + 0x14) ST_Notice_Guild_Enter;
}
```
