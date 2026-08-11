# _ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE

`nsl::ActiveConManager::RequestConnect(nsl::ConInterface*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80bcf0a` | `0x22a` | `0x80a9f08` | `0x23d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,164 +1,166 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 lea    0x4c(%eax),%edx
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5queueIPN3nsl12ConInterfaceESt5dequeIS2_SaIS2_EEE4pushERKS2_>
 mov    0x8(%ebp),%eax
 movb   $0x1,(%eax)
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x61>
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x81>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-nop
+mov    0xc(%ebp),%eax
+movzbl 0x2c(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x75>
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x233>
+movl   $0xa,(%esp)
+call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
 mov    0x8(%ebp),%eax
 movzbl 0x1(%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x8d>
-mov    0xc(%ebp),%eax
-movzbl 0x2c(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x218>
-movl   $0xa,(%esp)
-call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
-nop
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x61>
+jne    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x60>
+movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiPN3nsl12ConInterfaceESt4lessIiESaISt4pairIKiS2_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0xd1>
+je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0xdc>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x1(%eax)
 movl   $0xa,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
-mov    $0x0,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x1ef>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x205>
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl12ConInterfaceESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x19b>
-lea    -0x20(%ebp),%eax
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x1af>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN3nsl12ConInterfaceEEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIdEv>
 mov    %eax,0x4(%esp)
 movl   $"rConInfo->getId-%d\n",(%esp)
 call   <T> <printf>
-mov    0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIdEv>
 mov    %eax,%ebx
-mov    -0xc(%ebp),%eax
+mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface5getIdEv>
 cmp    %eax,%ebx
 sete   %al
 test   %al,%al
-je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x17e>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x192>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface10getTCPUserEv>
-mov    0xc(%ebp),%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface10setTCPUserEPNS_7TCPUserE>
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl12ConInterfaceESt4lessIiESaISt4pairIKiS2_EEE5eraseESt17_Rb_tree_iteratorIS7_E>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12ConInterface10getTCPUserEv>
-mov    %eax,%esi
-mov    $0x1,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x1ef>
-lea    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+movl   $0x1,-0x18(%ebp)
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x205>
+lea    -0x1c(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x20(%ebp),%edx
+lea    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN3nsl12ConInterfaceEEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x34(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiPN3nsl12ConInterfaceESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN3nsl12ConInterfaceEEEneERKS6_>
 test   %al,%al
-jne    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0xee>
-mov    $0x2,%ebx
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x1ef>
+jne    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0xf9>
+movl   $0x2,-0x18(%ebp)
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x205>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x1c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
-test   %ebx,%ebx
-je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x60>
-cmp    $0x1,%ebx
-je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x21e>
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x22d>
+cmpl   $0x1,-0x18(%ebp)
+jne    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x221>
+mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x233>
 movl   $0x64,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
-jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x61>
 nop
-mov    $0x0,%esi
-mov    %esi,%eax
+jmp    <T> <_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE+0x81>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: TCPUser * RequestConnect(ActiveConManager * this, ConInterface *
   conInfo) */

TCPUser * __thiscall
nsl::ActiveConManager::_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE
          (ActiveConManager *this,ConInterface *conInfo)

{
  bool bVar1;
  pair<const_int,_nsl::ConInterface*> *ppVar2;
  int iVar3;
  TCPUser *pUser;
  int iVar4;
  TCPUser *unaff_ESI;
  ConInterface **__x;
  _Base_ptr in_lock_;
  map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
  local_24;
  
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???] */
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock
            ((TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> *)
             &local_24._M_t._M_impl._M_header._M_parent,&this->LockInCon);
  __x = &conInfo;
                    /* try { // try from 080bcf37 to 080bcf3b has its CatchHandler @ 080bcf4f */
  std::
  queue<nsl::ConInterface*,_std::deque<nsl::ConInterface*,_std::allocator<nsl::ConInterface*>_>_>::
  push(&this->queueRequestConnect,__x);
  this->bRequestInQueue = true;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock
            ((TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> *)
             &local_24._M_t._M_impl._M_header._M_parent,(int)__x);
  do {
                    /* Unresolved local var: ConInterface * rConInfo@[???] */
    while (this->bConnectedInQueue != true) {
      if (conInfo->mIsRejected != false) {
        return (TCPUser *)0x0;
      }
      TSystem<nsl::LinuxSystem>::sleep(10);
    }
                    /* Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???] */
    in_lock_ = (_Base_ptr)&this->LockOutCon;
    TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock
              ((TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> *)
               &local_24._M_t._M_impl._M_header,(TThreadLock<nsl::ThreadLock_linux> *)in_lock_);
                    /* try { // try from 080bcfb5 to 080bd0b9 has its CatchHandler @ 080bd0de */
    bVar1 = std::
            map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
            ::empty(&this->mapConnectedUser_);
    if (bVar1) {
      this->bConnectedInQueue = false;
      TSystem<nsl::LinuxSystem>::sleep(10);
      iVar4 = 0;
    }
    else {
                    /* Unresolved local var: TCPUserConnectMapIter iter@[???] */
      std::
      map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
      ::begin(&local_24);
      while( true ) {
        std::
        map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
        ::end((map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
               *)&local_24._M_t._M_impl._M_header._M_left);
        in_lock_ = (_Base_ptr)&local_24._M_t._M_impl._M_header._M_left;
        bVar1 = std::_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_>::operator!=
                          ((_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_> *)&local_24
                           ,(_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_> *)in_lock_
                          );
        if (!bVar1) break;
        ppVar2 = std::_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_>::operator->
                           ((_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_> *)
                            &local_24);
        local_24._M_t._M_impl._M_node_count = (size_t)ppVar2->second;
        iVar4 = ConInterface::getId((ConInterface *)local_24._M_t._M_impl._M_node_count);
        printf("rConInfo->getId-%d\n",iVar4);
        iVar4 = ConInterface::getId(conInfo);
        iVar3 = ConInterface::getId((ConInterface *)local_24._M_t._M_impl._M_node_count);
        if (iVar4 == iVar3) {
          pUser = ConInterface::getTCPUser((ConInterface *)local_24._M_t._M_impl._M_node_count);
          ConInterface::setTCPUser(conInfo,pUser);
          in_lock_ = (_Base_ptr)local_24._M_t._M_impl._0_4_;
          std::
          map<int,_nsl::ConInterface*,_std::less<int>,_std::allocator<std::pair<const_int,_nsl::ConInterface*>_>_>
          ::erase(&this->mapConnectedUser_,
                  (_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_>)
                  local_24._M_t._M_impl._0_4_);
          unaff_ESI = ConInterface::getTCPUser(conInfo);
          iVar4 = 1;
          goto LAB_080bd0f9;
        }
        std::_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_>::operator++
                  ((_Rb_tree_iterator<std::pair<const_int,_nsl::ConInterface*>_> *)
                   &local_24._M_t._M_impl._M_header._M_right,(int)&local_24);
      }
      iVar4 = 2;
    }
LAB_080bd0f9:
    TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock
              ((TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> *)
               &local_24._M_t._M_impl._M_header,(int)in_lock_);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        return unaff_ESI;
      }
      TSystem<nsl::LinuxSystem>::sleep(100);
    }
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TActiveConnect.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TActiveConnect.cpp)（约第 17 行）：

```cpp
    : queueRequestConnect(std::deque<ConInterface*>())
{
    bRequestInQueue = false;
    bConnectedInQueue = false;
}
```
