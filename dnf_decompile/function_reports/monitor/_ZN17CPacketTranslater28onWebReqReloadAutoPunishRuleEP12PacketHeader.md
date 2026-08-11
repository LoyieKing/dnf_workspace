# _ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader

`CPacketTranslater::onWebReqReloadAutoPunishRule(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8088b38` | `0x10c` | `0x807407e` | `0x111` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,73 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-mov    0x8(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
+add    $0xa0,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
 movl   $0xb,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0x105>
+jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0x10a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0xab>
+jne    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0xb0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x11bc,0x8(%esp)
+movl   $"onWebReqReloadAutoPunishRule",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x11bc,0x8(%esp)
-movl   $"onWebReqReloadAutoPunishRule",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::onWebReqReloadAutoPunishRule Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0xa4>
+jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0xa9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0x105>
+jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0x10a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x11c1,0x8(%esp)
 movl   $"onWebReqReloadAutoPunishRule",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onWebReqReloadAutoPunishRule Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0x100>
+jmp    <T> <_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader+0x105>
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

/* CPacketTranslater::onWebReqReloadAutoPunishRule(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28onWebReqReloadAutoPunishRuleEP12PacketHeader
               (PacketHeader *param_1)

{
                    /* try { // try from 08088b5d to 08088b61 has its CatchHandler @ 08088b67 */
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,0xb);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3128 行）：

```cpp
void CPacketTranslater::onWebReqReloadAutoPunishRule(PacketHeader* pkt)
{try
{


    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0xb);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x11bc, "./log/Except", "CPacketTranslater::onWebReqReloadAutoPunishRule Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x11c1, "./log/Except", "CPacketTranslater::onWebReqReloadAutoPunishRule Exception Break\n");
    }
}
```
