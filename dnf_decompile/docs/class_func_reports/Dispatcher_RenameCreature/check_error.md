# check_error

`_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_RenameCreature::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RenameCreature` | `0x081cd254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd254  _ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_RenameCreature::check_error(CUser*, MSG_BASE&)
# range [0x081cd254, 0x081cd3ad]
081cd254 +0x000:  push   %ebp
081cd255 +0x001:  mov    %esp,%ebp
081cd257 +0x003:  push   %esi
081cd258 +0x004:  push   %ebx
081cd259 +0x005:  sub    $0x20,%esp
081cd25c +0x008:  mov    0xc(%ebp),%eax
081cd25f +0x00b:  mov    %eax,(%esp)
081cd262 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cd267 +0x013:  cmp    $0x3,%eax
081cd26a +0x016:  jne    081cd27b <+0x27>
081cd26c +0x018:  mov    0xc(%ebp),%eax
081cd26f +0x01b:  mov    %eax,(%esp)
081cd272 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cd277 +0x023:  test   %eax,%eax
081cd279 +0x025:  jne    081cd282 <+0x2e>
081cd27b +0x027:  mov    $0x1,%eax
081cd280 +0x02c:  jmp    081cd287 <+0x33>
081cd282 +0x02e:  mov    $0x0,%eax
081cd287 +0x033:  test   %al,%al
081cd289 +0x035:  je     081cd295 <+0x41>
081cd28b +0x037:  mov    $0xffffffff,%ebx
081cd290 +0x03c:  jmp    081cd3a4 <+0x150>
081cd295 +0x041:  mov    0x10(%ebp),%eax
081cd298 +0x044:  mov    %eax,-0xc(%ebp)
081cd29b +0x047:  lea    -0xd(%ebp),%eax
081cd29e +0x04a:  mov    %eax,(%esp)
081cd2a1 +0x04d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081cd2a6 +0x052:  mov    -0xc(%ebp),%eax
081cd2a9 +0x055:  lea    0x14(%eax),%edx
081cd2ac +0x058:  lea    -0xd(%ebp),%eax
081cd2af +0x05b:  mov    %eax,0x8(%esp)
081cd2b3 +0x05f:  mov    %edx,0x4(%esp)
081cd2b7 +0x063:  lea    -0x14(%ebp),%eax
081cd2ba +0x066:  mov    %eax,(%esp)
081cd2bd +0x069:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081cd2c2 +0x06e:  jmp    081cd2df <+0x8b>
081cd2c4 +0x070:  mov    %edx,%ebx
081cd2c6 +0x072:  mov    %eax,%esi
081cd2c8 +0x074:  lea    -0xd(%ebp),%eax
081cd2cb +0x077:  mov    %eax,(%esp)
081cd2ce +0x07a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081cd2d3 +0x07f:  mov    %esi,%eax
081cd2d5 +0x081:  mov    %ebx,%edx
081cd2d7 +0x083:  mov    %eax,(%esp)
081cd2da +0x086:  call   08ae3750 <_Unwind_Resume>
081cd2df +0x08b:  lea    -0xd(%ebp),%eax
081cd2e2 +0x08e:  mov    %eax,(%esp)
081cd2e5 +0x091:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081cd2ea +0x096:  lea    -0x14(%ebp),%eax
081cd2ed +0x099:  mov    %eax,(%esp)
081cd2f0 +0x09c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081cd2f5 +0x0a1:  mov    %eax,(%esp)
081cd2f8 +0x0a4:  call   08ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>  ; restrict_inputting_name::isUtf8StrInUnicodeRange(char const*)
081cd2fd +0x0a9:  xor    $0x1,%eax
081cd300 +0x0ac:  test   %al,%al
081cd302 +0x0ae:  je     081cd30e <+0xba>
081cd304 +0x0b0:  mov    $0x9f,%ebx
081cd309 +0x0b5:  jmp    081cd399 <+0x145>
081cd30e +0x0ba:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081cd313 +0x0bf:  lea    -0x14(%ebp),%edx
081cd316 +0x0c2:  mov    %edx,0x4(%esp)
081cd31a +0x0c6:  mov    %eax,(%esp)
081cd31d +0x0c9:  call   0862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>  ; CSyncSlangFilter::HasSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081cd322 +0x0ce:  test   %al,%al
081cd324 +0x0d0:  jne    081cd341 <+0xed>
081cd326 +0x0d2:  mov    -0xc(%ebp),%eax
081cd329 +0x0d5:  lea    0x14(%eax),%ebx
081cd32c +0x0d8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081cd331 +0x0dd:  mov    %ebx,0x4(%esp)
081cd335 +0x0e1:  mov    %eax,(%esp)
081cd338 +0x0e4:  call   08363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>  ; CDataManager::hasSpecialCharacter(char const*)
081cd33d +0x0e9:  test   %al,%al
081cd33f +0x0eb:  je     081cd348 <+0xf4>
081cd341 +0x0ed:  mov    $0x1,%eax
081cd346 +0x0f2:  jmp    081cd34d <+0xf9>
081cd348 +0x0f4:  mov    $0x0,%eax
081cd34d +0x0f9:  test   %al,%al
081cd34f +0x0fb:  je     081cd358 <+0x104>
081cd351 +0x0fd:  mov    $0x9f,%ebx
081cd356 +0x102:  jmp    081cd399 <+0x145>
081cd358 +0x104:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
081cd35d +0x109:  lea    -0x14(%ebp),%edx
081cd360 +0x10c:  mov    %edx,0x4(%esp)
081cd364 +0x110:  mov    %eax,(%esp)
081cd367 +0x113:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
081cd36c +0x118:  test   %al,%al
081cd36e +0x11a:  je     081cd377 <+0x123>
081cd370 +0x11c:  mov    $0x9f,%ebx
081cd375 +0x121:  jmp    081cd399 <+0x145>
081cd377 +0x123:  mov    $0x0,%ebx
081cd37c +0x128:  jmp    081cd399 <+0x145>
081cd37e +0x12a:  mov    %edx,%ebx
081cd380 +0x12c:  mov    %eax,%esi
081cd382 +0x12e:  lea    -0x14(%ebp),%eax
081cd385 +0x131:  mov    %eax,(%esp)
081cd388 +0x134:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081cd38d +0x139:  mov    %esi,%eax
081cd38f +0x13b:  mov    %ebx,%edx
081cd391 +0x13d:  mov    %eax,(%esp)
081cd394 +0x140:  call   08ae3750 <_Unwind_Resume>
081cd399 +0x145:  lea    -0x14(%ebp),%eax
081cd39c +0x148:  mov    %eax,(%esp)
081cd39f +0x14b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081cd3a4 +0x150:  mov    %ebx,%eax
081cd3a6 +0x152:  add    $0x20,%esp
081cd3a9 +0x155:  pop    %ebx
081cd3aa +0x156:  pop    %esi
081cd3ab +0x157:  pop    %ebp
081cd3ac +0x158:  ret
081cd3ad +0x159:  nop
```

## 反编译 C

```c
// Dispatcher_RenameCreature::check_error @ 0x81cd254

/* Dispatcher_RenameCreature::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RenameCreature::check_error
          (Dispatcher_RenameCreature *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE *pMVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  CSyncSlangFilter *pCVar6;
  CDataManager *this_00;
  undefined4 uVar7;
  string local_18;
  allocator<char> local_11;
  MSG_BASE *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0xffffffff;
  }
  local_10 = param_2;
  std::allocator<char>::allocator();
                    /* try { // try from 081cd2bd to 081cd2c1 has its CatchHandler @ 081cd2c4 */
  std::string::string((string *)&local_18,(char *)(local_10 + 0x14),(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 081cd2f0 to 081cd36b has its CatchHandler @ 081cd37e */
  pcVar5 = (char *)std::string::c_str((string *)&local_18);
  cVar3 = restrict_inputting_name::isUtf8StrInUnicodeRange(pcVar5);
  if (cVar3 != '\x01') {
    uVar7 = 0x9f;
    goto LAB_081cd399;
  }
  pCVar6 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar3 = CSyncSlangFilter::HasSlangName(pCVar6,&local_18);
  if (cVar3 == '\0') {
    pMVar1 = local_10 + 0x14;
    this_00 = (CDataManager *)G_CDataManager();
    cVar3 = CDataManager::hasSpecialCharacter(this_00,(char *)pMVar1);
    if (cVar3 != '\0') goto LAB_081cd341;
    bVar2 = false;
  }
  else {
LAB_081cd341:
    bVar2 = true;
  }
  if (bVar2) {
    uVar7 = 0x9f;
  }
  else {
    pCVar6 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar3 = CSyncSlangFilter::HasSlang(pCVar6,&local_18);
    if (cVar3 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x9f;
    }
  }
LAB_081cd399:
  std::string::~string((string *)&local_18);
  return uVar7;
}
```
