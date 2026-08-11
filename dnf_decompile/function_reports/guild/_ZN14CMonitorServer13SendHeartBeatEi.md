# _ZN14CMonitorServer13SendHeartBeatEi

`CMonitorServer::SendHeartBeat(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c7bc` | `0x82` | `0x80657aa` | `0x87` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,46 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13GetUdpHandlerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN14CMonitorServer13SendHeartBeatEi+0x7a>
-lea    -0x23(%ebp),%eax
+je     <T> <_ZN14CMonitorServer13SendHeartBeatEi+0x7f>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Monitor_UDP_HeartBeatC1Ev>
+lea    -0x29(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0xc(%ebp),%eax
-mov    %al,-0x19(%ebp)
+mov    %al,(%edx)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13GetServerInfoEv>
 add    $0x3,%eax
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13GetServerInfoEv>
 movzwl 0x14(%eax),%eax
 movzwl %ax,%esi
-lea    -0x23(%ebp),%ebx
+lea    -0x29(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface13GetUdpHandlerEv>
 mov    %edi,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $0xb,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc>
-add    $0x3c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMonitorServer::SendHeartBeat(int) */

void __thiscall
CMonitorServer::_ZN14CMonitorServer13SendHeartBeatEi(CMonitorServer *this,int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  CUdpHandler *this_00;
  Packet_Monitor_UDP_HeartBeat local_27 [10];
  undefined1 local_1d;
  
  iVar2 = CServerInterface::GetUdpHandler((CServerInterface *)this);
  if (iVar2 != 0) {
    Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat(local_27);
    local_1d = (undefined1)param_1;
    iVar2 = CServerInterface::GetServerInfo((CServerInterface *)this);
    iVar3 = CServerInterface::GetServerInfo((CServerInterface *)this);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    this_00 = (CUdpHandler *)CServerInterface::GetUdpHandler((CServerInterface *)this);
    CUdpHandler::SendToServer(this_00,(char *)local_27,0xb,uVar1,(char *)(iVar2 + 3));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFMonitorServer.cpp](source/DNFServer/GameServer/Guild/DNFMonitorServer.cpp)（约第 93 行）：

```cpp
void CMonitorServer::SendHeartBeat(int group)
{
    if (GetUdpHandler() != 0)
    {
        Packet_Monitor_UDP_HeartBeat pkt;
        *(unsigned char*)((char*)&pkt + 0xa) = (unsigned char)group;
        ((CUdpHandler*)GetUdpHandler())->SendToServer((char*)&pkt, 0xb,
            GetServerInfo()->m_port, GetServerInfo()->m_name);
    }
}
```
