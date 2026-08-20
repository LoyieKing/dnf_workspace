# insertItemDescTable

`_ZN12advancealtar10SyncScript19insertItemDescTableEv`

`advancealtar::SyncScript::insertItemDescTable()`

| 类 | 地址 |
|---|---|
| `advancealtar::SyncScript` | `0x08133ea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133ea6  _ZN12advancealtar10SyncScript19insertItemDescTableEv
#           advancealtar::SyncScript::insertItemDescTable()
# range [0x08133ea6, 0x08134131]
08133ea6 +0x000:  push   %ebp
08133ea7 +0x001:  mov    %esp,%ebp
08133ea9 +0x003:  push   %esi
08133eaa +0x004:  push   %ebx
08133eab +0x005:  sub    $0x40,%esp
08133eae +0x008:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08133eb3 +0x00d:  add    $0x631c,%eax
08133eb8 +0x012:  mov    %eax,-0x18(%ebp)
08133ebb +0x015:  lea    -0x24(%ebp),%eax
08133ebe +0x018:  mov    %eax,(%esp)
08133ec1 +0x01b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08133ec6 +0x020:  lea    -0x28(%ebp),%eax
08133ec9 +0x023:  mov    %eax,(%esp)
08133ecc +0x026:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08133ed1 +0x02b:  mov    -0x18(%ebp),%eax
08133ed4 +0x02e:  mov    %eax,(%esp)
08133ed7 +0x031:  call   081367bc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x23c3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x23c3
08133edc +0x036:  mov    %eax,-0x14(%ebp)
08133edf +0x039:  lea    -0x2c(%ebp),%eax
08133ee2 +0x03c:  mov    -0x18(%ebp),%edx
08133ee5 +0x03f:  mov    %edx,0x4(%esp)
08133ee9 +0x043:  mov    %eax,(%esp)
08133eec +0x046:  call   081367d0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x23d7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x23d7
08133ef1 +0x04b:  sub    $0x4,%esp
08133ef4 +0x04e:  movl   $0x0,-0x10(%ebp)
08133efb +0x055:  jmp    081340a7 <+0x201>
08133f00 +0x05a:  movl   $"inSert into charac_advance_altar_item_desc \t\t\t\t  (ridable_id, item_type, item_id, item_desc) values ",0x4(%esp)
08133f08 +0x062:  lea    -0x24(%ebp),%eax
08133f0b +0x065:  mov    %eax,(%esp)
08133f0e +0x068:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08133f13 +0x06d:  lea    -0x30(%ebp),%eax
08133f16 +0x070:  mov    %eax,(%esp)
08133f19 +0x073:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08133f1e +0x078:  lea    -0x2c(%ebp),%eax
08133f21 +0x07b:  mov    %eax,(%esp)
08133f24 +0x07e:  call   0813686e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2475>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2475
08133f29 +0x083:  lea    0x4(%eax),%ebx
08133f2c +0x086:  lea    -0x2c(%ebp),%eax
08133f2f +0x089:  mov    %eax,(%esp)
08133f32 +0x08c:  call   0813686e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2475>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2475
08133f37 +0x091:  mov    0x4(%eax),%eax
08133f3a +0x094:  lea    -0x30(%ebp),%edx
08133f3d +0x097:  mov    %edx,0xc(%esp)
08133f41 +0x09b:  movl   $0x0,0x8(%esp)
08133f49 +0x0a3:  mov    %ebx,0x4(%esp)
08133f4d +0x0a7:  mov    %eax,(%esp)
08133f50 +0x0aa:  call   08134132 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs>  ; advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&, advancealtar::AdvanceAltarShopType::T, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08133f55 +0x0af:  movl   $",",0x4(%esp)
08133f5d +0x0b7:  lea    -0x30(%ebp),%eax
08133f60 +0x0ba:  mov    %eax,(%esp)
08133f63 +0x0bd:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08133f68 +0x0c2:  lea    -0x2c(%ebp),%eax
08133f6b +0x0c5:  mov    %eax,(%esp)
08133f6e +0x0c8:  call   0813686e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2475>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2475
08133f73 +0x0cd:  lea    0x4(%eax),%ebx
08133f76 +0x0d0:  lea    -0x2c(%ebp),%eax
08133f79 +0x0d3:  mov    %eax,(%esp)
08133f7c +0x0d6:  call   0813686e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2475>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2475
08133f81 +0x0db:  mov    0x4(%eax),%eax
08133f84 +0x0de:  lea    -0x30(%ebp),%edx
08133f87 +0x0e1:  mov    %edx,0xc(%esp)
08133f8b +0x0e5:  movl   $0x1,0x8(%esp)
08133f93 +0x0ed:  mov    %ebx,0x4(%esp)
08133f97 +0x0f1:  mov    %eax,(%esp)
08133f9a +0x0f4:  call   08134132 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs>  ; advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&, advancealtar::AdvanceAltarShopType::T, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08133f9f +0x0f9:  movl   $",",0x4(%esp)
08133fa7 +0x101:  lea    -0x30(%ebp),%eax
08133faa +0x104:  mov    %eax,(%esp)
08133fad +0x107:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08133fb2 +0x10c:  lea    -0x2c(%ebp),%eax
08133fb5 +0x10f:  mov    %eax,(%esp)
08133fb8 +0x112:  call   0813686e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2475>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2475
08133fbd +0x117:  lea    0x4(%eax),%ebx
08133fc0 +0x11a:  lea    -0x2c(%ebp),%eax
08133fc3 +0x11d:  mov    %eax,(%esp)
08133fc6 +0x120:  call   0813686e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2475>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2475
08133fcb +0x125:  mov    0x4(%eax),%eax
08133fce +0x128:  lea    -0x30(%ebp),%edx
08133fd1 +0x12b:  mov    %edx,0xc(%esp)
08133fd5 +0x12f:  movl   $0x2,0x8(%esp)
08133fdd +0x137:  mov    %ebx,0x4(%esp)
08133fe1 +0x13b:  mov    %eax,(%esp)
08133fe4 +0x13e:  call   08134132 <_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs>  ; advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&, advancealtar::AdvanceAltarShopType::T, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08133fe9 +0x143:  lea    -0x30(%ebp),%eax
08133fec +0x146:  mov    %eax,0x4(%esp)
08133ff0 +0x14a:  lea    -0x24(%ebp),%eax
08133ff3 +0x14d:  mov    %eax,(%esp)
08133ff6 +0x150:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08133ffb +0x155:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08134000 +0x15a:  movl   $0x0,0x8(%esp)
08134008 +0x162:  movl   $0x3,0x4(%esp)
08134010 +0x16a:  mov    %eax,(%esp)
08134013 +0x16d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08134018 +0x172:  mov    %eax,-0xc(%ebp)
0813401b +0x175:  lea    -0x24(%ebp),%eax
0813401e +0x178:  mov    %eax,(%esp)
08134021 +0x17b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08134026 +0x180:  mov    %eax,0x4(%esp)
0813402a +0x184:  mov    -0xc(%ebp),%eax
0813402d +0x187:  mov    %eax,(%esp)
08134030 +0x18a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08134035 +0x18f:  movl   $0x1,0x4(%esp)
0813403d +0x197:  mov    -0xc(%ebp),%eax
08134040 +0x19a:  mov    %eax,(%esp)
08134043 +0x19d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08134048 +0x1a2:  xor    $0x1,%eax
0813404b +0x1a5:  test   %al,%al
0813404d +0x1a7:  je     0813405b <+0x1b5>
0813404f +0x1a9:  mov    $0x0,%esi
08134054 +0x1ae:  mov    $0x0,%ebx
08134059 +0x1b3:  jmp    08134077 <+0x1d1>
0813405b +0x1b5:  mov    $0x1,%ebx
08134060 +0x1ba:  jmp    08134077 <+0x1d1>
08134062 +0x1bc:  mov    %edx,%ebx
08134064 +0x1be:  mov    %eax,%esi
08134066 +0x1c0:  lea    -0x30(%ebp),%eax
08134069 +0x1c3:  mov    %eax,(%esp)
0813406c +0x1c6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08134071 +0x1cb:  mov    %esi,%eax
08134073 +0x1cd:  mov    %ebx,%edx
08134075 +0x1cf:  jmp    081340dd <+0x237>
08134077 +0x1d1:  lea    -0x30(%ebp),%eax
0813407a +0x1d4:  mov    %eax,(%esp)
0813407d +0x1d7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08134082 +0x1dc:  test   %ebx,%ebx
08134084 +0x1de:  je     081340f2 <+0x24c>
08134086 +0x1e0:  lea    -0x1c(%ebp),%eax
08134089 +0x1e3:  movl   $0x0,0x8(%esp)
08134091 +0x1eb:  lea    -0x2c(%ebp),%edx
08134094 +0x1ee:  mov    %edx,0x4(%esp)
08134098 +0x1f2:  mov    %eax,(%esp)
0813409b +0x1f5:  call   08136830 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2437>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2437
081340a0 +0x1fa:  sub    $0x4,%esp
081340a3 +0x1fd:  addl   $0x1,-0x10(%ebp)
081340a7 +0x201:  lea    -0x20(%ebp),%eax
081340aa +0x204:  mov    -0x18(%ebp),%edx
081340ad +0x207:  mov    %edx,0x4(%esp)
081340b1 +0x20b:  mov    %eax,(%esp)
081340b4 +0x20e:  call   081367f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x23fd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x23fd
081340b9 +0x213:  sub    $0x4,%esp
081340bc +0x216:  lea    -0x20(%ebp),%eax
081340bf +0x219:  mov    %eax,0x4(%esp)
081340c3 +0x21d:  lea    -0x2c(%ebp),%eax
081340c6 +0x220:  mov    %eax,(%esp)
081340c9 +0x223:  call   0813681c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2423>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2423
081340ce +0x228:  test   %al,%al
081340d0 +0x22a:  jne    08133f00 <+0x5a>
081340d6 +0x230:  mov    $0x1,%esi
081340db +0x235:  jmp    081340f2 <+0x24c>
081340dd +0x237:  mov    %edx,%ebx
081340df +0x239:  mov    %eax,%esi
081340e1 +0x23b:  lea    -0x28(%ebp),%eax
081340e4 +0x23e:  mov    %eax,(%esp)
081340e7 +0x241:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081340ec +0x246:  mov    %esi,%eax
081340ee +0x248:  mov    %ebx,%edx
081340f0 +0x24a:  jmp    081340ff <+0x259>
081340f2 +0x24c:  lea    -0x28(%ebp),%eax
081340f5 +0x24f:  mov    %eax,(%esp)
081340f8 +0x252:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081340fd +0x257:  jmp    0813411a <+0x274>
081340ff +0x259:  mov    %edx,%ebx
08134101 +0x25b:  mov    %eax,%esi
08134103 +0x25d:  lea    -0x24(%ebp),%eax
08134106 +0x260:  mov    %eax,(%esp)
08134109 +0x263:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813410e +0x268:  mov    %esi,%eax
08134110 +0x26a:  mov    %ebx,%edx
08134112 +0x26c:  mov    %eax,(%esp)
08134115 +0x26f:  call   08ae3750 <_Unwind_Resume>
0813411a +0x274:  lea    -0x24(%ebp),%eax
0813411d +0x277:  mov    %eax,(%esp)
08134120 +0x27a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08134125 +0x27f:  mov    %esi,%eax
08134127 +0x281:  lea    -0x8(%ebp),%esp
0813412a +0x284:  add    $0x0,%esp
0813412d +0x287:  pop    %ebx
0813412e +0x288:  pop    %esi
0813412f +0x289:  pop    %ebp
08134130 +0x28a:  ret
08134131 +0x28b:  nop
```

## 反编译 C

```c
// advancealtar::SyncScript::insertItemDescTable @ 0x8133ea6

/* advancealtar::SyncScript::insertItemDescTable() */

undefined4 advancealtar::SyncScript::insertItemDescTable(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 unaff_ESI;
  string local_34 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  local_30 [4];
  string local_2c [4];
  string local_28 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> local_20 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  *local_1c;
  undefined4 local_18;
  int local_14;
  MySQL *local_10;
  
  iVar2 = G_CDataManager();
  local_1c = (map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
              *)(iVar2 + 0x631c);
  std::string::string(local_28);
                    /* try { // try from 08133ecc to 08133ed0 has its CatchHandler @ 081340ff */
  std::string::string(local_2c);
                    /* try { // try from 08133ed7 to 08133f1d has its CatchHandler @ 081340dd */
  local_18 = std::
             map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
             ::size(local_1c);
  std::
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  ::begin(local_30);
  local_14 = 0;
  while( true ) {
    std::
    map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    std::string::operator=
              (local_28,
               "inSert into charac_advance_altar_item_desc \t\t\t\t  (ridable_id, item_type, item_id, item_desc) values "
              );
    std::string::string(local_34);
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
                    /* try { // try from 08133f50 to 08134047 has its CatchHandler @ 08134062 */
    getItemValueStirng(*(undefined4 *)(iVar3 + 4),iVar2 + 4,0,local_34);
    std::string::operator+=(local_34,",");
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    getItemValueStirng(*(undefined4 *)(iVar3 + 4),iVar2 + 4,1,local_34);
    std::string::operator+=(local_34,",");
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>> *)
                       local_30);
    getItemValueStirng(*(undefined4 *)(iVar3 + 4),iVar2 + 4,2,local_34);
    std::string::operator+=(local_28,local_34);
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    pcVar4 = (char *)std::string::c_str(local_28);
    MySQL::set_query(local_10,pcVar4);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 != '\x01') {
      unaff_ESI = 0;
    }
                    /* try { // try from 0813407d to 081340b8 has its CatchHandler @ 081340dd */
    std::string::~string(local_34);
    if (cVar1 != '\x01') goto LAB_081340f2;
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator++
              (local_20,(int)local_30);
    local_14 = local_14 + 1;
  }
  unaff_ESI = 1;
LAB_081340f2:
                    /* try { // try from 081340f8 to 081340fc has its CatchHandler @ 081340ff */
  std::string::~string(local_2c);
  std::string::~string(local_28);
  return unaff_ESI;
}
```
