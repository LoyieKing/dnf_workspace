# SetItemMakingSkillPoint

`_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser`

`CItemMakingSkill::SetItemMakingSkillPoint(int, int, CUser*)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545d24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545d24  _ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser
#           CItemMakingSkill::SetItemMakingSkillPoint(int, int, CUser*)
# range [0x08545d24, 0x08545f6e]
08545d24 +0x000:  push   %ebp
08545d25 +0x001:  mov    %esp,%ebp
08545d27 +0x003:  push   %ebx
08545d28 +0x004:  sub    $0x34,%esp
08545d2b +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08545d30 +0x00c:  mov    %eax,(%esp)
08545d33 +0x00f:  call   08365ece <_ZNK12CDataManager18GetItemMakingSkillEv>  ; CDataManager::GetItemMakingSkill() const
08545d38 +0x014:  mov    %eax,-0x10(%ebp)
08545d3b +0x017:  cmpl   $0xa,0xc(%ebp)
08545d3f +0x01b:  jg     08545f63 <+0x23f>
08545d45 +0x021:  mov    -0x10(%ebp),%eax
08545d48 +0x024:  lea    0x18(%eax),%edx
08545d4b +0x027:  lea    -0x24(%ebp),%eax
08545d4e +0x02a:  mov    %edx,0x4(%esp)
08545d52 +0x02e:  mov    %eax,(%esp)
08545d55 +0x031:  call   08546040 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x91>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x91
08545d5a +0x036:  sub    $0x4,%esp
08545d5d +0x039:  mov    -0x10(%ebp),%eax
08545d60 +0x03c:  lea    0x18(%eax),%edx
08545d63 +0x03f:  lea    -0x20(%ebp),%eax
08545d66 +0x042:  mov    %edx,0x4(%esp)
08545d6a +0x046:  mov    %eax,(%esp)
08545d6d +0x049:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
08545d72 +0x04e:  sub    $0x4,%esp
08545d75 +0x051:  lea    -0x24(%ebp),%eax
08545d78 +0x054:  mov    %eax,0x4(%esp)
08545d7c +0x058:  lea    -0x20(%ebp),%eax
08545d7f +0x05b:  mov    %eax,(%esp)
08545d82 +0x05e:  call   08546081 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0xd2>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0xd2
08545d87 +0x063:  test   %al,%al
08545d89 +0x065:  jne    08545f66 <+0x242>
08545d8f +0x06b:  cmpl   $0x0,0x10(%ebp)
08545d93 +0x06f:  jle    08545dc8 <+0xa4>
08545d95 +0x071:  cmpl   $0x3e8,0x10(%ebp)
08545d9c +0x078:  jg     08545dc8 <+0xa4>
08545d9e +0x07a:  mov    -0x10(%ebp),%eax
08545da1 +0x07d:  lea    0x18(%eax),%edx
08545da4 +0x080:  lea    -0x1c(%ebp),%eax
08545da7 +0x083:  mov    %edx,0x4(%esp)
08545dab +0x087:  mov    %eax,(%esp)
08545dae +0x08a:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
08545db3 +0x08f:  sub    $0x4,%esp
08545db6 +0x092:  lea    -0x1c(%ebp),%eax
08545db9 +0x095:  mov    %eax,(%esp)
08545dbc +0x098:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
08545dc1 +0x09d:  mov    (%eax),%eax
08545dc3 +0x09f:  cmp    0x10(%ebp),%eax
08545dc6 +0x0a2:  jge    08545dcf <+0xab>
08545dc8 +0x0a4:  mov    $0x1,%eax
08545dcd +0x0a9:  jmp    08545dd4 <+0xb0>
08545dcf +0x0ab:  mov    $0x0,%eax
08545dd4 +0x0b0:  test   %al,%al
08545dd6 +0x0b2:  jne    08545f69 <+0x245>
08545ddc +0x0b8:  mov    0xc(%ebp),%edx
08545ddf +0x0bb:  mov    0x10(%ebp),%eax
08545de2 +0x0be:  mov    %eax,%ecx
08545de4 +0x0c0:  mov    0x8(%ebp),%eax
08545de7 +0x0c3:  mov    %cx,0x6(%eax,%edx,2)
08545dec +0x0c8:  mov    0x14(%ebp),%eax
08545def +0x0cb:  mov    %eax,(%esp)
08545df2 +0x0ce:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08545df7 +0x0d3:  cmp    $0x46,%eax
08545dfa +0x0d6:  sete   %al
08545dfd +0x0d9:  test   %al,%al
08545dff +0x0db:  je     08545e78 <+0x154>
08545e01 +0x0dd:  mov    0xc(%ebp),%edx
08545e04 +0x0e0:  mov    0x8(%ebp),%eax
08545e07 +0x0e3:  movzwl 0x6(%eax,%edx,2),%eax
08545e0c +0x0e8:  movswl %ax,%ebx
08545e0f +0x0eb:  mov    -0x10(%ebp),%eax
08545e12 +0x0ee:  lea    0x18(%eax),%edx
08545e15 +0x0f1:  lea    -0x18(%ebp),%eax
08545e18 +0x0f4:  mov    %edx,0x4(%esp)
08545e1c +0x0f8:  mov    %eax,(%esp)
08545e1f +0x0fb:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
08545e24 +0x100:  sub    $0x4,%esp
08545e27 +0x103:  lea    -0x18(%ebp),%eax
08545e2a +0x106:  mov    %eax,(%esp)
08545e2d +0x109:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
08545e32 +0x10e:  mov    (%eax),%eax
08545e34 +0x110:  cmp    %eax,%ebx
08545e36 +0x112:  setg   %al
08545e39 +0x115:  test   %al,%al
08545e3b +0x117:  je     08545f26 <+0x202>
08545e41 +0x11d:  mov    0xc(%ebp),%ebx
08545e44 +0x120:  mov    -0x10(%ebp),%eax
08545e47 +0x123:  lea    0x18(%eax),%edx
08545e4a +0x126:  lea    -0x14(%ebp),%eax
08545e4d +0x129:  mov    %edx,0x4(%esp)
08545e51 +0x12d:  mov    %eax,(%esp)
08545e54 +0x130:  call   08545ffe <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x4f>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x4f
08545e59 +0x135:  sub    $0x4,%esp
08545e5c +0x138:  lea    -0x14(%ebp),%eax
08545e5f +0x13b:  mov    %eax,(%esp)
08545e62 +0x13e:  call   085460c6 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x117>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x117
08545e67 +0x143:  mov    (%eax),%eax
08545e69 +0x145:  mov    %eax,%edx
08545e6b +0x147:  mov    0x8(%ebp),%eax
08545e6e +0x14a:  mov    %dx,0x6(%eax,%ebx,2)
08545e73 +0x14f:  jmp    08545f26 <+0x202>
08545e78 +0x154:  movl   $0x0,-0xc(%ebp)
08545e7f +0x15b:  jmp    08545f0a <+0x1e6>
08545e84 +0x160:  mov    0x14(%ebp),%eax
08545e87 +0x163:  mov    %eax,(%esp)
08545e8a +0x166:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08545e8f +0x16b:  mov    %eax,%ebx
08545e91 +0x16d:  mov    -0x10(%ebp),%eax
08545e94 +0x170:  lea    0x18(%eax),%edx
08545e97 +0x173:  mov    -0xc(%ebp),%eax
08545e9a +0x176:  mov    %eax,0x4(%esp)
08545e9e +0x17a:  mov    %edx,(%esp)
08545ea1 +0x17d:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545ea6 +0x182:  mov    0x4(%eax),%eax
08545ea9 +0x185:  cmp    %eax,%ebx
08545eab +0x187:  setl   %al
08545eae +0x18a:  test   %al,%al
08545eb0 +0x18c:  je     08545f06 <+0x1e2>
08545eb2 +0x18e:  mov    0xc(%ebp),%edx
08545eb5 +0x191:  mov    0x8(%ebp),%eax
08545eb8 +0x194:  movzwl 0x6(%eax,%edx,2),%eax
08545ebd +0x199:  movswl %ax,%ebx
08545ec0 +0x19c:  mov    -0x10(%ebp),%eax
08545ec3 +0x19f:  lea    0x18(%eax),%edx
08545ec6 +0x1a2:  mov    -0xc(%ebp),%eax
08545ec9 +0x1a5:  mov    %eax,0x4(%esp)
08545ecd +0x1a9:  mov    %edx,(%esp)
08545ed0 +0x1ac:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545ed5 +0x1b1:  mov    (%eax),%eax
08545ed7 +0x1b3:  cmp    %eax,%ebx
08545ed9 +0x1b5:  setg   %al
08545edc +0x1b8:  test   %al,%al
08545ede +0x1ba:  je     08545f06 <+0x1e2>
08545ee0 +0x1bc:  mov    0xc(%ebp),%ebx
08545ee3 +0x1bf:  mov    -0x10(%ebp),%eax
08545ee6 +0x1c2:  lea    0x18(%eax),%edx
08545ee9 +0x1c5:  mov    -0xc(%ebp),%eax
08545eec +0x1c8:  mov    %eax,0x4(%esp)
08545ef0 +0x1cc:  mov    %edx,(%esp)
08545ef3 +0x1cf:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
08545ef8 +0x1d4:  mov    (%eax),%eax
08545efa +0x1d6:  mov    %eax,%edx
08545efc +0x1d8:  mov    0x8(%ebp),%eax
08545eff +0x1db:  mov    %dx,0x6(%eax,%ebx,2)
08545f04 +0x1e0:  jmp    08545f26 <+0x202>
08545f06 +0x1e2:  addl   $0x1,-0xc(%ebp)
08545f0a +0x1e6:  mov    -0x10(%ebp),%eax
08545f0d +0x1e9:  add    $0x18,%eax
08545f10 +0x1ec:  mov    %eax,(%esp)
08545f13 +0x1ef:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08545f18 +0x1f4:  cmp    -0xc(%ebp),%eax
08545f1b +0x1f7:  seta   %al
08545f1e +0x1fa:  test   %al,%al
08545f20 +0x1fc:  jne    08545e84 <+0x160>
08545f26 +0x202:  mov    0xc(%ebp),%edx
08545f29 +0x205:  mov    0x8(%ebp),%eax
08545f2c +0x208:  movzwl 0x6(%eax,%edx,2),%eax
08545f31 +0x20d:  cmp    $0x3e8,%ax
08545f35 +0x211:  jle    08545f44 <+0x220>
08545f37 +0x213:  mov    0xc(%ebp),%edx
08545f3a +0x216:  mov    0x8(%ebp),%eax
08545f3d +0x219:  movw   $0x3e8,0x6(%eax,%edx,2)
08545f44 +0x220:  mov    0x8(%ebp),%eax
08545f47 +0x223:  mov    %eax,(%esp)
08545f4a +0x226:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08545f4f +0x22b:  mov    0x14(%ebp),%eax
08545f52 +0x22e:  mov    %eax,0x4(%esp)
08545f56 +0x232:  mov    0x8(%ebp),%eax
08545f59 +0x235:  mov    %eax,(%esp)
08545f5c +0x238:  call   08545a62 <_ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser>  ; CItemMakingSkill::Send_ItemMakingSkillList(CUser*) const
08545f61 +0x23d:  jmp    08545f6a <+0x246>
08545f63 +0x23f:  nop
08545f64 +0x240:  jmp    08545f6a <+0x246>
08545f66 +0x242:  nop
08545f67 +0x243:  jmp    08545f6a <+0x246>
08545f69 +0x245:  nop
08545f6a +0x246:  mov    -0x4(%ebp),%ebx
08545f6d +0x249:  leave
08545f6e +0x24a:  ret
```

## 反编译 C

```c
// CItemMakingSkill::SetItemMakingSkillPoint @ 0x8545d24

/* CItemMakingSkill::SetItemMakingSkillPoint(int, int, CUser*) */

void __thiscall
CItemMakingSkill::SetItemMakingSkillPoint
          (CItemMakingSkill *this,int param_1,int param_2,CUser *param_3)

{
  short sVar1;
  bool bVar2;
  CDataManager *this_00;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_24 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_20 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_18 [4];
  int local_14;
  uint local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::GetItemMakingSkill(this_00);
  if (10 < param_1) {
    return;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rend(local_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_24);
  bVar2 = std::operator==((reverse_iterator *)local_24,(reverse_iterator *)local_28);
  if (bVar2) {
    return;
  }
  if ((0 < param_2) && (param_2 < 0x3e9)) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_20);
    piVar3 = (int *)std::
                    reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                    ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                  *)local_20);
    if (param_2 <= *piVar3) {
      bVar2 = false;
      goto LAB_08545dd4;
    }
  }
  bVar2 = true;
LAB_08545dd4:
  if (!bVar2) {
    *(short *)(this + param_1 * 2 + 6) = (short)param_2;
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_3);
    if (iVar4 == 0x46) {
      sVar1 = *(short *)(this + param_1 * 2 + 6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_1c);
      piVar3 = (int *)std::
                      reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                      ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                                    *)local_1c);
      if (*piVar3 < (int)sVar1) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::rbegin(local_18);
        puVar5 = (undefined4 *)
                 std::
                 reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                 ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                               *)local_18);
        *(short *)(this + param_1 * 2 + 6) = (short)*puVar5;
      }
    }
    else {
      local_10 = 0;
      while (uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                               ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                (local_14 + 0x18)), local_10 < uVar7) {
        iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_3);
        iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_14 + 0x18),local_10);
        if ((iVar4 < *(int *)(iVar6 + 4)) &&
           (sVar1 = *(short *)(this + param_1 * 2 + 6),
           piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                       *)(local_14 + 0x18),local_10), *piVar3 < (int)sVar1)) {
          puVar5 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (local_14 + 0x18),local_10);
          *(short *)(this + param_1 * 2 + 6) = (short)*puVar5;
          break;
        }
        local_10 = local_10 + 1;
      }
    }
    if (1000 < *(short *)(this + param_1 * 2 + 6)) {
      *(undefined2 *)(this + param_1 * 2 + 6) = 1000;
    }
    charac_expand::CData::alter((CData *)this);
    Send_ItemMakingSkillList(this,param_3);
  }
  return;
}
```
