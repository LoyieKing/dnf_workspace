# CharacAdvanceAltarManager

`_ZN12advancealtar25CharacAdvanceAltarManagerC1Ev`

`advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813119e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813119e  _ZN12advancealtar25CharacAdvanceAltarManagerC1Ev
#           advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager()
# range [0x0813119e, 0x08131219]
0813119e +0x00:  push   %ebp
0813119f +0x01:  mov    %esp,%ebp
081311a1 +0x03:  push   %edi
081311a2 +0x04:  push   %esi
081311a3 +0x05:  push   %ebx
081311a4 +0x06:  sub    $0x2c,%esp
081311a7 +0x09:  mov    0x8(%ebp),%eax
081311aa +0x0c:  movl   $0x0,(%eax)
081311b0 +0x12:  mov    0x8(%ebp),%eax
081311b3 +0x15:  lea    0x4(%eax),%esi
081311b6 +0x18:  mov    %esi,%edi
081311b8 +0x1a:  mov    $0x0,%ebx
081311bd +0x1f:  jmp    081311d0 <+0x32>
081311bf +0x21:  mov    %edi,(%esp)
081311c2 +0x24:  call   0889911e <_ZN12advancealtar16AdvanceAltarDataC1Ev>  ; advancealtar::AdvanceAltarData::AdvanceAltarData()
081311c7 +0x29:  add    $0xd0,%edi
081311cd +0x2f:  sub    $0x1,%ebx
081311d0 +0x32:  cmp    $0xffffffff,%ebx
081311d3 +0x35:  setne  %al
081311d6 +0x38:  test   %al,%al
081311d8 +0x3a:  jne    081311bf <+0x21>
081311da +0x3c:  jmp    08131211 <+0x73>
081311dc +0x3e:  mov    %edx,%edi
081311de +0x40:  mov    %eax,-0x1c(%ebp)
081311e1 +0x43:  test   %esi,%esi
081311e3 +0x45:  je     08131204 <+0x66>
081311e5 +0x47:  mov    %ebx,%eax
081311e7 +0x49:  imul   $0xffffff30,%eax,%eax
081311ed +0x4f:  lea    (%esi,%eax,1),%ebx
081311f0 +0x52:  cmp    %esi,%ebx
081311f2 +0x54:  je     08131204 <+0x66>
081311f4 +0x56:  sub    $0xd0,%ebx
081311fa +0x5c:  mov    %ebx,(%esp)
081311fd +0x5f:  call   08134532 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x139>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x139
08131202 +0x64:  jmp    081311f0 <+0x52>
08131204 +0x66:  mov    -0x1c(%ebp),%eax
08131207 +0x69:  mov    %edi,%edx
08131209 +0x6b:  mov    %eax,(%esp)
0813120c +0x6e:  call   08ae3750 <_Unwind_Resume>
08131211 +0x73:  add    $0x2c,%esp
08131214 +0x76:  pop    %ebx
08131215 +0x77:  pop    %esi
08131216 +0x78:  pop    %edi
08131217 +0x79:  pop    %ebp
08131218 +0x7a:  ret
08131219 +0x7b:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager @ 0x813119e

/* advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::CharacAdvanceAltarManager(CharacAdvanceAltarManager *this)

{
  int iVar1;
  AdvanceAltarData *this_00;
  
  *(undefined4 *)this = 0;
  this_00 = (AdvanceAltarData *)(this + 4);
  for (iVar1 = 0; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 081311c2 to 081311c6 has its CatchHandler @ 081311dc */
    AdvanceAltarData::AdvanceAltarData(this_00);
    this_00 = this_00 + 0xd0;
  }
  return;
}
```
