# _ZN17CPacketTranslater21OnMonitorMegaPhoneMsgEP12PacketHeader

`CPacketTranslater::OnMonitorMegaPhoneMsg(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8085648` | `0x4b` | `0x8070f6a` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+push   %ebx
+sub    $0x24,%esp
+mov    0x8(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-mov    %dl,0xa(%eax)
-mov    -0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    0x8(%ebp),%edx
+mov    %al,0xa(%ebx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorMegaPhoneMsg(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnMonitorMegaPhoneMsgEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  
  PVar1 = (PacketHeader)CApplication::Get_ServerGroup(m_pclApp);
  param_1[10] = PVar1;
  CServerHandler::SendAllToGameServer
            (*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,(uint)*(ushort *)(param_1 + 2));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2120 行）：

```cpp
void CPacketTranslater::OnMonitorMegaPhoneMsg(PacketHeader* pkt)
{
    ((RA_S8<10>*)pkt)->v = (char)m_pclApp->Get_ServerGroup();
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllToGameServer((char*)pkt, ((RA_U16<2>*)pkt)->v);
}
```
