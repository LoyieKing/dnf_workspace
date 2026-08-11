# _ZN6CMySql16clear_result_setEv

`CMySql::clear_result_set()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x808d710` | `0x34` | `0x80c8a9e` | `0x34` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CMySql16clear_result_setEv+0x1e>
+je     <T> <_ZN6CMySql16clear_result_setEv+0x32>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <mysql_free_result>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMySql::clear_result_set() */

void __thiscall CMySql::_ZN6CMySql16clear_result_setEv(CMySql *this)

{
  if (*(int *)(this + 8) != 0) {
    mysql_free_result(*(undefined4 *)(this + 8));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFMySql.cpp](source/DNFServer/GameServer/DBMW/DNFMySql.cpp)（约第 225 行）：

```cpp
void CMySql::clear_result_set()
{
    if (m_result)
    {
        mysql_free_result(m_result);
        m_result = 0;
        m_row = 0;
    }
}
```
