# _ZN14CManagerServer13SendHeartBeatEi

`CManagerServer::SendHeartBeat(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8065572` | `0x65` | `0x8053068` | `0x65` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CManagerServer13SendHeartBeatEi+0x5f>
-lea    -0x13(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Monitor_UDP_HeartBeatC1Ev>
 mov    0xc(%ebp),%eax
 mov    %al,-0x9(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    0x8(%ebp),%edx
 movzwl 0x8(%edx),%edx
 movzwl %dx,%ebx
-lea    -0x13(%ebp),%ecx
+lea    -0x14(%ebp),%ecx
 mov    0x8(%ebp),%edx
 mov    0xc(%edx),%edx
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $0xb,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CManagerServer::SendHeartBeat(int) */

void __thiscall
CManagerServer::_ZN14CManagerServer13SendHeartBeatEi(CManagerServer *this,int param_1)

{
  char *pcVar1;
  Packet_Monitor_UDP_HeartBeat local_17 [10];
  undefined1 local_d;
  
  if (*(int *)(this + 0xc) != 0) {
    Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat(local_17);
    local_d = (undefined1)param_1;
    pcVar1 = (char *)std::string::c_str((string *)(this + 4));
    CUdpHandler::SendToServer
              (*(CUdpHandler **)(this + 0xc),(char *)local_17,0xb,*(ushort *)(this + 8),pcVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFManagerServer.cpp](source/DNFServer/GameServer/Guild/DNFManagerServer.cpp)（约第 93 行）：

```cpp
void CManagerServer::SendHeartBeat(int group)
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
