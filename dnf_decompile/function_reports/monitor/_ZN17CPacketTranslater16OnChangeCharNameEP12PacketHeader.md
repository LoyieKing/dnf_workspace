# _ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader

`CPacketTranslater::OnChangeCharName(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8089824` | `0x3c4` | `0x8074e56` | `0x3d1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,269 +1,271 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x90,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x4f>
 movl   $0x133d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeGuildName : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3ba>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3c7>
+mov    0x8(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
 lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_DBMW_Change_Char_NameC1Ev>
+lea    -0x81(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x77(%ebp)
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x76(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %al,0xa(%ebx)
+lea    -0x81(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0xe(%edx),%edx
+mov    %edx,0xb(%eax)
+mov    0x8(%ebp),%eax
 add    $0x16,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x81(%ebp),%eax
 add    $0xf,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x81(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    %eax,-0x14(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x16,%eax
+mov    %eax,0x8(%esp)
 mov    -0x18(%ebp),%eax
-lea    0x16(%eax),%esi
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_UserManagerEv>
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager23ChangeBlackListCharNameEjPc>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x50(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEEC1Ev>
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x300(%edx),%ecx
-lea    -0x50(%ebp),%edx
+lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN21CBuddyRegisterManager17findBuddyRegisterEjRSt6vectorIjSaIjEE>
-lea    -0x54(%ebp),%eax
-lea    -0x50(%ebp),%edx
+lea    -0x50(%ebp),%eax
+lea    -0x48(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1ff>
-lea    -0x54(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x20a>
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEdeEv>
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1f4>
-lea    -0x31(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1ff>
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x16(%eax),%edx
-lea    -0x31(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1b3>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2cc>
+lea    -0x2e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
-lea    -0x38(%ebp),%edx
+lea    -0x54(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SetBuddyCharNameEiRKSs>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1c4>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1d1>
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1e9>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2cf>
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x1f4>
+mov    %edx,%ebx
+mov    %eax,%esi
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2cc>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEppEv>
-lea    -0x3c(%ebp),%eax
-lea    -0x50(%ebp),%edx
+lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE3endEv>
 sub    $0x4,%esp
-lea    -0x3c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x13c>
-lea    -0x29(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x149>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x16(%eax),%edx
-lea    -0x29(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x277>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2cc>
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    0x8(%ebp),%eax
 mov    0xe(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication21Get_MemoryCashManagerEv>
-lea    -0x30(%ebp),%edx
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN18CMemoryCashManager23InsertUpdatedCharacNameEjRKSs>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x292>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x29f>
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2b4>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2cf>
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-lea    -0x50(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2bf>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2cc>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2e1>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3ba>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x50(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2f1>
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x2e4>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3c7>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x360>
+jne    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x36d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1363,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnChangeCharName Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x359>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x366>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3ba>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3c7>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1368,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnChangeCharNameEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnChangeCharName Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3b5>
+jmp    <T> <_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader+0x3c2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnChangeCharName(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnChangeCharNameEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  uint uVar2;
  bool bVar3;
  CServerHandler *this;
  CUserManager *this_00;
  CMemoryCashManager *this_01;
  Packet_DBMW_Change_Char_Name local_85 [10];
  undefined1 local_7b;
  undefined4 local_7a;
  undefined1 auStack_76 [30];
  __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_58 [4];
  vector<unsigned_int,std::allocator<unsigned_int>> local_54 [12];
  CMyFileLog local_48 [8];
  __normal_iterator local_40 [4];
  string local_3c [7];
  allocator local_35;
  string local_34 [7];
  allocator local_2d [17];
  PacketHeader *local_1c;
  CApplication *local_18;
  CUser *local_14;
  
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0808984e to 08089920 has its CatchHandler @ 08089b08 */
    CMyFileLog::CMyFileLog(local_48,"OnChangeCharName",0x133d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Except","CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
  }
  else {
    local_1c = param_1;
    Packet_DBMW_Change_Char_Name::Packet_DBMW_Change_Char_Name(local_85);
    local_7b = CApplication::Get_ServerGroup(m_pclApp);
    local_7a = *(undefined4 *)(local_1c + 0xe);
    memcpy(auStack_76,local_1c + 0x16,0x1d);
    this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::SendToDB(this,(PacketHeader *)local_85);
    pPVar1 = local_1c + 0x16;
    uVar2 = *(uint *)(local_1c + 0xe);
    this_00 = (CUserManager *)CApplication::Get_UserManager(m_pclApp);
    CUserManager::_ZN12CUserManager23ChangeBlackListCharNameEjPc(this_00,uVar2,(char *)pPVar1);
    local_18 = m_pclApp + 0x10;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_54);
                    /* try { // try from 08089941 to 0808997b has its CatchHandler @ 08089af3 */
    CBuddyRegisterManager::findBuddyRegister
              ((CBuddyRegisterManager *)(m_pclApp + 0x300),*(uint *)(local_1c + 0xe),
               (vector *)local_54);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    while( true ) {
                    /* try { // try from 08089a30 to 08089a49 has its CatchHandler @ 08089af3 */
      std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
      bVar3 = __gnu_cxx::operator!=(local_58,local_40);
      if (!bVar3) break;
      __gnu_cxx::
      __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
      operator*(local_58);
      local_14 = (CUser *)CUserManager::FindUser_CharNo((uint)local_18);
      if (local_14 != (CUser *)0x0) {
        std::allocator<char>::allocator();
                    /* try { // try from 080899b0 to 080899b4 has its CatchHandler @ 080899f5 */
        std::string::string(local_3c,(char *)(local_1c + 0x16),&local_35);
                    /* try { // try from 080899cc to 080899d0 has its CatchHandler @ 080899d3 */
        CUser::SetBuddyCharName(local_14,*(int *)(local_1c + 0xe),local_3c);
                    /* try { // try from 080899ee to 080899f2 has its CatchHandler @ 080899f5 */
        std::string::~string(local_3c);
        std::allocator<char>::~allocator((allocator<char> *)&local_35);
      }
      __gnu_cxx::
      __normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
      operator++(local_58);
    }
    std::allocator<char>::allocator();
                    /* try { // try from 08089a74 to 08089a78 has its CatchHandler @ 08089ac3 */
    std::string::string(local_34,(char *)(local_1c + 0x16),local_2d);
    uVar2 = *(uint *)(local_1c + 0xe);
    this_01 = (CMemoryCashManager *)
              CApplication::_ZN12CApplication21Get_MemoryCashManagerEv(m_pclApp);
                    /* try { // try from 08089a9a to 08089a9e has its CatchHandler @ 08089aa1 */
    CMemoryCashManager::InsertUpdatedCharacName(this_01,uVar2,local_34);
                    /* try { // try from 08089abc to 08089ac0 has its CatchHandler @ 08089ac3 */
    std::string::~string(local_34);
    std::allocator<char>::~allocator((allocator<char> *)local_2d);
                    /* try { // try from 08089ae9 to 08089aed has its CatchHandler @ 08089b08 */
    std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_54);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3374 行）：

```cpp
void CPacketTranslater::OnChangeCharName(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x133d, "./log/Except", "CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
        }
        else
        {
            PacketHeader* rpkt = pkt;
            Packet_DBMW_Change_Char_Name pkt2;
            ((RA_S8<10>*)&pkt2)->v = (char)m_pclApp->Get_ServerGroup();
            ((RA_UINT<11>*)&pkt2)->v = ((RA_UINT<14>*)pkt)->v;
            memcpy((char*)&pkt2 + 0xf, (char*)pkt + 0x16, 0x1d);
            m_pclApp->Get_ServerHandler()->SendToDB(&pkt2);
            unsigned int dbid = ((RA_UINT<14>*)pkt)->v;
            CUserManager* userMgr = m_pclApp->Get_UserManager();
            userMgr->ChangeBlackListCharName(dbid, (char*)pkt + 0x16);
            std::vector<unsigned int> vec;
            ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                ->findBuddyRegister(((RA_UINT<14>*)pkt)->v, vec);
            for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end(); ++it)
            {
                CUser* user = userMgr->FindUser_CharNo(*it);
                if (user != 0)
                {
                    std::string name((char*)pkt + 0x16);
                    user->SetBuddyCharName(((RA_INT<14>*)pkt)->v, name);
                }
            }
            std::string name2((char*)pkt + 0x16);
            ((CMemoryCashManager*)m_pclApp->Get_MemoryCashManager())->InsertUpdatedCharacName(
                ((RA_UINT<14>*)pkt)->v, name2);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1363,"./log/Except", "CPacketTranslater::OnChangeCharName Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1368, "./log/Except", "CPacketTranslater::OnChangeCharName Exception Break\n");
    }
}
```
