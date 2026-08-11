# _ZN15RelayServiceApp15UDPHandlerRelay8dispatchEPcii

`RelayServiceApp::UDPHandlerRelay::dispatch(char*, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x805e4c0` | `0x38` | `0x805d998` | `0x36` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%eax
-test   %eax,%eax
-jne    <T> <_ZN15RelayServiceApp15UDPHandlerRelay8dispatchEPcii+0x36>
+test   %ax,%ax
+jne    <T> <_ZN15RelayServiceApp15UDPHandlerRelay8dispatchEPcii+0x34>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8TManagerIN15RelayServiceApp12RelayServiceEE10getManagerEv>
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15RelayServiceApp12RelayService10relayToTCPEPNS_12PacketHeaderE>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::UDPHandlerRelay::dispatch(char*, int, int) */

void RelayServiceApp::UDPHandlerRelay::_ZN15RelayServiceApp15UDPHandlerRelay8dispatchEPcii
               (char *param_1,int param_2,int param_3)

{
  RelayService *this;
  
  if (*(short *)param_2 == 0) {
    this = (RelayService *)
           TManager<RelayServiceApp::RelayService>::getManager
                     ((TManager<RelayServiceApp::RelayService> *)(param_1 + 4));
    RelayService::relayToTCP(this,(PacketHeader *)param_2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/UDPHandler.cpp](source/ChannelOld/DNFChannelBridge/UDPHandler.cpp)（约第 25 行）：

```cpp
void ChannelServiceApp::UDPHandlerRelay::dispatch(char* szBlock, int nSize, int Catagory)
{
    LPPACKET_HEADER pPCK = (LPPACKET_HEADER)szBlock;
    int nProtoID = pPCK->getPacketID();
    DWORD ret = 0;
    ChannelService::FPMessageHandlerExtra Handler = getManager()->GetMessageHandlerExtra(nProtoID);
    if (Handler != NULL)
    {
        ret = (getManager()->*Handler)(pPCK);
    }
}
```
