# _ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc

`CGuild::WriteGuildMemberMemo(CUser*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80919d2` | `0x124` | `0x8057586` | `0x12a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11a>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x120>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11d>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x123>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetGuildMemberMemoEPKc>
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x62>
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
 je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x62>
 mov    $0x1,%eax
 jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x67>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x106>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x10c>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xd0,%eax
 mov    0xd(%eax),%ebx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 cmp    %eax,%ebx
 sete   %al
 test   %al,%al
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x102>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x108>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xf0,%eax
-add    0x8(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
 add    $0x19,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xf0,%eax
-add    0x8(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
 lea    0x19(%eax),%edx
 movl   $0x14,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x12b,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x7b>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
 nop
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
 nop
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::WriteGuildMemberMemo(CUser*, char const*) */

void __thiscall
CGuild::_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc(CGuild *this,CUser *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int local_10;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (char *)0x0)) {
    CUser::_ZN5CUser18SetGuildMemberMemoEPKc(param_1,param_2);
    cVar3 = _ZN6CGuild16IsSetGuildDBFlagEt(this,4);
    if ((cVar3 == '\0') || (cVar3 = _ZN6CGuild16IsSetGuildDBFlagEt(this,0x10), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      for (local_10 = 0; local_10 < 300; local_10 = local_10 + 1) {
        iVar1 = *(int *)(this + local_10 * 0x41 + 0xdd);
        iVar4 = CUser::GetUniqCharNo(param_1);
        if (iVar1 == iVar4) {
          memset(this + local_10 * 0x41 + 0x109,0,0x15);
          memcpy(this + local_10 * 0x41 + 0x109,param_2,0x14);
          return;
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2026 行）：

```cpp
void CGuild::WriteGuildMemberMemo(CUser* user, const char* memo)
{
    if (user == 0 || memo == 0)
    {
        return;
    }
    user->SetGuildMemberMemo(memo);
    if (IsSetGuildDBFlag(4) && IsSetGuildDBFlag(0x10))
    {
        for (int i = 0; i < 300; i++)
        {
            if (((CGuildMemberMainArray*)this)->m_members[i].m_charNo ==
                (unsigned int)user->GetUniqCharNo())
            {
                memset((char*)&((CGuildMemberExtraArray*)this)->m_members[i] + 0x19,
                       0, 0x15);
                memcpy((char*)&((CGuildMemberExtraArray*)this)->m_members[i] + 0x19,
                       memo, 0x14);
                return;
            }
        }
    }
}
```
