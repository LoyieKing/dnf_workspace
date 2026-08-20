# GetPeriodBonus

`_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv`

`CHARAC_LOAD_MERCENARY::GetPeriodBonus() const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2c1e  _ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv
#           CHARAC_LOAD_MERCENARY::GetPeriodBonus() const
# range [0x081b2c1e, 0x081b2c93]
081b2c1e +0x00:  push   %ebp
081b2c1f +0x01:  mov    %esp,%ebp
081b2c21 +0x03:  sub    $0x38,%esp
081b2c24 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2c29 +0x0b:  add    $0xa8f0,%eax
081b2c2e +0x10:  mov    %eax,-0xc(%ebp)
081b2c31 +0x13:  mov    -0xc(%ebp),%eax
081b2c34 +0x16:  mov    %eax,(%esp)
081b2c37 +0x19:  call   081b4868 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xdc>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xdc
081b2c3c +0x1e:  test   %al,%al
081b2c3e +0x20:  jne    081b2c58 <+0x3a>
081b2c40 +0x22:  mov    -0xc(%ebp),%eax
081b2c43 +0x25:  mov    %eax,(%esp)
081b2c46 +0x28:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
081b2c4b +0x2d:  mov    %eax,%edx
081b2c4d +0x2f:  mov    0x8(%ebp),%eax
081b2c50 +0x32:  movzbl 0x31(%eax),%eax
081b2c54 +0x36:  cmp    %al,%dl
081b2c56 +0x38:  jge    081b2c5f <+0x41>
081b2c58 +0x3a:  mov    $0x1,%eax
081b2c5d +0x3f:  jmp    081b2c64 <+0x46>
081b2c5f +0x41:  mov    $0x0,%eax
081b2c64 +0x46:  test   %al,%al
081b2c66 +0x48:  je     081b2c6f <+0x51>
081b2c68 +0x4a:  mov    $0x0,%eax
081b2c6d +0x4f:  jmp    081b2c8b <+0x6d>
081b2c6f +0x51:  mov    0x8(%ebp),%eax
081b2c72 +0x54:  movzbl 0x31(%eax),%eax
081b2c76 +0x58:  movsbl %al,%eax
081b2c79 +0x5b:  mov    %eax,0x4(%esp)
081b2c7d +0x5f:  mov    -0xc(%ebp),%eax
081b2c80 +0x62:  mov    %eax,(%esp)
081b2c83 +0x65:  call   081b48c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x13c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x13c
081b2c88 +0x6a:  mov    0x4(%eax),%eax
081b2c8b +0x6d:  mov    %eax,-0x1c(%ebp)
081b2c8e +0x70:  flds   -0x1c(%ebp)
081b2c91 +0x73:  leave
081b2c92 +0x74:  ret
081b2c93 +0x75:  nop
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetPeriodBonus @ 0x81b2c1e

/* CHARAC_LOAD_MERCENARY::GetPeriodBonus() const */

longdouble __thiscall CHARAC_LOAD_MERCENARY::GetPeriodBonus(CHARAC_LOAD_MERCENARY *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = G_CDataManager();
  cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
  if (cVar2 == '\0') {
    cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8f0));
    if ((char)this[0x31] <= cVar2) {
      bVar1 = false;
      goto LAB_081b2c64;
    }
  }
  bVar1 = true;
LAB_081b2c64:
  if (bVar1) {
    fVar4 = 0.0;
  }
  else {
    iVar3 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8f0),(int)(char)this[0x31]);
    fVar4 = *(float *)(iVar3 + 4);
  }
  return (longdouble)fVar4;
}
```
