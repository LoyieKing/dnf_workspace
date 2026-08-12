# _ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader

`CPacketTranslater::OnServerMessageInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808a180` | `0x148` | `0x807585a` | `0x148` |

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
 movl   $0x1402,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Packet_Monitor_Server_Message_Info",0x8(%esp)
 movl   $"./log/ServerEvent",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
 movl   $0x5f,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 jmp    <T> <_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader+0x141>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader+0xe7>
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
 movl   $0x1408,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnServerMessageInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader+0xe0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader+0x141>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x140d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnServerMessageInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader+0x13c>
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

/* CPacketTranslater::OnServerMessageInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnServerMessageInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  local_14 = param_1;
                    /* try { // try from 0808a1a4 to 0808a1e5 has its CatchHandler @ 0808a1eb */
  CMyFileLog::CMyFileLog(local_2c,"OnServerMessageInfo",0x1402);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_2c,"./log/ServerEvent","Packet_Monitor_Server_Message_Info");
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)local_14,0x5f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3576 行）：

```cpp
void CPacketTranslater::OnServerMessageInfo(PacketHeader* pkt)
{try
{


    PacketHeader* lpkt = pkt;
    DNF_LOG_SCOPE_LINE(0x1402, "./log/ServerEvent", "Packet_Monitor_Server_Message_Info");
    m_pclApp->m_serverHandler2->SendAllToGameServer((char*)lpkt, 0x5f);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1408, "./log/Except", "CPacketTranslater::OnServerMessageInfo Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x140d, "./log/Except", "CPacketTranslater::OnServerMessageInfo Exception Break\n");
    }
}
```
