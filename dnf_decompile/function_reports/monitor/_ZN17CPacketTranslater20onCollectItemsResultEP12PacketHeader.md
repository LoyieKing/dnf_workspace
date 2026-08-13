# _ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader

`CPacketTranslater::onCollectItemsResult(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80912d8` | `0x21a` | `0x807c8b0` | `0x21a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,153 +1,153 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0xdf>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::onCollectItemsResult",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0xa4>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x13c>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15getCollectItemsEv>
 mov    -0x20(%ebp),%edx
 mov    0xe(%edx),%edx
 mov    %edx,0x4(%eax)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15getCollectItemsEv>
 mov    -0x20(%ebp),%edx
 mov    0xa(%edx),%edx
 mov    %edx,(%eax)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15getCollectItemsEv>
 mov    -0x20(%ebp),%edx
 mov    0x12(%edx),%edx
 mov    %edx,0x8(%eax)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15getCollectItemsEv>
 movb   $0x0,0xc(%eax)
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x212>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x1b8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1fe6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20onCollectItemsResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onCollectItemsResult Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x1b1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x212>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1feb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20onCollectItemsResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onCollectItemsResult Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader+0x20d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onCollectItemsResult(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20onCollectItemsResultEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  int iVar1;
  undefined4 *puVar2;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809130e to 08091312 has its CatchHandler @ 0809137c */
    std::string::string(local_3c,"CPacketTranslater::onCollectItemsResult",local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809132d to 08091331 has its CatchHandler @ 08091334 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 0809136b to 0809136f has its CatchHandler @ 08091372 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080913b2 to 080913b6 has its CatchHandler @ 08091414 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  iVar1 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(local_24 + 0xe);
  puVar2 = (undefined4 *)CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
  *puVar2 = *(undefined4 *)(local_24 + 10);
  iVar1 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(local_24 + 0x12);
  iVar1 = CApplication::_ZN12CApplication15getCollectItemsEv(m_pclApp);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5335 行）：

```cpp
void CPacketTranslater::onCollectItemsResult(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::onCollectItemsResult");
    }
    struct STCollectItemsData
    {
        unsigned int m_uniqCharNo;
        unsigned int m_money;
        unsigned int m_etc;
        unsigned char m_end;
    };
    Packet_CollectItemsResult* p = (Packet_CollectItemsResult*)pkt;
    ((STCollectItemsData*)m_pclApp->getCollectItems())->m_money = p->m_fieldE;
    ((STCollectItemsData*)m_pclApp->getCollectItems())->m_uniqCharNo = p->m_fieldA;
    ((STCollectItemsData*)m_pclApp->getCollectItems())->m_etc = p->m_field12;
    ((STCollectItemsData*)m_pclApp->getCollectItems())->m_end = 0;


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1fe6, "./log/Except", "CPacketTranslater::onCollectItemsResult Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1feb, "./log/Except", "CPacketTranslater::onCollectItemsResult Exception Break\n");
    }
}
```
