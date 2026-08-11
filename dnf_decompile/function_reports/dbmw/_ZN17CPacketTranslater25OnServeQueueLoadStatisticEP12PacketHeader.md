# _ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader

`CPacketTranslater::OnServeQueueLoadStatistic(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809b694` | `0x16c` | `0x80d75b2` | `0x13f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,105 +1,90 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x164>
+je     <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x137>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%eax
-cmp    $0xc8,%al
-jne    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x48>
-mov    -0x14(%ebp),%eax
-movzbl 0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x10(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CAppConfig12Get_DbmwTypeEv>
-mov    %ebx,%edx
-sub    %al,%dl
-mov    %edx,%eax
-mov    %al,-0xd(%ebp)
-jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x52>
 mov    -0x14(%ebp),%eax
 movzbl 0xa(%eax),%eax
 mov    %al,-0xd(%ebp)
 mov    -0x14(%ebp),%eax
 movzwl 0xc(%eax),%eax
 movzwl %ax,%ecx
 mov    -0x14(%ebp),%eax
 movzbl 0xb(%eax),%eax
-movzbl %al,%edx
+movsbl %al,%edx
 movzbl -0xd(%ebp),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 add    $0x50,%ebx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager28SaveServerQueueLoadStatisticEhii>
-jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x165>
+jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x138>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x108>
+jne    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0xdb>
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
 movl   $0xae8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnServeQueueLoadStatistic() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x101>
+jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0xd4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x165>
+jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x138>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xaed,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnServeQueueLoadStatistic() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x15d>
+jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x130>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x165>
+jmp    <T> <_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader+0x138>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnServeQueueLoadStatistic(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnServeQueueLoadStatisticEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  PacketHeader local_11;
  
  if (m_pclApp != 0) {
    if (param_1[10] == (PacketHeader)0xc8) {
      local_11 = param_1[10];
      cVar1 = CAppConfig::Get_DbmwType(*(CAppConfig **)(m_pclApp + 0x10));
      local_11 = (PacketHeader)((char)local_11 - cVar1);
    }
    else {
      local_11 = param_1[10];
    }
                    /* try { // try from 0809b716 to 0809b71a has its CatchHandler @ 0809b720 */
    CDBManager::_ZN10CDBManager28SaveServerQueueLoadStatisticEhii
              ((CDBManager *)(m_pclApp + 0x50),(uchar)local_11,(uint)(byte)param_1[0xb],
               (uint)*(ushort *)(param_1 + 0xc));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1806 行）：

```cpp
void CPacketTranslater::OnServeQueueLoadStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    Packet_Server_Queue_Load_Statistic* pkt =
        (Packet_Server_Queue_Load_Statistic*)header;
    unsigned char fieldA;
    if (pkt->m_fieldA == 0xc8)
    {
        fieldA = (unsigned char)(pkt->m_fieldA - m_pclApp->m_appConfig->Get_DbmwType());
    }
    else
    {
        fieldA = pkt->m_fieldA;
    }
    try
    {
        m_pclApp->m_dbManager.SaveServerQueueLoadStatistic(
            fieldA, pkt->m_fieldB, pkt->m_fieldC);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnServeQueueLoadStatistic() Exception Break",
                  0xae8, 0xaed);
}
```
