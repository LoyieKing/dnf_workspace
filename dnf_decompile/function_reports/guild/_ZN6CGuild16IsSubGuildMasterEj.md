# _ZN6CGuild16IsSubGuildMasterEj

`CGuild::IsSubGuildMaster(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80910f0` | `0x47` | `0x8056c98` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN6CGuild16IsSubGuildMasterEj+0x2c>
+mov    0x8(%ebp),%eax
 mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
 add    $0x10,%edx
 mov    0xe(%eax,%edx,4),%eax
 cmp    0xc(%ebp),%eax
 jne    <T> <_ZN6CGuild16IsSubGuildMasterEj+0x28>
 mov    $0x1,%eax
 jmp    <T> <_ZN6CGuild16IsSubGuildMasterEj+0x45>
 addl   $0x1,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x4d(%eax),%eax
 movzbl %al,%eax
 cmp    -0x4(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN6CGuild16IsSubGuildMasterEj+0xf>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::IsSubGuildMaster(unsigned int) */

undefined4 __thiscall CGuild::_ZN6CGuild16IsSubGuildMasterEj(CGuild *this,uint param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if ((int)(uint)(byte)this[0x4d] <= local_8) {
      return 0;
    }
    if (*(uint *)(this + (local_8 + 0x10) * 4 + 0xe) == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1753 行）：

```cpp
bool CGuild::IsSubGuildMaster(unsigned int dbid)
{
    for (int i = 0; i < m_dbInfo.m_info.m_subMasterCnt; i++)
    {
        if (m_dbInfo.m_info.m_subGuildMaster[i] == dbid)
        {
            return true;
        }
    }
    return false;
}
```
