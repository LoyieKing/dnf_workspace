# _ZN6CGuild25NotifyAllTodayGuildMemberEv

`CGuild::NotifyAllTodayGuildMember()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80924e6` | `0x132` | `0x80580a0` | `0x110` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,78 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x68,%esp
-movl   $0x0,-0xc(%ebp)
-lea    -0x51(%ebp),%eax
+sub    $0x88,%esp
+mov    0x8(%ebp),%eax
+movzwl 0x1c(%eax),%eax
+movzwl %ax,%eax
+and    $0x4,%eax
+test   %eax,%eax
+je     <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x29>
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN32Packet_Notify_Today_Guild_MemberC1Ev>
+call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+test   %al,%al
+je     <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x30>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x35>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x10d>
+movl   $0x5b,0x8(%esp)
+movl   $0x0,0x4(%esp)
+lea    -0x6b(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+lea    -0x6b(%ebp),%eax
+movw   $0x1f48,(%eax)
 mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,-0x47(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x66ec(%eax),%edx
-mov    %edx,-0x3b(%ebp)
-mov    0x66f0(%eax),%edx
-mov    %edx,-0x37(%ebp)
-mov    0x66f4(%eax),%edx
-mov    %edx,-0x33(%ebp)
-mov    0x66f8(%eax),%edx
-mov    %edx,-0x2f(%ebp)
-mov    0x66fc(%eax),%edx
-mov    %edx,-0x2b(%ebp)
-mov    0x6700(%eax),%edx
-mov    %edx,-0x27(%ebp)
-mov    0x6704(%eax),%edx
-mov    %edx,-0x23(%ebp)
-mov    0x6708(%eax),%edx
-mov    %edx,-0x1f(%ebp)
-mov    0x670c(%eax),%edx
-mov    %edx,-0x1b(%ebp)
-movzwl 0x6710(%eax),%edx
-mov    %dx,-0x17(%ebp)
-movzbl 0x6712(%eax),%eax
-mov    %al,-0x15(%ebp)
+add    $0x66ec,%eax
+movl   $0x27,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x6b(%ebp),%eax
+add    $0xa,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x101>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xe0>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-sete   %al
+test   %eax,%eax
+setne  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xf5>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xd5>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x3f(%ebp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x43(%ebp)
-lea    -0x51(%ebp),%eax
-movl   $0x3d,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
+movl   $0x5b,0x8(%esp)
+lea    -0x6b(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xf6>
-nop
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xa1>
+jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x99>
+jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x10e>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::NotifyAllTodayGuildMember() */

void __thiscall CGuild::_ZN6CGuild25NotifyAllTodayGuildMemberEv(CGuild *this)

{
  char cVar1;
  int iVar2;
  Packet_Notify_Today_Guild_Member local_55 [10];
  undefined4 local_4b;
  undefined4 local_47;
  undefined4 local_43;
  undefined4 local_3f;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined2 local_1b;
  CGuild local_19;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  Packet_Notify_Today_Guild_Member::_ZN32Packet_Notify_Today_Guild_MemberC2Ev(local_55);
  local_4b = *(undefined4 *)(this + 0x18);
  local_3f = *(undefined4 *)(this + 0x66ec);
  local_3b = *(undefined4 *)(this + 0x66f0);
  local_37 = *(undefined4 *)(this + 0x66f4);
  local_33 = *(undefined4 *)(this + 0x66f8);
  local_2f = *(undefined4 *)(this + 0x66fc);
  local_2b = *(undefined4 *)(this + 0x6700);
  local_27 = *(undefined4 *)(this + 0x6704);
  local_23 = *(undefined4 *)(this + 0x6708);
  local_1f = *(undefined4 *)(this + 0x670c);
  local_1b = *(undefined2 *)(this + 0x6710);
  local_19 = this[0x6712];
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
      local_43 = CUser::GetIdByChannel(local_10);
      local_47 = CUser::GetUniqCharNo(local_10);
      CUser::SendToGameserver(local_10,(char *)local_55,0x3d);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2265 行）：

```cpp
void CGuild::NotifyAllTodayGuildMember()
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    char buf[0x5b];
    memset(buf, 0, sizeof(buf));
    *(unsigned short*)(buf + 0) = 0x1f48;
    memcpy(buf + 0xa, (char*)this + 0x66ec, 0x27);
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->SendToGameserver(buf, 0x5b);
        }
    }
}
```
