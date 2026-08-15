# _ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc

`CGuild::NoticeGuildMasterDelegateToMembers(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808dcb0` | `0x131` | `0x8053c3c` | `0x12e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x64,%esp
+sub    $0x68,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xec>
-lea    -0x4c(%ebp),%eax
+je     <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0x12b>
+lea    -0x4b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Guild_Notice_Guild_Master_DelegateC1Ev>
 movl   $0x1d,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x4b(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xbb>
+jmp    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xba>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xaf>
+jne    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xae>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x3e(%ebp)
+mov    %eax,-0x3d(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x42(%ebp)
-lea    -0x4c(%ebp),%eax
+mov    %eax,-0x41(%ebp)
+lea    -0x4b(%ebp),%eax
 movl   $0x30,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xb0>
+jmp    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0xaf>
 nop
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0x5b>
-jmp    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0x12c>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
+jne    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0x5a>
 movl   $0x2bd,0x8(%esp)
 movl   $&_ZZN6CGuild34NoticeGuildMasterDelegateToMembersEPcE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"GUILD_INFO : NoticeGuildMasterDelegateToMembers, Guild Key(%d)",0x8(%esp)
 movl   $"./log/GuildErr",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x4(%ebp),%ebx
+jmp    <T> <_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc+0x12c>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeGuildMasterDelegateToMembers(char*) */

void __thiscall
CGuild::_ZN6CGuild34NoticeGuildMasterDelegateToMembersEPc(CGuild *this,char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  Packet_Guild_Notice_Guild_Master_Delegate local_50 [10];
  undefined4 local_46;
  undefined4 local_42;
  undefined1 auStack_3e [30];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  CMyFileLog local_18 [8];
  CUser *local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    uVar1 = *(undefined4 *)(this + 0x18);
    CMyFileLog::CMyFileLog(local_18,"NoticeGuildMasterDelegateToMembers",0x2bd);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/GuildErr",
               "GUILD_INFO : NoticeGuildMasterDelegateToMembers, Guild Key(%d)",uVar1);
  }
  else {
    Packet_Guild_Notice_Guild_Master_Delegate::Packet_Guild_Notice_Guild_Master_Delegate(local_50);
    memcpy(auStack_3e,param_1,0x1d);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_1c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20);
      local_10 = *(CUser **)(iVar3 + 4);
      if (local_10 != (CUser *)0x0) {
        local_42 = CUser::GetIdByChannel(local_10);
        local_46 = CUser::GetUniqCharNo(local_10);
        CUser::SendToGameserver(local_10,(char *)local_50,0x30);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 839 行）：

```cpp
void CGuild::NoticeGuildMasterDelegateToMembers(char* name)
{
    if ((m_guildDBFlag & 4) == 0)
    {
        return;
    }
    Packet_Guild_Notice_Guild_Master_Delegate pkt;
    memcpy(pkt.m_name, name, 0x1d);
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* member;
        if ((member = it->second) == 0) { continue; }
        pkt.m_channel = member->GetIdByChannel();
        pkt.m_charNo = member->GetUniqCharNo();
        member->SendToGameserver((char*)&pkt, 0x30);
    }
    CMyFileLog log(__FUNCTION__, 0x2bd);
    log("./log/GuildErr", "GUILD_INFO : NoticeGuildMasterDelegateToMembers, Guild Key(%d)",
        m_guildKey);
}
```
