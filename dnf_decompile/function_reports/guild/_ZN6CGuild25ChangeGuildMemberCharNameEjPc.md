# _ZN6CGuild25ChangeGuildMemberCharNameEjPc

`CGuild::ChangeGuildMemberCharName(unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80917fc` | `0x170` | `0x80573ae` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movb   $0x0,-0xd(%ebp)
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
-je     <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x16a>
+je     <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x174>
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xac>
+jmp    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xb5>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 lea    (%ecx,%eax,1),%eax
 add    $0xd0,%eax
 mov    0xd(%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xa8>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xb1>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xd0,%eax
-add    0x8(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
 add    $0x11,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0x8(%ebp),%ecx
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 add    $0xd0,%eax
-add    0x8(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
 lea    0x11(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 movb   $0x1,-0xd(%ebp)
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x12b,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x2e>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x31>
 mov    0x8(%ebp),%eax
-mov    0x66ec(%eax),%eax
+add    $0x66ec,%eax
+mov    (%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x11b>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x125>
 mov    0x8(%ebp),%eax
 add    $0x66f0,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 lea    0x66f0(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 movb   $0x1,-0xd(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv>
 mov    0x8(%ebp),%eax
 mov    0x37(%eax),%eax
 cmp    0xc(%ebp),%eax
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x16a>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x174>
 mov    0x8(%ebp),%eax
 add    $0xc4,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 lea    0xc4(%eax),%edx
 movl   $0x14,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 movb   $0x1,-0xd(%ebp)
 movzbl -0xd(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ChangeGuildMemberCharName(unsigned int, char*) */

undefined1 __thiscall
CGuild::_ZN6CGuild25ChangeGuildMemberCharNameEjPc(CGuild *this,uint param_1,char *param_2)

{
  char cVar1;
  undefined1 local_11;
  int local_10;
  
  local_11 = 0;
  cVar1 = _ZN6CGuild16IsSetGuildDBFlagEt(this,4);
  if (cVar1 != '\0') {
    for (local_10 = 0; local_10 < 300; local_10 = local_10 + 1) {
      if (*(uint *)(this + local_10 * 0x41 + 0xdd) == param_1) {
        memset(this + local_10 * 0x41 + 0xe1,0,0x1e);
        memcpy(this + local_10 * 0x41 + 0xe1,param_2,0x1d);
        local_11 = 1;
      }
    }
    if (*(uint *)(this + 0x66ec) == param_1) {
      memset(this + 0x66f0,0,0x1e);
      strncpy((char *)(this + 0x66f0),param_2,0x1d);
      local_11 = 1;
      NotifyAllTodayGuildMember(this);
    }
    if (*(uint *)(this + 0x37) == param_1) {
      memset(this + 0xc4,0,0x15);
      memcpy(this + 0xc4,param_2,0x14);
      local_11 = 1;
    }
  }
  return local_11;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2014 行）：

```cpp
int CGuild::ChangeGuildMemberCharName(unsigned int charNo, char* name)
{
    bool result = false;
    if (IsSetGuildDBFlag(4))
    {
        for (int i = 0; i <= 299; i++)
        {
            if (((CGuildMemberMainArray*)this)->m_members[i].m_charNo == charNo)
            {
                memset((char*)&((CGuildMemberMainArray*)this)->m_members[i] + 0x11,
                       0, 0x1e);
                memcpy((char*)&((CGuildMemberMainArray*)this)->m_members[i] + 0x11,
                       name, 0x1d);
                result = true;
            }
        }
        if (*(unsigned int*)((char*)this + 0x66ec) == charNo)
        {
            memset((char*)this + 0x66f0, 0, 0x1e);
            strncpy((char*)this + 0x66f0, name, 0x1d);
            result = true;
            NotifyAllTodayGuildMember();
        }
        if (m_dbInfo.m_info.m_masterId == charNo)
        {
            memset((char*)this + 0xc4, 0, 0x15);
            memcpy((char*)this + 0xc4, name, 0x14);
            result = true;
        }
    }
    return result;
}
```
