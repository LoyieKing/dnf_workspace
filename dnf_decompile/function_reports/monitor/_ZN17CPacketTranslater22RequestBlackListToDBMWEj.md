# _ZN17CPacketTranslater22RequestBlackListToDBMWEj

`CPacketTranslater::RequestBlackListToDBMW(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80865ba` | `0x119` | `0x8071f54` | `0x11f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,78 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-lea    -0x2b(%ebp),%eax
+lea    -0x2f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_DBMW_Request_BlackListC1Ev>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x21(%ebp)
-movb   $0xc9,-0x1d(%ebp)
+mov    %eax,-0x25(%ebp)
+movb   $0xc9,-0x21(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-lea    -0x2b(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+lea    -0x2f(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x112>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x118>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xb8>
+jne    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xbe>
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
 movl   $0xdab,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22RequestBlackListToDBMWEjE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::RequestBlackListToDBMW Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xb1>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xb7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x112>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x118>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xdb0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22RequestBlackListToDBMWEjE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::RequestBlackListToDBMW Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x10d>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x113>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::RequestBlackListToDBMW(unsigned int) */

void CPacketTranslater::_ZN17CPacketTranslater22RequestBlackListToDBMWEj(uint param_1)

{
  Packet_DBMW_Request_BlackList local_2f [10];
  uint local_25;
  undefined1 local_21;
  
  Packet_DBMW_Request_BlackList::Packet_DBMW_Request_BlackList(local_2f);
  local_25 = param_1;
  local_21 = 0xc9;
                    /* try { // try from 080865ec to 080865f0 has its CatchHandler @ 080865f6 */
  CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),(PacketHeader *)local_2f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2469 行）：

```cpp
void CPacketTranslater::RequestBlackListToDBMW(unsigned int charNo)
{try
{


    Packet_DBMW_Request_BlackList pkt;
    pkt.m_charNo = charNo;
    pkt.m_flag = 0xc9;
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendToDB(&pkt);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xdab, "./log/Except", "CPacketTranslater::RequestBlackListToDBMW Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xdb0, "./log/Except", "CPacketTranslater::RequestBlackListToDBMW Exception Break\n");
    }
}
```
