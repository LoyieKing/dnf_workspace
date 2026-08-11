# _ZN12CApplication15TranslateSignalEv

`CApplication::TranslateSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x805ede6` | `0x2e8` | `0x804f0f0` | `0x2c8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,229 +1,225 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfig11Clear_TableEv>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
-lea    -0x19(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x19(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/kill_user_config.tbl",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x71>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x7e>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x99>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x19(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x19(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x68(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CKillUSRConfig7GetInfoEv>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x2dd>
-lea    -0x24(%ebp),%eax
-mov    -0xc(%ebp),%edx
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x2bd>
+lea    -0x28(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2ac>
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x28c>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0x3,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x226>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x165>
 cmp    $0x3,%eax
-jg     <T> <_ZN12CApplication15TranslateSignalEv+0x10d>
+jg     <T> <_ZN12CApplication15TranslateSignalEv+0x10b>
 cmp    $0x2,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x1d3>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2a1>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x11e>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x281>
 cmp    $0x4,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x120>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x18e>
 cmp    $0x5,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x251>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2a1>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x240>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x281>
+lea    -0x3a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
+lea    -0x3a(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%edx)
+lea    -0x3a(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %ax,(%edx)
+lea    -0x3a(%ebp),%eax
+lea    0x10(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %ax,(%edx)
+lea    -0x3a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x281>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
+lea    -0x44(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%edx)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x281>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./table/server_config.tbl",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
-lea    -0x14(%ebp),%edx
+lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x17b>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x188>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x1a3>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0xd(%ebp),%eax
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x1e9>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x1f6>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x211>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CServerConfig13GetServerInfoEv>
-mov    0x8(%ebp),%edx
-mov    0x18(%edx),%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2a1>
-lea    -0x36(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x281>
+lea    -0x57(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN32Packet_Web_Prohibit_User_ConnectC1Ev>
+lea    -0x57(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x2c(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x57(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %ax,-0x28(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
+mov    %al,(%edx)
+lea    -0x57(%ebp),%eax
+lea    0xf(%eax),%edx
+mov    -0xc(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %ax,-0x26(%ebp)
-lea    -0x36(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2a1>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x3a(%ebp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2a1>
-lea    -0x57(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN32Packet_Web_Prohibit_User_ConnectC1Ev>
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x4d(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %al,-0x49(%ebp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0xc(%eax),%eax
-mov    %ax,-0x48(%ebp)
+mov    %ax,(%edx)
 lea    -0x57(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater30OnWebNoticeProhibitConnectUserEP12PacketHeader>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEppEv>
-lea    -0x18(%ebp),%eax
-mov    -0xc(%ebp),%edx
+lea    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 test   %al,%al
 jne    <T> <_ZN12CApplication15TranslateSignalEv+0xe2>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2de>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2be>
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
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  ST_ServerInfo *pSVar6;
  int *piVar7;
  Packet_Web_Prohibit_User_Connect local_5b [10];
  undefined4 local_51;
  undefined1 local_4d;
  undefined2 local_4c;
  Packet_Monitor_Event_End local_48 [10];
  undefined4 local_3e;
  Packet_Monitor_Event_Start local_3a [10];
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
  local_28 [4];
  string local_24 [7];
  allocator local_1d;
  __normal_iterator local_1c [4];
  string local_18 [7];
  allocator local_11;
  undefined4 local_10;
  
  CKillUSRConfig::Clear_Table(*(CKillUSRConfig **)(this + 0x68));
  pcVar1 = *(code **)(**(int **)(this + 0x68) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0805ee29 to 0805ee2d has its CatchHandler @ 0805ee64 */
  std::string::string(local_24,"./script/kill_user_config.tbl",&local_1d);
                    /* try { // try from 0805ee3e to 0805ee3f has its CatchHandler @ 0805ee42 */
  (*pcVar1)(*(undefined4 *)(this + 0x68),local_24);
                    /* try { // try from 0805ee5d to 0805ee61 has its CatchHandler @ 0805ee64 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator((allocator<char> *)&local_1d);
  local_10 = CKillUSRConfig::GetInfo(*(CKillUSRConfig **)(this + 0x68));
  cVar3 = std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::empty();
  if (cVar3 == '\0') {
    std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::begin();
    while( true ) {
      std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::end();
      bVar4 = __gnu_cxx::operator!=(local_28,local_1c);
      if (!bVar4) break;
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
               ::operator*(local_28);
      iVar2 = *(int *)*puVar5;
      if (iVar2 == 3) {
        Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_48);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_28);
        local_3e = *(undefined4 *)(*piVar7 + 4);
        CPacketTranslater::OnEventEnd((PacketHeader *)local_48);
      }
      else if (iVar2 < 4) {
        if (iVar2 == 2) {
          Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_3a);
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                          ::operator*(local_28);
          local_30 = *(undefined4 *)(*piVar7 + 4);
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                          ::operator*(local_28);
          local_2c = (undefined2)*(undefined4 *)(*piVar7 + 8);
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                          ::operator*(local_28);
          local_2a = (undefined2)*(undefined4 *)(*piVar7 + 0xc);
          CPacketTranslater::OnEventStart((PacketHeader *)local_3a);
        }
      }
      else if (iVar2 == 4) {
        pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
        std::allocator<char>::allocator();
                    /* try { // try from 0805ef33 to 0805ef37 has its CatchHandler @ 0805ef6e */
        std::string::string(local_18,"./table/server_config.tbl",&local_11);
                    /* try { // try from 0805ef48 to 0805ef49 has its CatchHandler @ 0805ef4c */
        (*pcVar1)(*(undefined4 *)(this + 0x14),local_18);
                    /* try { // try from 0805ef67 to 0805ef6b has its CatchHandler @ 0805ef6e */
        std::string::~string(local_18);
        std::allocator<char>::~allocator((allocator<char> *)&local_11);
        pSVar6 = (ST_ServerInfo *)CServerConfig::GetServerInfo(*(CServerConfig **)(this + 0x14));
        CServerHandler::Load(*(CServerHandler **)(this + 0x18),pSVar6);
      }
      else if (iVar2 == 5) {
        Packet_Web_Prohibit_User_Connect::Packet_Web_Prohibit_User_Connect(local_5b);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_28);
        local_51 = *(undefined4 *)(*piVar7 + 4);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_28);
        local_4d = (undefined1)*(undefined4 *)(*piVar7 + 8);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_28);
        local_4c = (undefined2)*(undefined4 *)(*piVar7 + 0xc);
        CPacketTranslater::OnWebNoticeProhibitConnectUser((PacketHeader *)local_5b);
      }
      __gnu_cxx::
      __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
      ::operator++(local_28);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFApplication.cpp](source/DNFServer/GameServer/Manager/DNFApplication.cpp)（约第 335 行）：

```cpp
void CApplication::TranslateSignal()
{
    m_killUsrConfig->Clear_Table();
    m_killUsrConfig->Load_Table(std::string("./script/kill_user_config.tbl"));
    const std::vector<ST_KillUSRConfig*>* list =
        (const std::vector<ST_KillUSRConfig*>*)m_killUsrConfig->GetInfo();
    if (list->empty())
        return;
    for (std::vector<ST_KillUSRConfig*>::const_iterator it = list->begin();
         it != list->end(); ++it)
    {
        ST_KillUSRConfig* kc = *it;
        switch (kc->m_type)
        {
        case 2:
        {
            Packet_Monitor_Event_Start pkt;
            *(int*)((char*)&pkt + 0xa) = kc->m_field4;
            *(unsigned short*)((char*)&pkt + 0xe) = (unsigned short)kc->m_field8;
            *(unsigned short*)((char*)&pkt + 0x10) = (unsigned short)kc->m_fieldC;
            CPacketTranslater::OnEventStart(&pkt);
            break;
        }
        case 3:
        {
            Packet_Monitor_Event_End pkt;
            *(int*)((char*)&pkt + 0xa) = kc->m_field4;
            CPacketTranslater::OnEventEnd(&pkt);
            break;
        }
        case 4:
            m_serverConfig->Load_Table(std::string("./table/server_config.tbl"));
            m_serverHandler->Load((ST_ServerInfo*)m_serverConfig->GetServerInfo());
            break;
        case 5:
        {
            Packet_Web_Prohibit_User_Connect pkt;
            *(int*)((char*)&pkt + 0xa) = kc->m_field4;
            *(unsigned char*)((char*)&pkt + 0xe) = (unsigned char)kc->m_field8;
            *(unsigned short*)((char*)&pkt + 0xf) = (unsigned short)kc->m_fieldC;
            CPacketTranslater::OnWebNoticeProhibitConnectUser(&pkt);
            break;
        }
        }
    }
}
```
