# _ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo

`CUser::LoadGuildMember(unsigned int, STGuildMemerDBInfo&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80668b4` | `0x13d` | `0x8088d52` | `0x148` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
-movzwl 0x48(%eax),%eax
+add    $0x48,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x8,%eax
 test   %eax,%eax
-jne    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x132>
+jne    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x13b>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x3a>
+je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x3b>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 cmp    0xc(%ebp),%eax
-je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x41>
+je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x42>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x46>
+jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x47>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x135>
+jne    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x13e>
 mov    0x8(%ebp),%eax
-movzwl 0x48(%eax),%eax
+add    $0x48,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x2,%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x136>
+je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x141>
 mov    0x8(%ebp),%eax
 lea    0x4a(%eax),%edx
 movl   $0x1a,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
-movzwl 0x48(%eax),%eax
-mov    %eax,%edx
-or     $0x4,%edx
+lea    0x48(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %dx,0x48(%eax)
+add    $0x48,%eax
+movzwl (%eax),%eax
+or     $0x4,%eax
+mov    %ax,(%edx)
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetMasterIdEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 cmp    %eax,%ebx
-jne    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0xc4>
+jne    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0xcb>
 mov    0x8(%ebp),%eax
-movzbl 0x5f(%eax),%eax
+add    $0x5f,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0xc4>
+je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0xcb>
 mov    $0x1,%eax
-jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0xc9>
+jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0xd0>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x136>
+je     <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x142>
+movl   $0x8d,0x8(%esp)
+movl   $"LoadGuildMember",0x4(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
-movzbl 0x5f(%eax),%eax
-movzbl %al,%esi
+add    $0x5f,%eax
+movzbl (%eax),%eax
+movzbl %al,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,%ebx
-movl   $0x8d,0x8(%esp)
-movl   $&_ZZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    %ebx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"[Master_Err]\tGuild_K(%d)\tChar_No(%d)\tGrade(%d)",0x8(%esp)
 movl   $"./log/GuildMember",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
-movb   $0x1,0x5f(%eax)
-jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x136>
+add    $0x5f,%eax
+movb   $0x1,(%eax)
+jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x142>
 nop
-jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x136>
+jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x142>
 nop
-add    $0x30,%esp
+jmp    <T> <_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo+0x142>
+nop
+add    $0x34,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::LoadGuildMember(unsigned int, STGuildMemerDBInfo&) */

void __thiscall
CUser::_ZN5CUser15LoadGuildMemberEjR18STGuildMemerDBInfo
          (CUser *this,uint param_1,STGuildMemerDBInfo *param_2)

{
  CUser CVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CMyFileLog local_14 [8];
  
  if ((*(ushort *)(this + 0x48) & 8) == 0) {
    if ((*(int *)(this + 0x44) == 0) ||
       (uVar3 = CGuild::GetGuildKey(*(CGuild **)(this + 0x44)), uVar3 != param_1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((!bVar2) && ((*(ushort *)(this + 0x48) & 2) != 0)) {
      memcpy(this + 0x4a,param_2,0x1a);
      *(ushort *)(this + 0x48) = *(ushort *)(this + 0x48) | 4;
      iVar4 = CGuild::GetMasterId(*(CGuild **)(this + 0x44));
      iVar5 = GetUniqCharNo(this);
      if ((iVar4 == iVar5) && (this[0x5f] != (CUser)0x1)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        CVar1 = this[0x5f];
        uVar6 = GetUniqCharNo(this);
        CMyFileLog::CMyFileLog(local_14,"LoadGuildMember",0x8d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_14,"./log/GuildMember","[Master_Err]\tGuild_K(%d)\tChar_No(%d)\tGrade(%d)",
                   param_1,uVar6,(uint)(byte)CVar1);
        this[0x5f] = (CUser)0x1;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 163 行）：

```cpp
void CUser::LoadGuildMember(unsigned int guildKey, STGuildMemerDBInfo& info)
{
    if ((*(unsigned short*)((char*)this + 0x48) & 8) != 0)
    {
        return;
    }
    if (m_guild == 0 || m_guild->GetGuildKey() != guildKey)
    {
        return;
    }
    if ((*(unsigned short*)((char*)this + 0x48) & 2) == 0)
    {
        return;
    }
    memcpy(&m_guildDBInfo, &info, 0x1a);
    *(unsigned short*)((char*)this + 0x48) |= 4;
    if (m_guild->GetMasterId() == GetUniqCharNo() && *(unsigned char*)((char*)this + 0x5f) != 1)
    {
        CMyFileLog log("LoadGuildMember", 0x8d);
        log("./log/GuildMember", "[Master_Err]\tGuild_K(%d)\tChar_No(%d)\tGrade(%d)", guildKey,
            GetUniqCharNo(), *(unsigned char*)((char*)this + 0x5f));
        *(unsigned char*)((char*)this + 0x5f) = 1;
    }
}
```
