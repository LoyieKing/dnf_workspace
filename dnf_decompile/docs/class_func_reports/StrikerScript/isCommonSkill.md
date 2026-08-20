# isCommonSkill

`_ZN13StrikerScript13isCommonSkillEsi`

`StrikerScript::isCommonSkill(short, int)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9ebee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9ebee  _ZN13StrikerScript13isCommonSkillEsi
#           StrikerScript::isCommonSkill(short, int)
# range [0x08a9ebee, 0x08a9ecac]
08a9ebee +0x00:  push   %ebp
08a9ebef +0x01:  mov    %esp,%ebp
08a9ebf1 +0x03:  sub    $0x38,%esp
08a9ebf4 +0x06:  mov    0xc(%ebp),%eax
08a9ebf7 +0x09:  mov    %ax,-0x1c(%ebp)
08a9ebfb +0x0d:  movswl -0x1c(%ebp),%eax
08a9ebff +0x11:  movl   $0x0,0x8(%esp)
08a9ec07 +0x19:  mov    %eax,0x4(%esp)
08a9ec0b +0x1d:  mov    0x8(%ebp),%eax
08a9ec0e +0x20:  mov    %eax,(%esp)
08a9ec11 +0x23:  call   08a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>  ; StrikerScript::getStrikerSkillVector(short, short)
08a9ec16 +0x28:  mov    %eax,-0xc(%ebp)
08a9ec19 +0x2b:  cmpl   $0x0,-0xc(%ebp)
08a9ec1d +0x2f:  jne    08a9ec29 <+0x3b>
08a9ec1f +0x31:  mov    $0x0,%eax
08a9ec24 +0x36:  jmp    08a9ecab <+0xbd>
08a9ec29 +0x3b:  lea    -0x18(%ebp),%eax
08a9ec2c +0x3e:  mov    -0xc(%ebp),%edx
08a9ec2f +0x41:  mov    %edx,0x4(%esp)
08a9ec33 +0x45:  mov    %eax,(%esp)
08a9ec36 +0x48:  call   08a9f66e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x981>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x981
08a9ec3b +0x4d:  sub    $0x4,%esp
08a9ec3e +0x50:  jmp    08a9ec7b <+0x8d>
08a9ec40 +0x52:  lea    -0x18(%ebp),%eax
08a9ec43 +0x55:  mov    %eax,(%esp)
08a9ec46 +0x58:  call   08a9f6e4 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9f7>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9f7
08a9ec4b +0x5d:  mov    (%eax),%eax
08a9ec4d +0x5f:  cmp    0x10(%ebp),%eax
08a9ec50 +0x62:  sete   %al
08a9ec53 +0x65:  test   %al,%al
08a9ec55 +0x67:  je     08a9ec5e <+0x70>
08a9ec57 +0x69:  mov    $0x1,%eax
08a9ec5c +0x6e:  jmp    08a9ecab <+0xbd>
08a9ec5e +0x70:  lea    -0x10(%ebp),%eax
08a9ec61 +0x73:  movl   $0x0,0x8(%esp)
08a9ec69 +0x7b:  lea    -0x18(%ebp),%edx
08a9ec6c +0x7e:  mov    %edx,0x4(%esp)
08a9ec70 +0x82:  mov    %eax,(%esp)
08a9ec73 +0x85:  call   08a9f6ee <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa01>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa01
08a9ec78 +0x8a:  sub    $0x4,%esp
08a9ec7b +0x8d:  lea    -0x14(%ebp),%eax
08a9ec7e +0x90:  mov    -0xc(%ebp),%edx
08a9ec81 +0x93:  mov    %edx,0x4(%esp)
08a9ec85 +0x97:  mov    %eax,(%esp)
08a9ec88 +0x9a:  call   08a9f692 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9a5>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9a5
08a9ec8d +0x9f:  sub    $0x4,%esp
08a9ec90 +0xa2:  lea    -0x14(%ebp),%eax
08a9ec93 +0xa5:  mov    %eax,0x4(%esp)
08a9ec97 +0xa9:  lea    -0x18(%ebp),%eax
08a9ec9a +0xac:  mov    %eax,(%esp)
08a9ec9d +0xaf:  call   08a9f6b8 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x9cb>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x9cb
08a9eca2 +0xb4:  test   %al,%al
08a9eca4 +0xb6:  jne    08a9ec40 <+0x52>
08a9eca6 +0xb8:  mov    $0x0,%eax
08a9ecab +0xbd:  leave
08a9ecac +0xbe:  ret
```

## 反编译 C

```c
// StrikerScript::isCommonSkill @ 0x8a9ebee

/* StrikerScript::isCommonSkill(short, int) */

undefined4 __thiscall StrikerScript::isCommonSkill(StrikerScript *this,short param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
  local_14 [4];
  int local_10;
  
  local_10 = getStrikerSkillVector(this,param_1,0);
  if (local_10 != 0) {
    std::vector<StrikerSkill,std::allocator<StrikerSkill>>::begin();
    while( true ) {
      std::vector<StrikerSkill,std::allocator<StrikerSkill>>::end();
      bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>
                      ::operator->(local_1c);
      if (*piVar2 == param_2) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<StrikerSkill*,std::vector<StrikerSkill,std::allocator<StrikerSkill>>>::
      operator++(local_14,(int)local_1c);
    }
  }
  return 0;
}
```
