# _ZN21STDBSavePowerWarPointC1Ev

`STDBSavePowerWarPoint::STDBSavePowerWarPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa8bc` | `0x18` | `0x80a0a4c` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
-pop    %ebp
+movl   $0x8,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STDBSavePowerWarPoint::STDBSavePowerWarPoint() */

void __thiscall STDBSavePowerWarPoint::_ZN21STDBSavePowerWarPointC1Ev(STDBSavePowerWarPoint *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 373 行）：

```cpp
STDBSavePowerWarPoint::STDBSavePowerWarPoint()
{
    memset(m_data, 0, sizeof(m_data));
}
```
