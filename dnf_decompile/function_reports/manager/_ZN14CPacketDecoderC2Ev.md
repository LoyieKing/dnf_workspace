# _ZN14CPacketDecoderC2Ev

`CPacketDecoder::CPacketDecoder()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80634e4` | `0x115` | `0x8059394` | `0x12b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,70 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
+mov    0x8(%ebp),%eax
+add    $0x18,%eax
+mov    %eax,-0x8(%ebp)
 movl   $0x3e8,-0x4(%ebp)
-jmp    <T> <_ZN14CPacketDecoderC1Ev+0x42>
-mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
-movl   $0x0,0x8(%eax,%edx,4)
+jmp    <T> <_ZN14CPacketDecoderC1Ev+0x49>
+mov    -0x4(%ebp),%eax
+shl    $0x2,%eax
+add    -0x8(%ebp),%eax
+movl   $0x0,(%eax)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x27ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14CPacketDecoderC1Ev+0x2d>
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader,0xfc8(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,0x1154(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,0x1158(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,0x131c(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader,0x1338(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader,0x133c(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader,0x2794(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,0x2a48(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,0x2764(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader,0x3e98(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader,0x3e9c(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader,0x41c4(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader,0x41c8(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader,0x41cc(%eax)
-mov    0x8(%ebp),%eax
-movl   $&_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader,0x9fa0(%eax)
+jne    <T> <_ZN14CPacketDecoderC1Ev+0x36>
+mov    -0x8(%ebp),%eax
+add    $0xfb0,%eax
+movl   $&_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x113c,%eax
+movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x1140,%eax
+movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x1304,%eax
+movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x1320,%eax
+movl   $&_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x1324,%eax
+movl   $&_ZN17CPacketTranslater34OnMonitorNoticeProhibitConnectUserEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x274c,%eax
+movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x277c,%eax
+movl   $&_ZN17CPacketTranslater20OnWebNoticeBroadcastEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x2a30,%eax
+movl   $&_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x3e80,%eax
+movl   $&_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x3e84,%eax
+movl   $&_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x41ac,%eax
+movl   $&_ZN17CPacketTranslater16OnTcpServerLoginEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x41b0,%eax
+movl   $&_ZN17CPacketTranslater17OnTcpServerLogoutEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x41b4,%eax
+movl   $&_ZN17CPacketTranslater20OnTcpServerHeartbeatEP12PacketHeader,(%eax)
+mov    -0x8(%ebp),%eax
+add    $0x9f88,%eax
+movl   $&_ZN17CPacketTranslater19OnWebNoticeInGameADEP12PacketHeader,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::CPacketDecoder() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoderC2Ev(CPacketDecoder *this)

{
  int local_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  for (local_8 = 1000; local_8 < 0x2800; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 4) * 4 + 8) = 0;
  }
  *(code **)(this + 0xfc8) = CPacketTranslater::OnHeartBeat;
  *(code **)(this + 0x1154) = CPacketTranslater::OnCommonPacket;
  *(code **)(this + 0x1158) = CPacketTranslater::OnCommonPacket;
  *(code **)(this + 0x131c) = CPacketTranslater::OnCommonPacket;
  *(code **)(this + 0x1338) = CPacketTranslater::OnWebNoticeProhibitConnectUser;
  *(code **)(this + 0x133c) = CPacketTranslater::OnMonitorNoticeProhibitConnectUser;
  *(code **)(this + 0x2794) = CPacketTranslater::OnWebNoticeBroadcast;
  *(code **)(this + 0x2a48) = CPacketTranslater::OnCommonPacket;
  *(code **)(this + 0x2764) = CPacketTranslater::OnCommonPacket;
  *(code **)(this + 0x3e98) = CPacketTranslater::OnInnerPacketLogin;
  *(code **)(this + 0x3e9c) = CPacketTranslater::OnInnerPacketLogout;
  *(code **)(this + 0x41c4) = CPacketTranslater::OnTcpServerLogin;
  *(code **)(this + 0x41c8) = CPacketTranslater::OnTcpServerLogout;
  *(code **)(this + 0x41cc) = CPacketTranslater::OnTcpServerHeartbeat;
  *(code **)(this + 0x9fa0) = CPacketTranslater::OnWebNoticeInGameAD;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp](source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp)（约第 26 行）：

```cpp
CPacketDecoder::CPacketDecoder()
{
    m_poolLock = 0;
    for (int i = 1000; i < 0x27fd; i++)
    {
        m_handlers[i] = 0;
    }
    m_handlers[0xbb8] = (void*)&CPacketTranslater::OnLogin;
    m_handlers[0xbb9] = (void*)&CPacketTranslater::OnLogout;
    m_handlers[0x3f9] = (void*)&CPacketTranslater::OnReplyUserInfo;
    m_handlers[0xbba] = (void*)&CPacketTranslater::OnHeartBeat;
}
```
