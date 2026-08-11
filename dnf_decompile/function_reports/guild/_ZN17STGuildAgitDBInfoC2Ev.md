# _ZN17STGuildAgitDBInfoC2Ev

`STGuildAgitDBInfo::STGuildAgitDBInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092a26` | `0xb` | `0x805867c` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movb   $0x0,(%eax)
-pop    %ebp
+movl   $0x1,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildAgitDBInfo::STGuildAgitDBInfo() */

void __thiscall STGuildAgitDBInfo::_ZN17STGuildAgitDBInfoC2Ev(STGuildAgitDBInfo *this)

{
  *this = (STGuildAgitDBInfo)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2241 行）：

```cpp
STGuildAgitDBInfo::STGuildAgitDBInfo()
{
    memset(m_data, 0, sizeof(m_data));
}
```
