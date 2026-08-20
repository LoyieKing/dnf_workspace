# debugCheckGrowTypeSkill

`_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii`

`SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086053c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086053c6  _ZN9SkillSlot23debugCheckGrowTypeSkillEiiii
#           SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)
# range [0x086053c6, 0x086055eb]
086053c6 +0x000:  push   %ebp
086053c7 +0x001:  mov    %esp,%ebp
086053c9 +0x003:  push   %ebx
086053ca +0x004:  sub    $0x34,%esp
086053cd +0x007:  movl   $0x0,-0x14(%ebp)
086053d4 +0x00e:  jmp    086055d4 <+0x20e>
086053d9 +0x013:  mov    -0x14(%ebp),%edx
086053dc +0x016:  mov    0x8(%ebp),%eax
086053df +0x019:  add    $0x20,%edx
086053e2 +0x01c:  movzbl 0x6(%eax,%edx,2),%eax
086053e7 +0x021:  test   %al,%al
086053e9 +0x023:  je     086054cd <+0x107>
086053ef +0x029:  movl   $0x0,-0x10(%ebp)
086053f6 +0x030:  mov    -0x14(%ebp),%edx
086053f9 +0x033:  mov    0x8(%ebp),%eax
086053fc +0x036:  add    $0x20,%edx
086053ff +0x039:  movzbl 0x6(%eax,%edx,2),%eax
08605404 +0x03e:  movzbl %al,%ebx
08605407 +0x041:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860540c +0x046:  mov    %ebx,0x8(%esp)
08605410 +0x04a:  mov    0x10(%ebp),%edx
08605413 +0x04d:  mov    %edx,0x4(%esp)
08605417 +0x051:  mov    %eax,(%esp)
0860541a +0x054:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
0860541f +0x059:  mov    %eax,-0x10(%ebp)
08605422 +0x05c:  cmpl   $0x0,-0x10(%ebp)
08605426 +0x060:  jne    08605475 <+0xaf>
08605428 +0x062:  mov    -0x14(%ebp),%edx
0860542b +0x065:  mov    0x8(%ebp),%eax
0860542e +0x068:  add    $0x20,%edx
08605431 +0x06b:  movzbl 0x6(%eax,%edx,2),%eax
08605436 +0x070:  movzbl %al,%eax
08605439 +0x073:  mov    %eax,0x18(%esp)
0860543d +0x077:  mov    0x10(%ebp),%eax
08605440 +0x07a:  mov    %eax,0x14(%esp)
08605444 +0x07e:  movl   $"G_CDataManager()->find_skill( %d, %d )",0x10(%esp)
0860544c +0x086:  movl   $0x5a4,0xc(%esp)
08605454 +0x08e:  movl   $&_ZZN9SkillSlot23debugCheckGrowTypeSkillEiiiiE19__PRETTY_FUNCTION__,0x8(%esp)
0860545c +0x096:  movl   $"skill_slot.cpp",0x4(%esp)
08605464 +0x09e:  movl   $0x1,(%esp)
0860546b +0x0a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08605470 +0x0aa:  jmp    086055e6 <+0x220>
08605475 +0x0af:  mov    -0x14(%ebp),%edx
08605478 +0x0b2:  mov    0x8(%ebp),%eax
0860547b +0x0b5:  add    $0x20,%edx
0860547e +0x0b8:  movzbl 0x7(%eax,%edx,2),%eax
08605483 +0x0bd:  movsbl %al,%eax
08605486 +0x0c0:  mov    %eax,0x10(%esp)
0860548a +0x0c4:  mov    0x18(%ebp),%eax
0860548d +0x0c7:  mov    %eax,0xc(%esp)
08605491 +0x0cb:  mov    0x14(%ebp),%eax
08605494 +0x0ce:  mov    %eax,0x8(%esp)
08605498 +0x0d2:  mov    0xc(%ebp),%eax
0860549b +0x0d5:  mov    %eax,0x4(%esp)
0860549f +0x0d9:  mov    -0x10(%ebp),%eax
086054a2 +0x0dc:  mov    %eax,(%esp)
086054a5 +0x0df:  call   0835039e <_ZNK6CSkill9can_learnEiiii>  ; CSkill::can_learn(int, int, int, int) const
086054aa +0x0e4:  xor    $0x1,%eax
086054ad +0x0e7:  test   %al,%al
086054af +0x0e9:  je     086054cd <+0x107>
086054b1 +0x0eb:  mov    -0x14(%ebp),%edx
086054b4 +0x0ee:  mov    0x8(%ebp),%eax
086054b7 +0x0f1:  add    $0x20,%edx
086054ba +0x0f4:  movb   $0x0,0x6(%eax,%edx,2)
086054bf +0x0f9:  mov    -0x14(%ebp),%edx
086054c2 +0x0fc:  mov    0x8(%ebp),%eax
086054c5 +0x0ff:  add    $0x20,%edx
086054c8 +0x102:  movb   $0x0,0x7(%eax,%edx,2)
086054cd +0x107:  mov    -0x14(%ebp),%edx
086054d0 +0x10a:  mov    0x8(%ebp),%eax
086054d3 +0x10d:  add    $0xe8,%edx
086054d9 +0x113:  movzbl 0xe(%eax,%edx,2),%eax
086054de +0x118:  test   %al,%al
086054e0 +0x11a:  je     086055d0 <+0x20a>
086054e6 +0x120:  movl   $0x0,-0xc(%ebp)
086054ed +0x127:  mov    -0x14(%ebp),%edx
086054f0 +0x12a:  mov    0x8(%ebp),%eax
086054f3 +0x12d:  add    $0xe8,%edx
086054f9 +0x133:  movzbl 0xe(%eax,%edx,2),%eax
086054fe +0x138:  movzbl %al,%ebx
08605501 +0x13b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08605506 +0x140:  mov    %ebx,0x8(%esp)
0860550a +0x144:  mov    0x10(%ebp),%edx
0860550d +0x147:  mov    %edx,0x4(%esp)
08605511 +0x14b:  mov    %eax,(%esp)
08605514 +0x14e:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08605519 +0x153:  mov    %eax,-0xc(%ebp)
0860551c +0x156:  cmpl   $0x0,-0xc(%ebp)
08605520 +0x15a:  jne    0860556f <+0x1a9>
08605522 +0x15c:  mov    -0x14(%ebp),%edx
08605525 +0x15f:  mov    0x8(%ebp),%eax
08605528 +0x162:  add    $0xe8,%edx
0860552e +0x168:  movzbl 0xe(%eax,%edx,2),%eax
08605533 +0x16d:  movzbl %al,%eax
08605536 +0x170:  mov    %eax,0x18(%esp)
0860553a +0x174:  mov    0x10(%ebp),%eax
0860553d +0x177:  mov    %eax,0x14(%esp)
08605541 +0x17b:  movl   $"G_CDataManager()->find_skill( %d, %d )",0x10(%esp)
08605549 +0x183:  movl   $0x5b7,0xc(%esp)
08605551 +0x18b:  movl   $&_ZZN9SkillSlot23debugCheckGrowTypeSkillEiiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08605559 +0x193:  movl   $"skill_slot.cpp",0x4(%esp)
08605561 +0x19b:  movl   $0x1,(%esp)
08605568 +0x1a2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0860556d +0x1a7:  jmp    086055e6 <+0x220>
0860556f +0x1a9:  mov    -0x14(%ebp),%edx
08605572 +0x1ac:  mov    0x8(%ebp),%eax
08605575 +0x1af:  add    $0xe8,%edx
0860557b +0x1b5:  movzbl 0xf(%eax,%edx,2),%eax
08605580 +0x1ba:  movsbl %al,%eax
08605583 +0x1bd:  mov    %eax,0x10(%esp)
08605587 +0x1c1:  mov    0x18(%ebp),%eax
0860558a +0x1c4:  mov    %eax,0xc(%esp)
0860558e +0x1c8:  mov    0x14(%ebp),%eax
08605591 +0x1cb:  mov    %eax,0x8(%esp)
08605595 +0x1cf:  mov    0xc(%ebp),%eax
08605598 +0x1d2:  mov    %eax,0x4(%esp)
0860559c +0x1d6:  mov    -0xc(%ebp),%eax
0860559f +0x1d9:  mov    %eax,(%esp)
086055a2 +0x1dc:  call   0835039e <_ZNK6CSkill9can_learnEiiii>  ; CSkill::can_learn(int, int, int, int) const
086055a7 +0x1e1:  xor    $0x1,%eax
086055aa +0x1e4:  test   %al,%al
086055ac +0x1e6:  je     086055d0 <+0x20a>
086055ae +0x1e8:  mov    -0x14(%ebp),%edx
086055b1 +0x1eb:  mov    0x8(%ebp),%eax
086055b4 +0x1ee:  add    $0xe8,%edx
086055ba +0x1f4:  movb   $0x0,0xe(%eax,%edx,2)
086055bf +0x1f9:  mov    -0x14(%ebp),%edx
086055c2 +0x1fc:  mov    0x8(%ebp),%eax
086055c5 +0x1ff:  add    $0xe8,%edx
086055cb +0x205:  movb   $0x0,0xf(%eax,%edx,2)
086055d0 +0x20a:  addl   $0x1,-0x14(%ebp)
086055d4 +0x20e:  cmpl   $0xcb,-0x14(%ebp)
086055db +0x215:  setle  %al
086055de +0x218:  test   %al,%al
086055e0 +0x21a:  jne    086053d9 <+0x13>
086055e6 +0x220:  add    $0x34,%esp
086055e9 +0x223:  pop    %ebx
086055ea +0x224:  pop    %ebp
086055eb +0x225:  ret
```

## 反编译 C

```c
// SkillSlot::debugCheckGrowTypeSkill @ 0x86053c6

/* SkillSlot::debugCheckGrowTypeSkill(int, int, int, int) */

void __thiscall
SkillSlot::debugCheckGrowTypeSkill(SkillSlot *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  CSkill *pCVar3;
  int local_18;
  
  local_18 = 0;
  do {
    if (0xcb < local_18) {
      return;
    }
    if (this[(local_18 + 0x20) * 2 + 6] != (SkillSlot)0x0) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,param_2);
      if (pCVar3 == (CSkill *)0x0) {
        LogManager::logFormat
                  (1,"skill_slot.cpp","void SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)",
                   0x5a4,"G_CDataManager()->find_skill( %d, %d )",param_2,
                   (uint)(byte)this[(local_18 + 0x20) * 2 + 6]);
        return;
      }
      cVar1 = CSkill::can_learn(pCVar3,param_1,param_3,param_4,
                                (int)(char)this[(local_18 + 0x20) * 2 + 7]);
      if (cVar1 != '\x01') {
        this[(local_18 + 0x20) * 2 + 6] = (SkillSlot)0x0;
        this[(local_18 + 0x20) * 2 + 7] = (SkillSlot)0x0;
      }
    }
    if (this[(local_18 + 0xe8) * 2 + 0xe] != (SkillSlot)0x0) {
      iVar2 = G_CDataManager();
      pCVar3 = (CSkill *)CDataManager::find_skill(iVar2,param_2);
      if (pCVar3 == (CSkill *)0x0) {
        LogManager::logFormat
                  (1,"skill_slot.cpp","void SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)",
                   0x5b7,"G_CDataManager()->find_skill( %d, %d )",param_2,
                   (uint)(byte)this[(local_18 + 0xe8) * 2 + 0xe]);
        return;
      }
      cVar1 = CSkill::can_learn(pCVar3,param_1,param_3,param_4,
                                (int)(char)this[(local_18 + 0xe8) * 2 + 0xf]);
      if (cVar1 != '\x01') {
        this[(local_18 + 0xe8) * 2 + 0xe] = (SkillSlot)0x0;
        this[(local_18 + 0xe8) * 2 + 0xf] = (SkillSlot)0x0;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
