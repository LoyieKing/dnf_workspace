# _ZN18CPowerWarGuildInfo19CreatePowerwarGuildEv

`CPowerWarGuildInfo::CreatePowerwarGuild()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9e30` | `0x4d` | `0x80a0016` | `0x46` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
-movl   $0x0,-0xc(%ebp)
 movl   $0x14,(%esp)
 call   <T> <_ZN19STPowerWarGuildInfonwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPowerWarGuildInfoC1Ev>
 mov    %ebx,-0xc(%ebp)
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    -0xc(%ebp),%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::CreatePowerwarGuild() */

STPowerWarGuildInfo * CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo19CreatePowerwarGuildEv(void)

{
  STPowerWarGuildInfo *this;
  uint in_stack_ffffffd8;
  
  this = STPowerWarGuildInfo::operator_new((STPowerWarGuildInfo *)0x14,in_stack_ffffffd8);
  STPowerWarGuildInfo::STPowerWarGuildInfo(this);
  memset(this,0,4);
  return this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 127 行）：

```cpp
STPowerWarGuildInfo* CPowerWarGuildInfo::CreatePowerwarGuild()
{
    STPowerWarGuildInfo* info = new STPowerWarGuildInfo;
    memset(info, 0, 4);
    return info;
}
```
