# _ZN13CAppStartInitC1Ev

`CAppStartInit::CAppStartInit()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x806b208` | `0x1c` | `0x804f6fe` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppInitC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CAppStartInit+0x8,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppStartInit::CAppStartInit() */

void __thiscall CAppStartInit::_ZN13CAppStartInitC1Ev(CAppStartInit *this)

{
  CAppInit::CAppInit((CAppInit *)this);
  *(undefined ***)this = &PTR__CAppStartInit_081227d8;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFAppStartInit.cpp](source/DNFServer/GameServer/COServer/DNFAppStartInit.cpp)（约第 25 行）：

```cpp
CAppStartInit::CAppStartInit()
{
}
```
