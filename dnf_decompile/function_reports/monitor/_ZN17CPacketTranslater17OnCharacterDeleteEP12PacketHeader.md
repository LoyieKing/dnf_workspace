# _ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader

`CPacketTranslater::OnCharacterDelete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80840d6` | `0x25b` | `0x806f476` | `0x24d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,170 +1,164 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xdf>
-lea    -0x39(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCharacterDelete : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xa4>
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x148>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x13d>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x252>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x28(%ebp),%eax
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x245>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj>
+lea    -0x46(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN40Packet_DB_Member_Delete_As_Charac_DeleteC1Ev>
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0x46(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj>
-lea    -0x4e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN40Packet_DB_Member_Delete_As_Charac_DeleteC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x44(%ebp)
-lea    -0x4e(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x245>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1ea>
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1df>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnCharacterDelete Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x9d8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCharacterDelete Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1e3>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1d8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x245>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCharacterDelete Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x9de,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCharacterDelete Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x24b>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x240>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x253>
-nop
-add    $0x5c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCharacterDelete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_DB_Member_Delete_As_Charac_Delete local_52 [10];
  undefined4 local_48;
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CServerHandler *local_28;
  uint local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808410c to 08084110 has its CatchHandler @ 0808417a */
    std::string::string(local_44,"CPacketTranslater::OnCharacterDelete : 0 == m_pclApp",local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808412b to 0808412f has its CatchHandler @ 08084132 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 08084169 to 0808416d has its CatchHandler @ 08084170 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080841b0 to 08084218 has its CatchHandler @ 0808421e */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  local_28 = *(CServerHandler **)(m_pclApp + 0xa0);
  if (local_28 != (CServerHandler *)0x0) {
    local_24 = m_pclApp + 0x10;
    CUserManager::_ZN12CUserManager29DeleteBlackUserOnCharacDeleteEj(local_24);
    Packet_DB_Member_Delete_As_Charac_Delete::Packet_DB_Member_Delete_As_Charac_Delete(local_52);
    local_48 = *(undefined4 *)(local_2c + 0xe);
    CServerHandler::SendToDB(local_28,(PacketHeader *)local_52);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1795 行）：

```cpp
void CPacketTranslater::OnCharacterDelete(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnCharacterDelete : 0 == m_pclApp");
    }
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    if (handler != 0)
    {
        ((CUserManager*)((char*)m_pclApp + 0x10))
            ->DeleteBlackUserOnCharacDelete(((RA_UINT<10>*)pkt)->v);
        Packet_DB_Member_Delete_As_Charac_Delete dbPkt;
        dbPkt.m_charNo = ((RA_UINT<14>*)pkt)->v;
        handler->SendToDB(&dbPkt);
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnCharacterDelete Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x9d8, "./log/Except", "CPacketTranslater::OnCharacterDelete Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCharacterDelete Exception Break");
        DNF_LOG_SCOPE_LINE(0x9de, "./log/Except", "CPacketTranslater::OnCharacterDelete Exception Break\n");
    }
}
```
