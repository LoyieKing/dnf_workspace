# _ZN12STDBConnInfoC1Ev

`STDBConnInfo::STDBConnInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806fe36` | `0xb2` | `0x8069f6c` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,38 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-mov    0x8(%ebp),%eax
 movl   $0x11,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x2d,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x42,%eax
 movl   $0x1f,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x61,%eax
 movl   $0x100,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x164(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STDBConnInfo::STDBConnInfo() */

void __thiscall STDBConnInfo::_ZN12STDBConnInfoC1Ev(STDBConnInfo *this)

{
  memset(this,0,0x11);
  memset(this + 0x18,0,0x15);
  memset(this + 0x2d,0,0x15);
  memset(this + 0x42,0,0x1f);
  memset(this + 0x61,0,0x100);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFAppConfig.cpp](source/DNFServer/GameServer/DBMW/DNFAppConfig.cpp)（约第 36 行）：

```cpp
STDBConnInfo::STDBConnInfo()
{
    memset(m_host, 0, 0x11);
    memset(m_user, 0, 0x15);
    memset(m_pass, 0, 0x15);
    memset(m_db, 0, 0x1f);
    memset(m_data, 0, 0x100);
    m_port = 0;
    m_tail = 0;
}
```
