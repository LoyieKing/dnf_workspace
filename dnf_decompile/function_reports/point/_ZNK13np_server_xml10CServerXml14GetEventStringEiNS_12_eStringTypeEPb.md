# _ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb

`np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x8090078` | `0x20a` | `0x8098e9c` | `0x20a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,161 +1,161 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%ebx
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $&data#c7597315(.rodata),0x4(%esp)
+movl   $&data#0d5d60c1(.rodata),0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x4d>
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
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1Ev>
 mov    0x14(%ebp),%eax
 cmp    $0x1,%eax
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x79>
 cmp    $0x2,%eax
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x11d>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1c1>
 mov    0xc(%ebp),%eax
 lea    0x70(%eax),%ecx
 lea    -0x2c(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x70(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xda>
 cmpl   $0x0,0x18(%ebp)
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xfc>
 mov    0x18(%ebp),%eax
 movb   $0x1,(%eax)
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xfc>
 cmpl   $0x0,0x18(%ebp)
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xe6>
 mov    0x18(%ebp),%eax
 movb   $0x0,(%eax)
 mov    %ebx,%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    %ebx,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    0xc(%ebp),%eax
 lea    0x88(%eax),%ecx
 lea    -0x2c(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 sub    $0x4,%esp
 mov    -0x2c(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 lea    0x88(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 test   %al,%al
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x184>
 cmpl   $0x0,0x18(%ebp)
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1a3>
 mov    0x18(%ebp),%eax
 movb   $0x1,(%eax)
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1a3>
 cmpl   $0x0,0x18(%ebp)
 je     <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x190>
 mov    0x18(%ebp),%eax
 movb   $0x0,(%eax)
 mov    %ebx,%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    %ebx,%esi
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    %ebx,%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 jmp    <T> <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: string GetEventString(CServerXml * this, int nTextID, _eStringType
   type, bool * pbResult) */

string __thiscall
np_server_xml::CServerXml::_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb
          (CServerXml *this,int nTextID,_eStringType type,bool *pbResult)

{
  bool bVar1;
  pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_> *ppVar2;
  undefined1 *in_stack_00000014;
  _Const_Base_ptr local_30 [4];
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_20;
  string local_1c;
  allocator<char> local_15;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_14;
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  local_10;
  
                    /* Unresolved local var: string ret@[???]
                       Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       pIter@[???] */
  std::allocator<char>::allocator();
                    /* try { // try from 080900a3 to 080900a7 has its CatchHandler @ 080900aa */
  std::string::string(&local_1c,"",(allocator *)&local_15);
  std::allocator<char>::~allocator(&local_15);
  std::
  _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ::_Rb_tree_const_iterator(&local_20);
  if (pbResult == (bool *)0x1) {
                    /* try { // try from 08090108 to 08090249 has its CatchHandler @ 0809024c */
    std::
    map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
    ::find((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
            *)local_30,(int *)(nTextID + 0x70));
    local_20._M_node = local_30[0];
    std::
    map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
    ::end((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
           *)&local_14);
    bVar1 = std::
            _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
            ::operator!=(&local_20,&local_14);
    if (bVar1) {
      if (in_stack_00000014 != (undefined1 *)0x0) {
        *in_stack_00000014 = 1;
      }
      ppVar2 = std::
               _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ::operator->(&local_20);
      std::string::string(this,&ppVar2->second);
    }
    else {
      if (in_stack_00000014 != (undefined1 *)0x0) {
        *in_stack_00000014 = 0;
      }
      std::string::string(this,&local_1c);
    }
  }
  else if (pbResult == (bool *)0x2) {
    std::
    map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
    ::find((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
            *)local_30,(int *)(nTextID + 0x88));
    local_20._M_node = local_30[0];
    std::
    map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
    ::end((map<int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::less<int>,_std::allocator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>_>
           *)&local_10);
    bVar1 = std::
            _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
            ::operator!=(&local_20,&local_10);
    if (bVar1) {
      if (in_stack_00000014 != (undefined1 *)0x0) {
        *in_stack_00000014 = 1;
      }
      ppVar2 = std::
               _Rb_tree_const_iterator<std::pair<const_int,_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ::operator->(&local_20);
      std::string::string(this,&ppVar2->second);
    }
    else {
      if (in_stack_00000014 != (undefined1 *)0x0) {
        *in_stack_00000014 = 0;
      }
      std::string::string(this,&local_1c);
    }
  }
  else {
    std::string::string(this,&local_1c);
  }
  std::string::~string((string *)&local_1c);
  return (string)(_Alloc_hider)this;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/ServerXml.cpp, source/DNFServer/GameServer/Guild/ServerXml.cpp, source/DNFServer/GameServer/Monitor/ServerXml.cpp, source/DNFServer/ServerCommon/ServerXml.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h 等 584 个文件*
