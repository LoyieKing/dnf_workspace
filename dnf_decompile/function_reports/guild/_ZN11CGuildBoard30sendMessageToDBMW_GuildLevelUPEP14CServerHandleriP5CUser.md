# _ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser

`CGuildBoard::sendMessageToDBMW_GuildLevelUP(CServerHandler*, int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809d9a2` | `0x23d` | `0x808ff8c` | `0x226` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,156 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x1fc,%esp
-lea    -0xe4(%ebp),%eax
+sub    $0x20c,%esp
+lea    -0xec(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_DB_Load_Request_Guild_Board_WriteC1Ev>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
-mov    %eax,-0xd9(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xd1(%ebp)
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x2c(%ebp),%eax
 movl   $0x0,0xc(%esp)
 movl   $0x3ee,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 movl   $0x0,0xc(%esp)
 movl   $0x3ef,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 sub    $0x4,%esp
-lea    -0x1e3(%ebp),%edx
+lea    -0x1eb(%ebp),%edx
 mov    $0xff,%ebx
 mov    $0x0,%eax
 mov    %edx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xa9>
+je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xa3>
 mov    %al,(%edx)
 add    $0x1,%edx
 sub    $0x1,%ebx
 mov    %edx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xbb>
+je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xb5>
 mov    %ax,(%edx)
 add    $0x2,%edx
 sub    $0x2,%ebx
 mov    %ebx,%ecx
 shr    $0x2,%ecx
 mov    %edx,%edi
 rep stos %eax,%es:(%edi)
 mov    %edi,%edx
 mov    %ebx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xd5>
+je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xcf>
 mov    %ax,(%edx)
 add    $0x2,%edx
 mov    %ebx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xe3>
+je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0xdd>
 mov    %al,(%edx)
 add    $0x1,%edx
 mov    0x10(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,0x8(%esp)
 movl   $"%d",0x4(%esp)
-lea    -0x1e3(%ebp),%eax
+lea    -0x1eb(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x1e3(%ebp),%eax
+lea    -0x1eb(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLERKSs>
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 cmp    $0x77,%eax
-seta   %al
+setbe  %al
 test   %al,%al
-je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x149>
-mov    $0x0,%ebx
-jmp    <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x1ff>
-lea    -0x24(%ebp),%eax
+je     <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x1e8>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 mov    %eax,%ebx
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xe4(%ebp),%eax
+lea    -0xec(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0xe4(%ebp),%eax
+lea    -0xec(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 mov    0x10(%ebp),%eax
-lea    0x1(%eax),%edi
-mov    -0xd1(%ebp),%esi
-mov    -0xd9(%ebp),%ebx
+lea    0x1(%eax),%ebx
 movl   $0x107,0x8(%esp)
 movl   $&_ZZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x14(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"SET SUCCESS - GUILD:%u, CHARAC:%u, LEVEL:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%ebx
-jmp    <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x1ff>
+jmp    <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x1e8>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x222>
-lea    -0x28(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x1f5>
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-test   %ebx,%ebx
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser+0x210>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::sendMessageToDBMW_GuildLevelUP(CServerHandler*, int, CUser*) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard30sendMessageToDBMW_GuildLevelUPEP14CServerHandleriP5CUser
          (CGuildBoard *this,CServerHandler *param_1,int param_2,CUser *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  size_t __n;
  void *__src;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_1e7;
  char local_1e6 [254];
  Packet_DB_Load_Request_Guild_Board_Write local_e8 [11];
  undefined4 local_dd;
  undefined4 local_d5;
  undefined1 auStack_d1 [165];
  string local_2c [4];
  string local_28 [4];
  CMyFileLog local_24 [20];
  
  bVar7 = 0;
  Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write(local_e8);
  local_dd = CUser::GetGuildKey(param_3);
  local_d5 = CUser::GetUniqCharNo(param_3);
  np_server_xml::CServerXml::GetServerString((int)local_28,(bool *)g_ServerString_);
                    /* try { // try from 0809da22 to 0809da26 has its CatchHandler @ 0809dbc4 */
  np_server_xml::CServerXml::GetServerString((int)local_2c,(bool *)g_ServerString_);
  pcVar4 = &local_1e7;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_1e7 = '\0';
    pcVar4 = local_1e6;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  sprintf(&local_1e7,"%d",param_2 + 1);
                    /* try { // try from 0809dab5 to 0809db84 has its CatchHandler @ 0809db8c */
  std::string::operator+=(local_28,&local_1e7);
  std::string::operator+=(local_28,local_2c);
  uVar5 = std::string::length(local_28);
  if (uVar5 < 0x78) {
    __n = std::string::length(local_28);
    __src = (void *)std::string::c_str(local_28);
    memcpy(auStack_d1,__src,__n);
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_e8);
    uVar2 = local_d5;
    uVar1 = local_dd;
    CMyFileLog::CMyFileLog(local_24,"sendMessageToDBMW_GuildLevelUP",0x107);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildBoard","SET SUCCESS - GUILD:%u, CHARAC:%u, LEVEL:%u",uVar1,uVar2
               ,param_2 + 1);
  }
                    /* try { // try from 0809dba7 to 0809dbab has its CatchHandler @ 0809dbc4 */
  std::string::~string(local_2c);
  std::string::~string(local_28);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildBoard.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
