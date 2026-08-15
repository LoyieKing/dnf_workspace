# _ZN6CGuild29NoticeMarkChangeToGuildMemberEj

`CGuild::NoticeMarkChangeToGuildMember(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ec7e` | `0x148` | `0x8054bf8` | `0x14b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x5c,%esp
+sub    $0x68,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x13d>
+je     <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x145>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x13c>
-lea    -0x3e(%ebp),%eax
+jne    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x148>
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN46Packet_Monitor_Notice_Guild_Mark_Change_ToUserC1Ev>
 mov    0x8(%ebp),%edx
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x10b>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x114>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
 sete   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0xff>
-mov    -0x1c(%ebp),%eax
+jne    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x108>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x34(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,-0x20(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%edi
-mov    -0x30(%ebp),%esi
-mov    -0x34(%ebp),%ebx
+mov    %eax,-0x1c(%ebp)
 movl   $0x4bf,0x8(%esp)
 movl   $&_ZZN6CGuild29NoticeMarkChangeToGuildMemberEjE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[GUILD MARK CHANGE] Send to game server. (channel:%d, character:%u, guildkey:%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x3e(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x100>
+jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x109>
 nop
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x56>
-jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x13d>
+jne    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x53>
+jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x149>
 nop
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+jmp    <T> <_ZN6CGuild29NoticeMarkChangeToGuildMemberEj+0x149>
+nop
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeMarkChangeToGuildMember(unsigned int) */

void __thiscall CGuild::_ZN6CGuild29NoticeMarkChangeToGuildMemberEj(CGuild *this,uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_48 [6];
  Packet_Monitor_Notice_Guild_Mark_Change_ToUser local_42 [10];
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [4];
  CMyFileLog local_28 [8];
  CUser *local_20;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) &&
     (cVar2 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar2 == '\0')) {
    Packet_Monitor_Notice_Guild_Mark_Change_ToUser::
    _ZN46Packet_Monitor_Notice_Guild_Mark_Change_ToUserC2Ev(local_42);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_48);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_2c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_48,
                         (_Rb_tree_iterator *)local_2c);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_48);
      local_20 = *(CUser **)(iVar3 + 4);
      if (local_20 != (CUser *)0x0) {
        local_38 = CUser::GetIdByChannel(local_20);
        uVar4 = CUser::GetUniqCharNo(local_20);
        uVar1 = local_38;
        local_30 = param_1;
        local_34 = uVar4;
        CMyFileLog::CMyFileLog(local_28,"NoticeMarkChangeToGuildMember",0x4bf);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_28,"./log/Web",
                   "[GUILD MARK CHANGE] Send to game server. (channel:%d, character:%u, guildkey:%d)\n"
                   ,uVar1,uVar4,param_1);
        CUser::SendToGameserver(local_20,(char *)local_42,0x16);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_48);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1173 行）：

```cpp
void CGuild::NoticeMarkChangeToGuildMember(unsigned int charNo)
{
    if ((m_guildDBFlag & 4) == 0)
    {
        return;
    }
    if (m_members.empty())
    {
        return;
    }
    Packet_Monitor_Notice_Guild_Mark_Change_ToUser pkt;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* member;
        if ((member = it->second) == 0) { continue; }
        int channel = member->GetIdByChannel();
        unsigned int memberNo = member->GetUniqCharNo();
        pkt.m_channel = channel;
        pkt.m_charNo = memberNo;
        pkt.m_charNo2 = charNo;
        CMyFileLog log(__FUNCTION__, 0x4bf);
        log("./log/Web", "[GUILD MARK CHANGE] Send to game server. (channel:%d, character:%u, guildkey:%d)\n",
            channel, memberNo, charNo);
        member->SendToGameserver((char*)&pkt, 0x16);
    }
}
```
