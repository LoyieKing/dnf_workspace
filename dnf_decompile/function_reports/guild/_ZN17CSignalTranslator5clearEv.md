# _ZN17CSignalTranslator5clearEv

`CSignalTranslator::clear()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x804b264` | `0x116` | `0x8084088` | `0x116` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x3c>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x32>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x10(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x72>
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x68>
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x28(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x28(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x28(%eax)
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0xa8>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x9e>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x30(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x30(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0xde>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0xd4>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x18(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x114>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17CSignalTranslator5clearEv+0x10a>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x3c(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x3c(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,0x3c(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSignalTranslator::clear() */

void __thiscall CSignalTranslator::_ZN17CSignalTranslator5clearEv(CSignalTranslator *this)

{
  if (*(int *)(this + 0x10) != 0) {
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(**(int **)(this + 0x10) + 8))(*(undefined4 *)(this + 0x10));
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    if (*(int *)(this + 0x28) != 0) {
      (**(code **)(**(int **)(this + 0x28) + 8))(*(undefined4 *)(this + 0x28));
    }
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 0x30) != 0) {
      (**(code **)(**(int **)(this + 0x30) + 8))(*(undefined4 *)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    if (*(int *)(this + 0x18) != 0) {
      (**(code **)(**(int **)(this + 0x18) + 8))(*(undefined4 *)(this + 0x18));
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x3c) != 0) {
    if (*(int *)(this + 0x3c) != 0) {
      (**(code **)(**(int **)(this + 0x3c) + 8))(*(undefined4 *)(this + 0x3c));
    }
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp](source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp)（约第 17 行）：

```cpp
void CSignalTranslator::clear()
{
    if (m_handlers[0x10 / 4] != 0)
    {
        delete m_handlers[0x10 / 4];
        m_handlers[0x10 / 4] = 0;
    }
    if (m_handlers[0x28 / 4] != 0)
    {
        delete m_handlers[0x28 / 4];
        m_handlers[0x28 / 4] = 0;
    }
    if (m_handlers[0x30 / 4] != 0)
    {
        delete m_handlers[0x30 / 4];
        m_handlers[0x30 / 4] = 0;
    }
    if (m_handlers[0x18 / 4] != 0)
    {
        delete m_handlers[0x18 / 4];
        m_handlers[0x18 / 4] = 0;
    }
    if (m_handlers[0x3c / 4] != 0)
    {
        delete m_handlers[0x3c / 4];
        m_handlers[0x3c / 4] = 0;
    }
}
```
