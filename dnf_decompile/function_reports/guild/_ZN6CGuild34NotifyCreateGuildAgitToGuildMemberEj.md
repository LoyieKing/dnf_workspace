# _ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj

`CGuild::NotifyCreateGuildAgitToGuildMember(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091e46` | `0xea` | `0x8057906` | `0xee` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,71 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xe8>
+je     <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0x30>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xe7>
+je     <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0x30>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0x35>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xec>
 lea    -0x26(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Channel_Create_Guild_AgitC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xb6>
+jmp    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xbd>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xaa>
+je     <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xb2>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x1c(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x18(%ebp)
 lea    -0x26(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xab>
-nop
 lea    -0x2c(%ebp),%eax
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
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0x56>
-jmp    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0xe8>
-nop
+jne    <T> <_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj+0x65>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NotifyCreateGuildAgitToGuildMember(unsigned int) */

void __thiscall CGuild::_ZN6CGuild34NotifyCreateGuildAgitToGuildMemberEj(CGuild *this,uint param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_30 [6];
  Packet_Channel_Create_Guild_Agit local_2a [10];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Channel_Create_Guild_Agit::_ZN32Packet_Channel_Create_Guild_AgitC2Ev(local_2a);
    local_18 = param_1;
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_30);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30);
      local_10 = *(CUser **)(iVar2 + 4);
      if (local_10 != (CUser *)0x0) {
        local_20 = CUser::GetIdByChannel(local_10);
        local_1c = CUser::GetUniqCharNo(local_10);
        CUser::SendToGameserver(local_10,(char *)local_2a,0x16);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_30);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2151 行）：

```cpp
void CGuild::NotifyCreateGuildAgitToGuildMember(unsigned int charNo)
{
    if ((m_field1c & 4) != 0 && !m_members.empty())
    {
        Packet_Channel_Create_Guild_Agit pkt;
        pkt.m12 = charNo;
        for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
             it != m_members.end(); ++it)
        {
            CUser* u = it->second;
            if (u != 0)
            {
                pkt.ma = u->GetIdByChannel();
                pkt.me = u->GetUniqCharNo();
                u->SendToGameserver((char*)&pkt, 0x16);
            }
        }
    }
}
```
