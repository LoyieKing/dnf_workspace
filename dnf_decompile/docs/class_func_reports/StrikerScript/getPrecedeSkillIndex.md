# getPrecedeSkillIndex

`_ZN13StrikerScript20getPrecedeSkillIndexEssi`

`StrikerScript::getPrecedeSkillIndex(short, short, int)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9ea96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9ea96  _ZN13StrikerScript20getPrecedeSkillIndexEssi
#           StrikerScript::getPrecedeSkillIndex(short, short, int)
# range [0x08a9ea96, 0x08a9eb39]
08a9ea96 +0x00:  push   %ebp
08a9ea97 +0x01:  mov    %esp,%ebp
08a9ea99 +0x03:  sub    $0x38,%esp
08a9ea9c +0x06:  mov    0xc(%ebp),%edx
08a9ea9f +0x09:  mov    0x10(%ebp),%eax
08a9eaa2 +0x0c:  mov    %dx,-0x1c(%ebp)
08a9eaa6 +0x10:  mov    %ax,-0x20(%ebp)
08a9eaaa +0x14:  movl   $0x0,-0x10(%ebp)
08a9eab1 +0x1b:  movswl -0x20(%ebp),%edx
08a9eab5 +0x1f:  movswl -0x1c(%ebp),%eax
08a9eab9 +0x23:  mov    %edx,0x8(%esp)
08a9eabd +0x27:  mov    %eax,0x4(%esp)
08a9eac1 +0x2b:  mov    0x8(%ebp),%eax
08a9eac4 +0x2e:  mov    %eax,(%esp)
08a9eac7 +0x31:  call   08a9e7e0 <_ZN13StrikerScript21getStrikerSkillVectorEss>  ; StrikerScript::getStrikerSkillVector(short, short)
08a9eacc +0x36:  mov    %eax,-0x10(%ebp)
08a9eacf +0x39:  cmpl   $0x0,-0x10(%ebp)
08a9ead3 +0x3d:  jne    08a9eadc <+0x46>
08a9ead5 +0x3f:  mov    $0x0,%eax
08a9eada +0x44:  jmp    08a9eb38 <+0xa2>
08a9eadc +0x46:  movl   $0x0,-0xc(%ebp)
08a9eae3 +0x4d:  jmp    08a9eb1e <+0x88>
08a9eae5 +0x4f:  mov    -0xc(%ebp),%eax
08a9eae8 +0x52:  mov    %eax,0x4(%esp)
08a9eaec +0x56:  mov    -0x10(%ebp),%eax
08a9eaef +0x59:  mov    %eax,(%esp)
08a9eaf2 +0x5c:  call   08a9f73e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa51>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa51
08a9eaf7 +0x61:  mov    (%eax),%eax
08a9eaf9 +0x63:  cmp    0x14(%ebp),%eax
08a9eafc +0x66:  sete   %al
08a9eaff +0x69:  test   %al,%al
08a9eb01 +0x6b:  je     08a9eb1a <+0x84>
08a9eb03 +0x6d:  mov    -0xc(%ebp),%eax
08a9eb06 +0x70:  mov    %eax,0x4(%esp)
08a9eb0a +0x74:  mov    -0x10(%ebp),%eax
08a9eb0d +0x77:  mov    %eax,(%esp)
08a9eb10 +0x7a:  call   08a9f73e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa51>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa51
08a9eb15 +0x7f:  mov    0x8(%eax),%eax
08a9eb18 +0x82:  jmp    08a9eb38 <+0xa2>
08a9eb1a +0x84:  addl   $0x1,-0xc(%ebp)
08a9eb1e +0x88:  mov    -0x10(%ebp),%eax
08a9eb21 +0x8b:  mov    %eax,(%esp)
08a9eb24 +0x8e:  call   08a9f722 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa35>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa35
08a9eb29 +0x93:  cmp    -0xc(%ebp),%eax
08a9eb2c +0x96:  seta   %al
08a9eb2f +0x99:  test   %al,%al
08a9eb31 +0x9b:  jne    08a9eae5 <+0x4f>
08a9eb33 +0x9d:  mov    $0x0,%eax
08a9eb38 +0xa2:  leave
08a9eb39 +0xa3:  ret
```

## 反编译 C

```c
// StrikerScript::getPrecedeSkillIndex @ 0x8a9ea96

/* StrikerScript::getPrecedeSkillIndex(short, short, int) */

undefined4 __thiscall
StrikerScript::getPrecedeSkillIndex(StrikerScript *this,short param_1,short param_2,int param_3)

{
  vector<StrikerSkill,std::allocator<StrikerSkill>> *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  this_00 = (vector<StrikerSkill,std::allocator<StrikerSkill>> *)
            getStrikerSkillVector(this,param_1,param_2);
  if (this_00 != (vector<StrikerSkill,std::allocator<StrikerSkill>> *)0x0) {
    for (local_10 = 0; uVar3 = std::vector<StrikerSkill,std::allocator<StrikerSkill>>::size(this_00)
        , local_10 < uVar3; local_10 = local_10 + 1) {
      piVar1 = (int *)std::vector<StrikerSkill,std::allocator<StrikerSkill>>::operator[]
                                (this_00,local_10);
      if (*piVar1 == param_3) {
        iVar2 = std::vector<StrikerSkill,std::allocator<StrikerSkill>>::operator[](this_00,local_10)
        ;
        return *(undefined4 *)(iVar2 + 8);
      }
    }
  }
  return 0;
}
```
