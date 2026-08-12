# _ZN6CGuild21AddGuildExpUntilLimitEjj

`CGuild::AddGuildExpUntilLimit(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d9fe` | `0xd6` | `0x8053944` | `0xe4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,72 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj+0xcf>
+je     <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj+0xdd>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4d96(%eax)
 mov    0x8(%ebp),%eax
-mov    0x49(%eax),%eax
+add    $0x49,%eax
+mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x49(%eax),%eax
-mov    %eax,%edx
-add    0xc(%ebp),%edx
+lea    0x49(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x49(%eax)
+add    $0x49,%eax
+mov    (%eax),%eax
+add    0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x49(%eax),%eax
+add    $0x49,%eax
+mov    (%eax),%eax
 cmp    0x10(%ebp),%eax
-jbe    <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj+0x55>
+jbe    <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj+0x5d>
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x49(%eax)
+lea    0x49(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x49(%eax),%eax
+add    $0x49,%eax
+mov    (%eax),%eax
 cmp    -0xc(%ebp),%eax
-jae    <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj+0x69>
+jae    <T> <_ZN6CGuild21AddGuildExpUntilLimitEjj+0x75>
 mov    0x8(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    %edx,0x49(%eax)
+lea    0x49(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x49(%eax),%esi
+add    $0x49,%eax
+mov    (%eax),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0x246,0x8(%esp)
 movl   $&_ZZN6CGuild21AddGuildExpUntilLimitEjjE12__FUNCTION__,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"GUILD EXP UNTIL LIMIT : guild key(%d), old exp(%d), add exp(%d), guild exp(%d), exp_limit(%d)",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::AddGuildExpUntilLimit(unsigned int, unsigned int) */

void __thiscall CGuild::_ZN6CGuild21AddGuildExpUntilLimitEjj(CGuild *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_18 [8];
  uint local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    this[0x4d96] = (CGuild)0x1;
    local_10 = *(uint *)(this + 0x49);
    *(uint *)(this + 0x49) = *(int *)(this + 0x49) + param_1;
    if (param_2 < *(uint *)(this + 0x49)) {
      *(uint *)(this + 0x49) = param_2;
    }
    if (*(uint *)(this + 0x49) < local_10) {
      *(uint *)(this + 0x49) = local_10;
    }
    uVar1 = *(undefined4 *)(this + 0x49);
    uVar2 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_18,"AddGuildExpUntilLimit",0x246);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/Guild",
               "GUILD EXP UNTIL LIMIT : guild key(%d), old exp(%d), add exp(%d), guild exp(%d), exp_limit(%d)"
               ,uVar2,local_10,param_1,uVar1,param_2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 723 行）：

```cpp
void CGuild::AddGuildExpUntilLimit(unsigned int exp, unsigned int limit)
{
    if ((m_field1c & 4) != 0)
    {
        m_field4d96 = 1;
        unsigned int old = *(unsigned int*)((char*)this + 0x49);
        *(unsigned int*)((char*)this + 0x49) += exp;
        if (limit < *(unsigned int*)((char*)this + 0x49))
        {
            *(unsigned int*)((char*)this + 0x49) = limit;
        }
        if (*(unsigned int*)((char*)this + 0x49) < old)
        {
            *(unsigned int*)((char*)this + 0x49) = old;
        }
        DNF_LOG_SCOPE_LINE(0x246,"./log/Guild",
            "GUILD EXP UNTIL LIMIT : guild key(%d), old exp(%d), add exp(%d), guild exp(%d), exp_limit(%d)",
            GetGuildKey(), old, exp, *(unsigned int*)((char*)this + 0x49), limit);
    }
}
```
