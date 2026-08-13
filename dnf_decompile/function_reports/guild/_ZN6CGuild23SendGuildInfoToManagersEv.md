# _ZN6CGuild23SendGuildInfoToManagersEv

`CGuild::SendGuildInfoToManagers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808e150` | `0x193` | `0x8054174` | `0x1a1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x168,%esp
+push   %ebx
+sub    $0x164,%esp
 mov    0x8(%ebp),%eax
-movzwl 0x1c(%eax),%eax
+add    $0x1c,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x191>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x19c>
 lea    -0x14d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_Notice_Guild_InfoC1Ev>
+lea    -0x14d(%ebp),%eax
+lea    0x12(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
-mov    %eax,-0x13b(%ebp)
-movb   $0x1,-0x7a(%ebp)
+mov    %eax,(%edx)
+lea    -0x14d(%ebp),%eax
+add    $0xd3,%eax
+movb   $0x1,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 movl   $0xbd,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x14d(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 add    $0x4d0a,%eax
 movl   $0x64,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x14d(%ebp),%eax
 add    $0xd4,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x162>
+jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x16d>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x153>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x162>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
+jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x110>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x10e>
+jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x115>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x156>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x162>
+lea    -0x14d(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x143(%ebp)
+mov    %eax,(%ebx)
+lea    -0x14d(%ebp),%eax
+lea    0xe(%eax),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x13f(%ebp)
+mov    %eax,(%ebx)
 lea    -0x14d(%ebp),%eax
 movl   $0x139,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x157>
-nop
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x157>
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
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0xa0>
+jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0xb2>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::SendGuildInfoToManagers() */

void __thiscall CGuild::_ZN6CGuild23SendGuildInfoToManagersEv(CGuild *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  Packet_Monitor_Notice_Guild_Info local_151 [10];
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined1 auStack_13b [189];
  undefined1 local_7e;
  char acStack_7d [101];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    Packet_Monitor_Notice_Guild_Info::_ZN32Packet_Monitor_Notice_Guild_InfoC2Ev(local_151);
    local_13f = *(undefined4 *)(this + 0x18);
    local_7e = 1;
    memcpy(auStack_13b,this + 0x20,0xbd);
    strncpy(acStack_7d,(char *)(this + 0x4d0a),100);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
      local_10 = *(CUser **)(iVar3 + 4);
      if (local_10 != (CUser *)0x0) {
        uVar4 = CUser::GetUniqCharNo(local_10);
        cVar2 = _ZN6CGuild13IsGuildMasterEj(this,uVar4);
        if (cVar2 == '\x01') {
LAB_0808e259:
          bVar1 = false;
        }
        else {
          uVar4 = CUser::GetUniqCharNo(local_10);
          cVar2 = _ZN6CGuild16IsSubGuildMasterEj(this,uVar4);
          if (cVar2 == '\x01') goto LAB_0808e259;
          bVar1 = true;
        }
        if (!bVar1) {
          local_147 = CUser::GetIdByChannel(local_10);
          local_143 = CUser::GetUniqCharNo(local_10);
          CUser::SendToGameserver(local_10,(char *)local_151,0x139);
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 961 行）：

```cpp
void CGuild::SendGuildInfoToManagers()
{
    if ((*(unsigned short*)((char*)this + 0x1c) & 4) != 0)
    {
        Packet_Monitor_Notice_Guild_Info pkt;
        *(unsigned int*)((char*)&pkt + 0x12) = m_guildKey;
        *(unsigned char*)((char*)&pkt + 0xd3) = 1;
        memcpy((char*)&pkt + 0x16, (char*)this + 0x20, 0xbd);
        strncpy((char*)&pkt + 0xd4, (char*)this + 0x4d0a, 100);
        for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
             it != m_members.end(); ++it)
        {
            CUser* u = it->second;
            if (u != 0)
            {
                if (IsGuildMaster(u->GetUniqCharNo()) == 1 ||
                    IsSubGuildMaster(u->GetUniqCharNo()) == 1)
                {
                    *(unsigned int*)((char*)&pkt + 0xa) = u->GetIdByChannel();
                    *(unsigned int*)((char*)&pkt + 0xe) = u->GetUniqCharNo();
                    u->SendToGameserver((char*)&pkt, 0x139);
                }
            }
        }
    }
}
```
