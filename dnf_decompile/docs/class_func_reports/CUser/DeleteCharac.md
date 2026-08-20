# DeleteCharac

`_ZN5CUser12DeleteCharacEj`

`CUser::DeleteCharac(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a63a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a63a  _ZN5CUser12DeleteCharacEj
#           CUser::DeleteCharac(unsigned int)
# range [0x0864a63a, 0x0864a82f]
0864a63a +0x000:  push   %ebp
0864a63b +0x001:  mov    %esp,%ebp
0864a63d +0x003:  push   %edi
0864a63e +0x004:  push   %esi
0864a63f +0x005:  push   %ebx
0864a640 +0x006:  sub    $0x4c,%esp
0864a643 +0x009:  movb   $0x0,-0x1d(%ebp)
0864a647 +0x00d:  mov    0x8(%ebp),%eax
0864a64a +0x010:  lea    0x796e8(%eax),%edx
0864a650 +0x016:  lea    -0x2c(%ebp),%eax
0864a653 +0x019:  mov    %edx,0x4(%esp)
0864a657 +0x01d:  mov    %eax,(%esp)
0864a65a +0x020:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
0864a65f +0x025:  sub    $0x4,%esp
0864a662 +0x028:  movl   $0x0,-0x1c(%ebp)
0864a669 +0x02f:  jmp    0864a7c3 <+0x189>
0864a66e +0x034:  mov    -0x1c(%ebp),%eax
0864a671 +0x037:  mov    0x8(%ebp),%edx
0864a674 +0x03a:  add    $0x796e8,%edx
0864a67a +0x040:  mov    %eax,0x4(%esp)
0864a67e +0x044:  mov    %edx,(%esp)
0864a681 +0x047:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a686 +0x04c:  mov    (%eax),%eax
0864a688 +0x04e:  cmp    0xc(%ebp),%eax
0864a68b +0x051:  sete   %al
0864a68e +0x054:  test   %al,%al
0864a690 +0x056:  je     0864a74d <+0x113>
0864a696 +0x05c:  mov    -0x1c(%ebp),%eax
0864a699 +0x05f:  mov    0x8(%ebp),%edx
0864a69c +0x062:  add    $0x796e8,%edx
0864a6a2 +0x068:  mov    %eax,0x4(%esp)
0864a6a6 +0x06c:  mov    %edx,(%esp)
0864a6a9 +0x06f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a6ae +0x074:  movzbl 0x29(%eax),%eax
0864a6b2 +0x078:  movsbl %al,%edi
0864a6b5 +0x07b:  mov    -0x1c(%ebp),%eax
0864a6b8 +0x07e:  mov    0x8(%ebp),%edx
0864a6bb +0x081:  add    $0x796e8,%edx
0864a6c1 +0x087:  mov    %eax,0x4(%esp)
0864a6c5 +0x08b:  mov    %edx,(%esp)
0864a6c8 +0x08e:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a6cd +0x093:  movzwl 0x27(%eax),%eax
0864a6d1 +0x097:  movswl %ax,%esi
0864a6d4 +0x09a:  mov    -0x1c(%ebp),%eax
0864a6d7 +0x09d:  mov    0x8(%ebp),%edx
0864a6da +0x0a0:  add    $0x796e8,%edx
0864a6e0 +0x0a6:  mov    %eax,0x4(%esp)
0864a6e4 +0x0aa:  mov    %edx,(%esp)
0864a6e7 +0x0ad:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a6ec +0x0b2:  movzbl 0x26(%eax),%eax
0864a6f0 +0x0b6:  movsbl %al,%ebx
0864a6f3 +0x0b9:  mov    -0x1c(%ebp),%eax
0864a6f6 +0x0bc:  mov    0x8(%ebp),%edx
0864a6f9 +0x0bf:  add    $0x796e8,%edx
0864a6ff +0x0c5:  mov    %eax,0x4(%esp)
0864a703 +0x0c9:  mov    %edx,(%esp)
0864a706 +0x0cc:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a70b +0x0d1:  add    $0x4,%eax
0864a70e +0x0d4:  mov    %eax,%edx
0864a710 +0x0d6:  mov    0x8(%ebp),%eax
0864a713 +0x0d9:  mov    0x796f8(%eax),%eax
0864a719 +0x0df:  mov    %edi,0x10(%esp)
0864a71d +0x0e3:  mov    %esi,0xc(%esp)
0864a721 +0x0e7:  mov    %ebx,0x8(%esp)
0864a725 +0x0eb:  mov    %edx,0x4(%esp)
0864a729 +0x0ef:  mov    %eax,(%esp)
0864a72c +0x0f2:  call   084b9e0a <_ZN10HistoryLog13WriteDeleteChEP8_IO_FILEPciii>  ; HistoryLog::WriteDeleteCh(_IO_FILE*, char*, int, int, int)
0864a731 +0x0f7:  mov    0x8(%ebp),%eax
0864a734 +0x0fa:  lea    0x79700(%eax),%edx
0864a73a +0x100:  mov    -0x1c(%ebp),%eax
0864a73d +0x103:  mov    %eax,0x4(%esp)
0864a741 +0x107:  mov    %edx,(%esp)
0864a744 +0x10a:  call   08682ae0 <_ZN15cUserHistoryLog9CharacDelEi>  ; cUserHistoryLog::CharacDel(int)
0864a749 +0x10f:  movb   $0x1,-0x1d(%ebp)
0864a74d +0x113:  mov    -0x1c(%ebp),%eax
0864a750 +0x116:  mov    0x8(%ebp),%edx
0864a753 +0x119:  add    $0x796e8,%edx
0864a759 +0x11f:  mov    %eax,0x4(%esp)
0864a75d +0x123:  mov    %edx,(%esp)
0864a760 +0x126:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a765 +0x12b:  mov    0x14b8(%eax),%eax
0864a76b +0x131:  cmp    0xc(%ebp),%eax
0864a76e +0x134:  sete   %al
0864a771 +0x137:  test   %al,%al
0864a773 +0x139:  je     0864a797 <+0x15d>
0864a775 +0x13b:  mov    -0x1c(%ebp),%eax
0864a778 +0x13e:  mov    0x8(%ebp),%edx
0864a77b +0x141:  add    $0x796e8,%edx
0864a781 +0x147:  mov    %eax,0x4(%esp)
0864a785 +0x14b:  mov    %edx,(%esp)
0864a788 +0x14e:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864a78d +0x153:  movl   $0x0,0x14b8(%eax)
0864a797 +0x15d:  movzbl -0x1d(%ebp),%eax
0864a79b +0x161:  xor    $0x1,%eax
0864a79e +0x164:  test   %al,%al
0864a7a0 +0x166:  je     0864a7bf <+0x185>
0864a7a2 +0x168:  lea    -0x28(%ebp),%eax
0864a7a5 +0x16b:  movl   $0x0,0x8(%esp)
0864a7ad +0x173:  lea    -0x2c(%ebp),%edx
0864a7b0 +0x176:  mov    %edx,0x4(%esp)
0864a7b4 +0x17a:  mov    %eax,(%esp)
0864a7b7 +0x17d:  call   08698ace <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5323>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5323
0864a7bc +0x182:  sub    $0x4,%esp
0864a7bf +0x185:  addl   $0x1,-0x1c(%ebp)
0864a7c3 +0x189:  mov    0x8(%ebp),%eax
0864a7c6 +0x18c:  add    $0x796e8,%eax
0864a7cb +0x191:  mov    %eax,(%esp)
0864a7ce +0x194:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864a7d3 +0x199:  cmp    -0x1c(%ebp),%eax
0864a7d6 +0x19c:  setg   %al
0864a7d9 +0x19f:  test   %al,%al
0864a7db +0x1a1:  jne    0864a66e <+0x34>
0864a7e1 +0x1a7:  cmpb   $0x0,-0x1d(%ebp)
0864a7e5 +0x1ab:  je     0864a814 <+0x1da>
0864a7e7 +0x1ad:  mov    0x8(%ebp),%eax
0864a7ea +0x1b0:  lea    0x796e8(%eax),%ecx
0864a7f0 +0x1b6:  lea    -0x24(%ebp),%eax
0864a7f3 +0x1b9:  mov    -0x2c(%ebp),%edx
0864a7f6 +0x1bc:  mov    %edx,0x8(%esp)
0864a7fa +0x1c0:  mov    %ecx,0x4(%esp)
0864a7fe +0x1c4:  mov    %eax,(%esp)
0864a801 +0x1c7:  call   08698b04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5359>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5359
0864a806 +0x1cc:  sub    $0x4,%esp
0864a809 +0x1cf:  mov    0x8(%ebp),%eax
0864a80c +0x1d2:  mov    %eax,(%esp)
0864a80f +0x1d5:  call   08690026 <_ZN5CUser20CalcurateManageLevelEv>  ; CUser::CalcurateManageLevel()
0864a814 +0x1da:  mov    0x8(%ebp),%eax
0864a817 +0x1dd:  add    $0x796f4,%eax
0864a81c +0x1e2:  mov    %eax,(%esp)
0864a81f +0x1e5:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0864a824 +0x1ea:  lea    -0xc(%ebp),%esp
0864a827 +0x1ed:  add    $0x0,%esp
0864a82a +0x1f0:  pop    %ebx
0864a82b +0x1f1:  pop    %esi
0864a82c +0x1f2:  pop    %edi
0864a82d +0x1f3:  pop    %ebp
0864a82e +0x1f4:  ret
0864a82f +0x1f5:  nop
```

## 反编译 C

```c
// CUser::DeleteCharac @ 0x864a63a

/* CUser::DeleteCharac(unsigned int) */

void __thiscall CUser::DeleteCharac(CUser *this,uint param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  undefined4 local_30;
  __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_2c [4];
  undefined1 local_28 [7];
  char local_21;
  uint local_20;
  
  local_21 = '\0';
  std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
  local_20 = 0;
  while( true ) {
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (iVar5 <= (int)local_20) break;
    puVar4 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                               ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                (this + 0x796e8),local_20);
    if (*puVar4 == param_1) {
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_20);
      cVar1 = *(char *)(iVar5 + 0x29);
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_20);
      sVar3 = *(short *)(iVar5 + 0x27);
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_20);
      cVar2 = *(char *)(iVar5 + 0x26);
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_20);
      HistoryLog::WriteDeleteCh
                (*(_IO_FILE **)(this + 0x796f8),(char *)(iVar5 + 4),(int)cVar2,(int)sVar3,(int)cVar1
                );
      cUserHistoryLog::CharacDel((cUserHistoryLog *)(this + 0x79700),local_20);
      local_21 = '\x01';
    }
    iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       local_20);
    if (*(uint *)(iVar5 + 0x14b8) == param_1) {
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         local_20);
      *(undefined4 *)(iVar5 + 0x14b8) = 0;
    }
    if (local_21 != '\x01') {
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator++(local_2c,(int)&local_30);
    }
    local_20 = local_20 + 1;
  }
  if (local_21 != '\0') {
    std::vector<_Charac_info,std::allocator<_Charac_info>>::erase(local_28,this + 0x796e8,local_30);
    CalcurateManageLevel(this);
  }
  CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  return;
}
```
