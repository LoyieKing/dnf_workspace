# _ZN19STPowerWarGuildInfoC1Ev

`STPowerWarGuildInfo::STPowerWarGuildInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa86e` | `0x2c` | `0x80a0a0e` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
-pop    %ebp
+movl   $0x14,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STPowerWarGuildInfo::STPowerWarGuildInfo() */

void __thiscall STPowerWarGuildInfo::_ZN19STPowerWarGuildInfoC1Ev(STPowerWarGuildInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 363 行）：

```cpp
STPowerWarGuildInfo::STPowerWarGuildInfo()
{
    memset(m_data, 0, sizeof(m_data));
}
```
