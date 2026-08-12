# _ZN6CGuild17SetSubGuildMasterEjb

`CGuild::SetSubGuildMaster(unsigned int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091138` | `0x15d` | `0x8056cf4` | `0x168` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,107 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x50,%esp
 mov    0x10(%ebp),%eax
-mov    %al,-0x1c(%ebp)
-cmpb   $0x0,-0x1c(%ebp)
-je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x4f>
+mov    %al,-0x2c(%ebp)
+cmpb   $0x0,-0x2c(%ebp)
+je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x5c>
 mov    0x8(%ebp),%eax
-movzbl 0x4d(%eax),%eax
-movzbl %al,%eax
+add    $0x4d,%eax
+movzbl (%eax),%eax
+mov    %al,-0x11(%ebp)
+movzbl -0x11(%ebp),%eax
 add    $0x1,%eax
 cmp    $0x5,%eax
-jg     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jg     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x10b>
 mov    0x8(%ebp),%eax
-movzbl 0x4d(%eax),%eax
-movzbl %al,%ecx
-mov    0x8(%ebp),%edx
-lea    0x10(%ecx),%ebx
-mov    0xc(%ebp),%ecx
-mov    %ecx,0xe(%edx,%ebx,4)
-lea    0x1(%eax),%edx
+movzbl -0x11(%ebp),%edx
+add    $0x10,%edx
+shl    $0x2,%edx
+add    $0xe,%edx
+lea    (%eax,%edx,1),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    %dl,0x4d(%eax)
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+add    $0x4d,%eax
+movzbl -0x11(%ebp),%edx
+add    $0x1,%edx
+mov    %dl,(%eax)
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x10b>
 mov    0x8(%ebp),%eax
 add    $0x4d,%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe6>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xf1>
+mov    0x8(%ebp),%eax
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
 add    $0x10,%edx
-mov    0xe(%eax,%edx,4),%eax
+shl    $0x2,%edx
+add    $0xe,%edx
+add    %edx,%eax
+mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe2>
+jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xed>
 mov    -0x10(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 mov    -0xc(%ebp),%edx
 not    %edx
 add    %edx,%eax
 lea    0x0(,%eax,4),%ecx
-mov    0x8(%ebp),%eax
-lea    0x4e(%eax),%edx
 mov    -0xc(%ebp),%eax
 add    $0x1,%eax
 shl    $0x2,%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-lea    0x4e(%eax),%ebx
-mov    -0xc(%ebp),%eax
-shl    $0x2,%eax
-lea    (%ebx,%eax,1),%eax
+add    $0x4e,%eax
+add    0x8(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    -0xc(%ebp),%ebx
+shl    $0x2,%ebx
+add    $0x4e,%ebx
+add    %ebx,%edx
 mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    -0x10(%ebp),%eax
 movzbl (%eax),%eax
 lea    -0x1(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %dl,(%eax)
 mov    -0x10(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x5,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xff>
+jbe    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x10a>
 mov    -0x10(%ebp),%eax
 movb   $0x0,(%eax)
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x10b>
 addl   $0x1,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 cmp    -0xc(%ebp),%eax
-setg   %al
+seta   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x64>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x71>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x10b>
 nop
-movzbl -0x1c(%ebp),%esi
+movzbl -0x2c(%ebp),%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0x84e,0x8(%esp)
 movl   $&_ZZN6CGuild17SetSubGuildMasterEjbE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Set Sub Guild Master guild(%d) CharNo(%d) flag(%d)",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-add    $0x40,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SetSubGuildMaster(unsigned int, bool) */

void __thiscall CGuild::_ZN6CGuild17SetSubGuildMasterEjb(CGuild *this,uint param_1,bool param_2)

{
  CGuild CVar1;
  undefined4 uVar2;
  CMyFileLog local_1c [8];
  CGuild *local_14;
  uint local_10;
  
  if (param_2) {
    if ((byte)this[0x4d] + 1 < 6) {
      CVar1 = this[0x4d];
      *(uint *)(this + ((byte)CVar1 + 0x10) * 4 + 0xe) = param_1;
      this[0x4d] = (CGuild)((char)CVar1 + 1);
    }
  }
  else {
    local_14 = this + 0x4d;
    for (local_10 = 0; (int)local_10 < (int)(uint)(byte)*local_14; local_10 = local_10 + 1) {
      if (*(uint *)(this + (local_10 + 0x10) * 4 + 0xe) == param_1) {
        memcpy(this + local_10 * 4 + 0x4e,this + (local_10 + 1) * 4 + 0x4e,
               ((uint)(byte)*local_14 + ~local_10) * 4);
        *local_14 = (CGuild)((char)*local_14 - 1);
        if (5 < (byte)*local_14) {
          *local_14 = (CGuild)0x0;
        }
        break;
      }
    }
  }
  uVar2 = GetGuildKey(this);
  CMyFileLog::CMyFileLog(local_1c,"SetSubGuildMaster",0x84e);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_1c,"./log/GuildModify","Set Sub Guild Master guild(%d) CharNo(%d) flag(%d)",uVar2
             ,param_1,(uint)param_2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1741 行）：

```cpp
void CGuild::SetSubGuildMaster(unsigned int charNo, bool flag)
{
    if (flag)
    {
        unsigned char cnt = *(unsigned char*)((char*)this + 0x4d);
        if (cnt + 1 < 6)
        {
            *(unsigned int*)((char*)this + ((unsigned int)cnt + 0x10) * 4 + 0xe) = charNo;
            *(unsigned char*)((char*)this + 0x4d) = cnt + 1;
        }
    }
    else
    {
        unsigned char* cnt = (unsigned char*)((char*)this + 0x4d);
        for (unsigned int i = 0; i < (unsigned int)*cnt; i++)
        {
            if (*(unsigned int*)((char*)this + (i + 0x10) * 4 + 0xe) == charNo)
            {
                memcpy((char*)this + i * 4 + 0x4e, (char*)this + (i + 1) * 4 + 0x4e,
                       ((unsigned int)*cnt + ~i) * 4);
                *cnt = (unsigned char)((int)*cnt - 1);
                if (5 < (unsigned char)*cnt)
                {
                    *cnt = 0;
                }
                break;
            }
        }
    }
    DNF_LOG_SCOPE_LINE(0x84e,"./log/GuildModify", "Set Sub Guild Master guild(%d) CharNo(%d) flag(%d)",
        GetGuildKey(), charNo, (unsigned int)flag);
}
```
