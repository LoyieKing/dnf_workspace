# _ZN33Packet_Monitor_Notice_Guild_EnterC2Ev

`Packet_Monitor_Notice_Guild_Enter::Packet_Monitor_Notice_Guild_Enter()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063d08` | `0x31` | `0x804f632` | `0x74` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %edi
+push   %esi
+push   %ebx
+sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 movl   $0x50,0x8(%esp)
 movl   $0x3fd,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-add    $0xa,%eax
+lea    0x10(%eax),%esi
+mov    %esi,0x4(%esp)
+movl   $0x41,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%ebx
+mov    %ebx,%eax
+test   %eax,%eax
+je     <T> <_ZN33Packet_Monitor_Notice_Guild_EnterC1Ev+0x6c>
+mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21ST_Notice_Guild_EnterC1Ev>
-leave
+jmp    <T> <_ZN33Packet_Monitor_Notice_Guild_EnterC1Ev+0x6c>
+mov    %edx,%edi
+mov    %eax,-0x1c(%ebp)
+mov    %esi,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <_ZdlPvS_>
+mov    -0x1c(%ebp),%eax
+mov    %edi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Notice_Guild_Enter::Packet_Monitor_Notice_Guild_Enter() */

void __thiscall
Packet_Monitor_Notice_Guild_Enter::_ZN33Packet_Monitor_Notice_Guild_EnterC2Ev
          (Packet_Monitor_Notice_Guild_Enter *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x3fd,0x50);
  ST_Notice_Guild_Enter::_ZN21ST_Notice_Guild_EnterC2Ev((ST_Notice_Guild_Enter *)(this + 10));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 585 行）：

```cpp
Packet_Monitor_Notice_Guild_Enter::Packet_Monitor_Notice_Guild_Enter()
    : PacketHeader(0x3fd, 0x50)
{
    new ((char*)this + 0x10) ST_Notice_Guild_Enter;
}
```
