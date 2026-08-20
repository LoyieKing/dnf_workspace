# GetRewardCritical

`_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi`

`CHARAC_LOAD_MERCENARY::GetRewardCritical(int) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2d0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2d0a  _ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi
#           CHARAC_LOAD_MERCENARY::GetRewardCritical(int) const
# range [0x081b2d0a, 0x081b2d69]
081b2d0a +0x00:  push   %ebp
081b2d0b +0x01:  mov    %esp,%ebp
081b2d0d +0x03:  sub    $0x38,%esp
081b2d10 +0x06:  cmpl   $0x0,0xc(%ebp)
081b2d14 +0x0a:  js     081b2d26 <+0x1c>
081b2d16 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2d1b +0x11:  mov    0xa918(%eax),%eax
081b2d21 +0x17:  cmp    0xc(%ebp),%eax
081b2d24 +0x1a:  jge    081b2d2d <+0x23>
081b2d26 +0x1c:  mov    $0x1,%eax
081b2d2b +0x21:  jmp    081b2d32 <+0x28>
081b2d2d +0x23:  mov    $0x0,%eax
081b2d32 +0x28:  test   %al,%al
081b2d34 +0x2a:  je     081b2d3d <+0x33>
081b2d36 +0x2c:  mov    $0x0,%eax
081b2d3b +0x31:  jmp    081b2d62 <+0x58>
081b2d3d +0x33:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2d42 +0x38:  add    $0xa90c,%eax
081b2d47 +0x3d:  mov    %eax,-0xc(%ebp)
081b2d4a +0x40:  mov    0xc(%ebp),%eax
081b2d4d +0x43:  mov    %eax,0x4(%esp)
081b2d51 +0x47:  mov    -0xc(%ebp),%eax
081b2d54 +0x4a:  mov    %eax,(%esp)
081b2d57 +0x4d:  call   081b48da <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x14e>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x14e
081b2d5c +0x52:  fstps  -0x1c(%ebp)
081b2d5f +0x55:  mov    -0x1c(%ebp),%eax
081b2d62 +0x58:  mov    %eax,-0x1c(%ebp)
081b2d65 +0x5b:  flds   -0x1c(%ebp)
081b2d68 +0x5e:  leave
081b2d69 +0x5f:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetRewardCritical @ 0x81b2d0a

/* CHARAC_LOAD_MERCENARY::GetRewardCritical(int) const */

longdouble __thiscall
CHARAC_LOAD_MERCENARY::GetRewardCritical(CHARAC_LOAD_MERCENARY *this,int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  if (-1 < param_1) {
    iVar2 = G_CDataManager();
    if (param_1 <= *(int *)(iVar2 + 0xa918)) {
      bVar1 = false;
      goto LAB_081b2d32;
    }
  }
  bVar1 = true;
LAB_081b2d32:
  if (bVar1) {
    fVar3 = 0.0;
  }
  else {
    iVar2 = G_CDataManager();
    fVar3 = FindRelativeProb<float>((vector *)(iVar2 + 0xa90c),param_1);
  }
  return (longdouble)fVar3;
}
```
