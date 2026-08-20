# GetCompetitionState

`_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv`

`CHARAC_LOAD_MERCENARY::GetCompetitionState() const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2e86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2e86  _ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv
#           CHARAC_LOAD_MERCENARY::GetCompetitionState() const
# range [0x081b2e86, 0x081b2ed1]
081b2e86 +0x00:  push   %ebp
081b2e87 +0x01:  mov    %esp,%ebp
081b2e89 +0x03:  push   %ebx
081b2e8a +0x04:  sub    $0x24,%esp
081b2e8d +0x07:  mov    0x8(%ebp),%eax
081b2e90 +0x0a:  mov    0x2c(%eax),%ebx
081b2e93 +0x0d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081b2e9a +0x14:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081b2e9f +0x19:  mov    %ebx,%edx
081b2ea1 +0x1b:  sub    %eax,%edx
081b2ea3 +0x1d:  mov    %edx,%eax
081b2ea5 +0x1f:  mov    %eax,-0xc(%ebp)
081b2ea8 +0x22:  cmpl   $0x0,-0xc(%ebp)
081b2eac +0x26:  jle    081b2eb5 <+0x2f>
081b2eae +0x28:  mov    $0x1,%eax
081b2eb3 +0x2d:  jmp    081b2ecc <+0x46>
081b2eb5 +0x2f:  mov    0x8(%ebp),%eax
081b2eb8 +0x32:  movzbl 0x30(%eax),%eax
081b2ebc +0x36:  cmp    $0xff,%al
081b2ebe +0x38:  jne    081b2ec7 <+0x41>
081b2ec0 +0x3a:  mov    $0x0,%eax
081b2ec5 +0x3f:  jmp    081b2ecc <+0x46>
081b2ec7 +0x41:  mov    $0x2,%eax
081b2ecc +0x46:  add    $0x24,%esp
081b2ecf +0x49:  pop    %ebx
081b2ed0 +0x4a:  pop    %ebp
081b2ed1 +0x4b:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetCompetitionState @ 0x81b2e86

/* CHARAC_LOAD_MERCENARY::GetCompetitionState() const */

undefined4 __thiscall CHARAC_LOAD_MERCENARY::GetCompetitionState(CHARAC_LOAD_MERCENARY *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this + 0x2c);
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar1 - iVar2 < 1) {
    if (this[0x30] == (CHARAC_LOAD_MERCENARY)0xff) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
