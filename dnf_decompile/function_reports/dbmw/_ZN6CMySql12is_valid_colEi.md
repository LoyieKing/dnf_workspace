# _ZN6CMySql12is_valid_colEi

`CMySql::is_valid_col(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d9ce` | `0x22` | `0x80c932a` | `0x29` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 cmpl   $0x0,0xc(%ebp)
-js     <T> <_ZN6CMySql12is_valid_colEi+0x14>
+jns    <T> <_ZN6CMySql12is_valid_colEi+0x10>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CMySql12is_valid_colEi+0x27>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 cmp    0xc(%ebp),%eax
-jg     <T> <_ZN6CMySql12is_valid_colEi+0x1b>
+jle    <T> <_ZN6CMySql12is_valid_colEi+0x22>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CMySql12is_valid_colEi+0x27>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CMySql12is_valid_colEi+0x20>
-mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::is_valid_col(int) */

undefined4 __thiscall CMySql::_ZN6CMySql12is_valid_colEi(CMySql *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x18) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 427 行）：

```cpp
char CMySql::is_valid_col(int col)
{
    if (col < 0)
        return 0;
    if (m_nFields > col)
        return 1;
    return 0;
}
```
