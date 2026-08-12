# _ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader

`CPacketTranslater::OnLoadPeriodicMessage(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x808d722` | `0x140` | `0x8078d94` | `0x140` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,84 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    0x8(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x19e0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Web Request is Arrived and Send Request DBMW",0x8(%esp)
 movl   $"./log/PeriodicMessage",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x139>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0xdf>
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
 movl   $0x19e4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLoadPeriodicMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0xd8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x139>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x19e9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadPeriodicMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x134>
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

/* CPacketTranslater::OnLoadPeriodicMessage(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  local_14 = param_1;
                    /* try { // try from 0808d745 to 0808d77f has its CatchHandler @ 0808d785 */
  CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),param_1);
  CMyFileLog::CMyFileLog(local_2c,"OnLoadPeriodicMessage",0x19e0);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_2c,"./log/PeriodicMessage","Web Request is Arrived and Send Request DBMW");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4403 行）：

```cpp
void CPacketTranslater::OnLoadPeriodicMessage(PacketHeader* pkt)
{try
{


    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendToDB(pkt);
    DNF_LOG_SCOPE_LINE(0x19e0, "./log/PeriodicMessage", "Web Request is Arrived and Send Request DBMW");


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x19e4, "./log/Except", "CPacketTranslater::OnLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x19e9, "./log/Except", "CPacketTranslater::OnLoadPeriodicMessage Exception Break\n");
    }
}
```
