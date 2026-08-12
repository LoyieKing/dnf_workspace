# _ZN12CBuddyHandle5delDBEP14CServerHandlerPc

`CBuddyHandle::delDB(CServerHandler*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809e9f2` | `0x1ce` | `0x8057b9c` | `0x1df` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,135 +1,140 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
+movb   $0x1,-0x9(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x24>
+je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x2f>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 test   %eax,%eax
-jne    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x2b>
+je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x2f>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x30>
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x34>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x74>
+je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x3c>
+movb   $0x0,-0x9(%ebp)
+cmpb   $0x0,-0x9(%ebp)
+je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x82>
 movl   $0xb7,0x8(%esp)
 movl   $&_ZZN12CBuddyHandle5delDBEP14CServerHandlerPcE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Buddy::addDB m_prUser is NULL",0x8(%esp)
 movl   $"./log/buddy",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1c4>
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1d5>
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x84>
+jne    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x92>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1c4>
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1d5>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 cmp    $0x1d,%eax
-jbe    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x9e>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1c4>
-lea    -0xd(%ebp),%eax
+ja     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1d0>
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%edx
-lea    -0x20(%ebp),%eax
-lea    -0x14(%ebp),%ecx
+lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x11b>
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x123>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x100>
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x108>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEeqERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x158>
-mov    $0x15,%eax
-jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1c4>
-lea    -0x50(%ebp),%eax
+je     <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1c9>
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_DBMW_Del_BuddyC1Ev>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x46(%ebp)
-lea    -0x20(%ebp),%eax
+mov    %eax,-0x4a(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP6CBuddyEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
-mov    0x22(%eax),%eax
-mov    %eax,-0x42(%ebp)
+add    $0x22,%eax
+mov    (%eax),%eax
+mov    %eax,-0x46(%ebp)
 movl   $0x1d,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x50(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    $0x0,%eax
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1d5>
+mov    $0x12,%eax
+jmp    <T> <_ZN12CBuddyHandle5delDBEP14CServerHandlerPc+0x1d5>
+mov    $0xffffffff,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::delDB(CServerHandler*, char*) */

undefined4 __thiscall
CBuddyHandle::_ZN12CBuddyHandle5delDBEP14CServerHandlerPc
          (CBuddyHandle *this,CServerHandler *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  Packet_DBMW_Del_Buddy local_54 [10];
  undefined4 local_4a;
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
      goto LAB_0809ea22;
    }
  }
  bVar1 = true;
LAB_0809ea22:
  if (bVar1) {
    CMyFileLog::CMyFileLog(local_20,"delDB",0xb7);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_20,"./log/buddy","Buddy::addDB m_prUser is NULL");
    uVar4 = 1;
  }
  else if (param_2 == (char *)0x0) {
    uVar4 = 1;
  }
  else {
    sVar5 = strlen(param_2);
    if (sVar5 < 0x1e) {
      std::allocator<char>::allocator();
                    /* try { // try from 0809eaaf to 0809eab3 has its CatchHandler @ 0809eaf2 */
      std::string::string(local_18,param_2,&local_11);
                    /* try { // try from 0809eac8 to 0809eacc has its CatchHandler @ 0809eadd */
      std::
      map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
      ::find(local_24);
                    /* try { // try from 0809ead6 to 0809eada has its CatchHandler @ 0809eaf2 */
      std::string::~string(local_18);
      std::allocator<char>::~allocator((allocator<char> *)&local_11);
      std::
      map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
      ::end(local_10);
      cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_24,
                         (_Rb_tree_iterator *)local_10);
      if (cVar2 == '\0') {
        Packet_DBMW_Del_Buddy::Packet_DBMW_Del_Buddy(local_54);
        local_4a = CUser::GetUniqCharNo(*(CUser **)(this + 0x18));
        iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>>::operator->
                          ((_Rb_tree_iterator<std::pair<std::string_const,CBuddy*>> *)local_24);
        iVar3 = CBuddy::getBuddyDBInfo(*(CBuddy **)(iVar3 + 4));
        local_46 = *(undefined4 *)(iVar3 + 0x22);
        memcpy(auStack_42,param_2,0x1d);
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_54);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x15;
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 95 行）：

```cpp
int CBuddyHandle::delDB(CServerHandler* handler, char* name)
{
    bool invalid = true;
    if (m_prUser != 0 && m_prUser->GetUniqCharNo() != 0)
    {
        invalid = false;
    }
    if (invalid)
    {
        DNF_LOG_SCOPE_LINE(0xb7, "./log/buddy", "Buddy::addDB m_prUser is NULL");
        return 1;
    }
    if (name == 0)
    {
        return 1;
    }
    if (strlen(name) < 0x1e)
    {
        std::map<std::string, CBuddy*>::iterator it = m_buddies.find(name);
        if (it != m_buddies.end())
        {
            Packet_DBMW_Del_Buddy pkt;
            pkt.m_uniqCharNo = m_prUser->GetUniqCharNo();
            pkt.m_buddyCharNo =
                *(unsigned int*)((char*)it->second->getBuddyDBInfo() + 0x22);
            memcpy(pkt.m_charName, name, 0x1d);
            handler->SendToDB(&pkt);
            return 0;
        }
        return 0x12;
    }
    return -1;
}
```
