# _ZN6CMySql5fetchEv

`CMySql::fetch()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808d8bc` | `0x57` | `0x80c8a46` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN6CMySql5fetchEv+0x17>
 mov    $0x0,%eax
 jmp    <T> <_ZN6CMySql5fetchEv+0x55>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_fetch_row>
 mov    0x8(%ebp),%edx
 mov    %eax,0xc(%edx)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql5fetchEv+0x50>
+jne    <T> <_ZN6CMySql5fetchEv+0x3c>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CMySql5fetchEv+0x55>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_fetch_lengths>
 mov    0x8(%ebp),%edx
 mov    %eax,0x10(%edx)
 mov    $0x1,%eax
-jmp    <T> <_ZN6CMySql5fetchEv+0x55>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::fetch() */

undefined4 __thiscall CMySql::_ZN6CMySql5fetchEv(CMySql *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = mysql_fetch_row(*(undefined4 *)(this + 8));
    *(undefined4 *)(this + 0xc) = uVar1;
    if (*(int *)(this + 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = mysql_fetch_lengths(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 215 行）：

```cpp
bool CMySql::fetch()
{
    if (!m_result)
        return 0;
    m_row = mysql_fetch_row(m_result);
    if (!m_row)
        return 0;
    m_lengths = mysql_fetch_lengths(m_result);
    return 1;
}
```
