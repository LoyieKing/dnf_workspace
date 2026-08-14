# _ZN32Packet_DBMW_Request_Guild_CreateC1Ev

`Packet_DBMW_Request_Guild_Create::Packet_DBMW_Request_Guild_Create()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808a3b6` | `0x9b` | `0x807fcba` | `0xa2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x5c,0x8(%esp)
 movl   $0x43f,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 add    $0x13,%eax
 movl   $0x17,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x35,%eax
-movl   $0x3,0x8(%esp)
+movl   $0x2,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0x8(%ebp),%eax
+movb   $0x0,0x37(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4f,%eax
 movl   $0xd,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x38,%eax
 movl   $0x17,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

*（Ghidra 反编译输出中未找到该函数，或反编译失败）*

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 6197 行）：

```cpp
Packet_DBMW_Request_Guild_Create::Packet_DBMW_Request_Guild_Create()
    : PacketHeader(0x43f, 0x5c)
{
    memset(m_name, 0, 0x17);
    memset(m_ssn, 0, 2);
    m_pad37[0] = 0;
    memset(m_extra, 0, 0xd);
    memset(m_guildName, 0, 0x17);
}
```
