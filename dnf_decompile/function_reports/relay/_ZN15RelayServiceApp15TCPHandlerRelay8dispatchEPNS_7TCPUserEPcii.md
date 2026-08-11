# _ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii

`RelayServiceApp::TCPHandlerRelay::dispatch(RelayServiceApp::TCPUser*, char*, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805b958` | `0x138` | `0x805b98c` | `0x136` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,95 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
 mov    0x10(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%eax
-test   %eax,%eax
-je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x27>
-cmp    $0x1,%eax
-je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0xea>
-jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x136>
+test   %ax,%ax
+jne    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0xdb>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser8getACCIDEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x135>
-mov    -0x14(%ebp),%eax
-mov    0x4(%eax),%eax
+je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x130>
+mov    0x10(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x5e>
+jne    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x4f>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x136>
+jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x130>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0x24(%eax),%edx
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users10getTCPUserEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x92>
+je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x83>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser8setACCIDEj>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 lea    0x24(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN15RelayServiceApp5Users10setTCPUserEjPNS_7TCPUserE>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService16setAuthenticatedEj>
-jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x136>
+jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x130>
+mov    0x10(%ebp),%eax
+movzwl (%eax),%eax
+cmp    $0x1,%ax
+jne    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x130>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK15RelayServiceApp7TCPUser8getACCIDEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x10b>
+je     <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x108>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser7onCloseEv>
-jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x136>
+jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x130>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp7TCPUser17setLastAccessTimeEv>
+mov    0x10(%ebp),%ebx
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
-mov    -0x14(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10relayToTCPEPNS_12PacketHeaderE>
-jmp    <T> <_ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii+0x136>
-nop
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::TCPHandlerRelay::dispatch(RelayServiceApp::TCPUser*, char*, int, int) */

void RelayServiceApp::TCPHandlerRelay::
     _ZN15RelayServiceApp15TCPHandlerRelay8dispatchEPNS_7TCPUserEPcii
               (TCPUser *param_1,char *param_2,int param_3,int param_4)

{
  TCPUser *this;
  uint uVar1;
  int iVar2;
  RelayService *this_00;
  
  if (*(short *)param_3 == 0) {
    iVar2 = TCPUser::getACCID((TCPUser *)param_2);
    if (iVar2 == 0) {
      uVar1 = *(uint *)(param_3 + 4);
      if (uVar1 == 0) {
        TCPUser::onClose((TCPUser *)param_2);
      }
      else {
        iVar2 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
        this = (TCPUser *)Users::getTCPUser(iVar2 + 0x24);
        if (this != (TCPUser *)0x0) {
          TCPUser::onClose(this);
        }
        TCPUser::setACCID((TCPUser *)param_2,uVar1);
        iVar2 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
        Users::setTCPUser((Users *)(iVar2 + 0x24),uVar1,(TCPUser *)param_2);
        uVar1 = TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
        RelayService::setAuthenticated(uVar1);
      }
    }
  }
  else if (*(short *)param_3 == 1) {
    iVar2 = TCPUser::getACCID((TCPUser *)param_2);
    if (iVar2 == 0) {
      TCPUser::onClose((TCPUser *)param_2);
    }
    else {
      TCPUser::setLastAccessTime((TCPUser *)param_2);
      this_00 = (RelayService *)
                TManager<RelayServiceApp::RelayService>::getManager
                          ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
      RelayService::relayToTCP(this_00,(PacketHeader *)param_3);
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/TCPHandler.cpp, source/ChannelOld/DNFChannelServer/TCPHandler.cpp, source/DNFServer/GameServer/Relay/TCPHandler.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h 等 317 个文件*
