# _ZN17CPacketTranslater27OnMonitorFullLevelBroadCastEP12PacketHeader

`CPacketTranslater::OnMonitorFullLevelBroadCast(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ca46` | `0x36` | `0x8078010` | `0x3f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    0x8(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater27OnMonitorFullLevelBroadCastEP12PacketHeader+0x3d>
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
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorFullLevelBroadCast(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnMonitorFullLevelBroadCastEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler::SendAllToGameServer
            (*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,(uint)*(ushort *)(param_1 + 2));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4136 行）：

```cpp
void CPacketTranslater::OnMonitorFullLevelBroadCast(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        CServerHandler* handler = m_pclApp->m_serverHandler2;
        handler->SendAllToGameServer((char*)pkt, ((RA_U16<2>*)pkt)->v);
    }
}
```
