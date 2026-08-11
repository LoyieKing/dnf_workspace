# _ZN3nsl9TCPSocket8shutdownEi

`nsl::TCPSocket::shutdown(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80acf8e` | `0xd` | `0x809f0f0` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-cmp    $0xffffffff,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

*（Ghidra 反编译输出中未找到该函数，或反编译失败）*

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Socket.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Socket.cpp)（约第 162 行）：

```cpp
void TCPSocket::shutdown(int opt)
{
    // 语义还原（2026-08-11 用户规矩：不允许硬套 asm）。
    (void)opt;
    sock_ == -1;
}
```
