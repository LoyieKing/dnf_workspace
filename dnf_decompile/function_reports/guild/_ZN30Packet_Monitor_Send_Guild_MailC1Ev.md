# _ZN30Packet_Monitor_Send_Guild_MailC1Ev

`Packet_Monitor_Send_Guild_Mail::Packet_Monitor_Send_Guild_Mail()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8063dca` | `0x41` | `0x804f674` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x112,0x8(%esp)
 movl   $0x432,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-add    $0x12,%eax
+add    $0x14,%eax
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

*（Ghidra 反编译输出中未找到该函数，或反编译失败）*

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 617 行）：

```cpp
Packet_Monitor_Send_Guild_Mail::Packet_Monitor_Send_Guild_Mail()
    : PacketHeader(0x432, 0x112)
{
    memset(m_msg, 0, 0x100);
}
```
