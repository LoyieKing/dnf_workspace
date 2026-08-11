# _ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser

`CMember::NoticeChatMsgToMemberMembers(char*, int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80986be` | `0x21c` | `0x8060142` | `0x1e2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,141 +1,127 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x158,%esp
+sub    $0x168,%esp
 cmpl   $0xff,0x10(%ebp)
-jg     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x213>
+jg     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x39>
 mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x21a>
+je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x39>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember7IsEmptyEv>
 test   %al,%al
-jne    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x216>
-lea    -0x145(%ebp),%eax
+jne    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x39>
+mov    $0x1,%eax
+jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x3e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x1e0>
+lea    -0x14b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_Monitor_Member_Chat_ToUserC1Ev>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x145(%ebp),%eax
+lea    -0x14b(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x10(%ebp),%eax
-mov    %al,-0x115(%ebp)
+mov    %al,-0x11b(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x145(%ebp),%eax
+lea    -0x14b(%ebp),%eax
 add    $0x31,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x10(%ebp),%eax
 add    $0x31,%eax
-mov    %ax,-0x143(%ebp)
+mov    %ax,-0x1a(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x6(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x117>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x111>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x13b(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x141(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x137(%ebp)
-movzwl -0x143(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x145(%ebp),%eax
+mov    %eax,-0x13d(%ebp)
+movzwl -0x1a(%ebp),%edx
+lea    -0x14b(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x13b(%ebp)
+mov    %eax,-0x141(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x137(%ebp)
-movzwl -0x143(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x145(%ebp),%eax
+mov    %eax,-0x13d(%ebp)
+movzwl -0x1a(%ebp),%edx
+lea    -0x14b(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
 mov    0x8(%ebp),%eax
 movzbl 0x2d(%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x219>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x200>
-mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-imul   $0x27,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x20,%eax
-mov    0xe(%eax),%edx
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x1e0>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x1d3>
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x1b4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager14FindMemberUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x1fb>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x1cf>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x13b(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x141(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x137(%ebp)
-movzwl -0x143(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x145(%ebp),%eax
+mov    %eax,-0x13d(%ebp)
+movzwl -0x1a(%ebp),%edx
+lea    -0x14b(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x1fc>
-nop
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-setl   %al
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
+setb   %al
 test   %al,%al
-jne    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x17f>
-jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x21a>
-nop
-jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x21a>
-nop
-jmp    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x21a>
-nop
+jne    <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser+0x16c>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMember::NoticeChatMsgToMemberMembers(char*, int, CUser*) */

void __thiscall
CMember::_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser
          (CMember *this,char *param_1,int param_2,CUser *param_3)

{
  char cVar1;
  void *__src;
  Packet_Monitor_Member_Chat_ToUser local_149 [2];
  ushort local_147;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined1 auStack_137 [30];
  undefined1 local_119;
  undefined1 auStack_118 [256];
  CUser *local_18;
  uint local_14;
  int local_10;
  
  if (((param_2 < 0x100) && ((*(ushort *)(this + 4) & 4) != 0)) &&
     (cVar1 = IsEmpty(this), cVar1 == '\0')) {
    Packet_Monitor_Member_Chat_ToUser::Packet_Monitor_Member_Chat_ToUser(local_149);
    __src = (void *)CUser::GetCharName(param_3);
    memcpy(auStack_137,__src,0x1d);
    local_119 = (undefined1)param_2;
    memcpy(auStack_118,param_1,param_2);
    local_147 = (short)param_2 + 0x31;
    local_18 = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
    if (local_18 != (CUser *)0x0) {
      local_13f = CUser::_ZN5CUser14GetIdByChannelEv(local_18);
      local_13b = CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
      CUser::SendToGameserver(local_18,(char *)local_149,(uint)local_147);
    }
    local_13f = CUser::_ZN5CUser14GetIdByChannelEv(param_3);
    local_13b = CUser::_ZN5CUser13GetUniqCharNoEv(param_3);
    CUser::SendToGameserver(param_3,(char *)local_149,(uint)local_147);
    local_14 = (uint)(byte)this[0x2d];
    if (local_14 != 0) {
      for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
        local_18 = (CUser *)CMemberManager::FindMemberUser(*(uint *)(this + 0x1b4));
        if (local_18 != (CUser *)0x0) {
          local_13f = CUser::_ZN5CUser14GetIdByChannelEv(local_18);
          local_13b = CUser::_ZN5CUser13GetUniqCharNoEv(local_18);
          CUser::SendToGameserver(local_18,(char *)local_149,(uint)local_147);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMember.cpp](source/DNFServer/GameServer/Monitor/DNFMember.cpp)（约第 239 行）：

```cpp
void CMember::NoticeChatMsgToMemberMembers(char* msg, int len, CUser* user)
{
    if (len < 0x100 && (m_flag & 4) != 0 && !IsEmpty())
    {
        Packet_Monitor_Member_Chat_ToUser pkt;
        memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
        pkt.m_msgLen = (unsigned char)len;
        memcpy(pkt.m_msg, msg, len);
        unsigned short totalSize = (unsigned short)len + 0x31;
        CUser* member = m_memberManager->FindMemberUser(m_dbInfo.m_member.m_field0);
        if (member != 0)
        {
            pkt.m_idByChannel = member->GetIdByChannel();
            pkt.m_uniqCharNo = member->GetUniqCharNo();
            member->SendToGameserver((char*)&pkt, totalSize);
        }
        pkt.m_idByChannel = user->GetIdByChannel();
        pkt.m_uniqCharNo = user->GetUniqCharNo();
        user->SendToGameserver((char*)&pkt, totalSize);
        unsigned int count = (unsigned int)m_dbInfo.m_count27;
        if (count != 0)
        {
            for (unsigned int i = 0; i < count; i++)
            {
                CUser* m = m_memberManager->FindMemberUser(m_dbInfo.m_member.m_field0);
                if (m != 0)
                {
                    pkt.m_idByChannel = m->GetIdByChannel();
                    pkt.m_uniqCharNo = m->GetUniqCharNo();
                    m->SendToGameserver((char*)&pkt, totalSize);
                }
            }
        }
    }
}
```
