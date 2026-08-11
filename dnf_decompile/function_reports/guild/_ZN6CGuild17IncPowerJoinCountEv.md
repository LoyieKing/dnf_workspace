# _ZN6CGuild17IncPowerJoinCountEv

`CGuild::IncPowerJoinCount()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092098` | `0xb4` | `0x8057dae` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17IncPowerJoinCountEv+0xad>
+je     <T> <_ZN6CGuild17IncPowerJoinCountEv+0xb2>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4d96(%eax)
 mov    0x8(%ebp),%eax
-movzbl 0xbf(%eax),%eax
-lea    0x1(%eax),%edx
+lea    0xbf(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %dl,0xbf(%eax)
+add    $0xbf,%eax
+movzbl (%eax),%eax
+add    $0x1,%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
-movzbl 0xbf(%eax),%eax
+add    $0xbf,%eax
+movzbl (%eax),%eax
 cmp    $0x80,%al
-jbe    <T> <_ZN6CGuild17IncPowerJoinCountEv+0x55>
+jbe    <T> <_ZN6CGuild17IncPowerJoinCountEv+0x59>
 mov    0x8(%ebp),%eax
-movb   $0x80,0xbf(%eax)
-mov    0x8(%ebp),%eax
-movzbl 0xbf(%eax),%eax
-movzbl %al,%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
+add    $0xbf,%eax
+movb   $0x80,(%eax)
 movl   $0xacf,0x8(%esp)
 movl   $"IncPowerJoinCount",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+add    $0xbf,%eax
+movzbl (%eax),%eax
+movzbl %al,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %ebx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"IncPowerJoinCount Guild(%d), JoinCount(%d)",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x30,%esp
+jmp    <T> <_ZN6CGuild17IncPowerJoinCountEv+0xb3>
+nop
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::IncPowerJoinCount() */

void __thiscall CGuild::_ZN6CGuild17IncPowerJoinCountEv(CGuild *this)

{
  CGuild CVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    this[0x4d96] = (CGuild)0x1;
    this[0xbf] = (CGuild)((char)this[0xbf] + '\x01');
    if (0x80 < (byte)this[0xbf]) {
      this[0xbf] = (CGuild)0x80;
    }
    CVar1 = this[0xbf];
    uVar2 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_14,"IncPowerJoinCount",0xacf);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Guild","IncPowerJoinCount Guild(%d), JoinCount(%d)",uVar2,
               (uint)(byte)CVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2036 行）：

```cpp
void CGuild::IncPowerJoinCount()
{
    if ((m_field1c & 4) == 0)
    {
        return;
    }
    m_field4d96 = 1;
    *(char*)((char*)this + 0xbf) = (char)(*(char*)((char*)this + 0xbf) + 1);
    if (0x80 < (unsigned char)*(char*)((char*)this + 0xbf))
    {
        *(char*)((char*)this + 0xbf) = (char)0x80;
    }
    DNF_LOG_SCOPE_LINE(0xacf,"./log/Guild", "IncPowerJoinCount Guild(%d), JoinCount(%d)",
        GetGuildKey(), (unsigned int)(unsigned char)*(char*)((char*)this + 0xbf));
}
```
