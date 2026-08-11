# _ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE

`ChannelServiceApp::ChannelService::onCS_GET_SCRIPT(tagPacketHeader*, ChannelServiceApp::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x80505ce` | `0x48f` | `0x80600a0` | `0x48b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,294 +1,292 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x22c0b0,%esp
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"In  ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_GET_SCRIPT",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16tagSC_GET_SCRIPTC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFromFileEv>
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
 add    -0x28(%ebp),%eax
 movb   $0x0,(%eax)
 lea    -0x64050(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EEC1Ev>
 lea    -0xc8068(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EEC1Ev>
 lea    -0x22c098(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi1048576EEC1Ev>
 lea    -0x12c080(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EEC1Ev>
 lea    -0x64050(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 lea    -0xc8068(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 lea    -0x12c080(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader8setAckOkEv>
 lea    -0x33(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsEP15tagPacketHeader>
 lea    -0x33(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsEP15tagPacketHeader>
 lea    -0x33(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCelllsEP15tagPacketHeader>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0x18(%ebp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
 mov    %eax,%ebx
 movl   $"Script File Size = ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEj>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Script File len = ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
 cmp    -0x18(%ebp),%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x285>
+je     <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x283>
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
 cmp    -0x18(%ebp),%eax
 setg   %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x285>
-mov    0x8(%ebp),%eax
-add    $0x1c0273c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
-mov    -0x18(%ebp),%edx
-sub    %edx,%eax
+je     <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x283>
+mov    0x8(%ebp),%eax
+add    $0x1c0273c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
+sub    -0x18(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x278>
+jmp    <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x276>
 mov    -0xc(%ebp),%eax
 mov    -0x18(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 add    $0x1,%eax
 add    -0x28(%ebp),%eax
 movb   $0x20,(%eax)
 mov    -0xc(%ebp),%eax
 mov    -0x18(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 lea    0x1(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
 cmp    %eax,%ebx
 sete   %al
 test   %al,%al
-je     <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x274>
+je     <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x272>
 mov    -0xc(%ebp),%eax
 mov    -0x18(%ebp),%edx
 lea    (%edx,%eax,1),%eax
 add    $0x1,%eax
 add    -0x28(%ebp),%eax
 movb   $0x0,(%eax)
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x10(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x22b>
+jne    <T> <_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x229>
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript17getScriptFileSizeEv>
 mov    %eax,0x8(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
-lea    -0x22c098(%ebp),%esi
+lea    -0x22c098(%ebp),%ebx
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
 mov    %eax,-0x14(%ebp)
 lea    -0x22c098(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
 mov    -0x14(%ebp),%eax
 add    $0xd,%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x14(%ebp),%ebx
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK8CMsgCell6GetBufEv>
 lea    0xb(%eax),%edx
 lea    -0x22c098(%ebp),%eax
 movl   $0xffffffff,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 lea    -0x38(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <compress2>
 mov    -0x38(%ebp),%eax
 mov    %eax,%edx
 lea    -0x22c098(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell12AttachStreamEPci>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CMsgCell3PADEv>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser14onWrite2BufferEP8CMsgCell>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Out ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onCS_GET_SCRIPT",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x1,%ebx
 lea    -0x12c080(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EED1Ev>
 lea    -0x22c098(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi1048576EED1Ev>
 lea    -0xc8068(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EED1Ev>
 lea    -0x64050(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EED1Ev>
 mov    %ebx,%eax
 add    $0x22c0b0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x12c080(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x22c098(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi1048576EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xc8068(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x64050(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TMsgCellILi409600EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: DWORD onCS_GET_SCRIPT(ChannelService * this, LPPACKET_HEADER pPCK,
   TCPUser * u) */

DWORD __thiscall
ChannelServiceApp::ChannelService::
_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE
          (ChannelService *this,LPPACKET_HEADER pPCK,TCPUser *u)

{
  TDebugTrace<char> *pTVar1;
  uint uVar2;
  int iVar3;
  LPBYTE puVar4;
  code *__in_chrg;
  TMsgCell<409600> TStack_c806c;
  TMsgCell<409600> TStack_64054;
  tagPacketHeader local_37;
  char *local_2c;
  TMsgCell<409600> *local_28;
  TMsgCell<409600> *local_24;
  CMsgCell *local_20;
  size_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: PCK_SC_GET_SCRIPT pck@[???]
                       Unresolved local var: char * script@[???]
                       Unresolved local var: uint CompressLen@[???]
                       Unresolved local var: CMsgCell * pMsg@[???]
                       Unresolved local var: MSGCELL400K buffer@[???]
                       Unresolved local var: CMsgCell * encMsg@[???]
                       Unresolved local var: MSGCELL400K encbuffer@[???]
                       Unresolved local var: MSGCELL1M tmpbuffer@[???]
                       Unresolved local var: CMsgCell * zipMsg@[???]
                       Unresolved local var: MSGCELL400K zipbuffer@[???]
                       Unresolved local var: int len@[???]
                       Unresolved local var: int enc_len@[???] */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar1 = TDebugTrace<char>::operator<<(&gFileLogInfo,"In  ");
  pTVar1 = TDebugTrace<char>::operator<<(pTVar1,"onCS_GET_SCRIPT");
  TDebugTrace<char>::operator<<(pTVar1,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  tagSC_GET_SCRIPT::tagSC_GET_SCRIPT((tagSC_GET_SCRIPT *)&local_37);
  local_2c = ChannelScript::getScriptFromFile(&this->super_ChannelScript);
  uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
  local_2c[uVar2] = '\0';
  TMsgCell<409600>::TMsgCell(&TStack_64054);
  TMsgCell<409600>::TMsgCell(&TStack_c806c);
  TMsgCell<1048576>::TMsgCell((TMsgCell<1048576> *)&stack0xffdd3f64);
  TMsgCell<409600>::TMsgCell((TMsgCell<409600> *)&stack0xffed3f7c);
  local_28 = &TStack_64054;
  local_24 = &TStack_c806c;
  local_20 = (CMsgCell *)&stack0xffed3f7c;
  tagPacketHeader::setAckOk(&local_37);
  CMsgCell::operator<<(&local_28->super_CMsgCell,&local_37);
  CMsgCell::operator<<(&local_24->super_CMsgCell,&local_37);
  CMsgCell::operator<<(local_20,&local_37);
  local_1c = strlen(local_2c);
                    /* try { // try from 08050702 to 080509b3 has its CatchHandler @ 080509fd */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
  pTVar1 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Script File Size = ");
  pTVar1 = TDebugTrace<char>::operator<<(pTVar1,uVar2);
  TDebugTrace<char>::operator<<(pTVar1,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar1 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Script File len = ");
  pTVar1 = TDebugTrace<char>::operator<<(pTVar1,local_1c);
  TDebugTrace<char>::operator<<(pTVar1,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
  if (uVar2 != local_1c) {
    uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
    if ((int)local_1c < (int)uVar2) {
                    /* Unresolved local var: int remain@[???] */
      uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
      local_14 = uVar2 - local_1c;
                    /* Unresolved local var: int i@[???] */
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        local_2c[local_1c + local_10 + 1] = ' ';
        iVar3 = local_1c + local_10;
        uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
        if (iVar3 + 1U == uVar2) {
          local_2c[local_1c + local_10 + 1] = '\0';
        }
      }
    }
  }
  uVar2 = ChannelScript::getScriptFileSize(&this->super_ChannelScript);
  CMsgCell::AttachStream(&local_28->super_CMsgCell,local_2c,uVar2);
  CMsgCell::PAD(&local_28->super_CMsgCell);
  iVar3 = CMsgCell::GetSize(&local_28->super_CMsgCell);
  puVar4 = CMsgCell::GetBuf(&local_28->super_CMsgCell);
  local_18 = EncyptTool::wrapEncrypt
                       (&this->super_EncyptTool,(char *)(puVar4 + 0xb),iVar3 + -0xb,&stack0xffdd3f64
                       );
  CMsgCell::AttachStream(&local_24->super_CMsgCell,&stack0xffdd3f64,local_18);
  CMsgCell::PAD(&local_24->super_CMsgCell);
  iVar3 = local_18 + 0xd;
  CMsgCell::GetBuf(&local_24->super_CMsgCell);
  compress2();
  CMsgCell::AttachStream(local_20,&stack0xffdd3f64,iVar3);
  CMsgCell::PAD(local_20);
  TCPUser::onWrite2Buffer(u,local_20);
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar1 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Out ");
  pTVar1 = TDebugTrace<char>::operator<<(pTVar1,"onCS_GET_SCRIPT");
  __in_chrg = endl<char>;
  TDebugTrace<char>::operator<<(pTVar1,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  TMsgCell<409600>::~TMsgCell((TMsgCell<409600> *)&stack0xffed3f7c,(int)__in_chrg);
  TMsgCell<1048576>::~TMsgCell((TMsgCell<1048576> *)&stack0xffdd3f64,(int)__in_chrg);
  TMsgCell<409600>::~TMsgCell(&TStack_c806c,(int)__in_chrg);
  TMsgCell<409600>::~TMsgCell(&TStack_64054,(int)__in_chrg);
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/ChannelService.cpp, source/ChannelOld/DNFChannelServer/ChannelService.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 288 个文件*
