# _ZN6CGuild11DBGuildSaveEhP14CServerHandlerj

`CGuild::DBGuildSave(unsigned char, CServerHandler*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d750` | `0xc7` | `0x805381e` | `0xca` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x4d96(%eax),%eax
 test   %al,%al
 je     <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj+0xbf>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj+0xc0>
+je     <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj+0xc2>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildExpEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%esi
 movl   $0x1ba,0x8(%esp)
 movl   $&_ZZN6CGuild11DBGuildSaveEhP14CServerHandlerjE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"GUILD EXP   Guild Key : %d, Guild Exp : %d",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movzbl -0x1c(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild9SaveGuildEhP14CServerHandlerj>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x4d94(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x4d96(%eax)
-jmp    <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj+0xc0>
+jmp    <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj+0xc3>
+nop
+jmp    <T> <_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj+0xc3>
 nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DBGuildSave(unsigned char, CServerHandler*, unsigned int) */

void __thiscall
CGuild::_ZN6CGuild11DBGuildSaveEhP14CServerHandlerj
          (CGuild *this,uchar param_1,CServerHandler *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  if ((this[0x4d96] != (CGuild)0x0) && ((*(ushort *)(this + 0x1c) & 4) != 0)) {
    uVar2 = GetGuildExp(this);
    uVar1 = *(undefined4 *)(this + 0x18);
    CMyFileLog::CMyFileLog(local_14,"DBGuildSave",0x1ba);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Guild","GUILD EXP   Guild Key : %d, Guild Exp : %d",uVar1,uVar2);
    SaveGuild(this,param_1,param_2,param_3);
    *(undefined2 *)(this + 0x4d94) = 0;
    this[0x4d96] = (CGuild)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 607 行）：

```cpp
void CGuild::DBGuildSave(unsigned char flag, CServerHandler* handler, unsigned int param)
{
    if (m_field4d96 != 0 && (m_field1c & 4) != 0)
    {
        DNF_LOG_SCOPE_LINE(0x1ba,"./log/Guild", "GUILD EXP   Guild Key : %d, Guild Exp : %d",
            m_guildKey, GetGuildExp());
        SaveGuild(flag, handler, param);
        m_field4d94 = 0;
        m_field4d96 = 0;
    }
    return;
}
```
