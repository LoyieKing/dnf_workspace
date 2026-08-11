# _ZN17CPacketTranslater14onCollectItemsEP12PacketHeader

`CPacketTranslater::onCollectItems(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8090f48` | `0x390` | `0x807c54a` | `0x391` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,262 +1,275 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0xdf>
-lea    -0x31(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x31(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onCollectItems",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x38(%ebp),%esi
+lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0xa4>
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x2af>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x2b5>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    (%eax),%eax
-cmp    %eax,%ebx
-setae  %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x387>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    (%eax),%eax
+cmp    -0x38(%ebp),%eax
+jbe    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x389>
+mov    -0x3c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x167>
-mov    -0x20(%ebp),%eax
-movzbl 0x1a(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x159>
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+movzbl (%eax),%eax
 movzbl %al,%ecx
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x1b(%eax),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 movl   $0x0,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE>
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x28e>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-lea    (%edx,%eax,1),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    (%eax),%eax
-cmp    %eax,%ebx
-setae  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x1f3>
-mov    -0x20(%ebp),%eax
-movzbl 0x1a(%eax),%eax
-movzbl %al,%ecx
-mov    -0x20(%ebp),%eax
-lea    0x1b(%eax),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-movl   $0x2,0x10(%esp)
-mov    %ecx,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    %eax,%ebx
-movl   $0x0,(%esp)
-call   <T> <time>
-mov    %eax,0x8(%ebx)
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x28e>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%ecx
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x285>
+mov    -0x3c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%edx
+lea    (%edx,%eax,1),%eax
+mov    %eax,%edx
+mov    -0x3c(%ebp),%eax
+mov    (%eax),%eax
+cmp    %eax,%edx
+jae    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x221>
+mov    -0x3c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%ebx
+mov    -0x24(%ebp),%ecx
 mov    $0xcccccccd,%edx
 mov    %ecx,%eax
 mul    %edx
 shr    $0x4,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    %ebx,%eax
 sub    %edx,%eax
-lea    0x14(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
+lea    0x14(%eax),%ecx
+mov    -0x3c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 lea    (%edx,%eax,1),%eax
-cmp    %eax,%ebx
-setbe  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x28e>
-mov    -0x20(%ebp),%eax
-movzbl 0x1a(%eax),%eax
+cmp    %eax,%ecx
+ja     <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x285>
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+movzbl (%eax),%eax
 movzbl %al,%ecx
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x1b(%eax),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 movl   $0x1,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE>
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x285>
+mov    0x8(%ebp),%eax
+add    $0x1a,%eax
+movzbl (%eax),%eax
+movzbl %al,%ecx
+mov    0x8(%ebp),%eax
+lea    0x1b(%eax),%ebx
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+movl   $0x2,0x10(%esp)
+mov    %ecx,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater21SendColletItemsRewardEjiPKciN18TimeGateRewardType1TE>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15getCollectItemsEv>
-mov    0x4(%eax),%ecx
-mov    -0x20(%ebp),%edx
-mov    0x12(%edx),%edx
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+lea    0x8(%eax),%ebx
+movl   $0x0,(%esp)
+call   <T> <time>
+mov    %eax,(%ebx)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15getCollectItemsEv>
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
+add    $0x4,%eax
+mov    -0x34(%ebp),%edx
+add    $0x4,%edx
+mov    (%edx),%ecx
+mov    0x8(%ebp),%edx
+add    $0x12,%edx
+mov    (%edx),%edx
 lea    (%ecx,%edx,1),%edx
-mov    %edx,0x4(%eax)
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x388>
+mov    %edx,(%eax)
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x389>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x32b>
+jne    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x32f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x1fcb,0x8(%esp)
 movl   $"onCollectItems",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::onCollectItems Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::onCollectItems() Exception Break : %s\n",0x8(%esp)
+movl   $"%s",0x4(%esp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x324>
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x328>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x388>
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x389>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1fd0,0x8(%esp)
 movl   $"onCollectItems",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::onCollectItems Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+movl   $"CPacketTranslater::onCollectItems() Exception Break",0x8(%esp)
+movl   $"%s",0x4(%esp)
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x380>
+jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x384>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader+0x388>
-nop
-add    $0x4c,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onCollectItems(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14onCollectItemsEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  CDNFException *this;
  int iVar2;
  uint *puVar3;
  time_t tVar4;
  int iVar5;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08090f7e to 08090f82 has its CatchHandler @ 08090fec */
    std::string::string(local_3c,"CPacketTranslater::onCollectItems",local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08090f9d to 08090fa1 has its CatchHandler @ 08090fa4 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 08090fdb to 08090fdf has its CatchHandler @ 08090fe2 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08091022 to 080911d5 has its CatchHandler @ 080911f7 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  iVar2 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
  uVar1 = *(uint *)(iVar2 + 4);
  puVar3 = (uint *)CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
  if (uVar1 < *puVar3) {
    iVar2 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
    if (*(int *)(iVar2 + 4) == 0) {
      SendColletItemsReward
                (*(undefined4 *)(local_24 + 0xe),*(undefined4 *)(local_24 + 10),local_24 + 0x1b,
                 local_24[0x1a],0);
    }
    else {
      iVar2 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
      iVar2 = *(int *)(iVar2 + 4);
      iVar5 = *(int *)(local_24 + 0x12);
      puVar3 = (uint *)CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
      if ((uint)(iVar2 + iVar5) < *puVar3) {
        iVar2 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
        iVar2 = *(int *)(iVar2 + 4);
        iVar5 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
        uVar1 = *(uint *)(iVar5 + 4);
        iVar5 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
        if ((iVar2 - uVar1 % 0x14) + 0x14 <= (uint)(*(int *)(iVar5 + 4) + *(int *)(local_24 + 0x12))
           ) {
          SendColletItemsReward
                    (*(undefined4 *)(local_24 + 0xe),*(undefined4 *)(local_24 + 10),local_24 + 0x1b,
                     local_24[0x1a],1);
        }
      }
      else {
        SendColletItemsReward
                  (*(undefined4 *)(local_24 + 0xe),*(undefined4 *)(local_24 + 10),local_24 + 0x1b,
                   local_24[0x1a],2);
        iVar2 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
        tVar4 = time((time_t *)0x0);
        *(time_t *)(iVar2 + 8) = tVar4;
      }
    }
    iVar2 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + *(int *)(local_24 + 0x12);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1383 行）：

```cpp
void CPacketTranslater::onCollectItemsGm(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Collect_Items_Gm* pkt =
            (Packet_DBMW_Collect_Items_Gm*)header;
        m_pclApp->m_dbManager.updateCollectItemsGm(
            pkt->m_serverInfo, pkt->m_fieldF, pkt->m_fieldB,
            pkt->m_field13);
        Packet_CollectItemsResult reply;
        *(unsigned int*)((char*)&reply + 0xa) = pkt->m_fieldF;
        *(unsigned int*)((char*)&reply + 0xe) = pkt->m_fieldB;
        *(int*)((char*)&reply + 0x12) = pkt->m_field13;
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::onCollectItemsGm Exception Break",
                  0x1406, 0x140b);
}
```
