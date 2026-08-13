# _ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc

`CGuild::LoadGuild(STGuildDBInfoOnly&, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d268` | `0x172` | `0x8053212` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,115 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-jne    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16a>
+jne    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x173>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x2,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16b>
+je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x173>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 mov    %eax,-0x14(%ebp)
 movb   $0x0,-0xd(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x8a>
+jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x50>
+addb   $0x1,-0xd(%ebp)
+addl   $0x1,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+add    $0x44,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+cmp    -0xc(%ebp),%eax
+jle    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa0>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
+add    $0x45,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x40,%eax
-mov    0x5(%eax),%eax
+mov    (%eax),%eax
 cmp    $0xc7,%eax
 jle    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa0>
+mov    0xc(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    0xc(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
+add    $0x45,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x40,%eax
-mov    0x5(%eax),%eax
+mov    (%eax),%eax
 cmp    $0xd0,%eax
-jg     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa3>
-addb   $0x1,-0xd(%ebp)
-addl   $0x1,-0xc(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x44(%eax),%eax
-movzbl %al,%eax
-cmp    -0xc(%ebp),%eax
-setg   %al
+jg     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa0>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa5>
+mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x48>
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa4>
-nop
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa4>
-nop
 movsbl -0xd(%ebp),%edx
 mov    0xc(%ebp),%eax
-movzbl 0x44(%eax),%eax
+add    $0x44,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 cmp    %eax,%edx
-je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x10c>
+je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x117>
 movsbl -0xd(%ebp),%esi
 mov    0xc(%ebp),%eax
-movzbl 0x44(%eax),%eax
+add    $0x44,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 movl   $0x11b,0x8(%esp)
 movl   $&_ZZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPcE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Guild Skill Learn Error(%d)(%d)",0x8(%esp)
 movl   $"./log/GuildSkill",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-movzbl -0xd(%ebp),%edx
 mov    0xc(%ebp),%eax
-mov    %dl,0x44(%eax)
+lea    0x44(%eax),%edx
+movzbl -0xd(%ebp),%eax
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 lea    0x20(%eax),%edx
 movl   $0xbd,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15SetGuildMessageEPc>
 cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x155>
+je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x160>
 mov    0xc(%ebp),%eax
 mov    0x24(%eax),%eax
 cmp    -0x14(%ebp),%eax
-jge    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x155>
+jge    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x160>
 mov    -0x14(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x44(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 mov    %eax,%edx
 or     $0x4,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1c(%eax)
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16b>
-nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::LoadGuild(STGuildDBInfoOnly&, char*) */

void __thiscall
CGuild::_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc
          (CGuild *this,STGuildDBInfoOnly *param_1,char *param_2)

{
  STGuildDBInfoOnly SVar1;
  int iVar2;
  CMyFileLog local_20 [8];
  int local_18;
  STGuildDBInfoOnly local_11;
  int local_10;
  
  if (((*(ushort *)(this + 0x1c) & 4) == 0) && ((*(ushort *)(this + 0x1c) & 2) != 0)) {
    local_18 = *(int *)(this + 0x44);
    local_11 = (STGuildDBInfoOnly)0x0;
    local_10 = 0;
    while (((local_10 < (int)(uint)(byte)param_1[0x44] &&
            (199 < *(int *)(param_1 + local_10 * 5 + 0x45))) &&
           (*(int *)(param_1 + local_10 * 5 + 0x45) < 0xd1))) {
      local_11 = (STGuildDBInfoOnly)((char)local_11 + '\x01');
      local_10 = local_10 + 1;
    }
    if ((int)(char)local_11 != (uint)(byte)param_1[0x44]) {
      iVar2 = (int)(char)local_11;
      SVar1 = param_1[0x44];
      CMyFileLog::CMyFileLog(local_20,"LoadGuild",0x11b);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_20,"./log/GuildSkill","Guild Skill Learn Error(%d)(%d)",(uint)(byte)SVar1,
                 iVar2);
      param_1[0x44] = local_11;
    }
    memcpy(this + 0x20,param_1,0xbd);
    _ZN6CGuild15SetGuildMessageEPc(this,param_2);
    if ((local_18 != 0) && (*(int *)(param_1 + 0x24) < local_18)) {
      *(int *)(this + 0x44) = local_18;
    }
    *(ushort *)(this + 0x1c) = *(ushort *)(this + 0x1c) | 4;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 588 行）：

```cpp
void CGuild::LoadGuild(STGuildDBInfoOnly& info, char* name)
{
    if ((m_field1c & 4) == 0 && (m_field1c & 2) != 0)
    {
        int local18 = m_dbInfo.m_info.m_guildPoint;
        char local11 = 0;
        int local10 = 0;
        while (local10 < (int)(unsigned char)((char*)&info)[0x44] &&
               199 < *(int*)((char*)&info + local10 * 5 + 0x45) &&
               *(int*)((char*)&info + local10 * 5 + 0x45) < 0xd1)
        {
            local11++;
            local10++;
        }
        if ((int)local11 != (int)(unsigned char)((char*)&info)[0x44])
        {
            DNF_LOG_SCOPE_LINE(0x11b,"./log/GuildSkill", "Guild Skill Learn Error(%d)(%d)",
                (unsigned char)((char*)&info)[0x44], (int)local11);
            ((char*)&info)[0x44] = local11;
        }
        memcpy((char*)this + 0x20, (char*)&info, 0xbd);
        SetGuildMessage(name);
        if (local18 != 0 && (int)info.m_guildPoint < local18)
        {
            m_dbInfo.m_info.m_guildPoint = local18;
        }
        m_field1c |= 4;
    }
}
```
