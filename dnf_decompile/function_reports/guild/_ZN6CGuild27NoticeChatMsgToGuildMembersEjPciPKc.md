# _ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc

`CGuild::NoticeChatMsgToGuildMembers(unsigned int, char*, int, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808edc6` | `0x165` | `0x8054d96` | `0x17b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,105 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x158,%esp
+push   %ebx
+sub    $0x154,%esp
 cmpl   $0xff,0x14(%ebp)
-jg     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x15f>
+jg     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x3f>
 mov    0x8(%ebp),%eax
-movzwl 0x1c(%eax),%eax
+add    $0x1c,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x163>
+je     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x3f>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x162>
+je     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x3f>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x44>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x176>
 lea    -0x145(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Guild_Chat_ToUserC1Ev>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x12e>
+jmp    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x147>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x122>
+je     <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x13c>
+lea    -0x145(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x13b(%ebp)
+mov    %eax,(%ebx)
+lea    -0x145(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x137(%ebp)
+mov    %eax,(%ebx)
 movl   $0x1d,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x145(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x145(%ebp),%eax
+lea    0x2f(%eax),%edx
 mov    0x14(%ebp),%eax
-mov    %al,-0x115(%ebp)
+mov    %al,(%edx)
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x145(%ebp),%eax
-add    $0x31,%eax
+add    $0x30,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x145(%ebp),%eax
+add    $0x2,%eax
+mov    0x14(%ebp),%edx
+add    $0x31,%edx
+mov    %dx,(%eax)
 mov    0x14(%ebp),%eax
 add    $0x31,%eax
-mov    %ax,-0x143(%ebp)
-movzwl -0x143(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x145(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x123>
-nop
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x66>
-jmp    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x163>
-nop
-jmp    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x163>
-nop
+jne    <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc+0x74>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeChatMsgToGuildMembers(unsigned int, char*, int, char const*) */

void __thiscall
CGuild::_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc
          (CGuild *this,uint param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  Packet_Monitor_Guild_Chat_ToUser local_149 [2];
  ushort local_147;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined1 auStack_137 [30];
  undefined1 local_119;
  undefined1 auStack_118 [256];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if (((param_3 < 0x100) && ((*(ushort *)(this + 0x1c) & 4) != 0)) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Monitor_Guild_Chat_ToUser::_ZN32Packet_Monitor_Guild_Chat_ToUserC2Ev(local_149);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
      local_10 = *(CUser **)(iVar2 + 4);
      if (local_10 != (CUser *)0x0) {
        local_13f = CUser::GetIdByChannel(local_10);
        local_13b = CUser::GetUniqCharNo(local_10);
        memcpy(auStack_137,param_4,0x1d);
        local_119 = (undefined1)param_3;
        memcpy(auStack_118,param_2,param_3);
        local_147 = (short)param_3 + 0x31;
        CUser::SendToGameserver(local_10,(char *)local_149,(uint)local_147);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
