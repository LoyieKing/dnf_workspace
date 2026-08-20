# _deleteSpecificItemCargo

`_ZN5CUser24_deleteSpecificItemCargoERKSt6vectorISt4pairIiiESaIS2_EERS4_`

`CUser::_deleteSpecificItemCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867d3ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867d3ee  _ZN5CUser24_deleteSpecificItemCargoERKSt6vectorISt4pairIiiESaIS2_EERS4_
#           CUser::_deleteSpecificItemCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0867d3ee, 0x0867d697]
0867d3ee +0x000:  push   %ebp
0867d3ef +0x001:  mov    %esp,%ebp
0867d3f1 +0x003:  push   %esi
0867d3f2 +0x004:  push   %ebx
0867d3f3 +0x005:  sub    $0xa0,%esp
0867d3f9 +0x00b:  movl   $0xffffffff,-0x14(%ebp)
0867d400 +0x012:  mov    0x8(%ebp),%eax
0867d403 +0x015:  mov    %eax,(%esp)
0867d406 +0x018:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0867d40b +0x01d:  mov    %eax,-0x10(%ebp)
0867d40e +0x020:  lea    -0x4c(%ebp),%eax
0867d411 +0x023:  mov    %eax,(%esp)
0867d414 +0x026:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867d419 +0x02b:  movl   $0x0,-0x50(%ebp)
0867d420 +0x032:  jmp    0867d5d7 <+0x1e9>
0867d425 +0x037:  mov    -0x50(%ebp),%edx
0867d428 +0x03a:  lea    -0x8d(%ebp),%eax
0867d42e +0x040:  mov    %edx,0x8(%esp)
0867d432 +0x044:  mov    -0x10(%ebp),%edx
0867d435 +0x047:  mov    %edx,0x4(%esp)
0867d439 +0x04b:  mov    %eax,(%esp)
0867d43c +0x04e:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
0867d441 +0x053:  sub    $0x4,%esp
0867d444 +0x056:  mov    -0x8b(%ebp),%eax
0867d44a +0x05c:  test   %eax,%eax
0867d44c +0x05e:  je     0867d5cd <+0x1df>
0867d452 +0x064:  movb   $0x0,-0x9(%ebp)
0867d456 +0x068:  lea    -0x8d(%ebp),%eax
0867d45c +0x06e:  mov    %eax,(%esp)
0867d45f +0x071:  call   0867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>  ; _checkTimeoutItem(Inven_Item const&)
0867d464 +0x076:  test   %al,%al
0867d466 +0x078:  je     0867d478 <+0x8a>
0867d468 +0x07a:  movb   $0x1,-0x9(%ebp)
0867d46c +0x07e:  movl   $0x0,-0x14(%ebp)
0867d473 +0x085:  jmp    0867d525 <+0x137>
0867d478 +0x08a:  mov    -0x8b(%ebp),%eax
0867d47e +0x090:  mov    0xc(%ebp),%edx
0867d481 +0x093:  mov    %edx,0x8(%esp)
0867d485 +0x097:  mov    %eax,0x4(%esp)
0867d489 +0x09b:  mov    0x8(%ebp),%eax
0867d48c +0x09e:  mov    %eax,(%esp)
0867d48f +0x0a1:  call   0867cf0c <_ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867d494 +0x0a6:  mov    %eax,-0x14(%ebp)
0867d497 +0x0a9:  cmpl   $0xffffffff,-0x14(%ebp)
0867d49b +0x0ad:  setne  %al
0867d49e +0x0b0:  test   %al,%al
0867d4a0 +0x0b2:  je     0867d4b3 <+0xc5>
0867d4a2 +0x0b4:  mov    -0x86(%ebp),%eax
0867d4a8 +0x0ba:  cmp    -0x14(%ebp),%eax
0867d4ab +0x0bd:  jle    0867d525 <+0x137>
0867d4ad +0x0bf:  movb   $0x1,-0x9(%ebp)
0867d4b1 +0x0c3:  jmp    0867d525 <+0x137>
0867d4b3 +0x0c5:  mov    -0x8b(%ebp),%eax
0867d4b9 +0x0cb:  mov    %eax,%ebx
0867d4bb +0x0cd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867d4c0 +0x0d2:  add    $0xb658,%eax
0867d4c5 +0x0d7:  mov    %ebx,0x4(%esp)
0867d4c9 +0x0db:  mov    %eax,(%esp)
0867d4cc +0x0de:  call   08ac2096 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi>  ; DeleteInvalidItemScript::IsInvalidItem2Delete(int)
0867d4d1 +0x0e3:  test   %al,%al
0867d4d3 +0x0e5:  je     0867d525 <+0x137>
0867d4d5 +0x0e7:  lea    -0x38(%ebp),%eax
0867d4d8 +0x0ea:  lea    -0x8d(%ebp),%edx
0867d4de +0x0f0:  add    $0x7,%edx
0867d4e1 +0x0f3:  mov    %edx,0x8(%esp)
0867d4e5 +0x0f7:  lea    -0x8d(%ebp),%edx
0867d4eb +0x0fd:  add    $0x2,%edx
0867d4ee +0x100:  mov    %edx,0x4(%esp)
0867d4f2 +0x104:  mov    %eax,(%esp)
0867d4f5 +0x107:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0867d4fa +0x10c:  sub    $0x4,%esp
0867d4fd +0x10f:  lea    -0x38(%ebp),%eax
0867d500 +0x112:  mov    %eax,0x4(%esp)
0867d504 +0x116:  lea    -0x40(%ebp),%eax
0867d507 +0x119:  mov    %eax,(%esp)
0867d50a +0x11c:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0867d50f +0x121:  lea    -0x40(%ebp),%eax
0867d512 +0x124:  mov    %eax,0x4(%esp)
0867d516 +0x128:  lea    -0x4c(%ebp),%eax
0867d519 +0x12b:  mov    %eax,(%esp)
0867d51c +0x12e:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867d521 +0x133:  movb   $0x1,-0x9(%ebp)
0867d525 +0x137:  cmpb   $0x0,-0x9(%ebp)
0867d529 +0x13b:  je     0867d5ce <+0x1e0>
0867d52f +0x141:  cmpl   $0x0,-0x14(%ebp)
0867d533 +0x145:  jne    0867d55b <+0x16d>
0867d535 +0x147:  mov    -0x86(%ebp),%edx
0867d53b +0x14d:  mov    -0x50(%ebp),%eax
0867d53e +0x150:  movl   $0x13,0xc(%esp)
0867d546 +0x158:  mov    %edx,0x8(%esp)
0867d54a +0x15c:  mov    %eax,0x4(%esp)
0867d54e +0x160:  mov    -0x10(%ebp),%eax
0867d551 +0x163:  mov    %eax,(%esp)
0867d554 +0x166:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
0867d559 +0x16b:  jmp    0867d584 <+0x196>
0867d55b +0x16d:  mov    -0x86(%ebp),%eax
0867d561 +0x173:  mov    %eax,%edx
0867d563 +0x175:  sub    -0x14(%ebp),%edx
0867d566 +0x178:  mov    -0x50(%ebp),%eax
0867d569 +0x17b:  movl   $0x13,0xc(%esp)
0867d571 +0x183:  mov    %edx,0x8(%esp)
0867d575 +0x187:  mov    %eax,0x4(%esp)
0867d579 +0x18b:  mov    -0x10(%ebp),%eax
0867d57c +0x18e:  mov    %eax,(%esp)
0867d57f +0x191:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
0867d584 +0x196:  movl   $0x2,-0x20(%ebp)
0867d58b +0x19d:  lea    -0x28(%ebp),%eax
0867d58e +0x1a0:  lea    -0x50(%ebp),%edx
0867d591 +0x1a3:  mov    %edx,0x8(%esp)
0867d595 +0x1a7:  lea    -0x20(%ebp),%edx
0867d598 +0x1aa:  mov    %edx,0x4(%esp)
0867d59c +0x1ae:  mov    %eax,(%esp)
0867d59f +0x1b1:  call   085589fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x155f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x155f
0867d5a4 +0x1b6:  sub    $0x4,%esp
0867d5a7 +0x1b9:  lea    -0x28(%ebp),%eax
0867d5aa +0x1bc:  mov    %eax,0x4(%esp)
0867d5ae +0x1c0:  lea    -0x30(%ebp),%eax
0867d5b1 +0x1c3:  mov    %eax,(%esp)
0867d5b4 +0x1c6:  call   08558a44 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15a5
0867d5b9 +0x1cb:  lea    -0x30(%ebp),%eax
0867d5bc +0x1ce:  mov    %eax,0x4(%esp)
0867d5c0 +0x1d2:  mov    0x10(%ebp),%eax
0867d5c3 +0x1d5:  mov    %eax,(%esp)
0867d5c6 +0x1d8:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867d5cb +0x1dd:  jmp    0867d5ce <+0x1e0>
0867d5cd +0x1df:  nop
0867d5ce +0x1e0:  mov    -0x50(%ebp),%eax
0867d5d1 +0x1e3:  add    $0x1,%eax
0867d5d4 +0x1e6:  mov    %eax,-0x50(%ebp)
0867d5d7 +0x1e9:  mov    -0x50(%ebp),%eax
0867d5da +0x1ec:  cmp    $0x97,%eax
0867d5df +0x1f1:  setle  %al
0867d5e2 +0x1f4:  test   %al,%al
0867d5e4 +0x1f6:  jne    0867d425 <+0x37>
0867d5ea +0x1fc:  lea    -0x15(%ebp),%eax
0867d5ed +0x1ff:  mov    %eax,(%esp)
0867d5f0 +0x202:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867d5f5 +0x207:  lea    -0x15(%ebp),%eax
0867d5f8 +0x20a:  mov    %eax,0x8(%esp)
0867d5fc +0x20e:  movl   $"Cargo",0x4(%esp)
0867d604 +0x216:  lea    -0x1c(%ebp),%eax
0867d607 +0x219:  mov    %eax,(%esp)
0867d60a +0x21c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867d60f +0x221:  lea    -0x4c(%ebp),%eax
0867d612 +0x224:  mov    %eax,0x8(%esp)
0867d616 +0x228:  lea    -0x1c(%ebp),%eax
0867d619 +0x22b:  mov    %eax,0x4(%esp)
0867d61d +0x22f:  mov    0x8(%ebp),%eax
0867d620 +0x232:  mov    %eax,(%esp)
0867d623 +0x235:  call   086931c4 <_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE>  ; CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867d628 +0x23a:  jmp    0867d63f <+0x251>
0867d62a +0x23c:  mov    %edx,%ebx
0867d62c +0x23e:  mov    %eax,%esi
0867d62e +0x240:  lea    -0x1c(%ebp),%eax
0867d631 +0x243:  mov    %eax,(%esp)
0867d634 +0x246:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867d639 +0x24b:  mov    %esi,%eax
0867d63b +0x24d:  mov    %ebx,%edx
0867d63d +0x24f:  jmp    0867d64c <+0x25e>
0867d63f +0x251:  lea    -0x1c(%ebp),%eax
0867d642 +0x254:  mov    %eax,(%esp)
0867d645 +0x257:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867d64a +0x25c:  jmp    0867d661 <+0x273>
0867d64c +0x25e:  mov    %edx,%ebx
0867d64e +0x260:  mov    %eax,%esi
0867d650 +0x262:  lea    -0x15(%ebp),%eax
0867d653 +0x265:  mov    %eax,(%esp)
0867d656 +0x268:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867d65b +0x26d:  mov    %esi,%eax
0867d65d +0x26f:  mov    %ebx,%edx
0867d65f +0x271:  jmp    0867d681 <+0x293>
0867d661 +0x273:  lea    -0x15(%ebp),%eax
0867d664 +0x276:  mov    %eax,(%esp)
0867d667 +0x279:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867d66c +0x27e:  lea    -0x4c(%ebp),%eax
0867d66f +0x281:  mov    %eax,(%esp)
0867d672 +0x284:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867d677 +0x289:  lea    -0x8(%ebp),%esp
0867d67a +0x28c:  add    $0x0,%esp
0867d67d +0x28f:  pop    %ebx
0867d67e +0x290:  pop    %esi
0867d67f +0x291:  pop    %ebp
0867d680 +0x292:  ret
0867d681 +0x293:  mov    %edx,%ebx
0867d683 +0x295:  mov    %eax,%esi
0867d685 +0x297:  lea    -0x4c(%ebp),%eax
0867d688 +0x29a:  mov    %eax,(%esp)
0867d68b +0x29d:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867d690 +0x2a2:  mov    %esi,%eax
0867d692 +0x2a4:  mov    %ebx,%edx
0867d694 +0x2a6:  mov    %eax,(%esp)
0867d697 +0x2a9:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::_deleteSpecificItemCargo @ 0x867d3ee

/* CUser::_deleteSpecificItemCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall CUser::_deleteSpecificItemCargo(CUser *this,vector *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  Inven_Item local_91 [2];
  vector *local_8f;
  int local_8a;
  int local_54;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  pair<int,int> local_44 [8];
  ulong local_3c [2];
  pair<int,int> local_34 [8];
  ENUM_ITEMSPACE local_2c [8];
  int local_24;
  string local_20;
  allocator<char> local_19;
  int local_18;
  CCargo *local_14;
  char local_d;
  
  local_18 = -1;
  local_14 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
  for (local_54 = 0; local_54 < 0x98; local_54 = local_54 + 1) {
                    /* try { // try from 0867d43c to 0867d5ca has its CatchHandler @ 0867d681 */
    CCargo::get_cargo_slot((int)local_91);
    if (local_8f != (vector *)0x0) {
      local_d = '\0';
      cVar1 = _checkTimeoutItem(local_91);
      if (cVar1 == '\0') {
        local_18 = _isMatchedItem((int)this,local_8f);
        if (local_18 == -1) {
          iVar2 = G_CDataManager();
          cVar1 = DeleteInvalidItemScript::IsInvalidItem2Delete(iVar2 + 0xb658);
          if (cVar1 != '\0') {
            std::make_pair<unsigned_long&,int&>(local_3c,(int *)&local_8f);
            std::pair<int,int>::pair<unsigned_long,int>(local_44,(pair *)local_3c);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_50,local_44);
            local_d = '\x01';
          }
        }
        else if (local_18 < local_8a) {
          local_d = '\x01';
        }
      }
      else {
        local_d = '\x01';
        local_18 = 0;
      }
      if (local_d != '\0') {
        if (local_18 == 0) {
          CCargo::delete_item(local_14,local_54,local_8a,0x13);
        }
        else {
          CCargo::delete_item(local_14,local_54,local_8a - local_18,0x13);
        }
        local_24 = 2;
        std::make_pair<ENUM_ITEMSPACE,int&>(local_2c,&local_24);
        std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_34,local_2c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_34
                  );
      }
    }
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0867d60a to 0867d60e has its CatchHandler @ 0867d64c */
  std::string::string((string *)&local_20,"Cargo",(allocator *)&local_19);
                    /* try { // try from 0867d623 to 0867d627 has its CatchHandler @ 0867d62a */
  RewardItem2DeleteInvalidItem(this,&local_20,(vector *)local_50);
                    /* try { // try from 0867d645 to 0867d649 has its CatchHandler @ 0867d64c */
  std::string::~string((string *)&local_20);
  std::allocator<char>::~allocator(&local_19);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
  return;
}
```
