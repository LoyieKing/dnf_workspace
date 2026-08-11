# _ZN15CNetworkSession8dispatchEP12PacketHeader

`CNetworkSession::dispatch(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804f186` | `0x73` | `0x804f64e` | `0x79` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession8get_typeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN15CNetworkSession8dispatchEP12PacketHeader+0x68>
+je     <T> <_ZN15CNetworkSession8dispatchEP12PacketHeader+0x72>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%ebx
+mov    %ax,-0x12(%ebp)
 mov    &_ZN15CNetworkSession15pSessionManagerE,%eax
 mov    (%eax),%eax
 mov    (%eax),%edx
 mov    &_ZN15CNetworkSession15pSessionManagerE,%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+movzwl -0x12(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketDispatcher14get_dispatcherEt>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN15CNetworkSession8dispatchEP12PacketHeader+0x68>
+je     <T> <_ZN15CNetworkSession8dispatchEP12PacketHeader+0x72>
 mov    &_ZN15CNetworkSession15pSessionManagerE,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 mov    -0xc(%ebp),%eax
 call   *%eax
 mov    $0x1,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CNetworkSession::dispatch(PacketHeader*) */

undefined4 __thiscall
CNetworkSession::_ZN15CNetworkSession8dispatchEP12PacketHeader
          (CNetworkSession *this,PacketHeader *param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = get_type(this);
  if (iVar2 == 1) {
    uVar1 = (**(code **)*pSessionManager)(pSessionManager);
    pcVar3 = (code *)CPacketDispatcher::get_dispatcher(uVar1);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(pSessionManager,this,param_1);
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/Community/NetworkSession.cpp](source/Community/NetworkSession.cpp)（约第 121 行）：

```cpp
bool CNetworkSession::dispatch(PacketHeader *packet) {
    // 原始：get_type() 调用结果直接入条件（cmp eax,1; sete al; test al,al; je 形态）
    if (get_type() == SESSION_TYPE_USER) {
        ushort packetId = packet->packetId;
        CPacketDispatcher* packetDispatcher = pSessionManager->GetPacketDispatcher();
        DispatcherFunction dispatcher = packetDispatcher->get_dispatcher(packetId);
        if (dispatcher != NULL) {
            dispatcher(pSessionManager, this, packet);
        }
    }
    return true;
}
```
