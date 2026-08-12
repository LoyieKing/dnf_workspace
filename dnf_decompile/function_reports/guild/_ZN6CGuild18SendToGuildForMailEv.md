# _ZN6CGuild18SendToGuildForMailEv

`CGuild::SendToGuildForMail()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e2e4` | `0xce` | `0x805424c` | `0xd7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,62 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+push   %ebx
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild18SendToGuildForMailEv+0xcc>
+je     <T> <_ZN6CGuild18SendToGuildForMailEv+0xd1>
 lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Monitor_Notify_New_MailC1Ev>
 mov    0x8(%ebp),%edx
 lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild18SendToGuildForMailEv+0x9d>
+jmp    <T> <_ZN6CGuild18SendToGuildForMailEv+0xa0>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild18SendToGuildForMailEv+0x91>
+je     <T> <_ZN6CGuild18SendToGuildForMailEv+0x95>
+lea    -0x22(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+lea    -0x22(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x14(%ebp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x18(%ebp)
+mov    %eax,(%ebx)
 lea    -0x22(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild18SendToGuildForMailEv+0x92>
-nop
 lea    -0x28(%ebp),%eax
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
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild18SendToGuildForMailEv+0x3d>
+jne    <T> <_ZN6CGuild18SendToGuildForMailEv+0x3e>
+jmp    <T> <_ZN6CGuild18SendToGuildForMailEv+0xd2>
+nop
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SendToGuildForMail() */

void __thiscall CGuild::_ZN6CGuild18SendToGuildForMailEv(CGuild *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_2c [6];
  Packet_Monitor_Notify_New_Mail local_26 [10];
  undefined4 local_1c;
  undefined4 local_18;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail(local_26);
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
        local_18 = CUser::GetIdByChannel(local_10);
        local_1c = CUser::GetUniqCharNo(local_10);
        CUser::SendToGameserver(local_10,(char *)local_26,0x12);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_2c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 918 行）：

```cpp
void CGuild::SendToGuildForMail()
{
    if ((m_field1c & 4) == 0)
    {
        return;
    }
    Packet_Monitor_Notify_New_Mail pkt;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* m = it->second;
        if (m != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = m->GetUniqCharNo();
            *(unsigned int*)((char*)&pkt + 0xe) = m->GetIdByChannel();
            m->SendToGameserver((char*)&pkt, 0x12);
        }
    }
}
```
