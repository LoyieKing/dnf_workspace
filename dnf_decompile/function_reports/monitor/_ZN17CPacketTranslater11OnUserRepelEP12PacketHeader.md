# _ZN17CPacketTranslater11OnUserRepelEP12PacketHeader

`CPacketTranslater::OnUserRepel(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8083aec` | `0x2ea` | `0x806f1c8` | `0x2e4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,207 +1,203 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0xdf>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnUserRepel : 0 == m_pclApp",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0xa4>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x1d4>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%ebx
 movl   $0x954,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnUserRepelEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnUserRepel m_id(%s) , charNo(%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2de>
-mov    -0x24(%ebp),%eax
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x197>
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x1a4>
+je     <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x190>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x197>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x19c>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2dc>
+mov    0x8(%ebp),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e1>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    -0x24(%ebp),%edx
-mov    %eax,0xa(%edx)
-mov    -0x24(%ebp),%eax
+mov    %eax,0xa(%ebx)
+mov    0x8(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2dc>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x276>
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
 movl   $"CPacketTranslater::OnUserRepel Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x969,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnUserRepelEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUserRepel Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x26f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2dc>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnUserRepel Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x96f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnUserRepelEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnUserRepel Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2d7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
-nop
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
-nop
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnUserRepel(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader(PacketHeader *param_1)

{
  CDNFException *this;
  undefined4 uVar1;
  undefined4 uVar2;
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [24];
  CUser *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp != 0) {
    local_28 = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0xe);
    uVar1 = NumberToString(*(uint *)(param_1 + 10),0);
    CMyFileLog::CMyFileLog(local_44,"OnUserRepel",0x954);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/Web","CPacketTranslater::OnUserRepel m_id(%s) , charNo(%d)\n",uVar1,
               uVar2);
    local_24 = m_pclApp + 0x10;
    local_2c = (CUser *)CUserManager::FindUser(local_24);
    if ((local_2c != (CUser *)0x0) &&
       ((*(int *)(local_28 + 0xe) == 0 ||
        (local_2c = (CUser *)CUserManager::FindUser_CharNo(local_24), local_2c != (CUser *)0x0)))) {
      uVar2 = CUser::GetIdByChannel(local_2c);
      *(undefined4 *)(local_28 + 10) = uVar2;
      CUser::SendToGameserver(local_2c,(char *)local_28,0x12);
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08083b22 to 08083b26 has its CatchHandler @ 08083b90 */
  std::string::string(local_4c,"CPacketTranslater::OnUserRepel : 0 == m_pclApp",&local_45);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08083b41 to 08083b45 has its CatchHandler @ 08083b48 */
  CDNFException::CDNFException(this,local_4c);
                    /* try { // try from 08083b7f to 08083b83 has its CatchHandler @ 08083b86 */
  std::string::~string(local_4c);
  std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08083bc6 to 08083cba has its CatchHandler @ 08083cc0 */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1759 行）：

```cpp
void CPacketTranslater::OnUserRepel(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnUserRepel : 0 == m_pclApp");
    }
    char* dbid = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
    DNF_LOG_SCOPE_LINE(0x954,"./log/Web", "CPacketTranslater::OnUserRepel m_id(%s) , charNo(%d)\n", dbid,
        ((RA_UINT<14>*)pkt)->v);
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    CUser* user = userMgr->FindUser(((RA_UINT<10>*)pkt)->v);
    if (user != 0 &&
        (((RA_UINT<14>*)pkt)->v == 0 ||
         (user = userMgr->FindUser_CharNo(((RA_UINT<14>*)pkt)->v)) != 0))
    {
        ((RA_UINT<10>*)pkt)->v = user->GetIdByChannel();
        user->SendToGameserver((char*)pkt, 0x12);
    }


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnUserRepel Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x969, "./log/Except", "CPacketTranslater::OnUserRepel Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnUserRepel Exception Break");
        DNF_LOG_SCOPE_LINE(0x96f, "./log/Except", "CPacketTranslater::OnUserRepel Exception Break\n");
    }
}
```
