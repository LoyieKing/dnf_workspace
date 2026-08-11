# _ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE

`AvatarVariation::Parse_Table(char*, int, AvatarVariation::AvatarColorInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x807b49a` | `0x228` | `0x807e970` | `0x22f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,162 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
 movl   $0x5,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x23,%al
 je     <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x2d>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x2f,%al
 je     <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x2d>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x5b,%al
 jne    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x37>
 mov    $0x0,%ebx
-jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x21c>
+jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x223>
 movl   $0x5,0xc(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $" \t\r\n\"",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>
 cmp    $0x5,%eax
-sete   %al
+jne    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x6e>
+cmpl   $0xfe,0xc(%ebp)
+jg     <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x6e>
+mov    $0x1,%eax
+jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x73>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x217>
-cmpl   $0xfe,0xc(%ebp)
-jg     <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x217>
-lea    -0x57(%ebp),%eax
+je     <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x21e>
+lea    -0x53(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation8colorRGBC1Ev>
-movl   $0x0,-0x5c(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
-mov    -0x54(%ebp),%eax
+movl   $0x0,-0x5c(%ebp)
+mov    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
 mov    %eax,-0x5c(%ebp)
-mov    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <atoi>
-mov    %al,-0x57(%ebp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %al,-0x56(%ebp)
+mov    %al,-0x53(%ebp)
 mov    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %al,-0x55(%ebp)
+mov    %al,-0x52(%ebp)
 mov    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <atoi>
+mov    %al,-0x51(%ebp)
+mov    -0x40(%ebp),%eax
 movl   $0x28,0x8(%esp)
 movl   $0x60,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation11bracketTrimEPccc>
-mov    -0x44(%ebp),%eax
+mov    -0x40(%ebp),%eax
 movl   $0x29,0x8(%esp)
 movl   $0x60,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15AvatarVariation11bracketTrimEPccc>
-mov    -0x44(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsaSEPKc>
 lea    -0x2c(%ebp),%eax
-lea    -0x57(%ebp),%edx
+lea    -0x53(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRiRN15AvatarVariation8colorRGBEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiN15AvatarVariation8colorRGBEEC1IiS2_EEOS_IT_T0_E>
 mov    0x10(%ebp),%edx
 lea    -0x3c(%ebp),%eax
 lea    -0x34(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
-lea    -0x60(%ebp),%edx
+lea    -0x58(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRiRSsESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 mov    0x10(%ebp),%eax
 lea    0x18(%eax),%ecx
 lea    -0x24(%ebp),%eax
 lea    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
-jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x1df>
+jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x1e6>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x1ca>
+jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x1d1>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x1fc>
+jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x203>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIiSsED1Ev>
 mov    $0x1,%ebx
-lea    -0x60(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x21c>
+jmp    <T> <_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE+0x223>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x60(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    $0x0,%ebx
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

bool AvatarVariation::_ZN15AvatarVariation11Parse_TableEPciPNS_15AvatarColorInfoE
               (char *in_pcReadData,int iLineCount,AvatarColorInfo *avatarColorInfo)

{
  int iVar1;
  bool bVar2;
  ColorNameMap *__x;
  tstring local_64;
  int local_60;
  colorRGB local_5b;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  undefined1 local_40 [16];
  pair<int,_AvatarVariation::colorRGB> local_30;
  undefined1 local_28 [16];
  pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> local_18;
  undefined4 local_10;
  
                    /* Unresolved local var: int AVATAR_COLOR_SCRIPT@[???]
                       Unresolved local var: char *[6] pcColumn_Arg@[???] */
  local_10 = 5;
  if (((*in_pcReadData == '#') || (*in_pcReadData == '/')) || (*in_pcReadData == '[')) {
    bVar2 = false;
  }
  else {
    iVar1 = DNFFLib::ExplodeString(in_pcReadData," \t\r\n\"",&local_58,5);
    if ((iVar1 == 5) && (iLineCount < 0xff)) {
                    /* Unresolved local var: colorRGB temColor@[???]
                       Unresolved local var: int intData@[???]
                       Unresolved local var: tstring name@[???] */
      colorRGB::colorRGB(&local_5b);
      local_60 = 0;
      std::string::string(&local_64);
      local_60 = atoi(local_58);
      iVar1 = atoi(local_54);
      local_5b.red = (byte)iVar1;
      iVar1 = atoi(local_50);
      local_5b.green = (byte)iVar1;
      iVar1 = atoi(local_4c);
      local_5b.blue = (byte)iVar1;
      bracketTrim(local_48,'`','(');
      bracketTrim(local_48,'`',')');
                    /* try { // try from 0807b5a6 to 0807b60d has its CatchHandler @ 0807b696 */
      std::string::operator=(&local_64,local_48);
      std::make_pair<int&,_AvatarVariation::colorRGB&>(&local_30,&local_60,&local_5b);
      std::pair<const_int,_AvatarVariation::colorRGB>::pair<int,_AvatarVariation::colorRGB>
                ((pair<const_int,_AvatarVariation::colorRGB> *)(local_40 + 8),&local_30);
      std::
      map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
      ::insert((map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
                *)local_40,(pair<const_int,_AvatarVariation::colorRGB> *)avatarColorInfo);
      std::make_pair<int&,_std::tstring&>(&local_18,&local_60,&local_64);
                    /* try { // try from 0807b61e to 0807b622 has its CatchHandler @ 0807b664 */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                ((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                  *)(local_28 + 8),&local_18);
      __x = &avatarColorInfo->avatarColorNameMap;
                    /* try { // try from 0807b63a to 0807b63e has its CatchHandler @ 0807b64f */
      std::
      map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
      ::insert((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
                *)local_28,
               (pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
                *)__x);
                    /* try { // try from 0807b648 to 0807b64c has its CatchHandler @ 0807b664 */
      std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
      ::~pair((pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>
               *)(local_28 + 8),(int)__x);
                    /* try { // try from 0807b67f to 0807b683 has its CatchHandler @ 0807b696 */
      std::pair<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>::~pair
                (&local_18,(int)__x);
      bVar2 = true;
      std::string::~string((string *)&local_64);
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp, source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp, source/DNFShared/GameScript/RDARScriptAvatarColorInfo.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/stdafx.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/Character.h 等 301 个文件*
