# _ZN6CGuild16SubPowerWarPointEj

`CGuild::SubPowerWarPoint(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808dbe4` | `0xbd` | `0x8053c4e` | `0xb9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,48 @@
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
-je     <T> <_ZN6CGuild16SubPowerWarPointEj+0xb6>
+je     <T> <_ZN6CGuild16SubPowerWarPointEj+0xb3>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x4d96(%eax)
 mov    0x8(%ebp),%eax
 mov    0xba(%eax),%eax
 cmp    0xc(%ebp),%eax
-jbe    <T> <_ZN6CGuild16SubPowerWarPointEj+0x4e>
+jbe    <T> <_ZN6CGuild16SubPowerWarPointEj+0x4d>
 mov    0x8(%ebp),%eax
 mov    0xba(%eax),%eax
 mov    %eax,%edx
 sub    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xba(%eax)
-jmp    <T> <_ZN6CGuild16SubPowerWarPointEj+0x5b>
+jmp    <T> <_ZN6CGuild16SubPowerWarPointEj+0x5a>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xba(%eax)
-mov    0x8(%ebp),%eax
-mov    0xba(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild11GetGuildKeyEv>
-mov    %eax,%ebx
 movl   $0x290,0x8(%esp)
 movl   $"SubPowerWarPoint",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+mov    0xba(%eax),%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild11GetGuildKeyEv>
+mov    %ebx,0x14(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"GUILD POWERWAR POINT : guild key(%d), sub powerwar point(%d), guild powerwar point(%d)",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x30,%esp
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SubPowerWarPoint(unsigned int) */

void __thiscall CGuild::_ZN6CGuild16SubPowerWarPointEj(CGuild *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    this[0x4d96] = (CGuild)0x1;
    if (param_1 < *(uint *)(this + 0xba)) {
      *(uint *)(this + 0xba) = *(int *)(this + 0xba) - param_1;
    }
    else {
      *(undefined4 *)(this + 0xba) = 0;
    }
    uVar1 = *(undefined4 *)(this + 0xba);
    uVar2 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_14,"SubPowerWarPoint",0x290);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Guild",
               "GUILD POWERWAR POINT : guild key(%d), sub powerwar point(%d), guild powerwar point(%d)"
               ,uVar2,param_1,uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 664 行）：

```cpp
void CGuild::SubPowerWarPoint(unsigned int point)
{
    if ((m_field1c & 4) != 0)
    {
        m_field4d96 = 1;
        if (point < m_dbInfo.m_info.m_powerWarPoint)
        {
            m_dbInfo.m_info.m_powerWarPoint -= point;
        }
        else
        {
            m_dbInfo.m_info.m_powerWarPoint = 0;
        }
        DNF_LOG_SCOPE_LINE(0x290,"./log/Guild",
            "GUILD POWERWAR POINT : guild key(%d), sub powerwar point(%d), guild powerwar point(%d)",
            GetGuildKey(), point, m_dbInfo.m_info.m_powerWarPoint);
    }
}
```
