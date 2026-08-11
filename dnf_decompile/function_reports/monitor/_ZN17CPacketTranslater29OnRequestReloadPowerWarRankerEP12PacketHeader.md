# _ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader

`CPacketTranslater::OnRequestReloadPowerWarRanker(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808a2c8` | `0x148` | `0x80758e0` | `0x147` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,85 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 movl   $0x1418,0x8(%esp)
 movl   $"OnRequestReloadPowerWarRanker",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Packet_Request_Reload_Power_War_Ranker",0x8(%esp)
 movl   $"./log/ServerEvent",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
+add    $0xa0,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
 movl   $0xa,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0x141>
+jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0x140>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0xe7>
+jne    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0xe6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x141e,0x8(%esp)
 movl   $"OnRequestReloadPowerWarRanker",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestReloadPowerWarRanker Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0xe0>
+jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0xdf>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0x141>
+jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0x140>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1423,0x8(%esp)
 movl   $"OnRequestReloadPowerWarRanker",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestReloadPowerWarRanker Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0x13c>
+jmp    <T> <_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader+0x13b>
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

/* CPacketTranslater::OnRequestReloadPowerWarRanker(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnRequestReloadPowerWarRankerEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  local_14 = param_1;
                    /* try { // try from 0808a2ec to 0808a32d has its CatchHandler @ 0808a333 */
  CMyFileLog::CMyFileLog(local_2c,"OnRequestReloadPowerWarRanker",0x1418);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_2c,"./log/ServerEvent","Packet_Request_Reload_Power_War_Ranker");
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)local_14,10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3550 行）：

```cpp
void CPacketTranslater::OnRequestReloadPowerWarRanker(PacketHeader* pkt)
{try
{


    DNF_LOG_SCOPE_LINE(0x1418, "./log/ServerEvent", "Packet_Request_Reload_Power_War_Ranker");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x141e, "./log/Except", "CPacketTranslater::OnRequestReloadPowerWarRanker Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1423, "./log/Except", "CPacketTranslater::OnRequestReloadPowerWarRanker Exception Break\n");
    }
}
```
