# _ZN13CGuildManager20GetGuildExpWithLevelEh

`CGuildManager::GetGuildExpWithLevel(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8096f30` | `0x26` | `0x805d4a2` | `0x18` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,13 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
-cmpb   $0xf,-0x4(%ebp)
-jbe    <T> <_ZN13CGuildManager20GetGuildExpWithLevelEh+0x19>
-mov    &_ZN13CGuildManager10m_ExpTableE+0x40,%eax
-jmp    <T> <_ZN13CGuildManager20GetGuildExpWithLevelEh+0x24>
 movzbl -0x4(%ebp),%eax
-mov    &_ZN13CGuildManager10m_ExpTableE(,%eax,4),%eax
+imul   $0x3e8,%eax,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GetGuildExpWithLevel(unsigned char) */

undefined4 __thiscall
CGuildManager::_ZN13CGuildManager20GetGuildExpWithLevelEh(CGuildManager *this,uchar param_1)

{
  undefined4 uVar1;
  
  uVar1 = m_ExpTable._64_4_;
  if (param_1 < 0x10) {
    uVar1 = *(undefined4 *)(m_ExpTable + (uint)param_1 * 4);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 577 行）：

```cpp
unsigned int CGuildManager::GetGuildExpWithLevel(unsigned char level)
{
    return (unsigned int)level * 1000;
}
```
