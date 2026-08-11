# _ZN9TCPSocket8shutdownEi

`TCPSocket::shutdown(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x804c8c0` | `0xd` | `0x80534f4` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-cmp    $0xffffffff,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void shutdown(TCPSocket * this, int opt) */

void __thiscall TCPSocket::_ZN9TCPSocket8shutdownEi(TCPSocket *this,int opt)

{
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelServer/Socket.cpp](source/ChannelOld/DNFChannelServer/Socket.cpp)（约第 160 行）：

```cpp
int TCPSocket::shutdown(int opt)
{
    // 语义还原（2026-08-11 用户规矩：不允许硬套 asm）。
    // ORIG 不调用 ::shutdown(2)，仅装载 sock_ 并与 -1 比较；纯 C++ 形态下该死比较
    // 被 -O0 折叠，无法逐字节复现——按规矩归入 caliber_issues.csv（REMAIN）。
    (void)opt;
    sock_ == -1;
    return sock_;
}
```
