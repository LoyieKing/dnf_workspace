# _ZN11CSystemTimeC1Ev

`CSystemTime::CSystemTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x805ed5e` | `0x4f` | `0x809fe48` | `0x52` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %ebx
+sub    $0x14,%esp
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <gettimeofday>
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%edx
-mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0x8(%edx),%edx
 mov    %edx,0x10(%eax)
+mov    0x8(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%ecx
 mov    $0x10624dd3,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x6,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x4(%eax)
-leave
+mov    %eax,0x4(%ebx)
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSystemTime::CSystemTime() */

void __thiscall CSystemTime::_ZN11CSystemTimeC1Ev(CSystemTime *this)

{
  gettimeofday((timeval *)(this + 8),(__timezone_ptr_t)0x0);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
  *(int *)(this + 4) = *(int *)(this + 0xc) / 1000;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/SystemTimeHandler.cpp](source/DNFServer/GameServer/Monitor/SystemTimeHandler.cpp)（约第 43 行）：

```cpp
CSystemTime::CSystemTime()
{
    gettimeofday((timeval*)&m_tv_sec, 0);
    m_field16 = m_tv_sec;
    m_field4 = m_tv_usec / 1000;
}
```
