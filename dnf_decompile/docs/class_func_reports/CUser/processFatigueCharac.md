# processFatigueCharac

`_ZN5CUser20processFatigueCharacEi`

`CUser::processFatigueCharac(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086925c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086925c4  _ZN5CUser20processFatigueCharacEi
#           CUser::processFatigueCharac(int)
# range [0x086925c4, 0x08692823]
086925c4 +0x000:  push   %ebp
086925c5 +0x001:  mov    %esp,%ebp
086925c7 +0x003:  push   %esi
086925c8 +0x004:  push   %ebx
086925c9 +0x005:  sub    $0x190,%esp
086925cf +0x00b:  mov    0x8(%ebp),%eax
086925d2 +0x00e:  mov    %eax,(%esp)
086925d5 +0x011:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086925da +0x016:  mov    %eax,-0x1c(%ebp)
086925dd +0x019:  movl   $0x0,-0x18(%ebp)
086925e4 +0x020:  mov    0x8(%ebp),%eax
086925e7 +0x023:  mov    %eax,(%esp)
086925ea +0x026:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
086925ef +0x02b:  movzwl %ax,%esi
086925f2 +0x02e:  mov    -0x1c(%ebp),%eax
086925f5 +0x031:  movsbl %al,%ebx
086925f8 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086925fd +0x039:  mov    0xc(%ebp),%edx
08692600 +0x03c:  mov    %edx,0xc(%esp)
08692604 +0x040:  mov    %esi,0x8(%esp)
08692608 +0x044:  mov    %ebx,0x4(%esp)
0869260c +0x048:  mov    %eax,(%esp)
0869260f +0x04b:  call   0836580e <_ZN12CDataManager26get_useJobFatigueMatchGiftEcii>  ; CDataManager::get_useJobFatigueMatchGift(char, int, int)
08692614 +0x050:  mov    %eax,-0x18(%ebp)
08692617 +0x053:  cmpl   $0x0,-0x18(%ebp)
0869261b +0x057:  je     08692818 <+0x254>
08692621 +0x05d:  lea    -0x20(%ebp),%eax
08692624 +0x060:  mov    %eax,(%esp)
08692627 +0x063:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0869262c +0x068:  lea    -0x24(%ebp),%eax
0869262f +0x06b:  mov    %eax,(%esp)
08692632 +0x06e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08692637 +0x073:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0869263c +0x078:  lea    -0x24(%ebp),%edx
0869263f +0x07b:  mov    %edx,0xc(%esp)
08692643 +0x07f:  lea    -0x20(%ebp),%edx
08692646 +0x082:  mov    %edx,0x8(%esp)
0869264a +0x086:  mov    -0x1c(%ebp),%edx
0869264d +0x089:  mov    %edx,0x4(%esp)
08692651 +0x08d:  mov    %eax,(%esp)
08692654 +0x090:  call   0836598e <_ZN12CDataManager29get_useJobFatigueMatchGiftMsgEiRSsS0_>  ; CDataManager::get_useJobFatigueMatchGiftMsg(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08692659 +0x095:  lea    -0x61(%ebp),%eax
0869265c +0x098:  mov    %eax,(%esp)
0869265f +0x09b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08692664 +0x0a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08692669 +0x0a5:  mov    -0x18(%ebp),%edx
0869266c +0x0a8:  mov    %edx,0x4(%esp)
08692670 +0x0ac:  mov    %eax,(%esp)
08692673 +0x0af:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08692678 +0x0b4:  mov    %eax,-0x14(%ebp)
0869267b +0x0b7:  mov    0x8(%ebp),%eax
0869267e +0x0ba:  mov    %eax,(%esp)
08692681 +0x0bd:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
08692686 +0x0c2:  mov    %eax,-0x10(%ebp)
08692689 +0x0c5:  cmpl   $0x0,-0x14(%ebp)
0869268d +0x0c9:  je     086927e3 <+0x21f>
08692693 +0x0cf:  mov    -0x14(%ebp),%eax
08692696 +0x0d2:  mov    %eax,(%esp)
08692699 +0x0d5:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0869269e +0x0da:  mov    %eax,-0x5f(%ebp)
086926a1 +0x0dd:  mov    -0x14(%ebp),%eax
086926a4 +0x0e0:  mov    (%eax),%eax
086926a6 +0x0e2:  add    $0x8,%eax
086926a9 +0x0e5:  mov    (%eax),%edx
086926ab +0x0e7:  lea    -0x61(%ebp),%eax
086926ae +0x0ea:  mov    %eax,0x4(%esp)
086926b2 +0x0ee:  mov    -0x14(%ebp),%eax
086926b5 +0x0f1:  mov    %eax,(%esp)
086926b8 +0x0f4:  call   *%edx
086926ba +0x0f6:  movl   $0x1,0x4(%esp)
086926c2 +0x0fe:  lea    -0x61(%ebp),%eax
086926c5 +0x101:  mov    %eax,(%esp)
086926c8 +0x104:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
086926cd +0x109:  mov    0x8(%ebp),%eax
086926d0 +0x10c:  mov    %eax,(%esp)
086926d3 +0x10f:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
086926d8 +0x114:  movzwl %ax,%ebx
086926db +0x117:  lea    -0x24(%ebp),%eax
086926de +0x11a:  mov    %eax,(%esp)
086926e1 +0x11d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086926e6 +0x122:  movl   $0x0,0xc(%esp)
086926ee +0x12a:  mov    %eax,0x8(%esp)
086926f2 +0x12e:  movl   $0x4,0x4(%esp)
086926fa +0x136:  movl   $&g_scriptStringManager_,(%esp)
08692701 +0x13d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08692706 +0x142:  mov    %ebx,0xc(%esp)
0869270a +0x146:  mov    %eax,0x8(%esp)
0869270e +0x14a:  movl   $0xff,0x4(%esp)
08692716 +0x152:  lea    -0x161(%ebp),%eax
0869271c +0x158:  mov    %eax,(%esp)
0869271f +0x15b:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08692724 +0x160:  mov    -0x5f(%ebp),%eax
08692727 +0x163:  test   %eax,%eax
08692729 +0x165:  je     086927e3 <+0x21f>
0869272f +0x16b:  mov    -0x14(%ebp),%eax
08692732 +0x16e:  mov    %eax,(%esp)
08692735 +0x171:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0869273a +0x176:  mov    %eax,-0xc(%ebp)
0869273d +0x179:  lea    -0x161(%ebp),%eax
08692743 +0x17f:  mov    %eax,(%esp)
08692746 +0x182:  call   0807e3b0 <_init+0xca8>
0869274b +0x187:  mov    %eax,%esi
0869274d +0x189:  mov    0x8(%ebp),%eax
08692750 +0x18c:  mov    %eax,(%esp)
08692753 +0x18f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08692758 +0x194:  mov    %eax,%ebx
0869275a +0x196:  lea    -0x20(%ebp),%eax
0869275d +0x199:  mov    %eax,(%esp)
08692760 +0x19c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08692765 +0x1a1:  movl   $0x0,0xc(%esp)
0869276d +0x1a9:  mov    %eax,0x8(%esp)
08692771 +0x1ad:  movl   $0x4,0x4(%esp)
08692779 +0x1b5:  movl   $&g_scriptStringManager_,(%esp)
08692780 +0x1bc:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08692785 +0x1c1:  movl   $0x1,0x24(%esp)
0869278d +0x1c9:  movl   $0x0,0x20(%esp)
08692795 +0x1d1:  mov    -0x10(%ebp),%edx
08692798 +0x1d4:  mov    %edx,0x1c(%esp)
0869279c +0x1d8:  mov    -0xc(%ebp),%edx
0869279f +0x1db:  mov    %edx,0x18(%esp)
086927a3 +0x1df:  mov    %esi,0x14(%esp)
086927a7 +0x1e3:  lea    -0x161(%ebp),%edx
086927ad +0x1e9:  mov    %edx,0x10(%esp)
086927b1 +0x1ed:  mov    %ebx,0xc(%esp)
086927b5 +0x1f1:  movl   $0x0,0x8(%esp)
086927bd +0x1f9:  lea    -0x61(%ebp),%edx
086927c0 +0x1fc:  mov    %edx,0x4(%esp)
086927c4 +0x200:  mov    %eax,(%esp)
086927c7 +0x203:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
086927cc +0x208:  jmp    086927e3 <+0x21f>
086927ce +0x20a:  mov    %edx,%ebx
086927d0 +0x20c:  mov    %eax,%esi
086927d2 +0x20e:  lea    -0x24(%ebp),%eax
086927d5 +0x211:  mov    %eax,(%esp)
086927d8 +0x214:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086927dd +0x219:  mov    %esi,%eax
086927df +0x21b:  mov    %ebx,%edx
086927e1 +0x21d:  jmp    086927f0 <+0x22c>
086927e3 +0x21f:  lea    -0x24(%ebp),%eax
086927e6 +0x222:  mov    %eax,(%esp)
086927e9 +0x225:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086927ee +0x22a:  jmp    0869280b <+0x247>
086927f0 +0x22c:  mov    %edx,%ebx
086927f2 +0x22e:  mov    %eax,%esi
086927f4 +0x230:  lea    -0x20(%ebp),%eax
086927f7 +0x233:  mov    %eax,(%esp)
086927fa +0x236:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086927ff +0x23b:  mov    %esi,%eax
08692801 +0x23d:  mov    %ebx,%edx
08692803 +0x23f:  mov    %eax,(%esp)
08692806 +0x242:  call   08ae3750 <_Unwind_Resume>
0869280b +0x247:  lea    -0x20(%ebp),%eax
0869280e +0x24a:  mov    %eax,(%esp)
08692811 +0x24d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08692816 +0x252:  jmp    08692819 <+0x255>
08692818 +0x254:  nop
08692819 +0x255:  add    $0x190,%esp
0869281f +0x25b:  pop    %ebx
08692820 +0x25c:  pop    %esi
08692821 +0x25d:  pop    %ebp
08692822 +0x25e:  ret
08692823 +0x25f:  nop
```

## 反编译 C

```c
// CUser::processFatigueCharac @ 0x86925c4

/* CUser::processFatigueCharac(int) */

void __thiscall CUser::processFatigueCharac(CUser *this,int param_1)

{
  char cVar1;
  uint uVar2;
  CDataManager *pCVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_165 [256];
  Inven_Item local_65 [2];
  int local_63;
  string local_28;
  string local_24;
  int local_20;
  int local_1c;
  CItem *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  local_1c = 0;
  uVar2 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
  cVar1 = (char)local_20;
  pCVar3 = (CDataManager *)G_CDataManager();
  local_1c = CDataManager::get_useJobFatigueMatchGift(pCVar3,cVar1,uVar2 & 0xffff,param_1);
  if (local_1c != 0) {
    std::string::string((string *)&local_24);
                    /* try { // try from 08692632 to 08692636 has its CatchHandler @ 086927f0 */
    std::string::string((string *)&local_28);
                    /* try { // try from 08692637 to 086927cb has its CatchHandler @ 086927ce */
    pCVar3 = (CDataManager *)G_CDataManager();
    CDataManager::get_useJobFatigueMatchGiftMsg(pCVar3,local_20,&local_24,&local_28);
    Inven_Item::Inven_Item(local_65);
    pCVar3 = (CDataManager *)G_CDataManager();
    local_18 = (CItem *)CDataManager::find_item(pCVar3,local_1c);
    local_14 = GetServerGroupToPvP(this);
    if (local_18 != (CItem *)0x0) {
      local_63 = CItem::get_index(local_18);
      (**(code **)(*(int *)local_18 + 8))(local_18,local_65);
      Inven_Item::set_add_info(local_65,1);
      uVar2 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
      pcVar4 = (char *)std::string::c_str((string *)&local_28);
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar4,
                                  (bool *)0x0);
      OS_API::snprintf(local_165,0xff,pcVar4,uVar2 & 0xffff);
      if (local_63 != 0) {
        local_10 = CItem::getExpirationDate(local_18);
        sVar5 = strlen(local_165);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        pcVar4 = (char *)std::string::c_str((string *)&local_24);
        uVar7 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar4,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar7,local_65,0,uVar6,local_165,sVar5,local_10,local_14,0,1);
      }
    }
                    /* try { // try from 086927e9 to 086927ed has its CatchHandler @ 086927f0 */
    std::string::~string((string *)&local_28);
    std::string::~string((string *)&local_24);
  }
  return;
}
```
