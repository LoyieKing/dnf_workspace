# _ZN12CApplication15TranslateSignalEv

`CApplication::TranslateSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8063640` | `0x44d` | `0x804ef9c` | `0x471` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,294 +1,306 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x170,%esp
 mov    0x8(%ebp),%eax
 mov    0x64(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfig11Clear_TableEv>
 mov    0x8(%ebp),%eax
 mov    0x64(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/kill_user_config.tbl",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x64(%eax),%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x74>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x81>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x9c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x64(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CKillUSRConfig7GetInfoEv>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x442>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x466>
 lea    -0x1c(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x411>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x435>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    (%eax),%eax
 cmp    $0x10,%eax
-ja     <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-mov    &data#4b157ab8(.rodata)(,%eax,4),%eax
+ja     <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
+mov    &data#69993b33(.rodata)(,%eax,4),%eax
 jmp    *%eax
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 movl   $0x1,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
+lea    -0x165(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%ebx)
+lea    -0x165(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %eax,0x10(%ebx)
+lea    -0x165(%ebp),%eax
+add    $0x14,%eax
+movl   $0x17,0x8(%esp)
+movl   $"태스트 길드메일입니다.",0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig16GetServerInfoMapEv>
 mov    0x8(%ebp),%edx
 mov    0x68(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEPSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS2_EEE>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-lea    -0x165(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN33Packet_Monitor_Notice_Guild_EnterC1Ev>
+lea    -0x165(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x15b(%ebp)
+mov    %eax,0xc(%ebx)
+lea    -0x165(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x157(%ebp)
-movl   $0x17,0x8(%esp)
-movl   $"태스트 길드메일입니다.",0x4(%esp)
-lea    -0x165(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-lea    -0x165(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-lea    -0x165(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN33Packet_Monitor_Notice_Guild_EnterC1Ev>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x15b(%ebp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x157(%ebp)
+mov    %eax,0x10(%ebx)
+lea    -0x165(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x153(%ebp)
+mov    %eax,0x14(%ebx)
+lea    -0x165(%ebp),%eax
+add    $0x18,%eax
 movl   $0x16,0x8(%esp)
 movl   $"눈사람",0x4(%esp)
-lea    -0x165(%ebp),%eax
-add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x165(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN44Packet_Monitor_Set_GuildMember_Grade_FromWebC1Ev>
-movl   $0x2,-0x25(%ebp)
+lea    -0x33(%ebp),%eax
+movl   $0x2,0x14(%eax)
+lea    -0x33(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x29(%ebp)
+mov    %eax,0xc(%ebx)
+lea    -0x33(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x20(%ebp)
+mov    %eax,0x10(%ebx)
+lea    -0x33(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0xc(%eax),%eax
-mov    %al,-0x21(%ebp)
+mov    %al,0x18(%ebx)
 lea    -0x33(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater28OnSetGuildMemberGradeFromWebEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 lea    -0x165(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN36Packet_Guild_Master_Delegate_FromWebC1Ev>
+lea    -0x165(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x15b(%ebp)
+mov    %eax,0xc(%ebx)
+lea    -0x165(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x157(%ebp)
+mov    %eax,0x10(%ebx)
+lea    -0x165(%ebp),%ebx
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x153(%ebp)
+mov    %eax,0x14(%ebx)
+lea    -0x165(%ebp),%eax
+add    $0x18,%eax
 movl   $0x4,0x8(%esp)
-movl   $"야메",0x4(%esp)
-lea    -0x165(%ebp),%eax
-add    $0x16,%eax
+movl   $"겪蔘",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x165(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater28OnGuildMasterDelegateFromWebEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 movl   $"./script/power_war_event.tbl",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager15LoadPowerWarCfgEPc>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager18StartPowerWarEventEv>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
 movl   $0x1e,-0x3b(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 lea    -0x45(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager17SendPowerWarScoreEv>
 mov    0x8(%ebp),%eax
 add    $0x370,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager16EndPowerWarEventEv>
 lea    -0x53(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
 movl   $0x1e,-0x49(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 lea    -0x53(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9CargoLockEv>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x42a>
 mov    0x8(%ebp),%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11CargoUnlockEv>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEppEv>
 lea    -0x10(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 test   %al,%al
 jne    <T> <_ZN12CApplication15TranslateSignalEv+0xe5>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x443>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x467>
 nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::TranslateSignal() */

void __thiscall CApplication::_ZN12CApplication15TranslateSignalEv(CApplication *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  CServerHandler *pCVar5;
  int *piVar6;
  CTcpNetSystem *this_00;
  Packet_Monitor_Send_Guild_Mail local_169 [10];
  undefined4 local_15f;
  undefined4 local_15b;
  undefined4 local_157;
  undefined1 auStack_153 [252];
  Packet_Monitor_Event_End local_57 [10];
  undefined4 local_4d;
  Packet_Monitor_Event_Start local_49 [10];
  undefined4 local_3f;
  Packet_Monitor_Set_GuildMember_Grade_FromWeb local_37 [10];
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  undefined4 local_24;
  __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
  local_20 [4];
  string local_1c [7];
  allocator local_15;
  __normal_iterator local_14 [4];
  undefined4 local_10;
  
  CKillUSRConfig::Clear_Table(*(CKillUSRConfig **)(this + 100));
  pcVar1 = *(code **)(**(int **)(this + 100) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 08063686 to 0806368a has its CatchHandler @ 080636c1 */
  std::string::string(local_1c,"./script/kill_user_config.tbl",&local_15);
                    /* try { // try from 0806369b to 0806369c has its CatchHandler @ 0806369f */
  (*pcVar1)(*(undefined4 *)(this + 100),local_1c);
                    /* try { // try from 080636ba to 080636be has its CatchHandler @ 080636c1 */
  std::string::~string(local_1c);
  std::allocator<char>::~allocator((allocator<char> *)&local_15);
  local_10 = CKillUSRConfig::GetInfo(*(CKillUSRConfig **)(this + 100));
  cVar2 = std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::empty();
  if (cVar2 == '\0') {
    std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::begin();
    while( true ) {
      std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::end();
      bVar3 = __gnu_cxx::operator!=(local_20,local_14);
      if (!bVar3) break;
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
               ::operator*(local_20);
      switch(*(undefined4 *)*puVar4) {
      case 1:
        bVar3 = (bool)Get_ServerHandler(this);
        pCVar5 = (CServerHandler *)Get_GuildManager(this);
        CGuildManager::DBGuildProcess(pCVar5,bVar3);
        break;
      case 3:
        Packet_Monitor_Send_Guild_Mail::Packet_Monitor_Send_Guild_Mail(local_169);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_15f = *(undefined4 *)(*piVar6 + 4);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_15b = *(undefined4 *)(*piVar6 + 8);
        memcpy(&local_157,&DAT_0811cb80,0x17);
        CPacketTranslater::OnMonitorSendGuildLetter((PacketHeader *)local_169);
        break;
      case 4:
        CAppConfig::GetServerInfoMap(*(CAppConfig **)(this + 0x5c));
        CServerHandler::Load(*(multimap **)(this + 0x68));
        break;
      case 7:
        Packet_Monitor_Notice_Guild_Enter::Packet_Monitor_Notice_Guild_Enter
                  ((Packet_Monitor_Notice_Guild_Enter *)local_169);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_15f = *(undefined4 *)(*piVar6 + 4);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_15b = *(undefined4 *)(*piVar6 + 8);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_157 = *(undefined4 *)(*piVar6 + 0xc);
        memcpy(auStack_153,&DAT_0811cb97,0x16);
        CPacketTranslater::OnNoticeGuildEnter((PacketHeader *)local_169);
        break;
      case 8:
        Packet_Monitor_Set_GuildMember_Grade_FromWeb::Packet_Monitor_Set_GuildMember_Grade_FromWeb
                  (local_37);
        local_29 = 2;
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_2d = *(undefined4 *)(*piVar6 + 4);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_24 = *(undefined4 *)(*piVar6 + 8);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_25 = (undefined1)*(undefined4 *)(*piVar6 + 0xc);
        CPacketTranslater::OnSetGuildMemberGradeFromWeb((PacketHeader *)local_37);
        break;
      case 9:
        Packet_Guild_Master_Delegate_FromWeb::Packet_Guild_Master_Delegate_FromWeb
                  ((Packet_Guild_Master_Delegate_FromWeb *)local_169);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_15f = *(undefined4 *)(*piVar6 + 4);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_15b = *(undefined4 *)(*piVar6 + 8);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_20);
        local_157 = *(undefined4 *)(*piVar6 + 0xc);
        memcpy(auStack_153,&DAT_0811cb9e,4);
        CPacketTranslater::OnGuildMasterDelegateFromWeb((PacketHeader *)local_169);
        break;
      case 0xb:
        CPowerManager::LoadPowerWarCfg
                  ((CPowerManager *)(this + 0x370),"./script/power_war_event.tbl");
        break;
      case 0xc:
        CPowerManager::StartPowerWarEvent((CPowerManager *)(this + 0x370));
        Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_49);
        local_3f = 0x1e;
        CServerHandler::SendAllTcpGameServer
                  (*(CServerHandler **)(this + 0x68),(PacketHeader *)local_49);
        break;
      case 0xd:
        CPowerManager::SendPowerWarScore((CPowerManager *)(this + 0x370));
        CPowerManager::EndPowerWarEvent((CPowerManager *)(this + 0x370));
        Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_57);
        local_4d = 0x1e;
        CServerHandler::SendAllTcpGameServer
                  (*(CServerHandler **)(this + 0x68),(PacketHeader *)local_57);
        break;
      case 0xe:
        this_00 = (CTcpNetSystem *)Get_TcpNetSystem(this);
        CTcpNetSystem::CleanTcpSendPacketQ(this_00);
        break;
      case 0xf:
        CGuildManager::CargoLock((CGuildManager *)(this + 0x290));
        break;
      case 0x10:
        CGuildManager::CargoUnlock((CGuildManager *)(this + 0x290));
      }
      __gnu_cxx::
      __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
      ::operator++(local_20);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 448 行）：

```cpp
void CApplication::TranslateSignal()
{
    m_killConfig->Clear_Table();
    m_killConfig->Load_Table("./script/kill_user_config.tbl");
    const std::vector<ST_KillUSRConfig*>* vec = m_killConfig->GetInfo();
    if (vec->empty())
    {
        return;
    }
    for (std::vector<ST_KillUSRConfig*>::const_iterator it = vec->begin(); it != vec->end(); ++it)
    {
        switch ((*it)->m_field0)
        {
        case 1:
            Get_GuildManager()->DBGuildProcess(Get_ServerHandler(), true);
            break;
            case 3:
            {
                Packet_Monitor_Send_Guild_Mail mail;
                struct MailFields
                {
                    char pad[0xa];
                    unsigned int f1;
                    unsigned int f2;
                    char msg[0x17];
                };
                ((MailFields*)&mail)->f1 = (unsigned int)(*it)->m_field1;
                ((MailFields*)&mail)->f2 = (unsigned int)(*it)->m_field2;
                memcpy(((MailFields*)&mail)->msg,
                       "\xc5\xc2\xbd\xba\xc6\xae \xb1\xe6\xb5\xe5\xb8\xde\xc0\xcf\xc0\xd4\xb4\xcf\xb4\xd9.",
                       0x17);
                CPacketTranslater::OnMonitorSendGuildLetter(&mail);
                break;
            }
            case 4:
                m_serverHandler->Load(m_appConfig->GetServerInfoMap());
                break;
            case 7:
            {
                Packet_Monitor_Notice_Guild_Enter enter;
                struct EnterFields
                {
                    char pad[0xa];
                    unsigned int f1;
                    unsigned int f2;
                    unsigned int f3;
                    char msg[0x16];
                };
                ((EnterFields*)&enter)->f1 = (unsigned int)(*it)->m_field1;
                ((EnterFields*)&enter)->f2 = (unsigned int)(*it)->m_field2;
                ((EnterFields*)&enter)->f3 = (unsigned int)(*it)->m_field3;
                memcpy(((EnterFields*)&enter)->msg,
                       "\xb4\xab\xbb\xe7\xb6\xf7\x00\xb0\xde\xdf\xb8\xde\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
                       0x16);
                CPacketTranslater::OnNoticeGuildEnter(&enter);
                break;
            }
            case 8:
            {
                Packet_Monitor_Set_GuildMember_Grade_FromWeb grade;
                struct GradeFields
                {
                    char pad[0xa];
                    unsigned int f1;
                    unsigned int f2;
                    unsigned int grade;
                    unsigned char f3;
                };
                ((GradeFields*)&grade)->grade = 2;
                ((GradeFields*)&grade)->f1 = (unsigned int)(*it)->m_field1;
                ((GradeFields*)&grade)->f2 = (unsigned int)(*it)->m_field2;
                ((GradeFields*)&grade)->f3 = (unsigned char)(*it)->m_field3;
                CPacketTranslater::OnSetGuildMemberGradeFromWeb(&grade);
                break;
            }
            case 9:
            {
                Packet_Guild_Master_Delegate_FromWeb delegate;
                struct DelegateFields
                {
                    char pad[0xa];
                    unsigned int f1;
                    unsigned int f2;
                    unsigned int f3;
                    char msg[4];
                };
                ((DelegateFields*)&delegate)->f1 = (unsigned int)(*it)->m_field1;
                ((DelegateFields*)&delegate)->f2 = (unsigned int)(*it)->m_field2;
                ((DelegateFields*)&delegate)->f3 = (unsigned int)(*it)->m_field3;
                memcpy(((DelegateFields*)&delegate)->msg, "\xb0\xde\xdf\xb8", 4);
                CPacketTranslater::OnGuildMasterDelegateFromWeb(&delegate);
                break;
            }
            case 0xb:
                m_powerManager.LoadPowerWarCfg("./script/power_war_event.tbl");
                break;
            case 0xc:
                m_powerManager.StartPowerWarEvent();
                {
                    Packet_Monitor_Event_Start start;
                    start.m_fieldA = 0x1e;
                    m_serverHandler->SendAllTcpGameServer(&start);
                }
                break;
            case 0xd:
                m_powerManager.SendPowerWarScore();
                m_powerManager.EndPowerWarEvent();
                {
                    Packet_Monitor_Event_End end;
                    end.m_fieldA = 0x1e;
                    m_serverHandler->SendAllTcpGameServer(&end);
                }
                break;
            case 0xe:
                Get_TcpNetSystem()->CleanTcpSendPacketQ();
                break;
            case 0xf:
                m_guildManager.CargoLock();
                break;
            case 0x10:
                m_guildManager.CargoUnlock();
                break;
            default:
                break;
            }
        }
    }
```
