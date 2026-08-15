# _ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo

`CGuild::ReplyGuildMembersToWeb(STGuildMemberWebConnInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808f3d2` | `0x14e` | `0x8055358` | `0x142` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x34,%esp
-movl   $0x0,-0xc(%ebp)
+sub    $0x38,%esp
+movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x146>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x13d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x3c>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x3b>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x149>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x140>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEC1Ev>
 mov    0x8(%ebp),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
 mov    -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x117>
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x10e>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x89>
-cmpl   $0x12b,-0xc(%ebp)
-jg     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x89>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x88>
+cmpl   $0x12b,-0x10(%ebp)
+jg     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x88>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x8e>
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x8d>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x10c>
-mov    -0xc(%ebp),%edx
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x103>
+mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+add    0xc(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,(%ebx)
-lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %eax,(%edx)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x108>
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0xff>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,0x4(%ebx)
-addl   $0x1,-0xc(%ebp)
-lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %al,0x4(%edx)
+addl   $0x1,-0x10(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x67>
-mov    -0xc(%ebp),%eax
-mov    -0x4(%ebp),%ebx
+jne    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x66>
+mov    -0x10(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ReplyGuildMembersToWeb(STGuildMemberWebConnInfo*) */

int __thiscall
CGuild::_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo
          (CGuild *this,STGuildMemberWebConnInfo *param_1)

{
  bool bVar1;
  char cVar2;
  STGuildMemberWebConnInfo SVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CServerInterface *this_00;
  undefined4 local_20 [2];
  undefined4 local_18;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    cVar2 = std::
            map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
            ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                     *)this);
    if (cVar2 == '\0') {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18);
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::begin((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
               *)local_20);
      local_18 = local_20[0];
      while( true ) {
        std::
        map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
        ::end(local_14);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18,
                           (_Rb_tree_iterator *)local_14);
        if (cVar2 == '\0') break;
        iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18);
        if ((*(int *)(iVar4 + 4) == 0) || (299 < local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar4 = local_10 * 5;
          iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18);
          uVar6 = CUser::GetUniqCharNo(*(CUser **)(iVar5 + 4));
          *(undefined4 *)(param_1 + iVar4) = uVar6;
          iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18);
          iVar4 = CUser::GetGameServer(*(CUser **)(iVar4 + 4));
          if (iVar4 != 0) {
            iVar4 = local_10 * 5;
            iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18)
            ;
            this_00 = (CServerInterface *)CUser::GetGameServer(*(CUser **)(iVar5 + 4));
            SVar3 = (STGuildMemberWebConnInfo)
                    CServerInterface::_ZN16CServerInterface12GetChannelNoEv(this_00);
            param_1[iVar4 + 4] = SVar3;
          }
          local_10 = local_10 + 1;
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18);
      }
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1329 行）：

```cpp
int CGuild::ReplyGuildMembersToWeb(STGuildMemberWebConnInfo* info)
{
    int count = 0;
    if ((m_guildDBFlag & 4) != 0)
    {
        if (m_members.empty())
        {
            return 0;
        }
        std::map<unsigned int, CUser*>::iterator it;
        for (it = m_members.begin(); it != m_members.end(); ++it)
        {
            if (it->second != 0 && !(299 < count))
            {
                STGuildMemberWebConnInfo_Rec* rec = &info->m_members[count];
                rec->m_charNo = it->second->GetUniqCharNo();
                if (it->second->GetGameServer() != 0)
                {
                    rec->m_channel = it->second->GetGameServer()->GetChannelNo();
                }
                count++;
            }
        }
    }
    return count;
}
```
