# _gm_report

`_ZN12CAchievement10_gm_reportERSs`

`CAchievement::_gm_report(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828d450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828d450  _ZN12CAchievement10_gm_reportERSs
#           CAchievement::_gm_report(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x0828d450, 0x0828d737]
0828d450 +0x000:  push   %ebp
0828d451 +0x001:  mov    %esp,%ebp
0828d453 +0x003:  push   %edi
0828d454 +0x004:  push   %esi
0828d455 +0x005:  push   %ebx
0828d456 +0x006:  sub    $0x47c,%esp
0828d45c +0x00c:  lea    -0x34(%ebp),%eax
0828d45f +0x00f:  mov    %eax,(%esp)
0828d462 +0x012:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828d467 +0x017:  lea    -0x438(%ebp),%ebx
0828d46d +0x01d:  mov    $0x0,%eax
0828d472 +0x022:  mov    $0x100,%edx
0828d477 +0x027:  mov    %ebx,%edi
0828d479 +0x029:  mov    %edx,%ecx
0828d47b +0x02b:  rep stos %eax,%es:(%edi)
0828d47d +0x02d:  movl   $0x1965,-0x20(%ebp)
0828d484 +0x034:  jmp    0828d71b <+0x2cb>
0828d489 +0x039:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d48e +0x03e:  mov    0x18(%eax),%eax
0828d491 +0x041:  mov    -0x20(%ebp),%edx
0828d494 +0x044:  mov    %edx,0x4(%esp)
0828d498 +0x048:  mov    %eax,(%esp)
0828d49b +0x04b:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
0828d4a0 +0x050:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d4a5 +0x055:  mov    -0x20(%ebp),%edx
0828d4a8 +0x058:  mov    %edx,0x4(%esp)
0828d4ac +0x05c:  mov    %eax,(%esp)
0828d4af +0x05f:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828d4b4 +0x064:  mov    %eax,-0x1c(%ebp)
0828d4b7 +0x067:  cmpl   $0x0,-0x1c(%ebp)
0828d4bb +0x06b:  je     0828d713 <+0x2c3>
0828d4c1 +0x071:  mov    -0x1c(%ebp),%eax
0828d4c4 +0x074:  mov    0x8(%eax),%eax
0828d4c7 +0x077:  cmp    $0x7,%eax
0828d4ca +0x07a:  jne    0828d716 <+0x2c6>
0828d4d0 +0x080:  lea    -0x34(%ebp),%eax
0828d4d3 +0x083:  add    $0x8,%eax
0828d4d6 +0x086:  mov    %eax,0xc(%esp)
0828d4da +0x08a:  lea    -0x34(%ebp),%eax
0828d4dd +0x08d:  add    $0x6,%eax
0828d4e0 +0x090:  mov    %eax,0x8(%esp)
0828d4e4 +0x094:  lea    -0x34(%ebp),%eax
0828d4e7 +0x097:  add    $0x4,%eax
0828d4ea +0x09a:  mov    %eax,0x4(%esp)
0828d4ee +0x09e:  mov    -0x1c(%ebp),%eax
0828d4f1 +0x0a1:  mov    %eax,(%esp)
0828d4f4 +0x0a4:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828d4f9 +0x0a9:  mov    -0x20(%ebp),%eax
0828d4fc +0x0ac:  mov    %eax,-0x28(%ebp)
0828d4ff +0x0af:  mov    0x8(%ebp),%eax
0828d502 +0x0b2:  lea    0xc(%eax),%ecx
0828d505 +0x0b5:  lea    -0x38(%ebp),%eax
0828d508 +0x0b8:  lea    -0x28(%ebp),%edx
0828d50b +0x0bb:  mov    %edx,0x8(%esp)
0828d50f +0x0bf:  mov    %ecx,0x4(%esp)
0828d513 +0x0c3:  mov    %eax,(%esp)
0828d516 +0x0c6:  call   0828ddbe <_GLOBAL__I__ZN12CAchievementC2Ev+0x56b>  ; global constructors keyed to CAchievement::CAchievement()+0x56b
0828d51b +0x0cb:  sub    $0x4,%esp
0828d51e +0x0ce:  mov    0x8(%ebp),%eax
0828d521 +0x0d1:  lea    0xc(%eax),%edx
0828d524 +0x0d4:  lea    -0x24(%ebp),%eax
0828d527 +0x0d7:  mov    %edx,0x4(%esp)
0828d52b +0x0db:  mov    %eax,(%esp)
0828d52e +0x0de:  call   0828ddea <_GLOBAL__I__ZN12CAchievementC2Ev+0x597>  ; global constructors keyed to CAchievement::CAchievement()+0x597
0828d533 +0x0e3:  sub    $0x4,%esp
0828d536 +0x0e6:  lea    -0x24(%ebp),%eax
0828d539 +0x0e9:  mov    %eax,0x4(%esp)
0828d53d +0x0ed:  lea    -0x38(%ebp),%eax
0828d540 +0x0f0:  mov    %eax,(%esp)
0828d543 +0x0f3:  call   0828de10 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5bd>  ; global constructors keyed to CAchievement::CAchievement()+0x5bd
0828d548 +0x0f8:  test   %al,%al
0828d54a +0x0fa:  je     0828d62a <+0x1da>
0828d550 +0x100:  lea    -0x38(%ebp),%eax
0828d553 +0x103:  mov    %eax,(%esp)
0828d556 +0x106:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d55b +0x10b:  movzwl 0xc(%eax),%eax
0828d55f +0x10f:  movzwl %ax,%esi
0828d562 +0x112:  lea    -0x38(%ebp),%eax
0828d565 +0x115:  mov    %eax,(%esp)
0828d568 +0x118:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d56d +0x11d:  movzwl 0xa(%eax),%eax
0828d571 +0x121:  movzwl %ax,%edi
0828d574 +0x124:  lea    -0x38(%ebp),%eax
0828d577 +0x127:  mov    %eax,(%esp)
0828d57a +0x12a:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828d57f +0x12f:  movzwl 0x8(%eax),%eax
0828d583 +0x133:  movzwl %ax,%eax
0828d586 +0x136:  mov    %eax,-0x458(%ebp)
0828d58c +0x13c:  movzwl -0x2c(%ebp),%eax
0828d590 +0x140:  movzwl %ax,%eax
0828d593 +0x143:  mov    %eax,-0x454(%ebp)
0828d599 +0x149:  movzwl -0x2e(%ebp),%eax
0828d59d +0x14d:  movzwl %ax,%eax
0828d5a0 +0x150:  mov    %eax,-0x450(%ebp)
0828d5a6 +0x156:  movzwl -0x30(%ebp),%eax
0828d5aa +0x15a:  movzwl %ax,%eax
0828d5ad +0x15d:  mov    %eax,-0x44c(%ebp)
0828d5b3 +0x163:  mov    -0x1c(%ebp),%eax
0828d5b6 +0x166:  mov    %eax,(%esp)
0828d5b9 +0x169:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828d5be +0x16e:  mov    %eax,%ebx
0828d5c0 +0x170:  mov    -0x1c(%ebp),%eax
0828d5c3 +0x173:  mov    %eax,(%esp)
0828d5c6 +0x176:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0828d5cb +0x17b:  mov    %eax,%edx
0828d5cd +0x17d:  mov    -0x1c(%ebp),%eax
0828d5d0 +0x180:  mov    0x4(%eax),%eax
0828d5d3 +0x183:  mov    %esi,0x28(%esp)
0828d5d7 +0x187:  mov    %edi,0x24(%esp)
0828d5db +0x18b:  mov    -0x458(%ebp),%ecx
0828d5e1 +0x191:  mov    %ecx,0x20(%esp)
0828d5e5 +0x195:  mov    -0x454(%ebp),%edi
0828d5eb +0x19b:  mov    %edi,0x1c(%esp)
0828d5ef +0x19f:  mov    -0x450(%ebp),%ecx
0828d5f5 +0x1a5:  mov    %ecx,0x18(%esp)
0828d5f9 +0x1a9:  mov    -0x44c(%ebp),%edi
0828d5ff +0x1af:  mov    %edi,0x14(%esp)
0828d603 +0x1b3:  mov    %ebx,0x10(%esp)
0828d607 +0x1b7:  mov    %edx,0xc(%esp)
0828d60b +0x1bb:  mov    %eax,0x8(%esp)
0828d60f +0x1bf:  movl   $"%d\t\"%s\"\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",0x4(%esp)
0828d617 +0x1c7:  lea    -0x438(%ebp),%eax
0828d61d +0x1cd:  mov    %eax,(%esp)
0828d620 +0x1d0:  call   0807e440 <_init+0xd38>
0828d625 +0x1d5:  jmp    0828d6de <+0x28e>
0828d62a +0x1da:  movzwl -0x2c(%ebp),%eax
0828d62e +0x1de:  movzwl %ax,%esi
0828d631 +0x1e1:  movzwl -0x2e(%ebp),%eax
0828d635 +0x1e5:  movzwl %ax,%edi
0828d638 +0x1e8:  movzwl -0x30(%ebp),%eax
0828d63c +0x1ec:  movzwl %ax,%eax
0828d63f +0x1ef:  mov    %eax,-0x448(%ebp)
0828d645 +0x1f5:  movzwl -0x2c(%ebp),%eax
0828d649 +0x1f9:  movzwl %ax,%eax
0828d64c +0x1fc:  mov    %eax,-0x444(%ebp)
0828d652 +0x202:  movzwl -0x2e(%ebp),%eax
0828d656 +0x206:  movzwl %ax,%eax
0828d659 +0x209:  mov    %eax,-0x440(%ebp)
0828d65f +0x20f:  movzwl -0x30(%ebp),%eax
0828d663 +0x213:  movzwl %ax,%eax
0828d666 +0x216:  mov    %eax,-0x43c(%ebp)
0828d66c +0x21c:  mov    -0x1c(%ebp),%eax
0828d66f +0x21f:  mov    %eax,(%esp)
0828d672 +0x222:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828d677 +0x227:  mov    %eax,%ebx
0828d679 +0x229:  mov    -0x1c(%ebp),%eax
0828d67c +0x22c:  mov    %eax,(%esp)
0828d67f +0x22f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0828d684 +0x234:  mov    %eax,%edx
0828d686 +0x236:  mov    -0x1c(%ebp),%eax
0828d689 +0x239:  mov    0x4(%eax),%eax
0828d68c +0x23c:  mov    %esi,0x28(%esp)
0828d690 +0x240:  mov    %edi,0x24(%esp)
0828d694 +0x244:  mov    -0x448(%ebp),%ecx
0828d69a +0x24a:  mov    %ecx,0x20(%esp)
0828d69e +0x24e:  mov    -0x444(%ebp),%edi
0828d6a4 +0x254:  mov    %edi,0x1c(%esp)
0828d6a8 +0x258:  mov    -0x440(%ebp),%ecx
0828d6ae +0x25e:  mov    %ecx,0x18(%esp)
0828d6b2 +0x262:  mov    -0x43c(%ebp),%edi
0828d6b8 +0x268:  mov    %edi,0x14(%esp)
0828d6bc +0x26c:  mov    %ebx,0x10(%esp)
0828d6c0 +0x270:  mov    %edx,0xc(%esp)
0828d6c4 +0x274:  mov    %eax,0x8(%esp)
0828d6c8 +0x278:  movl   $"%d\t\"%s\"\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",0x4(%esp)
0828d6d0 +0x280:  lea    -0x438(%ebp),%eax
0828d6d6 +0x286:  mov    %eax,(%esp)
0828d6d9 +0x289:  call   0807e440 <_init+0xd38>
0828d6de +0x28e:  lea    -0x438(%ebp),%eax
0828d6e4 +0x294:  mov    %eax,0x4(%esp)
0828d6e8 +0x298:  mov    0xc(%ebp),%eax
0828d6eb +0x29b:  mov    %eax,(%esp)
0828d6ee +0x29e:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0828d6f3 +0x2a3:  movl   $0x400,0x8(%esp)
0828d6fb +0x2ab:  movl   $0x0,0x4(%esp)
0828d703 +0x2b3:  lea    -0x438(%ebp),%eax
0828d709 +0x2b9:  mov    %eax,(%esp)
0828d70c +0x2bc:  call   0807dcc0 <_init+0x5b8>
0828d711 +0x2c1:  jmp    0828d717 <+0x2c7>
0828d713 +0x2c3:  nop
0828d714 +0x2c4:  jmp    0828d717 <+0x2c7>
0828d716 +0x2c6:  nop
0828d717 +0x2c7:  addl   $0x1,-0x20(%ebp)
0828d71b +0x2cb:  cmpl   $0x1bbb,-0x20(%ebp)
0828d722 +0x2d2:  setle  %al
0828d725 +0x2d5:  test   %al,%al
0828d727 +0x2d7:  jne    0828d489 <+0x39>
0828d72d +0x2dd:  lea    -0xc(%ebp),%esp
0828d730 +0x2e0:  add    $0x0,%esp
0828d733 +0x2e3:  pop    %ebx
0828d734 +0x2e4:  pop    %esi
0828d735 +0x2e5:  pop    %edi
0828d736 +0x2e6:  pop    %ebp
0828d737 +0x2e7:  ret
```

## 反编译 C

```c
// CAchievement::_gm_report @ 0x828d450

/* CAchievement::_gm_report(std::string&) */

void __thiscall CAchievement::_gm_report(CAchievement *this,string *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  byte bVar15;
  char local_43c [1024];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_3c [4];
  stAchievement local_38 [4];
  ushort local_34;
  ushort local_32;
  ushort local_30 [2];
  int local_2c;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_28 [4];
  int local_24;
  Quest *local_20;
  
  bVar15 = 0;
  stAchievement::stAchievement(local_38);
  pcVar13 = local_43c;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + ((uint)bVar15 * -2 + 1) * 4;
  }
  for (local_24 = 0x1965; local_24 < 0x1bbc; local_24 = local_24 + 1) {
    iVar11 = G_CDataManager();
    QuestList::find_quest(*(int *)(iVar11 + 0x18));
    iVar11 = G_CDataManager();
    local_20 = (Quest *)CDataManager::find_quest(iVar11);
    if ((local_20 != (Quest *)0x0) && (*(int *)(local_20 + 8) == 7)) {
      Quest::get_init_achievement_trigger(local_20,&local_34,&local_32,local_30);
      local_2c = local_24;
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::find((uint *)local_3c);
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::end(local_28);
      cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                        (local_3c,(_Rb_tree_iterator *)local_28);
      if (cVar4 == '\0') {
        uVar12 = (uint)local_30[0];
        uVar14 = (uint)local_32;
        uVar5 = (uint)local_34;
        uVar6 = (uint)local_30[0];
        uVar7 = (uint)local_32;
        uVar10 = (uint)local_34;
        uVar8 = Quest::get_title_reward(local_20);
        uVar9 = std::string::c_str((string *)local_20);
        sprintf(local_43c,"%d\t\"%s\"\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",*(undefined4 *)(local_20 + 4),
                uVar9,uVar8,uVar10,uVar7,uVar6,uVar5,uVar14,uVar12);
      }
      else {
        iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                           (local_3c);
        uVar1 = *(ushort *)(iVar11 + 0xc);
        iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                           (local_3c);
        uVar2 = *(ushort *)(iVar11 + 10);
        iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                           (local_3c);
        uVar3 = *(ushort *)(iVar11 + 8);
        uVar5 = (uint)local_30[0];
        uVar6 = (uint)local_32;
        uVar7 = (uint)local_34;
        uVar8 = Quest::get_title_reward(local_20);
        uVar9 = std::string::c_str((string *)local_20);
        sprintf(local_43c,"%d\t\"%s\"\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",*(undefined4 *)(local_20 + 4),
                uVar9,uVar8,uVar7,uVar6,uVar5,(uint)uVar3,(uint)uVar2,(uint)uVar1);
      }
      std::string::operator+=((string *)param_1,local_43c);
      memset(local_43c,0,0x400);
    }
  }
  return;
}
```
