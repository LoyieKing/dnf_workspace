# _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE

`np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x808f8ea` | `0x265` | `0x809867a` | `0x264` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,191 +1,190 @@
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
-nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void StrPunish(CServerXml * this, int nTextID, char * pText,
   _eStringType type) */

void __thiscall
np_server_xml::CServerXml::_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE
          (CServerXml *this,int nTextID,char *pText,_eStringType type)

{
  map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
  *pmVar1;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> local_5c;
  allocator<char> local_55;
  undefined1 local_54 [16];
  pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> local_44;
  undefined1 local_3c [16];
  pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> local_2c;
  undefined1 local_24 [16];
  pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> local_14;
  
                    /* Unresolved local var: string strText@[???] */
  if (pText != (char *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808f91b to 0808f91f has its CatchHandler @ 0808f922 */
    std::string::string(&local_5c,pText,(allocator *)&local_55);
    std::allocator<char>::~allocator(&local_55);
    if (type == ENUM_EVENT_STRING_START) {
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::
      pair<int&,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>
                (&local_2c,&nTextID,&local_5c);
                    /* try { // try from 0808fa1f to 0808fa23 has its CatchHandler @ 0808fa65 */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                ((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                  *)(local_3c + 8),&local_2c);
      pmVar1 = &this->m_mapEventStartStr;
                    /* try { // try from 0808fa3b to 0808fa3f has its CatchHandler @ 0808fa50 */
      std::
      map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
      ::insert((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
                *)local_3c,
               (pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                *)pmVar1);
                    /* try { // try from 0808fa49 to 0808fa4d has its CatchHandler @ 0808fa65 */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::~pair((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
               *)(local_3c + 8),(int)pmVar1);
                    /* try { // try from 0808fa83 to 0808faa5 has its CatchHandler @ 0808fb29 */
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::~pair
                (&local_2c,(int)pmVar1);
    }
    else if (type == ENUM_EVENT_STRING_END) {
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::
      pair<int&,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>
                (&local_14,&nTextID,&local_5c);
                    /* try { // try from 0808fab3 to 0808fab7 has its CatchHandler @ 0808fafc */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                ((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                  *)(local_24 + 8),&local_14);
      pmVar1 = &this->m_mapEventEndStr;
                    /* try { // try from 0808fad2 to 0808fad6 has its CatchHandler @ 0808fae7 */
      std::
      map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
      ::insert((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
                *)local_24,
               (pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                *)pmVar1);
                    /* try { // try from 0808fae0 to 0808fae4 has its CatchHandler @ 0808fafc */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::~pair((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
               *)(local_24 + 8),(int)pmVar1);
                    /* try { // try from 0808fb17 to 0808fb1b has its CatchHandler @ 0808fb29 */
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::~pair
                (&local_14,(int)pmVar1);
    }
    else if (type == ENUM_SERVER_STRING) {
                    /* try { // try from 0808f979 to 0808f97d has its CatchHandler @ 0808fb29 */
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::
      pair<int&,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>&>
                (&local_44,&nTextID,&local_5c);
                    /* try { // try from 0808f98b to 0808f98f has its CatchHandler @ 0808f9d1 */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                ((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                  *)(local_54 + 8),&local_44);
      pmVar1 = &this->m_mapServerStr;
                    /* try { // try from 0808f9a7 to 0808f9ab has its CatchHandler @ 0808f9bc */
      std::
      map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
      ::insert((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
                *)local_54,
               (pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                *)pmVar1);
                    /* try { // try from 0808f9b5 to 0808f9b9 has its CatchHandler @ 0808f9d1 */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::~pair((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
               *)(local_54 + 8),(int)pmVar1);
                    /* try { // try from 0808f9ef to 0808fa11 has its CatchHandler @ 0808fb29 */
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::~pair
                (&local_44,(int)pmVar1);
    }
    std::string::~string((string *)&local_5c);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/ServerCommon/ServerXml.cpp, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/ServerXml.cpp, source/DNFServer/ServerCommon/ServerXml.h, source/DNFServer/ServerCommon/tinyxml.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.h 等 300 个文件*
