# Process

`_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser`

`LevelupSupport2ndEventManger::Process(CUser*)`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndEventManger` | `0x08147880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08147880  _ZN28LevelupSupport2ndEventManger7ProcessEP5CUser
#           LevelupSupport2ndEventManger::Process(CUser*)
# range [0x08147880, 0x08147acc]
08147880 +0x000:  push   %ebp
08147881 +0x001:  mov    %esp,%ebp
08147883 +0x003:  push   %esi
08147884 +0x004:  push   %ebx
08147885 +0x005:  sub    $0xa0,%esp
0814788b +0x00b:  cmpl   $0x0,0xc(%ebp)
0814788f +0x00f:  je     08147ab9 <+0x239>
08147895 +0x015:  mov    0x8(%ebp),%eax
08147898 +0x018:  mov    0x4(%eax),%ebx
0814789b +0x01b:  mov    0xc(%ebp),%eax
0814789e +0x01e:  mov    %eax,(%esp)
081478a1 +0x021:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081478a6 +0x026:  cmp    %eax,%ebx
081478a8 +0x028:  setne  %al
081478ab +0x02b:  test   %al,%al
081478ad +0x02d:  jne    08147abc <+0x23c>
081478b3 +0x033:  mov    0xc(%ebp),%eax
081478b6 +0x036:  mov    %eax,(%esp)
081478b9 +0x039:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081478be +0x03e:  mov    %eax,-0x28(%ebp)
081478c1 +0x041:  mov    0x8(%ebp),%eax
081478c4 +0x044:  lea    0x8(%eax),%ecx
081478c7 +0x047:  lea    -0x2c(%ebp),%eax
081478ca +0x04a:  lea    -0x28(%ebp),%edx
081478cd +0x04d:  mov    %edx,0x8(%esp)
081478d1 +0x051:  mov    %ecx,0x4(%esp)
081478d5 +0x055:  mov    %eax,(%esp)
081478d8 +0x058:  call   08147e5e <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x351>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x351
081478dd +0x05d:  sub    $0x4,%esp
081478e0 +0x060:  mov    0x8(%ebp),%eax
081478e3 +0x063:  lea    0x8(%eax),%edx
081478e6 +0x066:  lea    -0x24(%ebp),%eax
081478e9 +0x069:  mov    %edx,0x4(%esp)
081478ed +0x06d:  mov    %eax,(%esp)
081478f0 +0x070:  call   08147e8a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x37d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x37d
081478f5 +0x075:  sub    $0x4,%esp
081478f8 +0x078:  lea    -0x24(%ebp),%eax
081478fb +0x07b:  mov    %eax,0x4(%esp)
081478ff +0x07f:  lea    -0x2c(%ebp),%eax
08147902 +0x082:  mov    %eax,(%esp)
08147905 +0x085:  call   08147eb0 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x3a3>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x3a3
0814790a +0x08a:  test   %al,%al
0814790c +0x08c:  jne    08147abf <+0x23f>
08147912 +0x092:  lea    -0x2c(%ebp),%eax
08147915 +0x095:  mov    %eax,(%esp)
08147918 +0x098:  call   08147ec4 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x3b7>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x3b7
0814791d +0x09d:  mov    0x4(%eax),%eax
08147920 +0x0a0:  mov    %eax,-0x20(%ebp)
08147923 +0x0a3:  cmpl   $0x0,-0x20(%ebp)
08147927 +0x0a7:  je     08147ac2 <+0x242>
0814792d +0x0ad:  mov    0x8(%ebp),%eax
08147930 +0x0b0:  add    $0x20,%eax
08147933 +0x0b3:  mov    %eax,(%esp)
08147936 +0x0b6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0814793b +0x0bb:  movl   $0x0,0xc(%esp)
08147943 +0x0c3:  mov    %eax,0x8(%esp)
08147947 +0x0c7:  movl   $0x4,0x4(%esp)
0814794f +0x0cf:  movl   $&g_scriptStringManager_,(%esp)
08147956 +0x0d6:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0814795b +0x0db:  mov    %eax,-0x1c(%ebp)
0814795e +0x0de:  mov    0x8(%ebp),%eax
08147961 +0x0e1:  add    $0x24,%eax
08147964 +0x0e4:  mov    %eax,(%esp)
08147967 +0x0e7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0814796c +0x0ec:  movl   $0x0,0xc(%esp)
08147974 +0x0f4:  mov    %eax,0x8(%esp)
08147978 +0x0f8:  movl   $0x4,0x4(%esp)
08147980 +0x100:  movl   $&g_scriptStringManager_,(%esp)
08147987 +0x107:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0814798c +0x10c:  mov    %eax,-0x18(%ebp)
0814798f +0x10f:  movl   $0x0,-0x14(%ebp)
08147996 +0x116:  mov    -0x20(%ebp),%eax
08147999 +0x119:  mov    %eax,(%esp)
0814799c +0x11c:  call   08147ed2 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x3c5>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x3c5
081479a1 +0x121:  mov    %eax,-0x10(%ebp)
081479a4 +0x124:  jmp    08147aa6 <+0x226>
081479a9 +0x129:  mov    -0x14(%ebp),%eax
081479ac +0x12c:  mov    %eax,0x4(%esp)
081479b0 +0x130:  mov    -0x20(%ebp),%eax
081479b3 +0x133:  mov    %eax,(%esp)
081479b6 +0x136:  call   08147eee <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x3e1>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x3e1
081479bb +0x13b:  mov    (%eax),%eax
081479bd +0x13d:  mov    %eax,%ebx
081479bf +0x13f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081479c4 +0x144:  mov    %ebx,0x4(%esp)
081479c8 +0x148:  mov    %eax,(%esp)
081479cb +0x14b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081479d0 +0x150:  mov    %eax,-0xc(%ebp)
081479d3 +0x153:  cmpl   $0x0,-0xc(%ebp)
081479d7 +0x157:  je     08147aa1 <+0x221>
081479dd +0x15d:  lea    -0x69(%ebp),%eax
081479e0 +0x160:  mov    %eax,(%esp)
081479e3 +0x163:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081479e8 +0x168:  mov    -0xc(%ebp),%eax
081479eb +0x16b:  mov    %eax,(%esp)
081479ee +0x16e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081479f3 +0x173:  mov    %eax,-0x67(%ebp)
081479f6 +0x176:  mov    -0xc(%ebp),%eax
081479f9 +0x179:  mov    (%eax),%eax
081479fb +0x17b:  add    $0x8,%eax
081479fe +0x17e:  mov    (%eax),%edx
08147a00 +0x180:  lea    -0x69(%ebp),%eax
08147a03 +0x183:  mov    %eax,0x4(%esp)
08147a07 +0x187:  mov    -0xc(%ebp),%eax
08147a0a +0x18a:  mov    %eax,(%esp)
08147a0d +0x18d:  call   *%edx
08147a0f +0x18f:  mov    -0x14(%ebp),%eax
08147a12 +0x192:  mov    %eax,0x4(%esp)
08147a16 +0x196:  mov    -0x20(%ebp),%eax
08147a19 +0x199:  mov    %eax,(%esp)
08147a1c +0x19c:  call   08147eee <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x3e1>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x3e1
08147a21 +0x1a1:  movzwl 0x4(%eax),%eax
08147a25 +0x1a5:  cwtl
08147a26 +0x1a6:  mov    %eax,0x4(%esp)
08147a2a +0x1aa:  lea    -0x69(%ebp),%eax
08147a2d +0x1ad:  mov    %eax,(%esp)
08147a30 +0x1b0:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08147a35 +0x1b5:  mov    0xc(%ebp),%eax
08147a38 +0x1b8:  mov    %eax,(%esp)
08147a3b +0x1bb:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08147a40 +0x1c0:  mov    %eax,%ebx
08147a42 +0x1c2:  mov    -0x18(%ebp),%eax
08147a45 +0x1c5:  mov    %eax,(%esp)
08147a48 +0x1c8:  call   0807e3b0 <_init+0xca8>
08147a4d +0x1cd:  mov    %eax,%esi
08147a4f +0x1cf:  mov    0xc(%ebp),%eax
08147a52 +0x1d2:  mov    %eax,(%esp)
08147a55 +0x1d5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08147a5a +0x1da:  movl   $0x0,0x24(%esp)
08147a62 +0x1e2:  movl   $0x0,0x20(%esp)
08147a6a +0x1ea:  mov    %ebx,0x1c(%esp)
08147a6e +0x1ee:  movl   $0xf,0x18(%esp)
08147a76 +0x1f6:  mov    %esi,0x14(%esp)
08147a7a +0x1fa:  mov    -0x18(%ebp),%edx
08147a7d +0x1fd:  mov    %edx,0x10(%esp)
08147a81 +0x201:  mov    %eax,0xc(%esp)
08147a85 +0x205:  movl   $0x0,0x8(%esp)
08147a8d +0x20d:  lea    -0x69(%ebp),%eax
08147a90 +0x210:  mov    %eax,0x4(%esp)
08147a94 +0x214:  mov    -0x1c(%ebp),%eax
08147a97 +0x217:  mov    %eax,(%esp)
08147a9a +0x21a:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08147a9f +0x21f:  jmp    08147aa2 <+0x222>
08147aa1 +0x221:  nop
08147aa2 +0x222:  addl   $0x1,-0x14(%ebp)
08147aa6 +0x226:  mov    -0x14(%ebp),%eax
08147aa9 +0x229:  cmp    -0x10(%ebp),%eax
08147aac +0x22c:  setb   %al
08147aaf +0x22f:  test   %al,%al
08147ab1 +0x231:  jne    081479a9 <+0x129>
08147ab7 +0x237:  jmp    08147ac3 <+0x243>
08147ab9 +0x239:  nop
08147aba +0x23a:  jmp    08147ac3 <+0x243>
08147abc +0x23c:  nop
08147abd +0x23d:  jmp    08147ac3 <+0x243>
08147abf +0x23f:  nop
08147ac0 +0x240:  jmp    08147ac3 <+0x243>
08147ac2 +0x242:  nop
08147ac3 +0x243:  lea    -0x8(%ebp),%esp
08147ac6 +0x246:  add    $0x0,%esp
08147ac9 +0x249:  pop    %ebx
08147aca +0x24a:  pop    %esi
08147acb +0x24b:  pop    %ebp
08147acc +0x24c:  ret
```

## 反编译 C

```c
// LevelupSupport2ndEventManger::Process @ 0x8147880

/* LevelupSupport2ndEventManger::Process(CUser*) */

void __thiscall
LevelupSupport2ndEventManger::Process(LevelupSupport2ndEventManger *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  CDataManager *this_00;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  Inven_Item local_6d [2];
  undefined4 local_6b;
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
  local_30 [4];
  undefined4 local_2c;
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_28 [4];
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *local_24;
  undefined4 local_20;
  char *local_1c;
  uint local_18;
  uint local_14;
  CItem *local_10;
  
  if ((param_1 != (CUser *)0x0) &&
     (iVar3 = *(int *)(this + 4),
     iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1), iVar3 == iVar2)) {
    local_2c = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    std::
    map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
    ::find((int *)local_30);
    std::
    map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
    ::end(local_28);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
            ::operator==(local_30,(_Rb_tree_iterator *)local_28);
    if (cVar1 == '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
              ::operator->(local_30);
      local_24 = *(vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                   **)(iVar3 + 4);
      if (local_24 !=
          (vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
           *)0x0) {
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x20));
        local_20 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar4,(bool *)0x0
                             );
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x24));
        local_1c = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar4,
                                      (bool *)0x0);
        local_18 = 0;
        local_14 = std::
                   vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                   ::size(local_24);
        for (; local_18 < local_14; local_18 = local_18 + 1) {
          piVar5 = (int *)std::
                          vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                          ::at(local_24,local_18);
          iVar3 = *piVar5;
          this_00 = (CDataManager *)G_CDataManager();
          local_10 = (CItem *)CDataManager::find_item(this_00,iVar3);
          if (local_10 != (CItem *)0x0) {
            Inven_Item::Inven_Item(local_6d);
            local_6b = CItem::get_index(local_10);
            (**(code **)(*(int *)local_10 + 8))(local_10,local_6d);
            iVar3 = std::
                    vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                    ::at(local_24,local_18);
            Inven_Item::set_add_info(local_6d,(int)*(short *)(iVar3 + 4));
            uVar6 = CUser::GetServerGroup(param_1);
            sVar7 = strlen(local_1c);
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_20,local_6d,0,uVar8,local_1c,sVar7,0xf,uVar6,0,0);
          }
        }
      }
    }
  }
  return;
}
```
