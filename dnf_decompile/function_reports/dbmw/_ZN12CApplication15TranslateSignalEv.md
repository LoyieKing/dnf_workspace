# _ZN12CApplication15TranslateSignalEv

`CApplication::TranslateSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x806cd2a` | `0x3da` | `0x806ebc2` | `0x3d8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,275 +1,274 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xa0,%esp
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfig11Clear_TableEv>
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./script/kill_user_config.tbl",0x4(%esp)
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%eax
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x74>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x81>
 lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x9c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CKillUSRConfig7GetInfoEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3cc>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3ca>
 lea    -0x50(%ebp),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x39b>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x399>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    (%eax),%eax
 cmp    $0x1,%eax
 je     <T> <_ZN12CApplication15TranslateSignalEv+0x107>
 cmp    $0x2,%eax
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x1ba>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x390>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x1bc>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x38e>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ebx
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./table/server_config.tbl",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    -0x40(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ebx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x162>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x16f>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x18a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x39(%ebp),%eax
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
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x390>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x38e>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x288(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager13clearGuildWarEv>
 mov    0x8(%ebp),%eax
 mov    0x288(%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x50,%edx
 mov    %eax,0x8(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x242>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x244>
 movl   $0x454,0x8(%esp)
 movl   $&_ZZN12CApplication15TranslateSignalEvE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"m_clDBManager::QueryGuildWarPointList Err : return false",0x8(%esp)
 movl   $"./log/GuildWar",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
 mov    0x8(%ebp),%eax
 mov    0x288(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager21GetVtGuildWarRankInfoEv>
 mov    %eax,-0x18(%ebp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorISt4pairIjP18STGuildWarRankInfoESaIS3_EE5emptyEv>
 test   %al,%al
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3cf>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x3cd>
 call   <T> <_Z28get_awardItem_using_intervalv>
 mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x2b6>
+cmpl   $0x0,-0x14(%ebp)
+jns    <T> <_ZN12CApplication15TranslateSignalEv+0x2b4>
 movl   $0x45f,0x8(%esp)
 movl   $&_ZZN12CApplication15TranslateSignalEvE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"m_clDBManager.OnEndGuildWar Err : get_day_interval() Func return minus value",0x8(%esp)
 movl   $"./log/GuildWar",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x344>
-mov    -0x14(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x50,%edx
-mov    %eax,0x14(%esp)
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x342>
+mov    -0x14(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%ecx
+add    $0x50,%ecx
+mov    %edx,0x14(%esp)
 movl   $"마이어전쟁영웅",0x10(%esp)
 movl   $0x65b2,0xc(%esp)
-mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager21AwardGuildTitleByMailEijjPcj>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x344>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x342>
 movl   $0x46a,0x8(%esp)
 movl   $&_ZZN12CApplication15TranslateSignalEvE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CApplication.AwardGuildTitleByMail Err : return false",0x8(%esp)
 movl   $"./log/GuildWar",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
-lea    -0x83(%ebp),%eax
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
+lea    -0x87(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Notice_Guild_Mail_ArrivedC1Ev>
 mov    -0x10(%ebp),%eax
-mov    %eax,-0x78(%ebp)
-movb   $0x1,-0x79(%ebp)
+mov    %eax,-0x7c(%ebp)
+movb   $0x1,-0x7d(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0xc(%ebp)
-movzwl -0x81(%ebp),%eax
+movzwl -0x85(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x83(%ebp),%eax
+lea    -0x87(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEppEv>
 lea    -0x44(%ebp),%eax
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x44(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 test   %al,%al
 jne    <T> <_ZN12CApplication15TranslateSignalEv+0xe5>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
 nop
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3d0>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x3ce>
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
  ST_ServerInfo *pSVar5;
  int *piVar6;
  Packet_Notice_Guild_Mail_Arrived local_87 [2];
  ushort local_85;
  undefined1 local_7d;
  uint local_7c;
  __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
  local_54 [4];
  string local_50 [7];
  allocator local_49;
  __normal_iterator local_48 [4];
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  CMonitorServer *local_10;
  
  CKillUSRConfig::Clear_Table(*(CKillUSRConfig **)(this + 0x4c));
  pcVar1 = *(code **)(**(int **)(this + 0x4c) + 8);
  std::allocator<char>::allocator();
                    /* try { // try from 0806cd70 to 0806cd74 has its CatchHandler @ 0806cdab */
  std::string::string(local_50,"./script/kill_user_config.tbl",&local_49);
                    /* try { // try from 0806cd85 to 0806cd86 has its CatchHandler @ 0806cd89 */
  (*pcVar1)(*(undefined4 *)(this + 0x4c),local_50);
                    /* try { // try from 0806cda4 to 0806cda8 has its CatchHandler @ 0806cdab */
  std::string::~string(local_50);
  std::allocator<char>::~allocator((allocator<char> *)&local_49);
  local_24 = CKillUSRConfig::GetInfo(*(CKillUSRConfig **)(this + 0x4c));
  cVar2 = std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::empty();
  if (cVar2 == '\0') {
    std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::begin();
    while( true ) {
      std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::end();
      bVar3 = __gnu_cxx::operator!=(local_54,local_48);
      if (!bVar3) break;
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
               ::operator*(local_54);
      if (*(int *)*puVar4 == 1) {
        pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
        std::allocator<char>::allocator();
                    /* try { // try from 0806ce5e to 0806ce62 has its CatchHandler @ 0806ce99 */
        std::string::string(local_44,"./table/server_config.tbl",&local_3d);
                    /* try { // try from 0806ce73 to 0806ce74 has its CatchHandler @ 0806ce77 */
        (*pcVar1)(*(undefined4 *)(this + 0x14),local_44);
                    /* try { // try from 0806ce92 to 0806ce96 has its CatchHandler @ 0806ce99 */
        std::string::~string(local_44);
        std::allocator<char>::~allocator((allocator<char> *)&local_3d);
        pSVar5 = (ST_ServerInfo *)CServerConfig::GetServerInfo(*(CServerConfig **)(this + 0x14));
        CServerHandler::Load(*(CServerHandler **)(this + 0x18),pSVar5);
      }
      else if (*(int *)*puVar4 == 2) {
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_54);
        local_20 = *(int *)(*piVar6 + 4);
        CGuildManager::clearGuildWar(*(CGuildManager **)(this + 0x288));
        cVar2 = CDBManager::_ZN10CDBManager22QueryGuildWarPointListEiP13CGuildManager
                          ((CDBManager *)(this + 0x50),local_20,*(CGuildManager **)(this + 0x288));
        if (cVar2 != '\x01') {
          CMyFileLog::CMyFileLog(local_3c,"TranslateSignal",0x454);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_3c,"./log/GuildWar",
                     "m_clDBManager::QueryGuildWarPointList Err : return false");
          return;
        }
        local_1c = CGuildManager::GetVtGuildWarRankInfo(*(CGuildManager **)(this + 0x288));
        cVar2 = std::
                vector<std::pair<unsigned_int,STGuildWarRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildWarRankInfo*>>>
                ::empty();
        if (cVar2 != '\0') {
          return;
        }
        local_18 = get_awardItem_using_interval();
        if ((int)local_18 < 0) {
          CMyFileLog::CMyFileLog(local_34,"TranslateSignal",0x45f);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_34,"./log/GuildWar",
                     "m_clDBManager.OnEndGuildWar Err : get_day_interval() Func return minus value")
          ;
          return;
        }
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
                        ::operator*(local_54);
        local_14 = *(uint *)(*piVar6 + 8);
        if ((local_14 != 0) &&
           (cVar2 = CDBManager::_ZN10CDBManager21AwardGuildTitleByMailEijjPcj
                              ((CDBManager *)(this + 0x50),local_20,local_14,0x65b2,&DAT_081aaeb5,
                               local_18), cVar2 != '\x01')) {
          CMyFileLog::CMyFileLog(local_2c,"TranslateSignal",0x46a);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_2c,"./log/GuildWar",
                     "CApplication.AwardGuildTitleByMail Err : return false");
          return;
        }
        Packet_Notice_Guild_Mail_Arrived::Packet_Notice_Guild_Mail_Arrived(local_87);
        local_7c = local_14;
        local_7d = 1;
        local_10 = (CMonitorServer *)
                   CServerHandler::GetMonitorServer(*(CServerHandler **)(this + 0x18));
        CMonitorServer::SendToServer(local_10,(char *)local_87,(uint)local_85);
      }
      __gnu_cxx::
      __normal_iterator<ST_KillUSRConfig*const*,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
      ::operator++(local_54);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 409 行）：

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
        switch ((*it)->m_type)
        {
        case 1:
            m_serverConfig->Load_Table(std::string("./table/server_config.tbl"));
            m_serverHandler->Load((ST_ServerInfo*)((CServerConfig*)m_serverConfig)->GetServerInfo());
            break;
        case 2:
        {
            int guildWarPoint = (*it)->m_field4;
            m_guildManager->clearGuildWar();
            if (!m_dbManager.QueryGuildWarPointList(guildWarPoint, m_guildManager))
            {
                DNF_LOG_SCOPE_LINE(0x454,"./log/GuildWar",
                    "m_clDBManager::QueryGuildWarPointList Err : return false");
                return;
            }
            std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >* ranks =
                m_guildManager->GetVtGuildWarRankInfo();
            if (ranks->empty())
                return;
            int item = get_awardItem_using_interval();
            if (item < 0)
            {
                DNF_LOG_SCOPE_LINE(0x45f,"./log/GuildWar",
                    "m_clDBManager.OnEndGuildWar Err : get_day_interval() Func return minus value");
                return;
            }
            int guildId = (*it)->m_field8;
            if (guildId != 0)
            {
                if (!m_dbManager.AwardGuildTitleByMail(
                        guildWarPoint, guildId, 0x65b2,
                        "\xB8\xB6\xC0\xCC\xBE\xEE\xC0\xFC\xC0\xEF\xBF\xB5\xBF\xF5", item))
                {
                    DNF_LOG_SCOPE_LINE(0x46a,"./log/GuildWar",
                        "CApplication.AwardGuildTitleByMail Err : return false");
                    return;
                }
            }
            Packet_Notice_Guild_Mail_Arrived pkt;
            pkt.m_guildId = guildId;
            pkt.m_fieldA = 1;
            CMonitorServer* ms = m_serverHandler->GetMonitorServer();
            ms->SendToServer((char*)&pkt, pkt.packetSize);
            break;
        }
        }
    }
}
```
