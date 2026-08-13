# _ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader

`CPacketTranslater::OnBroadcastMsg(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x808e724` | `0x1aa` | `0x8079e52` | `0x1aa` |

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
 jne    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x4c>
 movl   $0x1c0c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnBroadcastMsg : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/WebNotice",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x1a3>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ecx
 mov    0x8(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 mov    -0x10(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%ebx
 mov    -0x10(%ebp),%eax
 lea    0xf(%eax),%esi
 movl   $0x1c14,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"OnBroadcastMsg : (%s,%d)\n",0x8(%esp)
 movl   $"./log/WebNotice",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x1a3>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x149>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1c18,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnBroadcastMsg Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x142>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x1a3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1c1d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnBroadcastMsg Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader+0x19e>
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

/* CPacketTranslater::OnBroadcastMsg(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14OnBroadcastMsgEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  PacketHeader PVar2;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp == 0) {
                    /* try { // try from 0808e74b to 0808e7eb has its CatchHandler @ 0808e7f1 */
    CMyFileLog::CMyFileLog(local_34,"OnBroadcastMsg",0x1c0c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/WebNotice","CPacketTranslater::OnBroadcastMsg : 0 == m_pclApp");
  }
  else {
    local_14 = param_1;
    CServerHandler::SendAllToGameServer
              (*(CServerHandler **)(m_pclApp + 0xa0),(char *)param_1,(uint)*(ushort *)(param_1 + 2))
    ;
    PVar2 = local_14[0xe];
    pPVar1 = local_14 + 0xf;
    CMyFileLog::CMyFileLog(local_2c,"OnBroadcastMsg",0x1c14);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/WebNotice","OnBroadcastMsg : (%s,%d)\n",pPVar1,(uint)(byte)PVar2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4717 行）：

```cpp
void CPacketTranslater::OnBroadcastMsg(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1c0c, "./log/WebNotice", "CPacketTranslater::OnBroadcastMsg : 0 == m_pclApp");
        }
        else
        {
            PacketHeader* pkt2 = pkt;
            m_pclApp->m_serverHandler2->SendAllToGameServer((char*)pkt, ((RA_U16<2>*)pkt2)->v);
            DNF_LOG_SCOPE_LINE(0x1c14,"./log/WebNotice", "OnBroadcastMsg : (%s,%d)\n", (char*)pkt2 + 0xf,
                (unsigned int)(unsigned char)((RA_S8<14>*)pkt2)->v);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1c18, "./log/Except",
            "CPacketTranslater::OnBroadcastMsg Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1c1d, "./log/Except",
            "CPacketTranslater::OnBroadcastMsg Exception Break\n");
    }
}
```
