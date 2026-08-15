# _ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader

`CPacketTranslater::OnUserRepelByCharName(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8083dd6` | `0x300` | `0x8073b64` | `0x2e8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,220 +1,214 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
-movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xed>
+je     <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x10c>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x2c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager8FindUserEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2dc>
+lea    -0x5e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN25Packet_Monitor_User_RepelC1Ev>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+mov    -0x28(%ebp),%eax
+lea    0x12(%eax),%edx
+lea    -0x45(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x4c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
+mov    %eax,-0x20(%ebp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xca>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xb2>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x1d2>
+lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2df>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x54(%ebp)
+lea    -0x5e(%ebp),%eax
+movl   $0x12,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2e0>
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnUserRepel : 0 == m_pclApp",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x9b>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x183>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x95>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x17d>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xb2>
+jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x19a>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xb2>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xca>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x19a>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x1af>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0xb2>
+jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x19a>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x1ea>
-lea    -0x45(%ebp),%eax
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x1d2>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2f4>
-lea    -0x5e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN25Packet_Monitor_User_RepelC1Ev>
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-mov    -0x24(%ebp),%eax
-lea    0x12(%eax),%edx
-lea    -0x3d(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %bl
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x1aa>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x195>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x1ea>
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2f7>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x54(%ebp)
-lea    -0x5e(%ebp),%eax
-movl   $0x12,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2f8>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x28c>
+jne    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x274>
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
 movl   $0x9a2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUserRepel Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x285>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x26d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2f8>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2e0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnUserRepel Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x9a8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnUserRepel Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2ed>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2d5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2f8>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2e0>
 nop
-jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2f8>
+jmp    <T> <_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader+0x2e0>
 nop
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnUserRepelByCharName(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnUserRepelByCharNameEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  bool bVar1;
  Packet_Monitor_User_Repel local_62 [10];
  undefined4 local_58;
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41 [17];
  int local_30;
  CUser *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  local_30 = 0;
  local_2c = (CUser *)0x0;
  if (m_pclApp != 0) {
    local_28 = param_1;
    local_24 = m_pclApp + 0x10;
    local_30 = CUserManager::FindUser(local_24);
    if (local_30 != 0) {
      Packet_Monitor_User_Repel::Packet_Monitor_User_Repel(local_62);
      std::allocator<char>::allocator();
                    /* try { // try from 08083f28 to 08083f2c has its CatchHandler @ 08083f6b */
      std::string::string(local_48,(char *)(local_28 + 0x12),local_41);
                    /* try { // try from 08083f3a to 08083f3e has its CatchHandler @ 08083f56 */
      local_2c = (CUser *)CUserManager::FindUser_CharName(local_24,local_48);
      bVar1 = local_2c != (CUser *)0x0;
                    /* try { // try from 08083f4f to 08083f53 has its CatchHandler @ 08083f6b */
      std::string::~string(local_48);
      std::allocator<char>::~allocator((allocator<char> *)local_41);
      if (bVar1) {
        local_58 = CUser::GetIdByChannel(local_2c);
                    /* try { // try from 08083fb6 to 08083fba has its CatchHandler @ 08083fc0 */
        CUser::SendToGameserver(local_2c,(char *)local_62,0x12);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08083e1a to 08083e1e has its CatchHandler @ 08083e88 */
  std::string::string(local_50,"CPacketTranslater::OnUserRepel : 0 == m_pclApp",&local_49);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08083e39 to 08083e3d has its CatchHandler @ 08083e40 */
  CDNFException::CDNFException(this,local_50);
                    /* try { // try from 08083e77 to 08083e7b has its CatchHandler @ 08083e7e */
  std::string::~string(local_50);
  std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08083ebe to 08083ee8 has its CatchHandler @ 08083fc0 */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3177 行）：

```cpp
void CPacketTranslater::OnUserRepelByCharName(PacketHeader* pkt)
{try
{


    if (m_pclApp != 0)
    {
        CUserManager* userMgr = &m_pclApp->m_userManager;
        Packet_Monitor_User_Repel_ByCharName* repel =
            (Packet_Monitor_User_Repel_ByCharName*)pkt;
        CUser* user = userMgr->FindUser(repel->m_dbid);
        if (user != 0)
        {
            Packet_Monitor_User_Repel reply;
            CUser* target = userMgr->FindUser_CharName(repel->m_name);
            if (target != 0)
            {
                reply.m_idByChannel = target->GetIdByChannel();
                target->SendToGameserver((char*)&reply, 0x12);
            }
        }
        return;
    }
    throw CDNFException("CPacketTranslater::OnUserRepel : 0 == m_pclApp");


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnUserRepel Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x9a2, "./log/Except", "CPacketTranslater::OnUserRepel Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnUserRepel Exception Break");
        DNF_LOG_SCOPE_LINE(0x9a8, "./log/Except", "CPacketTranslater::OnUserRepel Exception Break\n");
    }
}
```
