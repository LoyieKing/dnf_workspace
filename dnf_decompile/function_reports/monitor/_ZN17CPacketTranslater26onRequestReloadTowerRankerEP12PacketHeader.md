# _ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader

`CPacketTranslater::onRequestReloadTowerRanker(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80889f8` | `0x140` | `0x8074080` | `0x144` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%ebx
+mov    0xa0(%eax),%eax
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12getTowerRankEv>
+mov    %eax,-0x10(%ebp)
 movl   $0x5,0xc(%esp)
 movl   $0x1,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank20processReloadRankingEP14CServerHandlerbj>
-mov    0x8(%ebp),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
+mov    0x8(%ebp),%eax
 movl   $0xa,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0x139>
+jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0x13d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0xdf>
+jne    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0xe3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x11aa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onRequestReloadTowerRanker Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0xd8>
+jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0xdc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0x139>
+jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0x13d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x11af,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onRequestReloadTowerRanker Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0x134>
+jmp    <T> <_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader+0x138>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onRequestReloadTowerRanker(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26onRequestReloadTowerRankerEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler *pCVar1;
  CTowerRank *this;
  
  pCVar1 = *(CServerHandler **)(m_pclApp + 0xa0);
  this = (CTowerRank *)CApplication::_ZN12CApplication12getTowerRankEv(m_pclApp);
                    /* try { // try from 08088a2f to 08088a55 has its CatchHandler @ 08088a5b */
  CTowerRank::processReloadRanking(this,pCVar1,true,5);
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3156 行）：

```cpp
void CPacketTranslater::onRequestReloadTowerRanker(PacketHeader* pkt)
{try
{


    CServerHandler* handler = m_pclApp->m_serverHandler2;
    CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
    tower->processReloadRanking(handler, true, 5);
    handler->SendAllToGameServer((char*)pkt, 10);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x11aa, "./log/Except", "CPacketTranslater::onRequestReloadTowerRanker Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x11af, "./log/Except", "CPacketTranslater::onRequestReloadTowerRanker Exception Break\n");
    }
}
```
