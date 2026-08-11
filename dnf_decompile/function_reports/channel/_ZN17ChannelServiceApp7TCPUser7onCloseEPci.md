# _ZN17ChannelServiceApp7TCPUser7onCloseEPci

`ChannelServiceApp::TCPUser::onClose(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x805d606` | `0x151` | `0x8054450` | `0x151` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,89 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    0x8(%ebp),%eax
 movzbl 0x40(%eax),%eax
-movzbl %al,%esi
+movzbl %al,%edi
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser8getACCIDEv>
-mov    %eax,%edi
+mov    %eax,%esi
 movl   $"call onClose from ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $", ",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", TCPUSER=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    %edi,0x4(%esp)
+mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $", error=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $", dis=",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
-mov    %esi,0x4(%esp)
+mov    %edi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEb>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0x8(%ebp),%eax
 movzbl 0x40(%eax),%eax
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci+0x148>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN17ChannelServiceApp14ChannelServiceEE10getManagerEv>
 lea    0x3c(%eax),%edx
 movl   $0x6f,0xc(%esp)
 movl   $"TCPUser.cpp",0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17ChannelServiceApp9UserPools14destroyTCPUserEPNS_7TCPUserEPci>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci+0x13f>
 mov    0x8(%ebp),%eax
 mov    0x44(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    0x8(%ebp),%eax
 movb   $0x1,0x40(%eax)
 jmp    <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci+0x149>
 nop
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void onClose(TCPUser * this, char * file, int line) */

void __thiscall
ChannelServiceApp::TCPUser::_ZN17ChannelServiceApp7TCPUser7onCloseEPci
          (TCPUser *this,char *file,int line)

{
  bool in_Val;
  int *piVar1;
  char *in_Str;
  uint in_Val_00;
  TDebugTrace<char> *pTVar2;
  ChannelService *pCVar3;
  
  TDebugTrace<char>::Lock(&gFileLogInfo);
  in_Val = this->bDisconnected_;
  piVar1 = __errno_location();
  in_Str = strerror(*piVar1);
  in_Val_00 = getACCID(this);
  pTVar2 = TDebugTrace<char>::operator<<(&gFileLogInfo,"call onClose from ");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,file);
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,", ");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,line);
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,", TCPUSER=");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,in_Val_00);
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,", error=");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,in_Str);
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,", dis=");
  pTVar2 = TDebugTrace<char>::operator<<(pTVar2,in_Val);
  TDebugTrace<char>::operator<<(pTVar2,endl<char>);
  TDebugTrace<char>::Unlock(&gFileLogInfo);
  if (this->bDisconnected_ == false) {
    pCVar3 = TManager<ChannelServiceApp::ChannelService>::getManager
                       (&this->super_TManager<ChannelServiceApp::ChannelService>);
    UserPools::destroyTCPUser(&pCVar3->super_UserPools,this,"TCPUser.cpp",0x6f);
    if (this->pSock_ != (TCPSocket *)0x0) {
      TCPSocket::close(this->pSock_);
    }
    this->bDisconnected_ = true;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPUser.cpp](source/ChannelOld/DNFChannelBridge/TCPUser.cpp)（约第 91 行）：

```cpp
void ChannelServiceApp::TCPUser::onClose(char* file, int line)
{
    GLOG(ChannelServiceApp::gFileLogInfo, "call onClose from " << file << ", " << line << ", TCPUSER=" << getACCID()
        << ", error=" << strerror(*__errno_location()));
    if (bDisconnected_)
        return;
    getManager()->UserPools::destroyTCPUser(this, "TCPUser.cpp", 0x6a);
    if (pSock_ != NULL)
    {
        pSock_->close();
    }
    bDisconnected_ = true;
}
```
