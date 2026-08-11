# _ZN13CGuildManager16SetGuildExpTableEPj

`CGuildManager::SetGuildExpTable(unsigned int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8096efa` | `0x35` | `0x805d466` | `0x3c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
-jmp    <T> <_ZN13CGuildManager16SetGuildExpTableEPj+0x28>
+jmp    <T> <_ZN13CGuildManager16SetGuildExpTableEPj+0x2f>
+mov    0x8(%ebp),%eax
+mov    -0x4(%ebp),%edx
+add    $0x1c,%edx
+shl    $0x2,%edx
+lea    (%eax,%edx,1),%edx
 mov    -0x4(%ebp),%eax
-mov    -0x4(%ebp),%edx
-shl    $0x2,%edx
-add    0xc(%ebp),%edx
-mov    (%edx),%edx
-mov    %edx,&_ZN13CGuildManager10m_ExpTableE(,%eax,4)
+shl    $0x2,%eax
+add    0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 addl   $0x1,-0x4(%ebp)
-cmpl   $0x10,-0x4(%ebp)
+cmpl   $0x13,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN13CGuildManager16SetGuildExpTableEPj+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::SetGuildExpTable(unsigned int*) */

void __thiscall
CGuildManager::_ZN13CGuildManager16SetGuildExpTableEPj(CGuildManager *this,uint *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    *(uint *)(m_ExpTable + local_8 * 4) = param_1[local_8];
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 569 行）：

```cpp
void CGuildManager::SetGuildExpTable(unsigned int* table)
{
    for (int i = 0; i < 20; i++)
    {
        *(unsigned int*)((char*)this + i * 4 + 0x70) = table[i];
    }
}
```
