# _ZN13CGuildManager20GetGuildLevelWithExpEj

`CGuildManager::GetGuildLevelWithExp(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8096f56` | `0x52` | `0x805cce4` | `0x52` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    &_ZN13CGuildManager10m_ExpTableE+0x40,%eax
 cmp    0xc(%ebp),%eax
-ja     <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x17>
-mov    $0x10,%eax
-jmp    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x50>
+jbe    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x4b>
 movl   $0x0,-0x8(%ebp)
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x42>
+jmp    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x3b>
 mov    -0x4(%ebp),%eax
 mov    &_ZN13CGuildManager10m_ExpTableE(,%eax,4),%eax
 cmp    0xc(%ebp),%eax
-jbe    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x3e>
+jbe    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x37>
 mov    -0x4(%ebp),%eax
 mov    %eax,-0x8(%ebp)
-jmp    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x4d>
+jmp    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x46>
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x10,-0x4(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x27>
+jne    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x20>
 mov    -0x8(%ebp),%eax
+jmp    <T> <_ZN13CGuildManager20GetGuildLevelWithExpEj+0x50>
+mov    $0x10,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetGuildLevelWithExp(unsigned int) */

int __thiscall
CGuildManager::_ZN13CGuildManager20GetGuildLevelWithExpEj(CGuildManager *this,uint param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  if (param_1 < (uint)m_ExpTable._64_4_) {
    local_c = 0;
    for (local_8 = 0;
        (iVar1 = local_c, local_8 < 0x11 &&
        (iVar1 = local_8, *(uint *)(m_ExpTable + local_8 * 4) <= param_1)); local_8 = local_8 + 1) {
    }
  }
  else {
    iVar1 = 0x10;
  }
  return iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 664 行）：

```cpp
int CGuildManager::GetGuildLevelWithExp(unsigned int exp)
{
    int level;
    if (exp < m_ExpTable[0x10])
    {
        level = 0;
        for (int i = 0; i <= 0x10; i++)
        {
            if (m_ExpTable[i] > exp)
            {
                level = i;
                break;
            }
        }
        return level;
    }
    return 0x10;
}
```
