# ChangeCharacSlot

`_ZN5CUser16ChangeCharacSlotEjj`

`CUser::ChangeCharacSlot(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08651b7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08651b7a  _ZN5CUser16ChangeCharacSlotEjj
#           CUser::ChangeCharacSlot(unsigned int, unsigned int)
# range [0x08651b7a, 0x08651de5]
08651b7a +0x000:  push   %ebp
08651b7b +0x001:  mov    %esp,%ebp
08651b7d +0x003:  push   %ebx
08651b7e +0x004:  sub    $0x64,%esp
08651b81 +0x007:  mov    0x8(%ebp),%eax
08651b84 +0x00a:  add    $0x796e8,%eax
08651b89 +0x00f:  mov    %eax,(%esp)
08651b8c +0x012:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08651b91 +0x017:  cmp    0xc(%ebp),%eax
08651b94 +0x01a:  jbe    08651bab <+0x31>
08651b96 +0x01c:  mov    0x8(%ebp),%eax
08651b99 +0x01f:  add    $0x796e8,%eax
08651b9e +0x024:  mov    %eax,(%esp)
08651ba1 +0x027:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
08651ba6 +0x02c:  cmp    0x10(%ebp),%eax
08651ba9 +0x02f:  ja     08651bb2 <+0x38>
08651bab +0x031:  mov    $0x1,%eax
08651bb0 +0x036:  jmp    08651bb7 <+0x3d>
08651bb2 +0x038:  mov    $0x0,%eax
08651bb7 +0x03d:  test   %al,%al
08651bb9 +0x03f:  jne    08651de0 <+0x266>
08651bbf +0x045:  mov    0xc(%ebp),%eax
08651bc2 +0x048:  cmp    0x10(%ebp),%eax
08651bc5 +0x04b:  jae    08651ccf <+0x155>
08651bcb +0x051:  mov    0x8(%ebp),%eax
08651bce +0x054:  lea    0x796e8(%eax),%edx
08651bd4 +0x05a:  mov    0xc(%ebp),%eax
08651bd7 +0x05d:  mov    %eax,0x4(%esp)
08651bdb +0x061:  mov    %edx,(%esp)
08651bde +0x064:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08651be3 +0x069:  mov    %eax,%ebx
08651be5 +0x06b:  movl   $0x1,-0x50(%ebp)
08651bec +0x072:  mov    0x10(%ebp),%eax
08651bef +0x075:  mov    %eax,-0x48(%ebp)
08651bf2 +0x078:  mov    0x8(%ebp),%eax
08651bf5 +0x07b:  lea    0x796e8(%eax),%edx
08651bfb +0x081:  lea    -0x44(%ebp),%eax
08651bfe +0x084:  mov    %edx,0x4(%esp)
08651c02 +0x088:  mov    %eax,(%esp)
08651c05 +0x08b:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
08651c0a +0x090:  sub    $0x4,%esp
08651c0d +0x093:  lea    -0x4c(%ebp),%eax
08651c10 +0x096:  lea    -0x48(%ebp),%edx
08651c13 +0x099:  mov    %edx,0x8(%esp)
08651c17 +0x09d:  lea    -0x44(%ebp),%edx
08651c1a +0x0a0:  mov    %edx,0x4(%esp)
08651c1e +0x0a4:  mov    %eax,(%esp)
08651c21 +0x0a7:  call   08699292 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ae7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ae7
08651c26 +0x0ac:  sub    $0x4,%esp
08651c29 +0x0af:  lea    -0x54(%ebp),%eax
08651c2c +0x0b2:  lea    -0x50(%ebp),%edx
08651c2f +0x0b5:  mov    %edx,0x8(%esp)
08651c33 +0x0b9:  lea    -0x4c(%ebp),%edx
08651c36 +0x0bc:  mov    %edx,0x4(%esp)
08651c3a +0x0c0:  mov    %eax,(%esp)
08651c3d +0x0c3:  call   08699292 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ae7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ae7
08651c42 +0x0c8:  sub    $0x4,%esp
08651c45 +0x0cb:  mov    0x8(%ebp),%eax
08651c48 +0x0ce:  lea    0x796e8(%eax),%ecx
08651c4e +0x0d4:  lea    -0x58(%ebp),%eax
08651c51 +0x0d7:  mov    %ebx,0xc(%esp)
08651c55 +0x0db:  mov    -0x54(%ebp),%edx
08651c58 +0x0de:  mov    %edx,0x8(%esp)
08651c5c +0x0e2:  mov    %ecx,0x4(%esp)
08651c60 +0x0e6:  mov    %eax,(%esp)
08651c63 +0x0e9:  call   0869a82e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7083>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7083
08651c68 +0x0ee:  sub    $0x4,%esp
08651c6b +0x0f1:  mov    0xc(%ebp),%eax
08651c6e +0x0f4:  mov    %eax,-0x38(%ebp)
08651c71 +0x0f7:  mov    0x8(%ebp),%eax
08651c74 +0x0fa:  lea    0x796e8(%eax),%edx
08651c7a +0x100:  lea    -0x34(%ebp),%eax
08651c7d +0x103:  mov    %edx,0x4(%esp)
08651c81 +0x107:  mov    %eax,(%esp)
08651c84 +0x10a:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
08651c89 +0x10f:  sub    $0x4,%esp
08651c8c +0x112:  lea    -0x3c(%ebp),%eax
08651c8f +0x115:  lea    -0x38(%ebp),%edx
08651c92 +0x118:  mov    %edx,0x8(%esp)
08651c96 +0x11c:  lea    -0x34(%ebp),%edx
08651c99 +0x11f:  mov    %edx,0x4(%esp)
08651c9d +0x123:  mov    %eax,(%esp)
08651ca0 +0x126:  call   08699292 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ae7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ae7
08651ca5 +0x12b:  sub    $0x4,%esp
08651ca8 +0x12e:  mov    0x8(%ebp),%eax
08651cab +0x131:  lea    0x796e8(%eax),%ecx
08651cb1 +0x137:  lea    -0x40(%ebp),%eax
08651cb4 +0x13a:  mov    -0x3c(%ebp),%edx
08651cb7 +0x13d:  mov    %edx,0x8(%esp)
08651cbb +0x141:  mov    %ecx,0x4(%esp)
08651cbf +0x145:  mov    %eax,(%esp)
08651cc2 +0x148:  call   08698b04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5359>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5359
08651cc7 +0x14d:  sub    $0x4,%esp
08651cca +0x150:  jmp    08651dce <+0x254>
08651ccf +0x155:  mov    0x8(%ebp),%eax
08651cd2 +0x158:  lea    0x796e8(%eax),%edx
08651cd8 +0x15e:  mov    0xc(%ebp),%eax
08651cdb +0x161:  mov    %eax,0x4(%esp)
08651cdf +0x165:  mov    %edx,(%esp)
08651ce2 +0x168:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08651ce7 +0x16d:  mov    %eax,%ebx
08651ce9 +0x16f:  mov    0x10(%ebp),%eax
08651cec +0x172:  mov    %eax,-0x28(%ebp)
08651cef +0x175:  mov    0x8(%ebp),%eax
08651cf2 +0x178:  lea    0x796e8(%eax),%edx
08651cf8 +0x17e:  lea    -0x24(%ebp),%eax
08651cfb +0x181:  mov    %edx,0x4(%esp)
08651cff +0x185:  mov    %eax,(%esp)
08651d02 +0x188:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
08651d07 +0x18d:  sub    $0x4,%esp
08651d0a +0x190:  lea    -0x2c(%ebp),%eax
08651d0d +0x193:  lea    -0x28(%ebp),%edx
08651d10 +0x196:  mov    %edx,0x8(%esp)
08651d14 +0x19a:  lea    -0x24(%ebp),%edx
08651d17 +0x19d:  mov    %edx,0x4(%esp)
08651d1b +0x1a1:  mov    %eax,(%esp)
08651d1e +0x1a4:  call   08699292 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ae7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ae7
08651d23 +0x1a9:  sub    $0x4,%esp
08651d26 +0x1ac:  mov    0x8(%ebp),%eax
08651d29 +0x1af:  lea    0x796e8(%eax),%ecx
08651d2f +0x1b5:  lea    -0x30(%ebp),%eax
08651d32 +0x1b8:  mov    %ebx,0xc(%esp)
08651d36 +0x1bc:  mov    -0x2c(%ebp),%edx
08651d39 +0x1bf:  mov    %edx,0x8(%esp)
08651d3d +0x1c3:  mov    %ecx,0x4(%esp)
08651d41 +0x1c7:  mov    %eax,(%esp)
08651d44 +0x1ca:  call   0869a82e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7083>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7083
08651d49 +0x1cf:  sub    $0x4,%esp
08651d4c +0x1d2:  movl   $0x1,-0x18(%ebp)
08651d53 +0x1d9:  mov    0xc(%ebp),%eax
08651d56 +0x1dc:  mov    %eax,-0x10(%ebp)
08651d59 +0x1df:  mov    0x8(%ebp),%eax
08651d5c +0x1e2:  lea    0x796e8(%eax),%edx
08651d62 +0x1e8:  lea    -0xc(%ebp),%eax
08651d65 +0x1eb:  mov    %edx,0x4(%esp)
08651d69 +0x1ef:  mov    %eax,(%esp)
08651d6c +0x1f2:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
08651d71 +0x1f7:  sub    $0x4,%esp
08651d74 +0x1fa:  lea    -0x14(%ebp),%eax
08651d77 +0x1fd:  lea    -0x10(%ebp),%edx
08651d7a +0x200:  mov    %edx,0x8(%esp)
08651d7e +0x204:  lea    -0xc(%ebp),%edx
08651d81 +0x207:  mov    %edx,0x4(%esp)
08651d85 +0x20b:  mov    %eax,(%esp)
08651d88 +0x20e:  call   08699292 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ae7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ae7
08651d8d +0x213:  sub    $0x4,%esp
08651d90 +0x216:  lea    -0x1c(%ebp),%eax
08651d93 +0x219:  lea    -0x18(%ebp),%edx
08651d96 +0x21c:  mov    %edx,0x8(%esp)
08651d9a +0x220:  lea    -0x14(%ebp),%edx
08651d9d +0x223:  mov    %edx,0x4(%esp)
08651da1 +0x227:  mov    %eax,(%esp)
08651da4 +0x22a:  call   08699292 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ae7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ae7
08651da9 +0x22f:  sub    $0x4,%esp
08651dac +0x232:  mov    0x8(%ebp),%eax
08651daf +0x235:  lea    0x796e8(%eax),%ecx
08651db5 +0x23b:  lea    -0x20(%ebp),%eax
08651db8 +0x23e:  mov    -0x1c(%ebp),%edx
08651dbb +0x241:  mov    %edx,0x8(%esp)
08651dbf +0x245:  mov    %ecx,0x4(%esp)
08651dc3 +0x249:  mov    %eax,(%esp)
08651dc6 +0x24c:  call   08698b04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5359>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5359
08651dcb +0x251:  sub    $0x4,%esp
08651dce +0x254:  mov    0x8(%ebp),%eax
08651dd1 +0x257:  add    $0x796f4,%eax
08651dd6 +0x25c:  mov    %eax,(%esp)
08651dd9 +0x25f:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
08651dde +0x264:  jmp    08651de1 <+0x267>
08651de0 +0x266:  nop
08651de1 +0x267:  mov    -0x4(%ebp),%ebx
08651de4 +0x26a:  leave
08651de5 +0x26b:  ret
```

## 反编译 C

```c
// CUser::ChangeCharacSlot @ 0x8651b7a

/* CUser::ChangeCharacSlot(unsigned int, unsigned int) */

void __thiscall CUser::ChangeCharacSlot(CUser *this,uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_50 [4];
  uint local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  uint local_3c;
  int local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  uint local_2c;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_18 [4];
  uint local_14;
  int local_10 [2];
  
  uVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
  if (param_1 < uVar2) {
    uVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (param_2 < uVar2) {
      bVar1 = false;
      goto LAB_08651bb7;
    }
  }
  bVar1 = true;
LAB_08651bb7:
  if (!bVar1) {
    if (param_1 < param_2) {
      uVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      local_54 = 1;
      local_4c = param_2;
      std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator+(local_50,&local_48);
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator+((__normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                 *)&local_58,(int *)local_50);
      std::vector<_Charac_info,std::allocator<_Charac_info>>::insert
                (local_5c,this + 0x796e8,local_58,uVar3);
      local_3c = param_1;
      std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator+((__normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                 *)&local_40,&local_38);
      std::vector<_Charac_info,std::allocator<_Charac_info>>::erase
                (local_44,this + 0x796e8,local_40);
    }
    else {
      uVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      local_2c = param_2;
      std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator+((__normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                 *)&local_30,&local_28);
      std::vector<_Charac_info,std::allocator<_Charac_info>>::insert
                (local_34,this + 0x796e8,local_30,uVar3);
      local_1c = 1;
      local_14 = param_1;
      std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator+(local_18,local_10);
      __gnu_cxx::
      __normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
      operator+((__normal_iterator<_Charac_info*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                 *)&local_20,(int *)local_18);
      std::vector<_Charac_info,std::allocator<_Charac_info>>::erase
                (local_24,this + 0x796e8,local_20);
    }
    CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  }
  return;
}
```
