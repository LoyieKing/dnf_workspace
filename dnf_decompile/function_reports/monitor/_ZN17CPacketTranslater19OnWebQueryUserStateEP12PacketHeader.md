# _ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader

`CPacketTranslater::OnWebQueryUserState(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8085164` | `0x2c3` | `0x806fd12` | `0x2dc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,194 +1,201 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x41>
-mov    -0x28(%ebp),%eax
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x42>
+mov    0x8(%ebp),%eax
 movb   $0x0,0x12(%eax)
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x48>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x49>
+mov    0x8(%ebp),%eax
 movb   $0x1,0x12(%eax)
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x12(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5a>
-mov    $"true",%ebx
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5f>
-mov    $"false",%ebx
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5b>
+mov    $"true",%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x60>
+mov    $"false",%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
-mov    %eax,%esi
+mov    %eax,-0x28(%ebp)
 movl   $0xb78,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"WebQueryUserState Result[m_id: %s] : [%s] : %d\n",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x28(%ebp),%eax
-mov    0x6(%eax),%edi
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
 movzwl 0x4(%eax),%eax
-movzwl %ax,%esi
-mov    -0x28(%ebp),%ebx
+mov    %ax,-0x1e(%ebp)
+movzwl -0x1e(%ebp),%esi
+mov    0x8(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14Get_UdpHandlerEv>
-mov    %edi,0x14(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0x14(%esp)
 movl   $0x0,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $0x13,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2bb>
-lea    -0x39(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2d4>
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
-lea    -0x39(%ebp),%edx
+lea    -0x45(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x186>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19f>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x180>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x199>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1b6>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1b6>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1b2>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1cb>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1b6>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1d5>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1ee>
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x259>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x272>
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
 mov    %eax,%ebx
 movl   $0xb7f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x252>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x26b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2bb>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2d4>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xb84,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $&_ZZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2b6>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2cf>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x5c,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebQueryUserState(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  uint uVar2;
  PacketHeader *pPVar3;
  char cVar4;
  undefined4 uVar5;
  CUdpHandler *this;
  int *piVar6;
  CDNFException *this_00;
  char *pcVar7;
  CMyFileLog local_4c [8];
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CApplication *local_28;
  int local_24;
  
  local_2c = param_1;
  local_28 = m_pclApp + 0x10;
                    /* try { // try from 0808518e to 0808525c has its CatchHandler @ 08085339 */
  local_24 = CUserManager::FindUser((uint)local_28);
  if (local_24 == 0) {
    local_2c[0x12] = (PacketHeader)0x0;
  }
  else {
    local_2c[0x12] = (PacketHeader)0x1;
  }
  if (local_2c[0x12] == (PacketHeader)0x1) {
    pcVar7 = "true";
  }
  else {
    pcVar7 = "false";
  }
  uVar5 = NumberToString(*(uint *)(local_2c + 10),0);
  CMyFileLog::CMyFileLog(local_4c,"OnWebQueryUserState",0xb78);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_4c,"./log/User","WebQueryUserState Result[m_id: %s] : [%s] : %d\n",uVar5,pcVar7);
  pPVar3 = local_2c;
  uVar2 = *(uint *)(local_2c + 6);
  uVar1 = *(ushort *)(local_2c + 4);
  this = (CUdpHandler *)CApplication::Get_UdpHandler(m_pclApp);
  cVar4 = CUdpHandler::SendToClient(this,(char *)pPVar3,0x13,uVar1,(char *)0x0,uVar2);
  if (cVar4 != '\x01') {
    std::allocator<char>::allocator();
    piVar6 = __errno_location();
    pcVar7 = strerror(*piVar6);
                    /* try { // try from 08085293 to 08085297 has its CatchHandler @ 08085301 */
    std::string::string(local_44,pcVar7,local_3d);
    this_00 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080852b2 to 080852b6 has its CatchHandler @ 080852b9 */
    CDNFException::CDNFException(this_00,local_44);
                    /* try { // try from 080852f0 to 080852f4 has its CatchHandler @ 080852f7 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08085334 to 08085338 has its CatchHandler @ 08085339 */
    __cxa_throw(this_00,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1903 行）：

```cpp
void CPacketTranslater::OnWebQueryUserState(PacketHeader* pkt)
{try
{


    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    int found = 0;
    if (userMgr->FindUser(((RA_UINT<10>*)pkt)->v) == 0)
    {
        ((RA_S8<18>*)pkt)->v = 0;
    }
    else
    {
        ((RA_S8<18>*)pkt)->v = 1;
    }
    const char* state = ((RA_S8<18>*)pkt)->v == 1 ? "true" : "false";
    char* dbid = NumberToString(((RA_UINT<10>*)pkt)->v, 0);
    DNF_LOG_SCOPE_LINE(0xb78, "./log/User", "WebQueryUserState Result[m_id: %s] : [%s] : %d\n", dbid, state);
    unsigned int addr = ((RA_UINT<6>*)pkt)->v;
    unsigned short port = ((RA_U16<4>*)pkt)->v;
    if (m_pclApp->Get_UdpHandler()->SendToClient((char*)pkt, 0x13, port, (char*)0, addr) != 1)
    {
        throw CDNFException(strerror(errno));
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xb7f, "./log/Except", "%s Exception Break : %s\n", __FUNCTION__, e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xb84, "./log/Except", "%s Exception Break\n", __FUNCTION__);
    }
}
```
