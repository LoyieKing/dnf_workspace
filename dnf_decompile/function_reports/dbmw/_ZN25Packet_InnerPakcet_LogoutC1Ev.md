# _ZN25Packet_InnerPakcet_LogoutC1Ev

`Packet_InnerPakcet_Logout::Packet_InnerPakcet_Logout()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805abae` | `0x23` | `0x80ebe31` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-mov    0x8(%ebp),%eax
 movl   $0xa,0x8(%esp)
 movl   $0xfa1,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 leave
 ret
```
## 2. Ghidra 反编译 C

*（Ghidra 反编译输出中未找到该函数，或反编译失败）*

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/Peer.cpp](source/DNFServer/GameServer/DBMW/Peer.cpp)（约第 48 行）：

```cpp
extern "C" void _ZN25Packet_InnerPakcet_LogoutC1Ev(void* p)
{
    hdr_ctor_logout(p, 0xfa1, 0xa);
}
```
