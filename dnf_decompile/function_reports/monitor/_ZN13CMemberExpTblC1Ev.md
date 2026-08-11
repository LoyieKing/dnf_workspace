# _ZN13CMemberExpTblC1Ev

`CMemberExpTbl::CMemberExpTbl()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806b990` | `0x41` | `0x8061236` | `0x43` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTableBaseC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV13CMemberExpTbl+0x8,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x4(%eax)
+add    $0x4,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 movl   $0x2c,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberExpTbl::CMemberExpTbl() */

void __thiscall CMemberExpTbl::_ZN13CMemberExpTblC1Ev(CMemberExpTbl *this)

{
  CTableBase::_ZN10CTableBaseC2Ev((CTableBase *)this);
  *(undefined ***)this = &PTR__CMemberExpTbl_08120120;
  this[4] = (CMemberExpTbl)0x0;
  memset(this + 8,0,0x2c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp](source/DNFServer/GameServer/Monitor/DNFMemberConfig.cpp)（约第 76 行）：

```cpp
CMemberExpTbl::CMemberExpTbl()
{
    *(char*)((char*)this + 4) = 0;
    memset((char*)this + 8, 0, 0x2c);
}
```
