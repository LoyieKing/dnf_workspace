# _ZN6CGuild26NotifyMessageToGuildMemberEv

`CGuild::NotifyMessageToGuildMember()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80913a4` | `0x158` | `0x8057048` | `0x163` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,94 +1,98 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0xa8,%esp
+push   %ebx
+sub    $0xa4,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x156>
+je     <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x15e>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x155>
+jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x15e>
 lea    -0x8f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_Guild_Notify_Message_To_Guild_MemC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x7f>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x64,-0x10(%ebp)
+jg     <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x80>
+mov    -0x10(%ebp),%eax
 mov    0x8(%ebp),%edx
 add    $0x4d0a,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x8f(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0xa4>
+jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0xa5>
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 movl   $0x64,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x8f(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x124>
+jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x12f>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
-jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x118>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x123>
+lea    -0x8f(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x85(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x8f(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x81(%ebp)
+mov    %eax,(%ebx)
 lea    -0x8f(%ebp),%eax
 movl   $0x77,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x119>
+jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x124>
 nop
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0xbb>
-jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x156>
-nop
+jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0xbc>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NotifyMessageToGuildMember() */

void __thiscall CGuild::_ZN6CGuild26NotifyMessageToGuildMemberEv(CGuild *this)

{
  char cVar1;
  int iVar2;
  Packet_Guild_Notify_Message_To_Guild_Mem local_93 [10];
  undefined4 local_89;
  undefined4 local_85;
  undefined1 auStack_81 [101];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  CUser *local_14;
  size_t local_10;
  
  if (((*(ushort *)(this + 0x1c) & 4) != 0) &&
     (cVar1 = std::
              map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
              ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                       *)this), cVar1 == '\0')) {
    Packet_Guild_Notify_Message_To_Guild_Mem::Packet_Guild_Notify_Message_To_Guild_Mem(local_93);
    local_10 = strlen((char *)(this + 0x4d0a));
    if ((int)local_10 < 0x65) {
      memcpy(auStack_81,this + 0x4d0a,local_10);
    }
    else {
      memcpy(auStack_81,this + 0x4d0a,100);
    }
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c);
      local_14 = *(CUser **)(iVar2 + 4);
      if (local_14 != (CUser *)0x0) {
        local_89 = CUser::GetIdByChannel(local_14);
        local_85 = CUser::GetUniqCharNo(local_14);
        CUser::SendToGameserver(local_14,(char *)local_93,0x77);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_1c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1900 行）：

```cpp
void CGuild::NotifyMessageToGuildMember()
{
    if ((m_field1c & 4) != 0)
    {
        if (m_members.empty())
        {
        }
        else
        {
            Packet_Guild_Notify_Message_To_Guild_Mem pkt;
            int len = strlen((char*)this + 0x4d0a);
            if (len <= 100)
            {
                memcpy((char*)&pkt + 0x12, (char*)this + 0x4d0a, len);
            }
            else
            {
                memcpy((char*)&pkt + 0x12, (char*)this + 0x4d0a, 100);
            }
            for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
                 it != m_members.end(); ++it)
            {
                CUser* u;
                if ((u = it->second) == 0) { continue; }
                *(unsigned int*)&pkt.m_data[0] = u->GetIdByChannel();
                *(unsigned int*)&pkt.m_data[4] = u->GetUniqCharNo();
                u->SendToGameserver((char*)&pkt, 0x77);
            }
        }
    }
}
```
