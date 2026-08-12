# _ZN12CApplication15TranslateSignalEv

`CApplication::TranslateSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8064fb2` | `0x36c` | `0x8053038` | `0x36c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,260 +1,260 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfig11Clear_TableEv>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/kill_user_config.tbl",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x7a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x87>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0xa2>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x9c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CKillUSRConfig7GetInfoEv>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN12CApplication15TranslateSignalEv+0x361>
 lea    -0x2c(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x330>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    (%eax),%eax
 cmp    $0x3,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x17e>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x128>
 cmp    $0x3,%eax
 jg     <T> <_ZN12CApplication15TranslateSignalEv+0x111>
 cmp    $0x2,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x128>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x156>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
 cmp    $0x4,%eax
 je     <T> <_ZN12CApplication15TranslateSignalEv+0x1ac>
 cmp    $0x7,%eax
 je     <T> <_ZN12CApplication15TranslateSignalEv+0x2fc>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
-lea    -0x3e(%ebp),%eax
+lea    -0x3a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x3a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_Event_StartC1Ev>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x34(%ebp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %ax,-0x30(%ebp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0xc(%eax),%eax
-mov    %ax,-0x2e(%ebp)
-lea    -0x3e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x42(%ebp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %ax,-0x3e(%ebp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0xc(%eax),%eax
+mov    %ax,-0x3c(%ebp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
+call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig16GetServerInfoMapEv>
 mov    0x8(%ebp),%edx
 mov    0xa0(%edx),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CServerHandler4LoadEPSt8multimapIjP12stServerInfoSt4lessIjESaISt4pairIKjS2_EEE>
 mov    0x8(%ebp),%eax
 mov    0x94(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x15(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/member_cnt_config.tbl",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x94(%eax),%eax
 lea    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x233>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x240>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x25b>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0xd(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/member_exp.tbl",0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%eax
 lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2c7>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2d4>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x2ef>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0xd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
 lea    -0x5b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Monitor_Take_Screen_ShotC1Ev>
 movb   $0xff,-0x51(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x50(%ebp)
 lea    -0x5b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEppEv>
 lea    -0x20(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 test   %al,%al
 jne    <T> <_ZN12CApplication15TranslateSignalEv+0xee>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x362>
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
  int *piVar6;
  Packet_Monitor_Take_Screen_Shot local_5f [10];
  undefined1 local_55;
  time_t local_54;
  Packet_Monitor_Event_End local_50 [10];
  undefined4 local_46;
  Packet_Monitor_Event_Start local_42 [10];
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
  local_30 [4];
  string local_2c [7];
  allocator local_25;
  __normal_iterator local_24 [4];
  string local_20 [7];
  allocator local_19;
  string local_18 [7];
  allocator local_11;
  undefined4 local_10;
  
  CKillUSRConfig::Clear_Table(*(CKillUSRConfig **)(this + 0x9c));
  pcVar1 = *(code **)(**(int **)(this + 0x9c) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 08064ffb to 08064fff has its CatchHandler @ 08065039 */
  std::string::string(local_2c,"./script/kill_user_config.tbl",&local_25);
                    /* try { // try from 08065013 to 08065014 has its CatchHandler @ 08065017 */
  (*pcVar1)(*(undefined4 *)(this + 0x9c),local_2c);
                    /* try { // try from 08065032 to 08065036 has its CatchHandler @ 08065039 */
  std::string::~string(local_2c);
  std::allocator<char>::~allocator((allocator<char> *)&local_25);
  local_10 = CKillUSRConfig::GetInfo(*(CKillUSRConfig **)(this + 0x9c));
  cVar3 = std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::empty();
  if (cVar3 == '\0') {
    std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::begin();
    while( true ) {
      std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::end();
      bVar4 = __gnu_cxx::operator!=(local_30,local_24);
      if (!bVar4) break;
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
               ::operator*(local_30);
      iVar2 = *(int *)*puVar5;
      if (iVar2 == 3) {
        Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_50);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_30);
        local_46 = *(undefined4 *)(*piVar6 + 4);
        CPacketTranslater::OnEventEnd((PacketHeader *)local_50);
      }
      else if (iVar2 < 4) {
        if (iVar2 == 2) {
          Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_42);
          piVar6 = (int *)__gnu_cxx::
                          __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                          ::operator*(local_30);
          local_38 = *(undefined4 *)(*piVar6 + 4);
          piVar6 = (int *)__gnu_cxx::
                          __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                          ::operator*(local_30);
          local_34 = (undefined2)*(undefined4 *)(*piVar6 + 8);
          piVar6 = (int *)__gnu_cxx::
                          __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                          ::operator*(local_30);
          local_32 = (undefined2)*(undefined4 *)(*piVar6 + 0xc);
          CPacketTranslater::OnEventStart((PacketHeader *)local_42);
        }
      }
      else if (iVar2 == 4) {
        CAppConfig::GetServerInfoMap(*(CAppConfig **)(this + 0x8c));
        CServerHandler::Load(*(multimap **)(this + 0xa0));
        pcVar1 = *(code **)(**(int **)(this + 0x94) + 8);
        std::allocator<char>::allocator();
                    /* try { // try from 080651b4 to 080651b8 has its CatchHandler @ 080651f2 */
        std::string::string(local_20,"./script/member_cnt_config.tbl",&local_19);
                    /* try { // try from 080651cc to 080651cd has its CatchHandler @ 080651d0 */
        (*pcVar1)(*(undefined4 *)(this + 0x94),local_20);
                    /* try { // try from 080651eb to 080651ef has its CatchHandler @ 080651f2 */
        std::string::~string(local_20);
        std::allocator<char>::~allocator((allocator<char> *)&local_19);
        pcVar1 = *(code **)(**(int **)(this + 0x98) + 8);
        std::allocator<char>::allocator();
                    /* try { // try from 08065248 to 0806524c has its CatchHandler @ 08065286 */
        std::string::string(local_18,"./script/member_exp.tbl",&local_11);
                    /* try { // try from 08065260 to 08065261 has its CatchHandler @ 08065264 */
        (*pcVar1)(*(undefined4 *)(this + 0x98),local_18);
                    /* try { // try from 0806527f to 08065283 has its CatchHandler @ 08065286 */
        std::string::~string(local_18);
        std::allocator<char>::~allocator((allocator<char> *)&local_11);
      }
      else if (iVar2 == 7) {
        Packet_Monitor_Take_Screen_Shot::Packet_Monitor_Take_Screen_Shot(local_5f);
        local_55 = 0xff;
        local_54 = time((time_t *)0x0);
        CPacketTranslater::OnTakeScreenShot((PacketHeader *)local_5f);
      }
      __gnu_cxx::
      __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
      ::operator++(local_30);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFApplication.cpp](source/DNFServer/GameServer/Monitor/DNFApplication.cpp)（约第 948 行）：

```cpp
void CApplication::TranslateSignal()
{
    m_serverHandler->Clear_Table();
    m_serverHandler->Load_Table("./script/kill_user_config.tbl");
    const std::vector<ST_KillUSRConfig*>* vec = m_serverHandler->GetInfo();
    if (vec->empty())
    {
        return;
    }
    for (std::vector<ST_KillUSRConfig*>::const_iterator it = vec->begin(); it != vec->end();
         ++it)
    {
        switch ((*it)->m_type)
        {
        case 3:
        {
            Packet_Monitor_Event_End pkt;
            pkt.m_fieldA = (*it)->m_val;
            CPacketTranslater::OnEventEnd(&pkt);
            break;
        }
        case 2:
        {
            Packet_Monitor_Event_Start pkt;
            pkt.m_fieldA = (*it)->m_val;
            pkt.m_fieldB = (unsigned short)(*it)->m_b;
            pkt.m_fieldC = (unsigned short)(*it)->m_c;
            CPacketTranslater::OnEventStart(&pkt);
            break;
        }
        case 4:
        {
            m_serverHandler2->Load(m_appConfig->GetServerInfoMap());
            m_memberConfig->Load_Table("./script/member_cnt_config.tbl");
            m_memberExpTbl->Load_Table("./script/member_exp.tbl");
            break;
        }
        case 7:
        {
            Packet_Monitor_Take_Screen_Shot pkt;
            pkt.m_fieldA = 0xff;
            pkt.m_fieldB = (unsigned int)time(0);
            CPacketTranslater::OnTakeScreenShot(&pkt);
            break;
        }
        }
    }
}
```
