# _ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader

`CPacketTranslater::OnRegisterToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807da5a` | `0x2e7` | `0x8073e4a` | `0x2d0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,206 +1,195 @@
-push   %ebp
-mov    %esp,%ebp
-push   %esi
-push   %ebx
-add    $0xffffff80,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x52>
 movl   $0xe8f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
-lea    -0x74(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
+lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DBMW_Register_To_BlackListC1Ev>
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x6a(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x6e(%ebp)
+mov    -0x1c(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x74(%ebp),%eax
+lea    -0x78(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0xea>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0xe5>
 movl   $0xe9f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
-mov    -0x10(%ebp),%eax
-lea    0xe(%eax),%ebx
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %ebx,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2d9>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x123>
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16GetBlackListSizeEv>
 cmp    $0x9,%eax
-setg   %al
+jg     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x123>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x128>
+mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2dc>
-lea    -0x29(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x10(%ebp),%eax
-lea    0xe(%eax),%edx
-lea    -0x29(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x30(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x10(%eax),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %bl
-lea    -0x30(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x1ac>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x1a5>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x197>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x190>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x29(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x201>
-lea    -0x29(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x1f3>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
 mov    -0x10(%ebp),%eax
-lea    0xe(%eax),%ebx
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x14(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser19RegisterToBlackListEjPc>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2df>
-mov    -0x18(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x48(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27d>
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x26f>
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
 movl   $0xed1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRegisterToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x276>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x268>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c9>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xed6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2d2>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2c4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
-nop
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
-nop
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x2e0>
-nop
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
+push   %ebp
+mov    %esp,%ebp
+push   %esi
+push   %ebx
+add    $0xffffff80,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRegisterToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  char cVar2;
  char *__s1;
  int iVar3;
  uint uVar4;
  bool bVar5;
  Packet_DBMW_Register_To_BlackList local_78 [10];
  undefined4 local_6e;
  undefined1 auStack_6a [38];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  string local_34 [7];
  allocator local_2d [17];
  CUser *local_1c;
  CUser *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 0807da87 to 0807db78 has its CatchHandler @ 0807dc5b */
    CMyFileLog::CMyFileLog(local_44,"OnRegisterToBlackList",0xe8f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/BlackList","CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp"
              );
  }
  else {
    Packet_DBMW_Register_To_BlackList::Packet_DBMW_Register_To_BlackList(local_78);
    local_6e = *(undefined4 *)(local_14 + 10);
    memcpy(auStack_6a,local_14 + 0xe,0x1d);
    local_18 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_3c,"OnRegisterToBlackList",0xe9f);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/BlackList",
                 "CPacketTranslater::OnRegisterToBlackList : 0 == pclUser");
    }
    else {
      pPVar1 = local_14 + 0xe;
      __s1 = (char *)CUser::GetCharName(local_18);
      iVar3 = strcmp(__s1,(char *)pPVar1);
      if ((iVar3 != 0) && (iVar3 = CUser::GetBlackListSize(local_18), iVar3 < 10)) {
        std::allocator<char>::allocator();
                    /* try { // try from 0807dba9 to 0807dbad has its CatchHandler @ 0807dbf1 */
        std::string::string(local_34,(char *)(local_14 + 0xe),local_2d);
                    /* try { // try from 0807dbc0 to 0807dbc4 has its CatchHandler @ 0807dbdc */
        local_1c = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_34);
        bVar5 = local_1c != (CUser *)0x0;
                    /* try { // try from 0807dbd5 to 0807dbd9 has its CatchHandler @ 0807dbf1 */
        std::string::~string(local_34);
        std::allocator<char>::~allocator((allocator<char> *)local_2d);
        if (bVar5) {
          pPVar1 = local_14 + 0xe;
          uVar4 = CUser::GetUniqCharNo(local_1c);
                    /* try { // try from 0807dc38 to 0807dc3c has its CatchHandler @ 0807dc5b */
          cVar2 = CUser::RegisterToBlackList(local_18,uVar4,(char *)pPVar1);
          if (cVar2 == '\x01') {
            CUser::GetUniqCharNo(local_1c);
          }
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2841 行）：

```cpp
void CPacketTranslater::OnRegisterToBlackList(PacketHeader* pkt)
{
    try
    {
    Packet_Register_To_BlackList* pb = (Packet_Register_To_BlackList*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xe8f, "./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp");
        return;
    }
    Packet_DBMW_Register_To_BlackList dbPkt;
    dbPkt.m_dbid = pb->m_dbid;
    memcpy(dbPkt.m_name, pb->m_name, 0x1d);
    CUser* requester = (&m_pclApp->m_userManager)->FindUser(pb->m_dbid);
    if (requester == 0)
    {
        DNF_LOG_SCOPE_LINE(0xe9f, "./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == pclUser");
        return;
    }
    char* targetName = pb->m_name;
    if (strcmp(requester->GetCharName(), targetName) != 0 && requester->GetBlackListSize() < 10)
    {
        CUser* target = (&m_pclApp->m_userManager)->FindUser_CharName(targetName);
        if (target != 0)
        {
            if (requester->RegisterToBlackList(target->GetUniqCharNo(), targetName) == 1)
            {
                target->GetUniqCharNo();
            }
        }
    }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xed1, "./log/Except", "CPacketTranslater::OnRegisterToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xed6, "./log/Except", "CPacketTranslater::OnRegisterToBlackList Exception Break\n");
    }
}
```
