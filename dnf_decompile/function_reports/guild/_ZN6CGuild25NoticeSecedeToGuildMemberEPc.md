# _ZN6CGuild25NoticeSecedeToGuildMemberEPc

`CGuild::NoticeSecedeToGuildMember(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808eb7a` | `0x104` | `0x8054b20` | `0x118` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,83 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x88,%esp
+push   %ebx
+sub    $0x84,%esp
 mov    0x8(%ebp),%eax
-movzwl 0x1c(%eax),%eax
+add    $0x1c,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x102>
+je     <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x36>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x101>
+je     <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x36>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x3b>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x113>
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Monitor_Notice_Guild_Secede_ToUserC1Ev>
 movl   $0x43,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x69(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0xd0>
+jmp    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0xe4>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0xc4>
+je     <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0xd9>
+lea    -0x69(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5f(%ebp)
+mov    %eax,(%ebx)
+lea    -0x69(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x5b(%ebp)
+mov    %eax,(%ebx)
 lea    -0x69(%ebp),%eax
 movl   $0x55,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0xc5>
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
-jne    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x70>
-jmp    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x102>
-nop
+jne    <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc+0x82>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeSecedeToGuildMember(char*) */

void __thiscall CGuild::_ZN6CGuild25NoticeSecedeToGuildMemberEPc(CGuild *this,char *param_1)

{
  char cVar1;
  int iVar2;
  Packet_Monitor_Notice_Guild_Secede_ToUser local_6d [10];
  undefined4 local_63;
  undefined4 local_5f;
  undefined1 auStack_5b [67];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Monitor_Notice_Guild_Secede_ToUser::_ZN41Packet_Monitor_Notice_Guild_Secede_ToUserC2Ev
              (local_6d);
    memcpy(auStack_5b,param_1,0x43);
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
        local_63 = CUser::GetIdByChannel(local_10);
        local_5f = CUser::GetUniqCharNo(local_10);
        CUser::SendToGameserver(local_10,(char *)local_6d,0x55);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1094 行）：

```cpp
void CGuild::NoticeSecedeToGuildMember(char* info)
{
    if ((*(unsigned short*)((char*)this + 0x1c) & 4) != 0 && !m_members.empty())
    {
        Packet_Monitor_Notice_Guild_Secede_ToUser pkt;
        memcpy((char*)&pkt + 0x12, info, 0x43);
        for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
             it != m_members.end(); ++it)
        {
            CUser* u = it->second;
            if (u != 0)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = u->GetIdByChannel();
                *(unsigned int*)((char*)&pkt + 0xe) = u->GetUniqCharNo();
                u->SendToGameserver((char*)&pkt, 0x55);
            }
        }
    }
}
```
