# _ZN8CAppBase5ClearEv

`CAppBase::Clear()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805aace` | `0x1a` | `0x804d776` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
-add    $0x14,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppBase::Clear() */

void __thiscall CAppBase::_ZN8CAppBase5ClearEv(CAppBase *this)

{
  (**(code **)(*(int *)this + 0x14))(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 44 行）：

```cpp
void CAppBase::Clear()
{
    Free();
}
```
