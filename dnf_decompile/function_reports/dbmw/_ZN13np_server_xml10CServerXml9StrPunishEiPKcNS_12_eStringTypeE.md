# _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE

`np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8060aca` | `0x265` | `0x80ef438` | `0x265` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,191 +1,191 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x53>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x14(%ebp),%eax
 cmp    $0x1,%eax
 je     <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x10f>
 cmp    $0x2,%eax
 je     <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x1a3>
 test   %eax,%eax
 jne    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x232>
 lea    -0x58(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsEC1IRiRSsEEOT_OT0_>
 lea    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x58(%eax),%ecx
 lea    -0x50(%ebp),%eax
 lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 sub    $0x4,%esp
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0xff>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0xe7>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x23f>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x232>
 lea    -0x58(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsEC1IRiRSsEEOT_OT0_>
 lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x70(%eax),%ecx
 lea    -0x38(%ebp),%eax
 lea    -0x30(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 sub    $0x4,%esp
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x193>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x17b>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x23f>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x232>
 lea    -0x58(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsEC1IRiRSsEEOT_OT0_>
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x88(%eax),%ecx
 lea    -0x20(%ebp),%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x227>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x212>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x23f>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
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

/* np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType) */

void __thiscall
np_server_xml::CServerXml::_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE
          (undefined4 this,undefined4 param_1,char *param_2,int param_4)

{
  string local_5c [7];
  allocator local_55;
  pair local_54 [8];
  pair<int_const,std::string> local_4c [8];
  pair<int,std::string> local_44 [8];
  pair local_3c [8];
  pair<int_const,std::string> local_34 [8];
  pair<int,std::string> local_2c [8];
  pair local_24 [8];
  pair<int_const,std::string> local_1c [8];
  pair<int,std::string> local_14 [8];
  
  if (param_2 != (char *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08060afb to 08060aff has its CatchHandler @ 08060b02 */
    std::string::string(local_5c,param_2,&local_55);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
    if (param_4 == 1) {
      std::pair<int,std::string>::pair<int&,std::string&>(local_2c,&param_1,local_5c);
                    /* try { // try from 08060bff to 08060c03 has its CatchHandler @ 08060c45 */
      std::pair<int_const,std::string>::pair<int,std::string>(local_34,local_2c);
                    /* try { // try from 08060c1b to 08060c1f has its CatchHandler @ 08060c30 */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_3c);
                    /* try { // try from 08060c29 to 08060c2d has its CatchHandler @ 08060c45 */
      std::pair<int_const,std::string>::~pair(local_34);
                    /* try { // try from 08060c63 to 08060c85 has its CatchHandler @ 08060d09 */
      std::pair<int,std::string>::~pair(local_2c);
    }
    else if (param_4 == 2) {
      std::pair<int,std::string>::pair<int&,std::string&>(local_14,&param_1,local_5c);
                    /* try { // try from 08060c93 to 08060c97 has its CatchHandler @ 08060cdc */
      std::pair<int_const,std::string>::pair<int,std::string>(local_1c,local_14);
                    /* try { // try from 08060cb2 to 08060cb6 has its CatchHandler @ 08060cc7 */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_24);
                    /* try { // try from 08060cc0 to 08060cc4 has its CatchHandler @ 08060cdc */
      std::pair<int_const,std::string>::~pair(local_1c);
                    /* try { // try from 08060cf7 to 08060cfb has its CatchHandler @ 08060d09 */
      std::pair<int,std::string>::~pair(local_14);
    }
    else if (param_4 == 0) {
                    /* try { // try from 08060b59 to 08060b5d has its CatchHandler @ 08060d09 */
      std::pair<int,std::string>::pair<int&,std::string&>(local_44,&param_1,local_5c);
                    /* try { // try from 08060b6b to 08060b6f has its CatchHandler @ 08060bb1 */
      std::pair<int_const,std::string>::pair<int,std::string>(local_4c,local_44);
                    /* try { // try from 08060b87 to 08060b8b has its CatchHandler @ 08060b9c */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_54);
                    /* try { // try from 08060b95 to 08060b99 has its CatchHandler @ 08060bb1 */
      std::pair<int_const,std::string>::~pair(local_4c);
                    /* try { // try from 08060bcf to 08060bf1 has its CatchHandler @ 08060d09 */
      std::pair<int,std::string>::~pair(local_44);
    }
    std::string::~string(local_5c);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/ServerXml.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h, source/DNFServer/GameServer/DBMW/DNFApplication.h 等 293 个文件*
