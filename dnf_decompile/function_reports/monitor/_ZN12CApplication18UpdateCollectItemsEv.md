# _ZN12CApplication18UpdateCollectItemsEv

`CApplication::UpdateCollectItems()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8065dcc` | `0x11f` | `0x8053c4e` | `0x107` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x78,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0xc(%ebp)
-lea    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    (%eax),%edx
+mov    %edx,-0x68(%ebp)
+mov    0x4(%eax),%edx
 mov    %edx,-0x64(%ebp)
-mov    0x4(%eax),%edx
+mov    0x8(%eax),%edx
 mov    %edx,-0x60(%ebp)
-mov    0x8(%eax),%edx
+mov    0xc(%eax),%edx
 mov    %edx,-0x5c(%ebp)
-mov    0xc(%eax),%edx
+mov    0x10(%eax),%edx
 mov    %edx,-0x58(%ebp)
-mov    0x10(%eax),%edx
+mov    0x14(%eax),%edx
 mov    %edx,-0x54(%ebp)
-mov    0x14(%eax),%edx
+mov    0x18(%eax),%edx
 mov    %edx,-0x50(%ebp)
-mov    0x18(%eax),%edx
+mov    0x1c(%eax),%edx
 mov    %edx,-0x4c(%ebp)
-mov    0x1c(%eax),%edx
+mov    0x20(%eax),%edx
 mov    %edx,-0x48(%ebp)
-mov    0x20(%eax),%edx
+mov    0x24(%eax),%edx
 mov    %edx,-0x44(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x40(%ebp)
 mov    0x28(%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x60(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x64(%ebp),%eax
 and    $0x1,%eax
 test   %eax,%eax
-jne    <T> <_ZN12CApplication18UpdateCollectItemsEv+0x11d>
-lea    -0x20(%ebp),%eax
+jne    <T> <_ZN12CApplication18UpdateCollectItemsEv+0x105>
+mov    0x8(%ebp),%eax
+mov    0x388(%eax),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_CollectItemsUpdateC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x388(%eax),%eax
+mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x16(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x388(%eax),%eax
+mov    %eax,-0x1a(%ebp)
+mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x11(%ebp)
+mov    %eax,-0x15(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x12(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x388(%eax),%eax
+mov    %al,-0x16(%ebp)
+mov    -0xc(%ebp),%eax
 movzbl 0xc(%eax),%eax
-mov    %al,-0xd(%ebp)
+mov    %al,-0x11(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0x36(%ebp),%eax
+lea    -0x3a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_CollectItemsResultC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x388(%eax),%eax
+mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
 mov    %eax,-0x28(%ebp)
 mov    0x8(%ebp),%eax
-mov    0x388(%eax),%eax
-mov    (%eax),%eax
-mov    %eax,-0x2c(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x388(%eax),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x24(%ebp)
-mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
-lea    -0x36(%ebp),%edx
+lea    -0x3a(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::UpdateCollectItems() */

void __thiscall CApplication::_ZN12CApplication18UpdateCollectItemsEv(CApplication *this)

{
  tm *ptVar1;
  Packet_CollectItemsResult local_3a [10];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  Packet_CollectItemsUpdate local_24 [10];
  undefined4 local_1a;
  undefined1 local_16;
  undefined4 local_15;
  undefined1 local_11;
  time_t local_10 [3];
  
  local_10[0] = time((time_t *)0x0);
  ptVar1 = localtime(local_10);
  if ((ptVar1->tm_min & 1U) == 0) {
    Packet_CollectItemsUpdate::Packet_CollectItemsUpdate(local_24);
    local_1a = *(undefined4 *)(*(int *)(this + 0x388) + 4);
    local_15 = *(undefined4 *)(*(int *)(this + 0x388) + 8);
    local_16 = Get_ServerGroup(this);
    local_11 = *(undefined1 *)(*(int *)(this + 0x388) + 0xc);
    CServerHandler::SendToDB(*(CServerHandler **)(this + 0xa0),(PacketHeader *)local_24);
    Packet_CollectItemsResult::Packet_CollectItemsResult(local_3a);
    local_2c = *(undefined4 *)(*(int *)(this + 0x388) + 4);
    local_30 = **(undefined4 **)(this + 0x388);
    local_28 = *(undefined4 *)(*(int *)(this + 0x388) + 8);
    CServerHandler::SendAllTcpGameServer(*(CServerHandler **)(this + 0xa0),(PacketHeader *)local_3a)
    ;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 1148 行）：

```cpp
void CApplication::UpdateCollectItems()
{
    time_t now = time(0);
    tm t = *localtime(&now);
    if ((t.tm_min & 1U) == 0)
    {
        CollectItms* items = (CollectItms*)m_field388;
        Packet_CollectItemsUpdate pkt;
        pkt.m_fieldA = ((RA_UINT<4>*)items)->v;
        pkt.m_fieldF = ((RA_UINT<8>*)items)->v;
        pkt.m_fieldE = Get_ServerGroup();
        pkt.m_field13 = ((RA_U8<12>*)items)->v;
        m_serverHandler2->SendToDB(&pkt);
        Packet_CollectItemsResult pkt2;
        pkt2.m_fieldE = ((RA_UINT<4>*)items)->v;
        pkt2.m_fieldA = ((RA_UINT<0>*)items)->v;
        pkt2.m_field12 = ((RA_UINT<8>*)items)->v;
        m_serverHandler2->SendAllTcpGameServer(&pkt2);
    }
}
```
