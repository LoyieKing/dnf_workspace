# get_blood_spawn_phase_total_cnt_of_small_round

`_ZN13CBattle_Field46get_blood_spawn_phase_total_cnt_of_small_roundEs`

`CBattle_Field::get_blood_spawn_phase_total_cnt_of_small_round(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306c0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306c0e  _ZN13CBattle_Field46get_blood_spawn_phase_total_cnt_of_small_roundEs
#           CBattle_Field::get_blood_spawn_phase_total_cnt_of_small_round(short)
# range [0x08306c0e, 0x08306d65]
08306c0e +0x000:  push   %ebp
08306c0f +0x001:  mov    %esp,%ebp
08306c11 +0x003:  sub    $0x38,%esp
08306c14 +0x006:  mov    0xc(%ebp),%eax
08306c17 +0x009:  mov    %ax,-0x1c(%ebp)
08306c1b +0x00d:  mov    0x8(%ebp),%eax
08306c1e +0x010:  add    $0x24c,%eax
08306c23 +0x015:  mov    %eax,(%esp)
08306c26 +0x018:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
08306c2b +0x01d:  test   %al,%al
08306c2d +0x01f:  jne    08306c43 <+0x35>
08306c2f +0x021:  mov    0x8(%ebp),%eax
08306c32 +0x024:  add    $0x240,%eax
08306c37 +0x029:  mov    %eax,(%esp)
08306c3a +0x02c:  call   083117e0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x33c5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x33c5
08306c3f +0x031:  test   %al,%al
08306c41 +0x033:  je     08306c4a <+0x3c>
08306c43 +0x035:  mov    $0x1,%eax
08306c48 +0x03a:  jmp    08306c4f <+0x41>
08306c4a +0x03c:  mov    $0x0,%eax
08306c4f +0x041:  test   %al,%al
08306c51 +0x043:  je     08306c5d <+0x4f>
08306c53 +0x045:  mov    $0xffffffff,%eax
08306c58 +0x04a:  jmp    08306d63 <+0x155>
08306c5d +0x04f:  mov    0x8(%ebp),%eax
08306c60 +0x052:  add    $0x24c,%eax
08306c65 +0x057:  mov    %eax,(%esp)
08306c68 +0x05a:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
08306c6d +0x05f:  cmp    -0x1c(%ebp),%ax
08306c71 +0x063:  jle    08306c7a <+0x6c>
08306c73 +0x065:  cmpw   $0x0,-0x1c(%ebp)
08306c78 +0x06a:  jns    08306c81 <+0x73>
08306c7a +0x06c:  mov    $0x1,%eax
08306c7f +0x071:  jmp    08306c86 <+0x78>
08306c81 +0x073:  mov    $0x0,%eax
08306c86 +0x078:  test   %al,%al
08306c88 +0x07a:  je     08306c94 <+0x86>
08306c8a +0x07c:  mov    $0xffffffff,%eax
08306c8f +0x081:  jmp    08306d63 <+0x155>
08306c94 +0x086:  movl   $0x0,-0x10(%ebp)
08306c9b +0x08d:  movswl -0x1c(%ebp),%eax
08306c9f +0x091:  mov    0x8(%ebp),%edx
08306ca2 +0x094:  add    $0x24c,%edx
08306ca8 +0x09a:  mov    %eax,0x4(%esp)
08306cac +0x09e:  mov    %edx,(%esp)
08306caf +0x0a1:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
08306cb4 +0x0a6:  mov    0x4(%eax),%eax
08306cb7 +0x0a9:  mov    %eax,-0xc(%ebp)
08306cba +0x0ac:  cmpl   $0xffffffff,-0xc(%ebp)
08306cbe +0x0b0:  jne    08306d21 <+0x113>
08306cc0 +0x0b2:  mov    0x8(%ebp),%eax
08306cc3 +0x0b5:  add    $0x258,%eax
08306cc8 +0x0ba:  mov    %eax,(%esp)
08306ccb +0x0bd:  call   08311982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3567
08306cd0 +0x0c2:  test   %al,%al
08306cd2 +0x0c4:  jne    08306cea <+0xdc>
08306cd4 +0x0c6:  mov    0x8(%ebp),%eax
08306cd7 +0x0c9:  add    $0x258,%eax
08306cdc +0x0ce:  mov    %eax,(%esp)
08306cdf +0x0d1:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
08306ce4 +0x0d6:  cmp    -0x1c(%ebp),%ax
08306ce8 +0x0da:  jg     08306cf1 <+0xe3>
08306cea +0x0dc:  mov    $0x1,%eax
08306cef +0x0e1:  jmp    08306cf6 <+0xe8>
08306cf1 +0x0e3:  mov    $0x0,%eax
08306cf6 +0x0e8:  test   %al,%al
08306cf8 +0x0ea:  je     08306d01 <+0xf3>
08306cfa +0x0ec:  mov    $0xffffffff,%eax
08306cff +0x0f1:  jmp    08306d63 <+0x155>
08306d01 +0x0f3:  movswl -0x1c(%ebp),%eax
08306d05 +0x0f7:  mov    0x8(%ebp),%edx
08306d08 +0x0fa:  add    $0x258,%edx
08306d0e +0x100:  mov    %eax,0x4(%esp)
08306d12 +0x104:  mov    %edx,(%esp)
08306d15 +0x107:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
08306d1a +0x10c:  movzwl (%eax),%eax
08306d1d +0x10f:  cwtl
08306d1e +0x110:  mov    %eax,-0xc(%ebp)
08306d21 +0x113:  mov    0x8(%ebp),%eax
08306d24 +0x116:  add    $0x240,%eax
08306d29 +0x11b:  mov    %eax,(%esp)
08306d2c +0x11e:  call   08311824 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3409>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3409
08306d31 +0x123:  cmp    -0xc(%ebp),%eax
08306d34 +0x126:  setle  %al
08306d37 +0x129:  test   %al,%al
08306d39 +0x12b:  je     08306d42 <+0x134>
08306d3b +0x12d:  mov    $0xffffffff,%eax
08306d40 +0x132:  jmp    08306d63 <+0x155>
08306d42 +0x134:  mov    -0xc(%ebp),%eax
08306d45 +0x137:  mov    0x8(%ebp),%edx
08306d48 +0x13a:  add    $0x240,%edx
08306d4e +0x140:  mov    %eax,0x4(%esp)
08306d52 +0x144:  mov    %edx,(%esp)
08306d55 +0x147:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08306d5a +0x14c:  mov    0x24(%eax),%eax
08306d5d +0x14f:  mov    %eax,-0x10(%ebp)
08306d60 +0x152:  mov    -0x10(%ebp),%eax
08306d63 +0x155:  leave
08306d64 +0x156:  ret
08306d65 +0x157:  nop
```

## 反编译 C

```c
// CBattle_Field::get_blood_spawn_phase_total_cnt_of_small_round @ 0x8306c0e

/* CBattle_Field::get_blood_spawn_phase_total_cnt_of_small_round(short) */

undefined4 __thiscall
CBattle_Field::get_blood_spawn_phase_total_cnt_of_small_round(CBattle_Field *this,short param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  uint local_10;
  
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
    return 0xffffffff;
  }
  sVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                    ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                     (this + 0x24c));
  if ((param_1 < sVar3) && (-1 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar4 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator[]
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (this + 0x24c),(int)param_1);
    local_10 = *(uint *)(iVar4 + 4);
    if (local_10 == 0xffffffff) {
      cVar2 = std::vector<short,std::allocator<short>>::empty();
      if ((cVar2 == '\0') &&
         (sVar3 = std::vector<short,std::allocator<short>>::size
                            ((vector<short,std::allocator<short>> *)(this + 600)), param_1 < sVar3))
      {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return 0xffffffff;
      }
      psVar5 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                  ((vector<short,std::allocator<short>> *)(this + 600),(int)param_1)
      ;
      local_10 = (uint)*psVar5;
    }
    iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::size
                      ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                       (this + 0x240));
    if ((int)local_10 < iVar4) {
      iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                        ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)
                         (this + 0x240),local_10);
      uVar6 = *(undefined4 *)(iVar4 + 0x24);
    }
    else {
      uVar6 = 0xffffffff;
    }
    return uVar6;
  }
  return 0xffffffff;
}
```
