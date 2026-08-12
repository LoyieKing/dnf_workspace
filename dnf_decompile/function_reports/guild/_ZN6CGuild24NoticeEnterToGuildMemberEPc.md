# _ZN6CGuild24NoticeEnterToGuildMemberEPc

`CGuild::NoticeEnterToGuildMember(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808ea5a` | `0x120` | `0x80549f0` | `0x13d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,96 @@
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
-jne    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x2f>
+jne    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x30>
 mov    0x8(%ebp),%eax
-movzwl 0x1c(%eax),%eax
+add    $0x1c,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x2,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x11e>
+je     <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x49>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x11d>
+je     <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x49>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x4e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x138>
 lea    -0x6e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_Monitor_Notice_Guild_Enter_ToUserC1Ev>
 movl   $0x46,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x6e(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0xec>
+jmp    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x109>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0xe0>
+je     <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0xfe>
+lea    -0x6e(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x64(%ebp)
+mov    %eax,(%ebx)
+lea    -0x6e(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x60(%ebp)
-mov    0x8(%ebp),%eax
-movzwl 0x42(%eax),%eax
-mov    %ax,-0x5c(%ebp)
+mov    %eax,(%ebx)
+lea    -0x6e(%ebp),%eax
+add    $0x12,%eax
+mov    0x8(%ebp),%edx
+add    $0x42,%edx
+movzwl (%edx),%edx
+mov    %dx,(%eax)
 lea    -0x6e(%ebp),%eax
 movl   $0x5a,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0xe1>
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
-jne    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x81>
-jmp    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x11e>
-nop
+jne    <T> <_ZN6CGuild24NoticeEnterToGuildMemberEPc+0x95>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NoticeEnterToGuildMember(char*) */

void __thiscall CGuild::_ZN6CGuild24NoticeEnterToGuildMemberEPc(CGuild *this,char *param_1)

{
  char cVar1;
  int iVar2;
  Packet_Monitor_Notice_Guild_Enter_ToUser local_72 [10];
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 auStack_5e [70];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if ((((*(ushort *)(this + 0x1c) & 4) != 0) || ((*(ushort *)(this + 0x1c) & 2) != 0)) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Monitor_Notice_Guild_Enter_ToUser::_ZN40Packet_Monitor_Notice_Guild_Enter_ToUserC2Ev
              (local_72);
    memcpy(auStack_5e,param_1,0x46);
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
        local_68 = CUser::GetIdByChannel(local_10);
        local_64 = CUser::GetUniqCharNo(local_10);
        local_60 = *(undefined2 *)(this + 0x42);
        CUser::SendToGameserver(local_10,(char *)local_72,0x5a);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1070 行）：

```cpp
void CGuild::NoticeEnterToGuildMember(char* info)
{
    if (((*(unsigned short*)((char*)this + 0x1c) & 4) != 0 ||
         (*(unsigned short*)((char*)this + 0x1c) & 2) != 0) &&
        !m_members.empty())
    {
        Packet_Monitor_Notice_Guild_Enter_ToUser pkt;
        memcpy((char*)&pkt + 0x14, info, 0x46);
        for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
             it != m_members.end(); ++it)
        {
            CUser* u = it->second;
            if (u != 0)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = u->GetIdByChannel();
                *(unsigned int*)((char*)&pkt + 0xe) = u->GetUniqCharNo();
                *(unsigned short*)((char*)&pkt + 0x12) =
                    *(unsigned short*)((char*)this + 0x42);
                u->SendToGameserver((char*)&pkt, 0x5a);
            }
        }
    }
}
```
