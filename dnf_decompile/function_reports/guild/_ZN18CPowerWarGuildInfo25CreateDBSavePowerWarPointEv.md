# _ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv

`CPowerWarGuildInfo::CreateDBSavePowerWarPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa434` | `0x67` | `0x809ff4e` | `0x60` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
-movl   $0x0,-0xc(%ebp)
 movl   $&_ZSt7nothrow,0x4(%esp)
 movl   $0x8,(%esp)
 call   <T> <_ZnwjRKSt9nothrow_t>
 mov    %eax,%ebx
 mov    %ebx,%eax
 test   %eax,%eax
-je     <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv+0x38>
+je     <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv+0x31>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21STDBSavePowerWarPointC1Ev>
 mov    %ebx,%eax
-jmp    <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv+0x3a>
+jmp    <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv+0x33>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv+0x5e>
+je     <T> <_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv+0x57>
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

/* CPowerWarGuildInfo::CreateDBSavePowerWarPoint() */

STDBSavePowerWarPoint *
CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo25CreateDBSavePowerWarPointEv(void)

{
  STDBSavePowerWarPoint *this;
  
  this = operator_new(8,(nothrow_t *)&std::nothrow);
  if (this != (STDBSavePowerWarPoint *)0x0) {
    STDBSavePowerWarPoint::STDBSavePowerWarPoint(this);
    memset(this,0,4);
  }
  return this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 275 行）：

```cpp
STDBSavePowerWarPoint* CPowerWarGuildInfo::CreateDBSavePowerWarPoint()
{
    STDBSavePowerWarPoint* p = new (std::nothrow) STDBSavePowerWarPoint();
    if (p != 0)
    {
        memset(p, 0, 4);
    }
    return p;
}
```
