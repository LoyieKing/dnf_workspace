# CItemMakingSkill

`_ZN16CItemMakingSkillC1Ev`

`CItemMakingSkill::CItemMakingSkill()`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545108  _ZN16CItemMakingSkillC1Ev
#           CItemMakingSkill::CItemMakingSkill()
# range [0x08545108, 0x0854518d]
08545108 +0x00:  push   %ebp
08545109 +0x01:  mov    %esp,%ebp
0854510b +0x03:  push   %edi
0854510c +0x04:  push   %esi
0854510d +0x05:  push   %ebx
0854510e +0x06:  sub    $0x2c,%esp
08545111 +0x09:  mov    0x8(%ebp),%eax
08545114 +0x0c:  mov    %eax,(%esp)
08545117 +0x0f:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0854511c +0x14:  mov    0x8(%ebp),%eax
0854511f +0x17:  movl   $&_ZTV16CItemMakingSkill+0x8,(%eax)
08545125 +0x1d:  movl   $0x0,(%esp)
0854512c +0x24:  call   0807d750 <_init+0x48>
08545131 +0x29:  mov    %eax,-0x1c(%ebp)
08545134 +0x2c:  lea    -0x1c(%ebp),%esi
08545137 +0x2f:  movl   $0x9c8,(%esp)
0854513e +0x36:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08545143 +0x3b:  mov    %eax,%ebx
08545145 +0x3d:  mov    %ebx,%eax
08545147 +0x3f:  mov    %esi,0x4(%esp)
0854514b +0x43:  mov    %eax,(%esp)
0854514e +0x46:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
08545153 +0x4b:  jmp    08545167 <+0x5f>
08545155 +0x4d:  mov    %edx,%esi
08545157 +0x4f:  mov    %eax,%edi
08545159 +0x51:  mov    %ebx,(%esp)
0854515c +0x54:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08545161 +0x59:  mov    %edi,%eax
08545163 +0x5b:  mov    %esi,%edx
08545165 +0x5d:  jmp    08545177 <+0x6f>
08545167 +0x5f:  mov    %ebx,%edx
08545169 +0x61:  mov    0x8(%ebp),%eax
0854516c +0x64:  mov    %edx,0x1c(%eax)
0854516f +0x67:  add    $0x2c,%esp
08545172 +0x6a:  pop    %ebx
08545173 +0x6b:  pop    %esi
08545174 +0x6c:  pop    %edi
08545175 +0x6d:  pop    %ebp
08545176 +0x6e:  ret
08545177 +0x6f:  mov    %edx,%ebx
08545179 +0x71:  mov    %eax,%esi
0854517b +0x73:  mov    0x8(%ebp),%eax
0854517e +0x76:  mov    %eax,(%esp)
08545181 +0x79:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
08545186 +0x7e:  mov    %esi,%eax
08545188 +0x80:  mov    %ebx,%edx
0854518a +0x82:  mov    %eax,(%esp)
0854518d +0x85:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CItemMakingSkill::CItemMakingSkill @ 0x8545108

/* CItemMakingSkill::CItemMakingSkill() */

void __thiscall CItemMakingSkill::CItemMakingSkill(CItemMakingSkill *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9c348;
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 0854513e to 08545142 has its CatchHandler @ 08545177 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0854514e to 08545152 has its CatchHandler @ 08545155 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 0x1c) = this_00;
  return;
}
```
