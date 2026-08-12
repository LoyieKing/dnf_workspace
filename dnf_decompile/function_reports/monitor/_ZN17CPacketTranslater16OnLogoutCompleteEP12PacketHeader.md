# _ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader

`CPacketTranslater::OnLogoutComplete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8083100` | `0x2f4` | `0x806ee82` | `0x2f8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,202 +1,202 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0xdf>
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnLogoutComplete : 0 == m_pclApp",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0xa4>
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x1e4>
-lea    -0x45(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x1e8>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movsbl %al,%edx
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager18DeleteProhibitUserEjc>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x17f>
-mov    -0x24(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%esi
-mov    -0x24(%ebp),%eax
+mov    %al,-0x25(%ebp)
+cmpb   $0x1,-0x25(%ebp)
+jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x17f>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%ebx
+movl   $0x8a5,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f0>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%ebx
 movl   $0x8a1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"[DELETE_ERR_] CPacketTranslater::OnLogoutComplete m_id : %s\tChannel No : %d\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2ec>
-mov    -0x24(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x8a5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2ec>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f0>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x286>
+jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x28a>
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
 movl   $"CPacketTranslater::OnLogoutComplete() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x8aa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLogoutComplete() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x27f>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x283>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2ec>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnLogoutComplete() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x8b0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogoutComplete() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2e7>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2eb>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogoutComplete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  char cVar2;
  CDNFException *this;
  undefined4 uVar3;
  string local_50 [7];
  allocator local_49;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CUserManager *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08083136 to 0808313a has its CatchHandler @ 080831a4 */
    std::string::string(local_50,"CPacketTranslater::OnLogoutComplete : 0 == m_pclApp",&local_49);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08083155 to 08083159 has its CatchHandler @ 0808315c */
    CDNFException::CDNFException(this,local_50);
                    /* try { // try from 08083193 to 08083197 has its CatchHandler @ 0808319a */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080831da to 080832de has its CatchHandler @ 080832e4 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = (CUserManager *)(m_pclApp + 0x10);
  cVar2 = CUserManager::_ZN12CUserManager18DeleteProhibitUserEjc
                    (local_24,*(uint *)(param_1 + 10),(char)param_1[0xe]);
  if (cVar2 == '\x01') {
    PVar1 = local_28[0xe];
    uVar3 = NumberToString(*(uint *)(local_28 + 10),0);
    CMyFileLog::CMyFileLog(local_40,"OnLogoutComplete",0x8a5);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/User","[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n",uVar3,
               (uint)(byte)PVar1);
  }
  else {
    PVar1 = local_28[0xe];
    uVar3 = NumberToString(*(uint *)(local_28 + 10),0);
    CMyFileLog::CMyFileLog(local_48,"OnLogoutComplete",0x8a1);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/User",
               "[DELETE_ERR_] CPacketTranslater::OnLogoutComplete m_id : %s\tChannel No : %d\n",
               uVar3,(uint)(byte)PVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1719 行）：

```cpp
void CPacketTranslater::OnLogoutComplete(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnLogoutComplete : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    char ok = userMgr->DeleteProhibitUser(((RA_UINT<10>*)pkt)->v,
                                          (char)((RA_S8<14>*)pkt)->v);
    if (ok == 1)
    {
        char* dbid = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
        DNF_LOG_SCOPE_LINE(0x8a5,"./log/User", "[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n", dbid,
            (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v);
    }
    else
    {
        char* dbid = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
        DNF_LOG_SCOPE_LINE(0x8a1,"./log/User",
            "[DELETE_ERR_] CPacketTranslater::OnLogoutComplete m_id : %s\tChannel No : %d\n",
            dbid, (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v);
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnLogoutComplete() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x8aa, "./log/Except", "CPacketTranslater::OnLogoutComplete() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnLogoutComplete() Exception Break");
        DNF_LOG_SCOPE_LINE(0x8b0, "./log/Except", "CPacketTranslater::OnLogoutComplete() Exception Break\n");
    }
}
```
