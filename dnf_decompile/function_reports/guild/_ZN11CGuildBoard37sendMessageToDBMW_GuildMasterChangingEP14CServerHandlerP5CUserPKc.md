# _ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc

`CGuildBoard::sendMessageToDBMW_GuildMasterChanging(CServerHandler*, CUser*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809dee2` | `0x1c7` | `0x80904c4` | `0x1b0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,124 +1,121 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0xf0,%esp
-lea    -0xd8(%ebp),%eax
+sub    $0x100,%esp
+lea    -0xe0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_DB_Load_Request_Guild_Board_WriteC1Ev>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
-mov    %eax,-0xcd(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0xc5(%ebp)
-lea    -0x11(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x11(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x7c>
+jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x76>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x11(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x11(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 movl   $0x0,0xc(%esp)
 movl   $0x3f1,0x8(%esp)
 movl   $&g_ServerString_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLERKSs>
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 cmp    $0x77,%eax
-seta   %al
+setbe  %al
 test   %al,%al
-je     <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0xde>
-mov    $0x0,%ebx
-jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x18a>
-lea    -0x18(%ebp),%eax
+je     <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x173>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 mov    %eax,%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xd8(%ebp),%eax
+lea    -0xe0(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0xd8(%ebp),%eax
+lea    -0xe0(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0xc5(%ebp),%esi
-mov    -0xcd(%ebp),%ebx
 movl   $0x17b,0x8(%esp)
 movl   $&_ZZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKcE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"SET SUCCESS - GUILD:%u, CHARAC:%u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%ebx
-jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x18a>
+jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x173>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x1ac>
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x180>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-test   %ebx,%ebx
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc+0x19b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CGuildBoard::sendMessageToDBMW_GuildMasterChanging(CServerHandler*, CUser*, char const*) */

void __thiscall
CGuildBoard::_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc
          (CGuildBoard *this,CServerHandler *param_1,CUser *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t __n;
  void *__src;
  Packet_DB_Load_Request_Guild_Board_Write local_dc [11];
  undefined4 local_d1;
  undefined4 local_c9;
  undefined1 auStack_c5 [165];
  string local_20 [4];
  string local_1c [7];
  allocator local_15;
  CMyFileLog local_14 [8];
  
  Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write(local_dc);
  local_d1 = CUser::GetGuildKey(param_2);
  local_c9 = CUser::GetUniqCharNo(param_2);
  std::allocator<char>::allocator();
                    /* try { // try from 0809df3c to 0809df40 has its CatchHandler @ 0809df43 */
  std::string::string(local_1c,param_3,&local_15);
  std::allocator<char>::~allocator((allocator<char> *)&local_15);
                    /* try { // try from 0809df87 to 0809df8b has its CatchHandler @ 0809e08e */
  np_server_xml::CServerXml::GetServerString((int)local_20,(bool *)g_ServerString_);
                    /* try { // try from 0809df9c to 0809e04f has its CatchHandler @ 0809e057 */
  std::string::operator+=(local_1c,local_20);
  uVar3 = std::string::length(local_1c);
  if (uVar3 < 0x78) {
    __n = std::string::length(local_1c);
    __src = (void *)std::string::c_str(local_1c);
    memcpy(auStack_c5,__src,__n);
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_dc);
    uVar2 = local_c9;
    uVar1 = local_d1;
    CMyFileLog::CMyFileLog(local_14,"sendMessageToDBMW_GuildMasterChanging",0x17b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/GuildBoard","SET SUCCESS - GUILD:%u, CHARAC:%u",uVar1,uVar2);
  }
                    /* try { // try from 0809e072 to 0809e076 has its CatchHandler @ 0809e08e */
  std::string::~string(local_20);
  std::string::~string(local_1c);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildBoard.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
