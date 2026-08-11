# _ZN19CPowerWarCharacInfo20CreatePowerwarCharacEv

`CPowerWarCharacInfo::CreatePowerwarCharac()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7824` | `0x4d` | `0x809dcda` | `0x46` |

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
-movl   $0xc,(%esp)
+movl   $0x10,(%esp)
 call   <T> <_ZN20STPowerWarCharacInfonwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20STPowerWarCharacInfoC1Ev>
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

/* CPowerWarCharacInfo::CreatePowerwarCharac() */

STPowerWarCharacInfo * CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo20CreatePowerwarCharacEv(void)

{
  STPowerWarCharacInfo *this;
  uint in_stack_ffffffd8;
  
  this = STPowerWarCharacInfo::operator_new((STPowerWarCharacInfo *)0xc,in_stack_ffffffd8);
  STPowerWarCharacInfo::STPowerWarCharacInfo(this);
  memset(this,0,4);
  return this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 135 行）：

```cpp
STPowerWarCharacInfo* CPowerWarCharacInfo::CreatePowerwarCharac()
{
    STPowerWarCharacInfo* info = new STPowerWarCharacInfo;
    memset(info, 0, 4);
    return info;
}
```
