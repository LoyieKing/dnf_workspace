# _ZN7CMember22GetUpperMemberExpLevelEv

`CMember::GetUpperMemberExpLevel()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8099146` | `0x23` | `0x806085c` | `0x37` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x29(%eax),%edx
+mov    0x1b4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN7CMember22GetUpperMemberExpLevelEv+0x30>
+mov    0x8(%ebp),%eax
+add    $0x29,%eax
+mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager17GetMemberExpLevelEj>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::GetUpperMemberExpLevel() */

void __thiscall CMember::_ZN7CMember22GetUpperMemberExpLevelEv(CMember *this)

{
  CMemberManager::_ZN14CMemberManager17GetMemberExpLevelEj
            (*(CMemberManager **)(this + 0x1b4),*(uint *)(this + 0x29));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 448 行）：

```cpp
unsigned int CMember::GetUpperMemberExpLevel()
{
    if (m_memberManager != 0)
    {
        m_memberManager->GetMemberExpLevel(*(unsigned int*)((char*)this + 0x29));
    }
    return 0;
}
```
