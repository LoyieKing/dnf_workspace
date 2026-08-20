# get_blood_spawn_cnt_of_phase

`_ZN13CBattle_Field28get_blood_spawn_cnt_of_phaseEss`

`CBattle_Field::get_blood_spawn_cnt_of_phase(short, short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306a62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306a62  _ZN13CBattle_Field28get_blood_spawn_cnt_of_phaseEss
#           CBattle_Field::get_blood_spawn_cnt_of_phase(short, short)
# range [0x08306a62, 0x08306c0d]
08306a62 +0x000:  push   %ebp
08306a63 +0x001:  mov    %esp,%ebp
08306a65 +0x003:  sub    $0x38,%esp
08306a68 +0x006:  mov    0xc(%ebp),%edx
08306a6b +0x009:  mov    0x10(%ebp),%eax
08306a6e +0x00c:  mov    %dx,-0x1c(%ebp)
08306a72 +0x010:  mov    %ax,-0x20(%ebp)
08306a76 +0x014:  mov    0x8(%ebp),%eax
08306a79 +0x017:  add    $0x24c,%eax
08306a7e +0x01c:  mov    %eax,(%esp)
08306a81 +0x01f:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
08306a86 +0x024:  test   %al,%al
08306a88 +0x026:  jne    08306a9e <+0x3c>
08306a8a +0x028:  mov    0x8(%ebp),%eax
08306a8d +0x02b:  add    $0x240,%eax
08306a92 +0x030:  mov    %eax,(%esp)
08306a95 +0x033:  call   083117e0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x33c5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x33c5
08306a9a +0x038:  test   %al,%al
08306a9c +0x03a:  je     08306aa5 <+0x43>
08306a9e +0x03c:  mov    $0x1,%eax
08306aa3 +0x041:  jmp    08306aaa <+0x48>
08306aa5 +0x043:  mov    $0x0,%eax
08306aaa +0x048:  test   %al,%al
08306aac +0x04a:  je     08306ab8 <+0x56>
08306aae +0x04c:  mov    $0xffffffff,%eax
08306ab3 +0x051:  jmp    08306c0b <+0x1a9>
08306ab8 +0x056:  mov    0x8(%ebp),%eax
08306abb +0x059:  add    $0x24c,%eax
08306ac0 +0x05e:  mov    %eax,(%esp)
08306ac3 +0x061:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
08306ac8 +0x066:  cmp    -0x1c(%ebp),%ax
08306acc +0x06a:  jle    08306ad5 <+0x73>
08306ace +0x06c:  cmpw   $0x0,-0x1c(%ebp)
08306ad3 +0x071:  jns    08306adc <+0x7a>
08306ad5 +0x073:  mov    $0x1,%eax
08306ada +0x078:  jmp    08306ae1 <+0x7f>
08306adc +0x07a:  mov    $0x0,%eax
08306ae1 +0x07f:  test   %al,%al
08306ae3 +0x081:  je     08306aef <+0x8d>
08306ae5 +0x083:  mov    $0xffffffff,%eax
08306aea +0x088:  jmp    08306c0b <+0x1a9>
08306aef +0x08d:  movl   $0x0,-0x18(%ebp)
08306af6 +0x094:  movl   $0x0,-0x14(%ebp)
08306afd +0x09b:  movswl -0x1c(%ebp),%eax
08306b01 +0x09f:  mov    0x8(%ebp),%edx
08306b04 +0x0a2:  add    $0x24c,%edx
08306b0a +0x0a8:  mov    %eax,0x4(%esp)
08306b0e +0x0ac:  mov    %edx,(%esp)
08306b11 +0x0af:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
08306b16 +0x0b4:  mov    0x4(%eax),%eax
08306b19 +0x0b7:  mov    %eax,-0x10(%ebp)
08306b1c +0x0ba:  cmpl   $0xffffffff,-0x10(%ebp)
08306b20 +0x0be:  jne    08306b86 <+0x124>
08306b22 +0x0c0:  mov    0x8(%ebp),%eax
08306b25 +0x0c3:  add    $0x258,%eax
08306b2a +0x0c8:  mov    %eax,(%esp)
08306b2d +0x0cb:  call   08311982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3567
08306b32 +0x0d0:  test   %al,%al
08306b34 +0x0d2:  jne    08306b4c <+0xea>
08306b36 +0x0d4:  mov    0x8(%ebp),%eax
08306b39 +0x0d7:  add    $0x258,%eax
08306b3e +0x0dc:  mov    %eax,(%esp)
08306b41 +0x0df:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
08306b46 +0x0e4:  cmp    -0x1c(%ebp),%ax
08306b4a +0x0e8:  jg     08306b53 <+0xf1>
08306b4c +0x0ea:  mov    $0x1,%eax
08306b51 +0x0ef:  jmp    08306b58 <+0xf6>
08306b53 +0x0f1:  mov    $0x0,%eax
08306b58 +0x0f6:  test   %al,%al
08306b5a +0x0f8:  je     08306b66 <+0x104>
08306b5c +0x0fa:  mov    $0xffffffff,%eax
08306b61 +0x0ff:  jmp    08306c0b <+0x1a9>
08306b66 +0x104:  movswl -0x1c(%ebp),%eax
08306b6a +0x108:  mov    0x8(%ebp),%edx
08306b6d +0x10b:  add    $0x258,%edx
08306b73 +0x111:  mov    %eax,0x4(%esp)
08306b77 +0x115:  mov    %edx,(%esp)
08306b7a +0x118:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
08306b7f +0x11d:  movzwl (%eax),%eax
08306b82 +0x120:  cwtl
08306b83 +0x121:  mov    %eax,-0x10(%ebp)
08306b86 +0x124:  mov    0x8(%ebp),%eax
08306b89 +0x127:  add    $0x240,%eax
08306b8e +0x12c:  mov    %eax,(%esp)
08306b91 +0x12f:  call   08311824 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3409>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3409
08306b96 +0x134:  cmp    -0x10(%ebp),%eax
08306b99 +0x137:  setle  %al
08306b9c +0x13a:  test   %al,%al
08306b9e +0x13c:  je     08306ba7 <+0x145>
08306ba0 +0x13e:  mov    $0xffffffff,%eax
08306ba5 +0x143:  jmp    08306c0b <+0x1a9>
08306ba7 +0x145:  mov    -0x10(%ebp),%eax
08306baa +0x148:  mov    0x8(%ebp),%edx
08306bad +0x14b:  add    $0x240,%edx
08306bb3 +0x151:  mov    %eax,0x4(%esp)
08306bb7 +0x155:  mov    %edx,(%esp)
08306bba +0x158:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08306bbf +0x15d:  mov    0x1c(%eax),%eax
08306bc2 +0x160:  mov    %eax,-0x14(%ebp)
08306bc5 +0x163:  movl   $0x0,-0xc(%ebp)
08306bcc +0x16a:  jmp    08306bf7 <+0x195>
08306bce +0x16c:  mov    -0x10(%ebp),%eax
08306bd1 +0x16f:  mov    0x8(%ebp),%edx
08306bd4 +0x172:  add    $0x240,%edx
08306bda +0x178:  mov    %eax,0x4(%esp)
08306bde +0x17c:  mov    %edx,(%esp)
08306be1 +0x17f:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08306be6 +0x184:  mov    0x20(%eax),%eax
08306be9 +0x187:  imul   -0xc(%ebp),%eax
08306bed +0x18b:  add    -0x14(%ebp),%eax
08306bf0 +0x18e:  mov    %eax,-0x18(%ebp)
08306bf3 +0x191:  addl   $0x1,-0xc(%ebp)
08306bf7 +0x195:  movswl -0x20(%ebp),%eax
08306bfb +0x199:  add    $0x1,%eax
08306bfe +0x19c:  cmp    -0xc(%ebp),%eax
08306c01 +0x19f:  setg   %al
08306c04 +0x1a2:  test   %al,%al
08306c06 +0x1a4:  jne    08306bce <+0x16c>
08306c08 +0x1a6:  mov    -0x18(%ebp),%eax
08306c0b +0x1a9:  leave
08306c0c +0x1aa:  ret
08306c0d +0x1ab:  nop
```

## 反编译 C

```c
// CBattle_Field::get_blood_spawn_cnt_of_phase @ 0x8306a62

/* CBattle_Field::get_blood_spawn_cnt_of_phase(short, short) */

int __thiscall
CBattle_Field::get_blood_spawn_cnt_of_phase(CBattle_Field *this,short param_1,short param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int local_1c;
  uint local_14;
  int local_10;
  
  cVar2 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::empty();
  if ((cVar2 == '\0') &&
     (cVar2 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::empty(),
     cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_1c = -1;
  }
  else {
    sVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c));
    if ((param_1 < sVar3) && (-1 < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_1c = -1;
    }
    else {
      local_1c = 0;
      iVar4 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                        ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                         (this + 0x24c),(int)param_1);
      local_14 = *(uint *)(iVar4 + 4);
      if (local_14 == 0xffffffff) {
        cVar2 = std::vector<short,std::allocator<short>>::empty();
        if ((cVar2 == '\0') &&
           (sVar3 = std::vector<short,std::allocator<short>>::size
                              ((vector<short,std::allocator<short>> *)(this + 600)), param_1 < sVar3
           )) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return -1;
        }
        psVar5 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                    ((vector<short,std::allocator<short>> *)(this + 600),
                                     (int)param_1);
        local_14 = (uint)*psVar5;
      }
      iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::size
                        ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                         (this + 0x240));
      if ((int)local_14 < iVar4) {
        iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                          ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                           (this + 0x240),local_14);
        iVar4 = *(int *)(iVar4 + 0x1c);
        for (local_10 = 0; local_10 < param_2 + 1; local_10 = local_10 + 1) {
          iVar6 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                             (this + 0x240),local_14);
          local_1c = *(int *)(iVar6 + 0x20) * local_10 + iVar4;
        }
      }
      else {
        local_1c = -1;
      }
    }
  }
  return local_1c;
}
```
