# _ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E12handleEventsEjS3_j

`TReactor<EpollReactor<RelayServiceApp::TCPUser, TCPSocket, TCPSocket>, RelayServiceApp::TCPUser, TCPSocket, TCPSocket>::handleEvents(unsigned int, TCPSocket, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805bf16` | `0x87` | `0x80504e2` | `0x85` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x10(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,-0x24(%ebp)
 mov    0x4(%eax),%edx
 mov    %edx,-0x20(%ebp)
 mov    0x8(%eax),%edx
 mov    %edx,-0x1c(%ebp)
 mov    0xc(%eax),%edx
 mov    %edx,-0x18(%ebp)
 mov    0x10(%eax),%edx
 mov    %edx,-0x14(%ebp)
 mov    0x14(%eax),%edx
 mov    %edx,-0x10(%ebp)
-movzwl 0x18(%eax),%eax
-mov    %ax,-0xc(%ebp)
+mov    0x18(%eax),%eax
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0xc(%esp)
 lea    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j>
 mov    %eax,%ebx
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 mov    %ebx,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* TReactor<EpollReactor<RelayServiceApp::TCPUser, TCPSocket, TCPSocket>, RelayServiceApp::TCPUser,
   TCPSocket, TCPSocket>::handleEvents(unsigned int, TCPSocket, unsigned int) */

undefined4 __thiscall
TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
::
_ZN8TReactorI12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS3_ES2_S3_S3_E12handleEventsEjS3_j
          (TReactor<EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>,RelayServiceApp::TCPUser,TCPSocket,TCPSocket>
           *this,undefined4 param_1,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = param_3[5];
  local_10 = *(undefined2 *)(param_3 + 6);
                    /* try { // try from 0805bf67 to 0805bf6b has its CatchHandler @ 0805bf82 */
  uVar1 = EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket>::
          _ZN12EpollReactorIN15RelayServiceApp7TCPUserE9TCPSocketS2_E12handleEventsEjS2_j
                    ((EpollReactor<RelayServiceApp::TCPUser,TCPSocket,TCPSocket> *)this,param_1,
                     &local_28,param_4);
  TCPSocket::~TCPSocket((TCPSocket *)&local_28);
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/TCPThread.cpp, source/ChannelOld/DNFChannelServer/Reactor.cpp, source/ChannelOld/DNFChannelServer/TCPThread.cpp, source/DNFServer/GameServer/Relay/Reactor.cpp, source/DNFServer/GameServer/Relay/TCPThread.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h 等 348 个文件*
