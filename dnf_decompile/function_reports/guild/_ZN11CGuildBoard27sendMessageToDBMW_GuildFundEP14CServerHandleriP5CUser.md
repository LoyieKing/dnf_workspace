# _ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser

`CGuildBoard::sendMessageToDBMW_GuildFund(CServerHandler*, int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809dbe6` | `0x2fc` | `0x8090552` | `0x2e5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,217 +1,214 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x2fc,%esp
-lea    -0xe8(%ebp),%eax
+sub    $0x30c,%esp
+lea    -0xf0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_DB_Load_Request_Guild_Board_WriteC1Ev>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
-mov    %eax,-0xdd(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xd5(%ebp)
-lea    -0x28(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 movl   $0x0,0xc(%esp)
 movl   $0x3f0,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 sub    $0x4,%esp
-lea    -0x1e7(%ebp),%edx
+lea    -0x1ef(%ebp),%edx
 mov    $0xff,%ebx
 mov    $0x0,%eax
 mov    %edx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x8e>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x88>
 mov    %al,(%edx)
 add    $0x1,%edx
 sub    $0x1,%ebx
 mov    %edx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xa0>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x9a>
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
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xba>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xb4>
 mov    %ax,(%edx)
 add    $0x2,%edx
 mov    %ebx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xc8>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xc2>
 mov    %al,(%edx)
 add    $0x1,%edx
-lea    -0x2e6(%ebp),%edx
+lea    -0x2ee(%ebp),%edx
 mov    $0xff,%ebx
 mov    $0x0,%eax
 mov    %edx,%ecx
 and    $0x2,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xea>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xe4>
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
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x104>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0xfe>
 mov    %ax,(%edx)
 add    $0x2,%edx
 mov    %ebx,%ecx
 and    $0x1,%ecx
 test   %ecx,%ecx
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x112>
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x10c>
 mov    %al,(%edx)
 add    $0x1,%edx
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 movl   $0x0,0xc(%esp)
 movl   $0x3e8,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,%ebx
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"%s %s ",0x4(%esp)
-lea    -0x1e7(%ebp),%eax
+lea    -0x1ef(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x193>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x18d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2a9>
-lea    -0x1e7(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x292>
+lea    -0x1ef(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%d ",0x4(%esp)
-lea    -0x2e6(%ebp),%eax
+lea    -0x2ee(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x2e6(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2ee(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
-lea    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLERKSs>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 cmp    $0x77,%eax
-seta   %al
+setbe  %al
 test   %al,%al
-je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x20b>
-mov    $0x0,%ebx
-jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2be>
-lea    -0x28(%ebp),%eax
+je     <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2a7>
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 mov    %eax,%ebx
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xe8(%ebp),%eax
+lea    -0xf0(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0xe8(%ebp),%eax
+lea    -0xf0(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0xd5(%ebp),%esi
-mov    -0xdd(%ebp),%ebx
 movl   $0x15d,0x8(%esp)
 movl   $&_ZZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"SET SUCCESS - GUILD:%u, CHARAC:%u, gold :%d",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%ebx
-jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2be>
+jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2a7>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2e1>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-test   %ebx,%ebx
-lea    -0x28(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2b4>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser+0x2cf>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x30(%ebp),%eax
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
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::sendMessageToDBMW_GuildFund(CServerHandler*, int, CUser*) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard27sendMessageToDBMW_GuildFundEP14CServerHandleriP5CUser
          (CGuildBoard *this,CServerHandler *param_1,int param_2,CUser *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  size_t __n;
  void *__src;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char acStackY_12d2 [4038];
  undefined1 local_2ea [255];
  char local_1eb;
  char local_1ea [254];
  Packet_DB_Load_Request_Guild_Board_Write local_ec [11];
  undefined4 local_e1;
  undefined4 local_d9;
  undefined1 auStack_d5 [165];
  string local_30 [4];
  string local_2c [4];
  string local_28 [4];
  CMyFileLog local_24 [20];
  
  bVar8 = 0;
  Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write(local_ec);
  local_e1 = CUser::GetGuildKey(param_3);
  local_d9 = CUser::GetUniqCharNo(param_3);
  std::string::string(local_2c);
                    /* try { // try from 0809dc4b to 0809dc4f has its CatchHandler @ 0809dec7 */
  np_server_xml::CServerXml::GetServerString((int)local_30,(bool *)g_ServerString_);
  pcVar4 = &local_1eb;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar4 & 1) != 0;
  if (bVar7) {
    local_1eb = '\0';
    pcVar4 = local_1ea;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar7) {
    *pcVar4 = '\0';
  }
  puVar5 = (undefined4 *)local_2ea;
  uVar6 = 0xff;
  bVar7 = ((uint)puVar5 & 2) != 0;
  if (bVar7) {
    local_2ea._0_2_ = 0;
    puVar5 = (undefined4 *)(local_2ea + 2);
    uVar6 = 0xfd;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
  }
  if (!bVar7) {
    *(undefined2 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 2);
  }
  *(undefined1 *)puVar5 = 0;
                    /* try { // try from 0809dd16 to 0809dd1a has its CatchHandler @ 0809de8f */
  np_server_xml::CServerXml::GetServerString((int)local_28,(bool *)g_ServerString_);
                    /* try { // try from 0809dd24 to 0809dd28 has its CatchHandler @ 0809dd61 */
  uVar1 = std::string::c_str(local_28);
  uVar2 = CUser::GetCharName(param_3);
  sprintf(&local_1eb,"%s %s ",uVar2,uVar1);
                    /* try { // try from 0809dd5a to 0809dd5e has its CatchHandler @ 0809de8f */
  std::string::~string(local_28);
                    /* try { // try from 0809dd89 to 0809de87 has its CatchHandler @ 0809de8f */
  std::string::operator+=(local_2c,&local_1eb);
  sprintf(local_2ea,"%d ",param_2);
  std::string::operator+=(local_2c,local_2ea);
  std::string::operator+=(local_2c,local_30);
  uVar6 = std::string::length(local_2c);
  if (uVar6 < 0x78) {
    __n = std::string::length(local_2c);
    __src = (void *)std::string::c_str(local_2c);
    memcpy(auStack_d5,__src,__n);
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_ec);
    uVar2 = local_d9;
    uVar1 = local_e1;
    CMyFileLog::CMyFileLog(local_24,"sendMessageToDBMW_GuildFund",0x15d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/GuildBoard","SET SUCCESS - GUILD:%u, CHARAC:%u, gold :%d",uVar1,uVar2
               ,param_2);
  }
                    /* try { // try from 0809deaa to 0809deae has its CatchHandler @ 0809dec7 */
  std::string::~string(local_30);
  std::string::~string(local_2c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/GuildBoard.cpp](source/DNFServer/GameServer/Guild/GuildBoard.cpp)（约第 291 行）：

```cpp
void CGuildBoard::sendMessageToDBMW_GuildFund(CServerHandler* handler, int fund, CUser* user)
{
    Packet_DB_Load_Request_Guild_Board_Write pkt;
    unsigned int guildKey = user->GetGuildKey();
    unsigned int characNo = user->GetUniqCharNo();
    std::string msg;
    std::string str1 = g_ServerString_.GetServerString(0x3f0, 0);
    char buf[255] = {0};
    char buf2[255] = {0};
    sprintf(buf, "%s %s ", user->GetCharName(),
            g_ServerString_.GetServerString(0x3e8, 0).c_str());
    msg += buf;
    sprintf(buf2, "%d ", fund);
    msg += buf2;
    msg += str1;
    if (msg.length() < 0x78)
    {
        memcpy((char*)&pkt + 0x17, msg.c_str(), msg.length());
        handler->SendToDB(&pkt);
        DNF_LOG_SCOPE_LINE(0x15d,"./log/GuildBoard", "SET SUCCESS - GUILD:%u, CHARAC:%u, gold :%d",
            guildKey, characNo, fund);
    }
}
```
