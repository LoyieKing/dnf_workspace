# _ZN17ChannelServiceApp14ChannelService25onCS_CHECK_SCRIPT_VERSIONEP15tagPacketHeaderPNS_7TCPUserE

`ChannelServiceApp::ChannelService::onCS_CHECK_SCRIPT_VERSION(tagPacketHeader*, ChannelServiceApp::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x805029c` | `0x332` | `0x8061a4a` | `0x330` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,209 +1,208 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x24c,%esp
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"In  ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_CHECK_SCRIPT_VERSION",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0xc(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 lea    -0x43(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26tagCS_CHECK_SCRIPT_VERSIONC1Ev>
 lea    -0x62(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26tagSC_CHECK_SCRIPT_VERSIONC1Ev>
 lea    -0x62(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8setAckOkEv>
 mov    0x8(%ebp),%eax
 add    $0x1d0275c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp10EncyptTool9getEncIncEv>
 mov    %eax,%ebx
 mov    (%ebx),%eax
 add    $0x10,%eax
-mov    (%eax),%edi
+mov    (%eax),%eax
+mov    %eax,-0x23c(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader7getSizeEv>
 sub    $0xb,%eax
-mov    %eax,-0x23c(%ebp)
+mov    %eax,%edi
 lea    -0x43(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8_getDataEv>
 mov    %eax,%esi
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8_getDataEv>
-mov    -0x23c(%ebp),%edx
-mov    %edx,0xc(%esp)
+mov    %edi,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
-call   *%edi
+call   *-0x23c(%ebp)
 lea    -0xfc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EEC1Ev>
 lea    -0xfc(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 lea    -0x194(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EEC1Ev>
 lea    -0x22c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EEC1Ev>
 lea    -0x194(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 call   <T> <_Z12G_ScriptDatav>
 add    $0x19,%eax
 lea    -0x43(%ebp),%edx
 add    $0xb,%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp14ChannelService25onCS_CHECK_SCRIPT_VERSIONEP15tagPacketHeaderPNS_7TCPUserE+0x14e>
 lea    -0x62(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8setAckOkEv>
 movl   $0x1,-0x57(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService25onCS_CHECK_SCRIPT_VERSIONEP15tagPacketHeaderPNS_7TCPUserE+0x160>
 lea    -0x62(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8setAckOkEv>
 movl   $0x0,-0x57(%ebp)
 call   <T> <_Z12G_ScriptDatav>
 add    $0x19,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,%ebx
 call   <T> <_Z12G_ScriptDatav>
 add    $0x19,%eax
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x62(%ebp),%eax
 add    $0xf,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 call   <T> <_Z12G_ScriptDatav>
 add    $0x19,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 movb   $0x0,-0x53(%ebp,%eax,1)
 lea    -0x62(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsEP15tagPacketHeader>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
-lea    -0x22c(%ebp),%esi
+lea    -0x22c(%ebp),%ebx
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell7GetSizeEv>
-sub    $0xb,%eax
-mov    %eax,%ebx
+lea    -0xb(%eax),%esi
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 lea    0xb(%eax),%edx
 mov    0x8(%ebp),%eax
 add    $0x1d0275c,%eax
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
+mov    %ebx,0xc(%esp)
+mov    %esi,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp10EncyptTool11wrapEncryptEPciS1_>
 mov    %eax,-0x1c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 movl   $0xb,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 lea    -0x22c(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser14onWrite2BufferEP8CMsgCell>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Out ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_CHECK_SCRIPT_VERSION",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x1,%ebx
 lea    -0x22c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EED1Ev>
 lea    -0x194(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EED1Ev>
 lea    -0xfc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EED1Ev>
 mov    %ebx,%eax
 add    $0x24c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x22c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x194(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xfc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi128EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: DWORD onCS_CHECK_SCRIPT_VERSION(ChannelService * this, LPPACKET_HEADER
   pPCK, TCPUser * u) */

DWORD __thiscall
ChannelServiceApp::ChannelService::
_ZN17ChannelServiceApp14ChannelService25onCS_CHECK_SCRIPT_VERSIONEP15tagPacketHeaderPNS_7TCPUserE
          (ChannelService *this,LPPACKET_HEADER pPCK,TCPUser *u)

{
  _func_int_varargs *p_Var1;
  TDebugTrace<char> *pTVar2;
  CRijndael *pCVar3;
  int iVar4;
  LPBYTE puVar5;
  LPBYTE puVar6;
  ScriptData *pSVar7;
  size_t sVar8;
  code *__in_chrg;
  TMsgCell<128> local_230;
  TMsgCell<128> local_198;
  TMsgCell<128> local_100;
  tagSC_CHECK_SCRIPT_VERSION local_66;
  tagCS_CHECK_SCRIPT_VERSION local_47;
  LPPACKET_HEADER local_2c;
  TMsgCell<128> *local_28;
  TMsgCell<128> *local_24;
  int local_20;
  
                    /* Unresolved local var: LPPCK_CS_CHECK_SCRIPT_VERSION _pEPCK@[???]
                       Unresolved local var: PCK_CS_CHECK_SCRIPT_VERSION _DPCK@[???]
                       Unresolved local var: PCK_SC_CHECK_SCRIPT_VERSION pck@[???]
                       Unresolved local var: CMsgCell * pMsg@[???]
                       Unresolved local var: MSGCELL128 buffer@[???]
                       Unresolved local var: CMsgCell * encMsg@[???]
                       Unresolved local var: MSGCELL128 encbuffer@[???]
                       Unresolved local var: MSGCELL128 tmpbuffer@[???]
                       Unresolved local var: int enc_len@[???] */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar2 = TDebugTrace<char>::operator<<(&gFileLogInfo,"In  ");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,"onCS_CHECK_SCRIPT_VERSION");
  TDebugTrace<char>::operator<<(pTVar2,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  local_2c = pPCK;
  tagCS_CHECK_SCRIPT_VERSION::tagCS_CHECK_SCRIPT_VERSION(&local_47);
  tagSC_CHECK_SCRIPT_VERSION::tagSC_CHECK_SCRIPT_VERSION(&local_66);
  tagPacketHeader::setAckOk(&local_66.super_tagPacketHeader);
  pCVar3 = EncyptTool::getEncInc(&this->super_EncyptTool);
  p_Var1 = (pCVar3->super_IMethod)._vptr_IMethod[4];
  iVar4 = tagPacketHeader::getSize(local_2c);
  puVar5 = tagPacketHeader::_getData(&local_47.super_tagPacketHeader);
  puVar6 = tagPacketHeader::_getData(local_2c);
  (*p_Var1)(pCVar3,puVar6,puVar5,iVar4 + -0xb);
  TMsgCell<128>::TMsgCell(&local_100);
  local_28 = &local_100;
  TMsgCell<128>::TMsgCell(&local_198);
  TMsgCell<128>::TMsgCell(&local_230);
  local_24 = &local_198;
                    /* try { // try from 080503b3 to 08050547 has its CatchHandler @ 08050584 */
  pSVar7 = G_ScriptData();
  iVar4 = strcmp(pSVar7->channel_script_version,local_47.channel_script_version);
  if (iVar4 != 0) {
    tagPacketHeader::setAckOk(&local_66.super_tagPacketHeader);
  }
  else {
    tagPacketHeader::setAckOk(&local_66.super_tagPacketHeader);
  }
  local_66.is_valid_version = (int)(iVar4 == 0);
  pSVar7 = G_ScriptData();
  sVar8 = strlen(pSVar7->channel_script_version);
  pSVar7 = G_ScriptData();
  strncpy(local_66.channel_script_version,pSVar7->channel_script_version,sVar8);
  pSVar7 = G_ScriptData();
  sVar8 = strlen(pSVar7->channel_script_version);
  local_66.channel_script_version[sVar8] = '\0';
  CMsgCell::operator<<(&local_28->super_CMsgCell,&local_66.super_tagPacketHeader);
  CMsgCell::PAD(&local_28->super_CMsgCell);
  iVar4 = CMsgCell::GetSize(&local_28->super_CMsgCell);
  puVar5 = CMsgCell::GetBuf(&local_28->super_CMsgCell);
  local_20 = EncyptTool::wrapEncrypt
                       (&this->super_EncyptTool,(char *)(puVar5 + 0xb),iVar4 + -0xb,
                        (char *)&local_230);
  puVar5 = CMsgCell::GetBuf(&local_28->super_CMsgCell);
  CMsgCell::AttachStream(&local_24->super_CMsgCell,(char *)puVar5,0xb);
  CMsgCell::AttachStream(&local_24->super_CMsgCell,(char *)&local_230,local_20);
  CMsgCell::PAD(&local_24->super_CMsgCell);
  TCPUser::onWrite2Buffer(u,&local_24->super_CMsgCell);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar2 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Out ");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,"onCS_CHECK_SCRIPT_VERSION");
  __in_chrg = endl<char>;
  TDebugTrace<char>::operator<<(pTVar2,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  TMsgCell<128>::~TMsgCell(&local_230,(int)__in_chrg);
  TMsgCell<128>::~TMsgCell(&local_198,(int)__in_chrg);
  TMsgCell<128>::~TMsgCell(&local_100,(int)__in_chrg);
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/ChannelService.cpp, source/ChannelOld/DNFChannelServer/ChannelService.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 288 个文件*
