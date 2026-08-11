# _ZN13STErrorStaticC1ERK10ErrorValue

`STErrorStatic::STErrorStatic(ErrorValue const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x806372c` | `0x2b` | `0x804f5de` | `0x2b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10ErrorValueC1Ev>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,(%eax)
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STErrorStatic::STErrorStatic(ErrorValue const&) */

void __thiscall
STErrorStatic::_ZN13STErrorStaticC1ERK10ErrorValue(STErrorStatic *this,ErrorValue *param_1)

{
  ErrorValue::ErrorValue((ErrorValue *)this);
  *(undefined2 *)this = *(undefined2 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFDBServer.cpp](source/DNFServer/GameServer/Statics/DNFDBServer.cpp)（约第 42 行）：

```cpp
STErrorStatic::STErrorStatic(const ErrorValue& value)
{
    m_field0 = value.m_field0;
    m_field4 = value.m_field4;
}
```
