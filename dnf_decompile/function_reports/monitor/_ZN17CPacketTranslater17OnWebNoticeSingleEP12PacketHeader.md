# _ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader

`CPacketTranslater::OnWebNoticeSingle(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8086f12` | `0x1aa` | `0x8072a12` | `0x1aa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,109 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x4c>
 movl   $0xf67,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebNoticeSingle : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/WebNotice",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x1a3>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    0x8(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0xb(%eax),%esi
 movl   $0xf6f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"OnWebNoticeSingle : (%s,%d)\n",0x8(%esp)
 movl   $"./log/WebNotice",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x1a3>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x149>
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
 movl   $0xf73,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnWebNoticeSingle Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x142>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x1a3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xf78,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebNoticeSingle Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader+0x19e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebNoticeSingle(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnWebNoticeSingleEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  PacketHeader PVar2;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp == 0) {
                    /* try { // try from 08086f39 to 08086fd9 has its CatchHandler @ 08086fdf */
    CMyFileLog::CMyFileLog(local_34,"OnWebNoticeSingle",0xf67);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/WebNotice","CPacketTranslater::OnWebNoticeSingle : 0 == m_pclApp");
  }
  else {
    local_14 = param_1;
    CServerHandler::SendAllToGameServer
              (*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,(uint)*(ushort *)(param_1 + 2))
    ;
    PVar2 = local_14[10];
    pPVar1 = local_14 + 0xb;
    CMyFileLog::CMyFileLog(local_2c,"OnWebNoticeSingle",0xf6f);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/WebNotice","OnWebNoticeSingle : (%s,%d)\n",pPVar1,(uint)(byte)PVar2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2668 行）：

```cpp
void CPacketTranslater::OnWebNoticeSingle(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0xf67, "./log/WebNotice", "CPacketTranslater::OnWebNoticeSingle : 0 == m_pclApp");
        }
        else
        {
            CServerHandler* handler = m_pclApp->m_serverHandler2;
            handler->SendAllToGameServer((char*)pkt, ((RA_U16<2>*)pkt)->v);
            DNF_LOG_SCOPE_LINE(0xf6f,"./log/WebNotice", "OnWebNoticeSingle : (%s,%d)\n", (char*)pkt + 0xb,
                (unsigned int)(unsigned char)((RA_S8<10>*)pkt)->v);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xf73, "./log/Except", "CPacketTranslater::OnWebNoticeSingle Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xf78, "./log/Except", "CPacketTranslater::OnWebNoticeSingle Exception Break\n");
    }
}
```
