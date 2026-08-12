# _ZN24Packet_InnerPakcet_LoginC1Ev

`Packet_InnerPakcet_Login::Packet_InnerPakcet_Login()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805ab8a` | `0x23` | `0x80ebdf8` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
-movl   $0xa,0x8(%esp)
-movl   $0xfa0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN12PacketHeaderC1Ett>
+mov    %eax,-0x4(%ebp)
+mov    -0x4(%ebp),%eax
+movw   $0xfa0,(%eax)
+mov    -0x4(%ebp),%eax
+add    $0x2,%eax
+movw   $0xa,(%eax)
+mov    -0x4(%ebp),%eax
+add    $0x4,%eax
+movw   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x6,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

*（Ghidra 反编译输出中未找到该函数，或反编译失败）*

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/Peer.cpp](source/DNFServer/GameServer/DBMW/Peer.cpp)（约第 43 行）：

```cpp
extern "C" void _ZN24Packet_InnerPakcet_LoginC1Ev(void* p)
{
    hdr_ctor_login(p, 0xfa0, 0xa);
}
```
