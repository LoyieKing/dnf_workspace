# _ZN6CGuild27DismissGuildMemberAndNoticeEi

`CGuild::DismissGuildMemberAndNotice(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808f0fa` | `0x143` | `0x80552cc` | `0x1c1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,134 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x141>
+je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x27>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x140>
-lea    -0x22(%ebp),%eax
+je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x2e>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x33>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x1bb>
+lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_Monitor_Notice_Guild_Dismiss_ToUserC1Ev>
 mov    0x8(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x10f>
-lea    -0x28(%ebp),%eax
+jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x18a>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-sete   %al
+test   %eax,%eax
+setne  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x103>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x17f>
+lea    -0x1e(%ebp),%eax
+lea    0xa(%eax),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x18(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x1e(%ebp),%eax
+lea    0xe(%eax),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x14(%ebp)
-lea    -0x22(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x1e(%ebp),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 movl   $0x12,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-lea    -0x42(%ebp),%eax
+lea    -0x3e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Guild_Exp_Book_DeleteC1Ev>
-mov    -0xc(%ebp),%eax
+lea    -0x3e(%ebp),%eax
+lea    0xa(%eax),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x38(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x3e(%ebp),%eax
+lea    0xe(%eax),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x34(%ebp)
+mov    %eax,(%ebx)
+lea    -0x3e(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x3e(%ebp),%eax
+lea    0x16(%eax),%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
-mov    %eax,-0x30(%ebp)
-lea    -0x42(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
+lea    -0x3e(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-mov    -0xc(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser10ResetGuildEv>
-jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x104>
-nop
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x53>
-jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x141>
+jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x60>
+jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x1bc>
 nop
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DismissGuildMemberAndNotice(int) */

void __thiscall CGuild::_ZN6CGuild27DismissGuildMemberAndNoticeEi(CGuild *this,int param_1)

{
  char cVar1;
  int iVar2;
  Packet_Guild_Exp_Book_Delete local_46 [10];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [6];
  Packet_Monitor_Notice_Guild_Dismiss_ToUser local_26 [10];
  undefined4 local_1c;
  undefined4 local_18;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Monitor_Notice_Guild_Dismiss_ToUser::_ZN42Packet_Monitor_Notice_Guild_Dismiss_ToUserC2Ev
              (local_26);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_2c);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_2c,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_2c);
      local_10 = *(CUser **)(iVar2 + 4);
      if (local_10 != (CUser *)0x0) {
        local_1c = CUser::GetIdByChannel(local_10);
        local_18 = CUser::GetUniqCharNo(local_10);
        CUser::SendToGameserver(local_10,(char *)local_26,0x12);
        Packet_Guild_Exp_Book_Delete::_ZN28Packet_Guild_Exp_Book_DeleteC2Ev(local_46);
        local_3c = CUser::GetIdByChannel(local_10);
        local_38 = CUser::GetUniqCharNo(local_10);
        local_30 = param_1;
        local_34 = CUser::GetDBID(local_10);
        CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(local_10,(PacketHeader *)local_46);
        CUser::ResetGuild(local_10);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_2c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1150 行）：

```cpp
void CGuild::DismissGuildMemberAndNotice(int group)
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    Packet_Monitor_Notice_Guild_Dismiss_ToUser notice;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            *(unsigned int*)((char*)&notice + 0xa) = it->second->GetIdByChannel();
            *(unsigned int*)((char*)&notice + 0xe) = it->second->GetUniqCharNo();
            it->second->SendToGameserver((char*)&notice, 0x12);
            Packet_Guild_Exp_Book_Delete expDel;
            *(unsigned int*)((char*)&expDel + 0xa) = it->second->GetIdByChannel();
            *(unsigned int*)((char*)&expDel + 0xe) = it->second->GetUniqCharNo();
            *(int*)((char*)&expDel + 0x12) = group;
            *(unsigned int*)((char*)&expDel + 0x16) = it->second->GetDBID();
            it->second->SendTcpGameserver(&expDel);
            it->second->ResetGuild();
        }
    }
}
```
