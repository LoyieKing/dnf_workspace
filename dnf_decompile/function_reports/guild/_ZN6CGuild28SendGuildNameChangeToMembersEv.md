# _ZN6CGuild28SendGuildNameChangeToMembersEv

`CGuild::SendGuildNameChangeToMembers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808df68` | `0xe2` | `0x8053ebc` | `0xef` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,72 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Guild_Notice_Guild_Name_ChangeC1Ev>
+lea    -0x41(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,-0x37(%ebp)
+add    $0x18,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x41(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xb1>
+jmp    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xbb>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xa5>
+je     <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xb0>
+lea    -0x41(%ebp),%eax
+lea    0x12(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2f(%ebp)
+mov    %eax,(%ebx)
+lea    -0x41(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x33(%ebp)
+mov    %eax,(%ebx)
 lea    -0x41(%ebp),%eax
 movl   $0x2d,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xa6>
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
-jne    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0x51>
+jne    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0x59>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SendGuildNameChangeToMembers() */

void __thiscall CGuild::_ZN6CGuild28SendGuildNameChangeToMembersEv(CGuild *this)

{
  char cVar1;
  int iVar2;
  Packet_Guild_Notice_Guild_Name_Change local_45 [10];
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined1 auStack_2f [23];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  Packet_Guild_Notice_Guild_Name_Change::Packet_Guild_Notice_Guild_Name_Change(local_45);
  local_3b = *(undefined4 *)(this + 0x18);
  memcpy(auStack_2f,this + 0x20,0x16);
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
      local_33 = CUser::GetIdByChannel(local_10);
      local_37 = CUser::GetUniqCharNo(local_10);
      CUser::SendToGameserver(local_10,(char *)local_45,0x2d);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 850 行）：

```cpp
void CGuild::SendGuildNameChangeToMembers()
{
    Packet_Guild_Notice_Guild_Name_Change pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = *(unsigned int*)((char*)this + 0x18);
    memcpy((char*)&pkt + 0x16, (char*)this + 0x20, 0x16);
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* u = it->second;
        if (u != 0)
        {
            *(unsigned int*)((char*)&pkt + 0x12) = u->GetIdByChannel();
            *(unsigned int*)((char*)&pkt + 0xe) = u->GetUniqCharNo();
            u->SendToGameserver((char*)&pkt, 0x2d);
        }
    }
}
```
