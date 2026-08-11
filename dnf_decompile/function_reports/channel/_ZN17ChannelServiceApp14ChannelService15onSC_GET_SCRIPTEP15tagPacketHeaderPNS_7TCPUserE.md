# _ZN17ChannelServiceApp14ChannelService15onSC_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE

`ChannelServiceApp::ChannelService::onSC_GET_SCRIPT(tagPacketHeader*, ChannelServiceApp::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x8050f82` | `0x172` | `0x805fb06` | `0x172` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,77 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"In  ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onSC_GET_SCRIPT",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0xc(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 movzbl &_ZN17ChannelServiceApp20bReadyToChangeScriptE,%eax
 test   %al,%al
 je     <T> <_ZN17ChannelServiceApp14ChannelService15onSC_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0x11f>
 movl   $"w+",0x4(%esp)
 movl   $"channel_info/channel_info.etc",(%esp)
 call   <T> <fopen>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN17ChannelServiceApp14ChannelService15onSC_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE+0xc0>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"[ERROR] : cannt open channel_script_version file",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15tagPacketHeader7getSizeEv>
-lea    -0xb(%eax),%ecx
-mov    -0x14(%ebp),%eax
-lea    0xb(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    %ecx,0x8(%esp)
+sub    $0xb,%eax
+mov    -0x14(%ebp),%edx
+lea    0xb(%edx),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
 call   <T> <fwrite>
 mov    %eax,-0xc(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fflush>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    0x8(%ebp),%eax
 add    $0x1c0273c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13ChannelScript12ReloadScriptEv>
 movb   $0x0,&_ZN17ChannelServiceApp20bReadyToChangeScriptE
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"Out ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $"onSC_GET_SCRIPT",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: DWORD onSC_GET_SCRIPT(ChannelService * this, LPPACKET_HEADER pPCK,
   TCPUser * u) */

DWORD __thiscall
ChannelServiceApp::ChannelService::
_ZN17ChannelServiceApp14ChannelService15onSC_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE
          (ChannelService *this,LPPACKET_HEADER pPCK,TCPUser *u)

{
  TDebugTrace<char> *pTVar1;
  FILE *__s;
  int iVar2;
  
                    /* Unresolved local var: LPPCK_SC_GET_SCRIPT pSGet@[???] */
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar1 = TDebugTrace<char>::operator<<(&gFileLogInfo,"In  ");
  pTVar1 = TDebugTrace<char>::operator<<(pTVar1,"onSC_GET_SCRIPT");
  TDebugTrace<char>::operator<<(pTVar1,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  if (bReadyToChangeScript != false) {
                    /* Unresolved local var: FILE * pFile@[???]
                       Unresolved local var: int ret@[???] */
    __s = fopen("channel_info/channel_info.etc","w+");
    if (__s == (FILE *)0x0) {
      TDebugTrace<char>::Lock(&gFileLogInfo);
      pTVar1 = TDebugTrace<char>::operator<<
                         (&gFileLogInfo,"[ERROR] : cannt open channel_script_version file");
      TDebugTrace<char>::operator<<(pTVar1,endl<char>);
      TDebugTrace<char>::Unlock(&gFileLogInfo);
    }
    iVar2 = tagPacketHeader::getSize(pPCK);
    fwrite(pPCK + 1,1,iVar2 - 0xb,__s);
    fflush(__s);
    fclose(__s);
    ChannelScript::_ZN17ChannelServiceApp13ChannelScript12ReloadScriptEv(&this->super_ChannelScript)
    ;
    bReadyToChangeScript = false;
  }
  TDebugTrace<char>::Lock(&gFileLogInfo);
  pTVar1 = TDebugTrace<char>::operator<<(&gFileLogInfo,"Out ");
  pTVar1 = TDebugTrace<char>::operator<<(pTVar1,"onSC_GET_SCRIPT");
  TDebugTrace<char>::operator<<(pTVar1,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/ChannelService.cpp, source/ChannelOld/DNFChannelServer/ChannelService.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 288 个文件*
