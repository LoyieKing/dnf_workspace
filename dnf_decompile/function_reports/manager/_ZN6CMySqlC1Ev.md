# _ZN6CMySqlC1Ev

`CMySql::CMySql()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x806145c` | `0x3a` | `0x8054720` | `0x3a` |

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
 call   <T> <_ZN9CDBHandleC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV6CMySql+0x8,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::CMySql() */

void __thiscall CMySql::_ZN6CMySqlC1Ev(CMySql *this)

{
  CDBHandle::CDBHandle((CDBHandle *)this);
  *(undefined ***)this = &PTR__CMySql_081590a8;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 29 行）：

```cpp
CMySql::CMySql()
{
    m_mysql = 0;
    m_result = 0;
    m_lengths = 0;
}
```
