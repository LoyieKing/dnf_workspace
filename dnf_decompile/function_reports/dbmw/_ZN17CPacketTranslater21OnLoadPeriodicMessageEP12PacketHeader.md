# _ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader

`CPacketTranslater::OnLoadPeriodicMessage(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809ed40` | `0x180` | `0x80d36ba` | `0x16a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x250,%esp
+sub    $0x240,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x175>
-lea    -0x23e(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x15c>
+lea    -0x22e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_Result_Loading_Periodic_MessageC1Ev>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-lea    -0x23e(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x1c(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x22e(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+sete   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x15f>
+lea    -0x22e(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x18(%ebp)
-movzwl -0x23c(%ebp),%eax
-movzwl %ax,%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x212,-0x10(%ebp)
-lea    -0x23e(%ebp),%eax
-mov    -0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+movl   $0x212,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x160>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x119>
+jne    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x100>
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
 movl   $0x104d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLoadPeriodicMessage() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x112>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0xf9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x160>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1052,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadPeriodicMessage() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x155>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x176>
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x160>
 nop
-add    $0x250,%esp
+jmp    <T> <_ZN17CPacketTranslater21OnLoadPeriodicMessageEP12PacketHeader+0x160>
+nop
+add    $0x240,%esp
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
  char cVar1;
  Packet_Result_Loading_Periodic_Message local_242 [2];
  ushort local_240;
  PacketHeader *local_20;
  CMonitorServer *local_1c;
  uint local_18;
  undefined4 local_14;
  
  if (m_pclApp != 0) {
    Packet_Result_Loading_Periodic_Message::Packet_Result_Loading_Periodic_Message(local_242);
    local_20 = param_1;
                    /* try { // try from 0809ed88 to 0809edd7 has its CatchHandler @ 0809eddd */
    cVar1 = CDBManager::
            _ZN10CDBManager21OnLoadPeriodicMessageEP28Packet_Load_Periodic_MessageP38Packet_Result_Loading_Periodic_Message
                      ((CDBManager *)(m_pclApp + 0x50),(Packet_Load_Periodic_Message *)param_1,
                       local_242);
    if (cVar1 != '\0') {
      local_1c = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      local_18 = (uint)local_240;
      local_14 = 0x212;
      CMonitorServer::SendToServer(local_1c,(char *)local_242,0x212);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 937 行）：

```cpp
void CPacketTranslater::OnLoadPeriodicMessage(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_Result_Loading_Periodic_Message reply;
        if (!m_pclApp->m_dbManager.OnLoadPeriodicMessage(
                (Packet_Load_Periodic_Message*)header, &reply))
            return;
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, 0x212);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnLoadPeriodicMessage() Exception Break",
                  0x104d, 0x1052);
}
```
