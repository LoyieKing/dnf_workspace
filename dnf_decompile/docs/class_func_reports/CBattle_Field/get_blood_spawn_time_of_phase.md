# get_blood_spawn_time_of_phase

`_ZN13CBattle_Field29get_blood_spawn_time_of_phaseEs`

`CBattle_Field::get_blood_spawn_time_of_phase(short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830690a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830690a  _ZN13CBattle_Field29get_blood_spawn_time_of_phaseEs
#           CBattle_Field::get_blood_spawn_time_of_phase(short)
# range [0x0830690a, 0x08306a61]
0830690a +0x000:  push   %ebp
0830690b +0x001:  mov    %esp,%ebp
0830690d +0x003:  sub    $0x38,%esp
08306910 +0x006:  mov    0xc(%ebp),%eax
08306913 +0x009:  mov    %ax,-0x1c(%ebp)
08306917 +0x00d:  mov    0x8(%ebp),%eax
0830691a +0x010:  add    $0x24c,%eax
0830691f +0x015:  mov    %eax,(%esp)
08306922 +0x018:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
08306927 +0x01d:  test   %al,%al
08306929 +0x01f:  jne    0830693f <+0x35>
0830692b +0x021:  mov    0x8(%ebp),%eax
0830692e +0x024:  add    $0x240,%eax
08306933 +0x029:  mov    %eax,(%esp)
08306936 +0x02c:  call   083117e0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x33c5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x33c5
0830693b +0x031:  test   %al,%al
0830693d +0x033:  je     08306946 <+0x3c>
0830693f +0x035:  mov    $0x1,%eax
08306944 +0x03a:  jmp    0830694b <+0x41>
08306946 +0x03c:  mov    $0x0,%eax
0830694b +0x041:  test   %al,%al
0830694d +0x043:  je     08306959 <+0x4f>
0830694f +0x045:  mov    $0xffffffff,%eax
08306954 +0x04a:  jmp    08306a5f <+0x155>
08306959 +0x04f:  mov    0x8(%ebp),%eax
0830695c +0x052:  add    $0x24c,%eax
08306961 +0x057:  mov    %eax,(%esp)
08306964 +0x05a:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
08306969 +0x05f:  cmp    -0x1c(%ebp),%ax
0830696d +0x063:  jle    08306976 <+0x6c>
0830696f +0x065:  cmpw   $0x0,-0x1c(%ebp)
08306974 +0x06a:  jns    0830697d <+0x73>
08306976 +0x06c:  mov    $0x1,%eax
0830697b +0x071:  jmp    08306982 <+0x78>
0830697d +0x073:  mov    $0x0,%eax
08306982 +0x078:  test   %al,%al
08306984 +0x07a:  je     08306990 <+0x86>
08306986 +0x07c:  mov    $0xffffffff,%eax
0830698b +0x081:  jmp    08306a5f <+0x155>
08306990 +0x086:  movl   $0x0,-0x10(%ebp)
08306997 +0x08d:  movswl -0x1c(%ebp),%eax
0830699b +0x091:  mov    0x8(%ebp),%edx
0830699e +0x094:  add    $0x24c,%edx
083069a4 +0x09a:  mov    %eax,0x4(%esp)
083069a8 +0x09e:  mov    %edx,(%esp)
083069ab +0x0a1:  call   08311960 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3545>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3545
083069b0 +0x0a6:  mov    0x4(%eax),%eax
083069b3 +0x0a9:  mov    %eax,-0xc(%ebp)
083069b6 +0x0ac:  cmpl   $0xffffffff,-0xc(%ebp)
083069ba +0x0b0:  jne    08306a1d <+0x113>
083069bc +0x0b2:  mov    0x8(%ebp),%eax
083069bf +0x0b5:  add    $0x258,%eax
083069c4 +0x0ba:  mov    %eax,(%esp)
083069c7 +0x0bd:  call   08311982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3567
083069cc +0x0c2:  test   %al,%al
083069ce +0x0c4:  jne    083069e6 <+0xdc>
083069d0 +0x0c6:  mov    0x8(%ebp),%eax
083069d3 +0x0c9:  add    $0x258,%eax
083069d8 +0x0ce:  mov    %eax,(%esp)
083069db +0x0d1:  call   0816eece <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1bc>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1bc
083069e0 +0x0d6:  cmp    -0x1c(%ebp),%ax
083069e4 +0x0da:  jg     083069ed <+0xe3>
083069e6 +0x0dc:  mov    $0x1,%eax
083069eb +0x0e1:  jmp    083069f2 <+0xe8>
083069ed +0x0e3:  mov    $0x0,%eax
083069f2 +0x0e8:  test   %al,%al
083069f4 +0x0ea:  je     083069fd <+0xf3>
083069f6 +0x0ec:  mov    $0xffffffff,%eax
083069fb +0x0f1:  jmp    08306a5f <+0x155>
083069fd +0x0f3:  movswl -0x1c(%ebp),%eax
08306a01 +0x0f7:  mov    0x8(%ebp),%edx
08306a04 +0x0fa:  add    $0x258,%edx
08306a0a +0x100:  mov    %eax,0x4(%esp)
08306a0e +0x104:  mov    %edx,(%esp)
08306a11 +0x107:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
08306a16 +0x10c:  movzwl (%eax),%eax
08306a19 +0x10f:  cwtl
08306a1a +0x110:  mov    %eax,-0xc(%ebp)
08306a1d +0x113:  mov    0x8(%ebp),%eax
08306a20 +0x116:  add    $0x240,%eax
08306a25 +0x11b:  mov    %eax,(%esp)
08306a28 +0x11e:  call   08311824 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3409>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3409
08306a2d +0x123:  cmp    -0xc(%ebp),%eax
08306a30 +0x126:  setle  %al
08306a33 +0x129:  test   %al,%al
08306a35 +0x12b:  je     08306a3e <+0x134>
08306a37 +0x12d:  mov    $0xffffffff,%eax
08306a3c +0x132:  jmp    08306a5f <+0x155>
08306a3e +0x134:  mov    -0xc(%ebp),%eax
08306a41 +0x137:  mov    0x8(%ebp),%edx
08306a44 +0x13a:  add    $0x240,%edx
08306a4a +0x140:  mov    %eax,0x4(%esp)
08306a4e +0x144:  mov    %edx,(%esp)
08306a51 +0x147:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08306a56 +0x14c:  mov    0x18(%eax),%eax
08306a59 +0x14f:  mov    %eax,-0x10(%ebp)
08306a5c +0x152:  mov    -0x10(%ebp),%eax
08306a5f +0x155:  leave
08306a60 +0x156:  ret
08306a61 +0x157:  nop
```

## 反编译 C

```c
// CBattle_Field::get_blood_spawn_time_of_phase @ 0x830690a

/* CBattle_Field::get_blood_spawn_time_of_phase(short) */

undefined4 __thiscall
CBattle_Field::get_blood_spawn_time_of_phase(CBattle_Field *this,short param_1)

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
      uVar6 = *(undefined4 *)(iVar4 + 0x18);
    }
    else {
      uVar6 = 0xffffffff;
    }
    return uVar6;
  }
  return 0xffffffff;
}
```
