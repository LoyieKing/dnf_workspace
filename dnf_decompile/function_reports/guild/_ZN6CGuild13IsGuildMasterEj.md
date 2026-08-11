# _ZN6CGuild13IsGuildMasterEj

`CGuild::IsGuildMaster(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808af0a` | `0x29` | `0x8052b2c` | `0x19` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetMasterIdEv>
 cmp    0xc(%ebp),%eax
 sete   %al
-test   %al,%al
-je     <T> <_ZN6CGuild13IsGuildMasterEj+0x22>
-mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild13IsGuildMasterEj+0x27>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::IsGuildMaster(unsigned int) */

bool __thiscall CGuild::_ZN6CGuild13IsGuildMasterEj(CGuild *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = GetMasterId(this);
  return uVar1 == param_1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 262 行）：

```cpp
bool CGuild::IsGuildMaster(unsigned int dbid)
{
    return GetMasterId() == dbid;
}
```
