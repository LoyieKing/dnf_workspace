# _ZNK17CSignalTranslator9getSignalEi

`CSignalTranslator::getSignal(int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804c602` | `0xe` | `0x8083ee0` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%eax
+mov    0x8(%ebp),%edx
+mov    0xc(%ebp),%eax
+shl    $0x2,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSignalTranslator::getSignal(int) const */

undefined4 __thiscall
CSignalTranslator::_ZNK17CSignalTranslator9getSignalEi(CSignalTranslator *this,int param_1)

{
  return *(undefined4 *)(this + param_1 * 4);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp](source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp)（约第 168 行）：

```cpp
CSignal* CSignalTranslator::getSignal(int sig) const
{
    return m_handlers[sig];
}
```
