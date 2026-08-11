# _ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler

`CPeriodicMessageMgr::OnTimerSendData(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80667c6` | `0x68` | `0x80500fe` | `0x59` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x228,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler+0x65>
-lea    -0x216(%ebp),%eax
+je     <T> <_ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler+0x57>
+lea    -0x16(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Send_Periodic_MessageC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+lea    -0x16(%ebp),%edx
+lea    0xa(%edx),%ecx
 mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x216(%ebp),%eax
-add    $0xa,%eax
-mov    %eax,(%esp)
+mov    %ecx,(%esp)
 call   <T> <strncpy>
-lea    -0x216(%ebp),%eax
+lea    -0x16(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler+0x66>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeriodicMessageMgr::OnTimerSendData(CServerHandler*) */

void __thiscall
CPeriodicMessageMgr::_ZN19CPeriodicMessageMgr15OnTimerSendDataEP14CServerHandler
          (CPeriodicMessageMgr *this,CServerHandler *param_1)

{
  Packet_Send_Periodic_Message local_21a [10];
  char acStack_210 [512];
  size_t local_10;
  
  if (*this != (CPeriodicMessageMgr)0x0) {
    Packet_Send_Periodic_Message::Packet_Send_Periodic_Message(local_21a);
    local_10 = strlen((char *)this);
    strncpy(acStack_210,(char *)this,local_10);
    CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
              (param_1,(PacketHeader *)local_21a);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 90 行）：

```cpp
void CPeriodicMessageMgr::OnTimerSendData(CServerHandler* handler)
{
    if (m_msg[0] != 0)
    {
        Packet_Send_Periodic_Message pkt;
        size_t len = strlen(m_msg);
        strncpy((char*)&pkt + 0xa, m_msg, len);
        handler->SendAllTcpGameServer(&pkt);
    }
}
```
