# _ZN12CBuddyHandle5addDBEP14CServerHandlerPc

`CBuddyHandle::addDB(CServerHandler*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809e5e0` | `0x1fe` | `0x805793e` | `0x221` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,150 +1,161 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x24>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 test   %eax,%eax
 jne    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x2b>
 mov    $0x1,%eax
 jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x30>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x74>
 movl   $0x5a,0x8(%esp)
 movl   $&_ZZN12CBuddyHandle5addDBEP14CServerHandlerPcE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Buddy::addDB m_prUser is NULL",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1f4>
+mov    $0x1,%ebx
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x215>
 cmpl   $0x0,0x10(%ebp)
 jne    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x84>
-mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1f4>
+mov    $0x1,%ebx
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x215>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE4sizeEv>
 cmp    $0x1f,%eax
 seta   %al
 test   %al,%al
 je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0xa3>
-mov    $0x4,%eax
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1f4>
-lea    -0xd(%ebp),%eax
+mov    $0x4,%ebx
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x215>
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0xd(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%edx
-lea    -0x20(%ebp),%eax
-lea    -0x14(%ebp),%ecx
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
+sub    $0x4,%esp
+mov    0x8(%ebp),%edx
+lea    -0xc(%ebp),%eax
+lea    -0x20(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x120>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
+test   %al,%al
+je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x11a>
+mov    $0x12,%ebx
+mov    $0x0,%esi
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x136>
+mov    $0x1,%esi
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x136>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x105>
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x153>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %esi,%esi
+jne    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x14c>
+mov    $0x0,%esi
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x16e>
+mov    $0x1,%esi
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x16e>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xd(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xd(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
-sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
-test   %al,%al
-je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x160>
-mov    $0x12,%eax
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1f4>
+test   %esi,%esi
+je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x215>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x18d>
-mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1f4>
+je     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1ae>
+mov    $0x1,%ebx
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x215>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 cmp    $0x1d,%eax
-jbe    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1a4>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x1f4>
+ja     <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x210>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_DBMW_Add_BuddyC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x42(%ebp)
 movl   $0x1d,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x4c(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    $0x0,%eax
+mov    $0x0,%ebx
+jmp    <T> <_ZN12CBuddyHandle5addDBEP14CServerHandlerPc+0x215>
+mov    $0xffffffff,%ebx
+mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::addDB(CServerHandler*, char*) */

undefined4 __thiscall
CBuddyHandle::_ZN12CBuddyHandle5addDBEP14CServerHandlerPc
          (CBuddyHandle *this,CServerHandler *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *__s2;
  size_t sVar6;
  Packet_DBMW_Add_Buddy local_50 [10];
  undefined4 local_46;
  undefined1 auStack_42 [30];
  string local_24 [4];
  CMyFileLog local_20 [8];
  string local_18 [7];
  allocator local_11;
  map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
  local_10 [4];
  
  if (*(int *)(this + 0x18) != 0) {
    iVar3 = CUser::GetUniqCharNo(*(CUser **)(this + 0x18));
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0809e610;
    }
  }
  bVar1 = true;
LAB_0809e610:
  if (bVar1) {
    CMyFileLog::CMyFileLog(local_20,"addDB",0x5a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/buddy","Buddy::addDB m_prUser is NULL");
    uVar4 = 1;
  }
  else if (param_2 == (char *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar5 = std::
            map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
            ::size((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
                    *)this);
    if (uVar5 < 0x20) {
      std::allocator<char>::allocator();
                    /* try { // try from 0809e6a2 to 0809e6a6 has its CatchHandler @ 0809e6e5 */
      std::string::string(local_18,param_2,&local_11);
                    /* try { // try from 0809e6bb to 0809e6bf has its CatchHandler @ 0809e6d0 */
      std::
      map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
      ::find(local_24);
                    /* try { // try from 0809e6c9 to 0809e6cd has its CatchHandler @ 0809e6e5 */
      std::string::~string(local_18);
      std::allocator<char>::~allocator((allocator<char> *)&local_11);
      std::
      map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
      ::end(local_10);
      cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_24,
                         (_Rb_tree_iterator *)local_10);
      if (cVar2 == '\0') {
        __s2 = (char *)CUser::GetCharName(*(CUser **)(this + 0x18));
        iVar3 = strcmp(param_2,__s2);
        if (iVar3 == 0) {
          uVar4 = 1;
        }
        else {
          sVar6 = strlen(param_2);
          if (sVar6 < 0x1e) {
            Packet_DBMW_Add_Buddy::Packet_DBMW_Add_Buddy(local_50);
            local_46 = CUser::GetUniqCharNo(*(CUser **)(this + 0x18));
            memcpy(auStack_42,param_2,0x1d);
            CServerHandler::SendToDB(param_1,(PacketHeader *)local_50);
            uVar4 = 0;
          }
          else {
            uVar4 = 0xffffffff;
          }
        }
      }
      else {
        uVar4 = 0x12;
      }
    }
    else {
      uVar4 = 4;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 46 行）：

```cpp
int CBuddyHandle::addDB(CServerHandler* handler, char* name)
{
    if (m_prUser == 0 || m_prUser->GetUniqCharNo() == 0)
    {
        DNF_LOG_SCOPE_LINE(0x5a, "./log/buddy", "Buddy::addDB m_prUser is NULL");
        return 1;
    }
    if (name == 0)
    {
        return 1;
    }
    if (m_buddies.size() > 0x1f)
    {
        return 4;
    }
    {
        std::allocator<char> alloc;
        std::string key(name, alloc);
        if (m_buddies.find(key) != m_buddies.end())
        {
            return 0x12;
        }
    }
    if (strcmp(name, m_prUser->GetCharName()) == 0)
    {
        return 1;
    }
    if (strlen(name) < 0x1e)
    {
        Packet_DBMW_Add_Buddy pkt;
        pkt.m_uniqCharNo = m_prUser->GetUniqCharNo();
        memcpy(pkt.m_charName, name, 0x1d);
        handler->SendToDB(&pkt);
        return 0;
    }
    return -1;
}
```
