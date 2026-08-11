# _ZNK12CApplication16getMiniCraneSeedEv

`CApplication::getMiniCraneSeed() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8066436` | `0xe` | `0x80527be` | `0xe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0x38c(%eax),%eax
+mov    0x394(%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::getMiniCraneSeed() const */

undefined4 __thiscall CApplication::_ZNK12CApplication16getMiniCraneSeedEv(CApplication *this)

{
  return *(undefined4 *)(this + 0x38c);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 724 行）：

```cpp
int CApplication::getMiniCraneSeed() const
{
    return m_miniCraneSeed;
}
```
