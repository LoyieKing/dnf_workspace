# _ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader

`CPacketTranslater::OnPowerWarStartInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807f8e2` | `0x1ed` | `0x8075b7c` | `0x1ff` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,128 +1,135 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x70,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x52>
 movl   $0x118a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPowerWarStartInfo : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1e6>
+jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1f8>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0xac>
-lea    -0x46(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0xb3>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
-movl   $0x1e,-0x3c(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
+lea    -0x4c(%ebp),%eax
+add    $0xa,%eax
+movl   $0x1e,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 movzbl %al,%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x46(%ebp),%edx
+lea    -0x4c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader>
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager12IsPowerWarOnEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0xc2>
-mov    $"START!",%ebx
-jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0xc7>
-mov    $"END!",%ebx
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%esi
+je     <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0xcc>
+mov    $"END!",%eax
+jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0xd1>
+mov    $"START!",%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
 movl   $0x119a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
 movl   $"OnPowerWarStartInfo(%d) - power war %s ",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1e6>
+jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1f8>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x18c>
+jne    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x19e>
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
 movl   $0x119e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnPowerWarStartInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x185>
+jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x197>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1e6>
+jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1f8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x11a3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPowerWarStartInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1e1>
+jmp    <T> <_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader+0x1f3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x60,%esp
+add    $0x70,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPowerWarStartInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnPowerWarStartInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  CServerHandler *this;
  char *pcVar3;
  Packet_Monitor_Event_Start local_4a [10];
  undefined4 local_40;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CPowerManager *local_14;
  
  local_18 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0807f90f to 0807f9ec has its CatchHandler @ 0807f9f2 */
    CMyFileLog::CMyFileLog(local_38,"OnPowerWarStartInfo",0x118a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/Power","CPacketTranslater::OnPowerWarStartInfo : 0 == m_pclApp");
  }
  else {
    local_14 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    cVar2 = CPowerManager::IsPowerWarOn(local_14);
    if (cVar2 != '\0') {
      Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_4a);
      local_40 = 0x1e;
      uVar1 = *(undefined4 *)(local_18 + 10);
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      CServerHandler::_ZN14CServerHandler16SendToGameServerEhP12PacketHeader
                (this,(uchar)uVar1,(PacketHeader *)local_4a);
    }
    cVar2 = CPowerManager::IsPowerWarOn(local_14);
    if (cVar2 == '\0') {
      pcVar3 = "END!";
    }
    else {
      pcVar3 = "START!";
    }
    uVar1 = *(undefined4 *)(local_18 + 10);
    CMyFileLog::CMyFileLog(local_30,"OnPowerWarStartInfo",0x119a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_30,"./log/Power","OnPowerWarStartInfo(%d) - power war %s ",uVar1,pcVar3);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3352 行）：

```cpp
void CPacketTranslater::OnPowerWarStartInfo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x118a, "./log/Power", "CPacketTranslater::OnPowerWarStartInfo : 0 == m_pclApp");
        return;
    }
    try
    {
        CPowerManager* pm = m_pclApp->GetPowerManager();
        if (pm->IsPowerWarOn() != 0)
        {
            Packet_Monitor_Event_Start start;
            *(unsigned int*)((char*)&start + 0xa) = 0x1e;
            m_pclApp->Get_ServerHandler()->SendToGameServer((unsigned char)*(unsigned int*)(pb + 0xa),
                                                            &start);
        }
        const char* state = pm->IsPowerWarOn() == 0 ? "END!" : "START!";
        DNF_LOG_SCOPE_LINE(0x119a,"./log/Power", "OnPowerWarStartInfo(%d) - power war %s ", *(unsigned int*)(pb + 0xa),
            state);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnPowerWarStartInfo Exception Break", 0x119e, 0x11a3);
}
```
