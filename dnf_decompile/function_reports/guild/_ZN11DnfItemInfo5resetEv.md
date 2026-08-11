# _ZN11DnfItemInfo5resetEv

`DnfItemInfo::reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80896e8` | `0x76` | `0x805287e` | `0x80` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x1(%eax)
+add    $0x1,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x5(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x6(%eax)
+add    $0x6,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0x0,0xa(%eax)
+add    $0xa,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
+add    $0xc,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
-movw   $0x0,0x11(%eax)
+add    $0x11,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption5resetEv>
 mov    0x8(%ebp),%eax
 add    $0x2b,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19UpgradeSeparateInfo5resetEv>
 mov    0x8(%ebp),%eax
 add    $0x2c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16ReservedCapacity5resetEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DnfItemInfo::reset() */

void __thiscall DnfItemInfo::_ZN11DnfItemInfo5resetEv(DnfItemInfo *this)

{
  *this = (DnfItemInfo)0x0;
  *(undefined4 *)(this + 1) = 0;
  this[5] = (DnfItemInfo)0x0;
  *(undefined4 *)(this + 6) = 0;
  *(undefined2 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (DnfItemInfo)0x0;
  *(undefined2 *)(this + 0x11) = 0;
  RandomOption::reset((RandomOption *)(this + 0x1d));
  UpgradeSeparateInfo::reset((UpgradeSeparateInfo *)(this + 0x2b));
  ReservedCapacity::reset((ReservedCapacity *)(this + 0x2c));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 189 行）：

```cpp
void DnfItemInfo::reset()
{
    m_data[0] = 0;
    *(unsigned int*)(m_data + 1) = 0;
    m_data[5] = 0;
    *(unsigned int*)(m_data + 6) = 0;
    *(unsigned short*)(m_data + 10) = 0;
    *(unsigned int*)(m_data + 0xc) = 0;
    m_data[0x10] = 0;
    *(unsigned short*)(m_data + 0x11) = 0;
    ((RandomOption*)(m_data + 0x1d))->reset();
    m_up.reset();
    m_res.reset();
}
```
