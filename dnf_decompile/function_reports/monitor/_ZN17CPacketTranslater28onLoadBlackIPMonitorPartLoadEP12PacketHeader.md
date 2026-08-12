# _ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader

`CPacketTranslater::onLoadBlackIPMonitorPartLoad(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80895a0` | `0x142` | `0x8074c6a` | `0x148` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,85 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 movl   $0x1307,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"BlackIP Monitor Part Load",0x8(%esp)
 movl   $"./log/BlackIP",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    0x8(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
 movl   $0xa,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0x13b>
+jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0x141>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0xe1>
+jne    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0xe7>
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
 movl   $0x130c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onLoadBlackIPMonitorPartLoad Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0xda>
+jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0xe0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0x13b>
+jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0x141>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1311,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onLoadBlackIPMonitorPartLoad Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0x136>
+jmp    <T> <_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader+0x13c>
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

/* CPacketTranslater::onLoadBlackIPMonitorPartLoad(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28onLoadBlackIPMonitorPartLoadEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_28 [28];
  
                    /* try { // try from 080895be to 080895ff has its CatchHandler @ 08089605 */
  CMyFileLog::CMyFileLog(local_28,"onLoadBlackIPMonitorPartLoad",0x1307);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_28,"./log/BlackIP","BlackIP Monitor Part Load");
  CServerHandler::SendAllToGameServer(*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3375 行）：

```cpp
void CPacketTranslater::onLoadBlackIPMonitorPartLoad(PacketHeader* pkt)
{try
{


    DNF_LOG_SCOPE_LINE(0x1307, "./log/BlackIP", "BlackIP Monitor Part Load");
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllToGameServer((char*)pkt, 10);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x130c, "./log/Except", "CPacketTranslater::onLoadBlackIPMonitorPartLoad Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1311, "./log/Except", "CPacketTranslater::onLoadBlackIPMonitorPartLoad Exception Break\n");
    }
}
```
