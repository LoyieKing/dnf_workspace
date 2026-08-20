# getComboIndex

`_ZN13StrikerScript13getComboIndexEssi`

`StrikerScript::getComboIndex(short, short, int)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e97a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e97a  _ZN13StrikerScript13getComboIndexEssi
#           StrikerScript::getComboIndex(short, short, int)
# range [0x08a9e97a, 0x08a9ea95]
08a9e97a +0x000:  push   %ebp
08a9e97b +0x001:  mov    %esp,%ebp
08a9e97d +0x003:  sub    $0x48,%esp
08a9e980 +0x006:  mov    0xc(%ebp),%edx
08a9e983 +0x009:  mov    0x10(%ebp),%eax
08a9e986 +0x00c:  mov    %dx,-0x2c(%ebp)
08a9e98a +0x010:  mov    %ax,-0x30(%ebp)
08a9e98e +0x014:  movl   $0x0,-0x10(%ebp)
08a9e995 +0x01b:  movl   $0x0,-0xc(%ebp)
08a9e99c +0x022:  jmp    08a9ea7f <+0x105>
08a9e9a1 +0x027:  cmpl   $0x0,-0xc(%ebp)
08a9e9a5 +0x02b:  jne    08a9e9c7 <+0x4d>
08a9e9a7 +0x02d:  movswl -0x30(%ebp),%edx
08a9e9ab +0x031:  movswl -0x2c(%ebp),%eax
08a9e9af +0x035:  mov    %edx,0x8(%esp)
08a9e9b3 +0x039:  mov    %eax,0x4(%esp)
08a9e9b7 +0x03d:  mov    0x8(%ebp),%eax
08a9e9ba +0x040:  mov    %eax,(%esp)
08a9e9bd +0x043:  call   08a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>  ; StrikerScript::getStrikerSkillVector(short, short)
08a9e9c2 +0x048:  mov    %eax,-0x10(%ebp)
08a9e9c5 +0x04b:  jmp    08a9e9e5 <+0x6b>
08a9e9c7 +0x04d:  movswl -0x2c(%ebp),%eax
08a9e9cb +0x051:  movl   $0x0,0x8(%esp)
08a9e9d3 +0x059:  mov    %eax,0x4(%esp)
08a9e9d7 +0x05d:  mov    0x8(%ebp),%eax
08a9e9da +0x060:  mov    %eax,(%esp)
08a9e9dd +0x063:  call   08a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>  ; StrikerScript::getStrikerSkillVector(short, short)
08a9e9e2 +0x068:  mov    %eax,-0x10(%ebp)
08a9e9e5 +0x06b:  cmpl   $0x0,-0x10(%ebp)
08a9e9e9 +0x06f:  jne    08a9e9f5 <+0x7b>
08a9e9eb +0x071:  mov    $0x0,%eax
08a9e9f0 +0x076:  jmp    08a9ea93 <+0x119>
08a9e9f5 +0x07b:  lea    -0x1c(%ebp),%eax
08a9e9f8 +0x07e:  mov    -0x10(%ebp),%edx
08a9e9fb +0x081:  mov    %edx,0x4(%esp)
08a9e9ff +0x085:  mov    %eax,(%esp)
08a9ea02 +0x088:  call   08a9f66e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x981>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x981
08a9ea07 +0x08d:  sub    $0x4,%esp
08a9ea0a +0x090:  jmp    08a9ea50 <+0xd6>
08a9ea0c +0x092:  lea    -0x1c(%ebp),%eax
08a9ea0f +0x095:  mov    %eax,(%esp)
08a9ea12 +0x098:  call   08a9f6e4 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9f7>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9f7
08a9ea17 +0x09d:  mov    (%eax),%eax
08a9ea19 +0x09f:  cmp    0x14(%ebp),%eax
08a9ea1c +0x0a2:  sete   %al
08a9ea1f +0x0a5:  test   %al,%al
08a9ea21 +0x0a7:  je     08a9ea33 <+0xb9>
08a9ea23 +0x0a9:  lea    -0x1c(%ebp),%eax
08a9ea26 +0x0ac:  mov    %eax,(%esp)
08a9ea29 +0x0af:  call   08a9f6e4 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9f7>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9f7
08a9ea2e +0x0b4:  mov    0x4(%eax),%eax
08a9ea31 +0x0b7:  jmp    08a9ea93 <+0x119>
08a9ea33 +0x0b9:  lea    -0x14(%ebp),%eax
08a9ea36 +0x0bc:  movl   $0x0,0x8(%esp)
08a9ea3e +0x0c4:  lea    -0x1c(%ebp),%edx
08a9ea41 +0x0c7:  mov    %edx,0x4(%esp)
08a9ea45 +0x0cb:  mov    %eax,(%esp)
08a9ea48 +0x0ce:  call   08a9f6ee <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa01>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa01
08a9ea4d +0x0d3:  sub    $0x4,%esp
08a9ea50 +0x0d6:  lea    -0x18(%ebp),%eax
08a9ea53 +0x0d9:  mov    -0x10(%ebp),%edx
08a9ea56 +0x0dc:  mov    %edx,0x4(%esp)
08a9ea5a +0x0e0:  mov    %eax,(%esp)
08a9ea5d +0x0e3:  call   08a9f692 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9a5>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9a5
08a9ea62 +0x0e8:  sub    $0x4,%esp
08a9ea65 +0x0eb:  lea    -0x18(%ebp),%eax
08a9ea68 +0x0ee:  mov    %eax,0x4(%esp)
08a9ea6c +0x0f2:  lea    -0x1c(%ebp),%eax
08a9ea6f +0x0f5:  mov    %eax,(%esp)
08a9ea72 +0x0f8:  call   08a9f6b8 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9cb>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9cb
08a9ea77 +0x0fd:  test   %al,%al
08a9ea79 +0x0ff:  jne    08a9ea0c <+0x92>
08a9ea7b +0x101:  addl   $0x1,-0xc(%ebp)
08a9ea7f +0x105:  cmpl   $0x1,-0xc(%ebp)
08a9ea83 +0x109:  setle  %al
08a9ea86 +0x10c:  test   %al,%al
08a9ea88 +0x10e:  jne    08a9e9a1 <+0x27>
08a9ea8e +0x114:  mov    $0x0,%eax
08a9ea93 +0x119:  leave
08a9ea94 +0x11a:  ret
08a9ea95 +0x11b:  nop
```

## 反编译 C

```c
// StrikerScript::getComboIndex @ 0x8a9e97a

/* StrikerScript::getComboIndex(short, short, int) */

undefined4 __thiscall
StrikerScript::getComboIndex(StrikerScript *this,short param_1,short param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      return 0;
    }
    if (local_10 == 0) {
      local_14 = getStrikerSkillVector(this,param_1,param_2);
    }
    else {
      local_14 = getStrikerSkillVector(this,param_1,0);
    }
    if (local_14 == 0) break;
    std::vector<StrikerSkill,std::allocator<StrikerSkill>>::begin();
    while( true ) {
      std::vector<StrikerSkill,std::allocator<StrikerSkill>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                      ::operator->(local_20);
      if (*piVar2 == param_3) {
        iVar3 = __gnu_cxx::
                __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                ::operator->(local_20);
        return *(undefined4 *)(iVar3 + 4);
      }
      __gnu_cxx::
      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>::
      operator++(local_18,(int)local_20);
    }
    local_10 = local_10 + 1;
  }
  return 0;
}
```
