# CheckCompetitionPeriodIndex

`_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc`

`CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2bc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2bc4  _ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc
#           CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const
# range [0x081b2bc4, 0x081b2c1d]
081b2bc4 +0x00:  push   %ebp
081b2bc5 +0x01:  mov    %esp,%ebp
081b2bc7 +0x03:  sub    $0x28,%esp
081b2bca +0x06:  mov    0xc(%ebp),%eax
081b2bcd +0x09:  mov    %al,-0xc(%ebp)
081b2bd0 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2bd5 +0x11:  add    $0xa8f0,%eax
081b2bda +0x16:  mov    %eax,(%esp)
081b2bdd +0x19:  call   081b4868 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xdc>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xdc
081b2be2 +0x1e:  test   %al,%al
081b2be4 +0x20:  jne    081b2c00 <+0x3c>
081b2be6 +0x22:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2beb +0x27:  add    $0xa8f0,%eax
081b2bf0 +0x2c:  mov    %eax,(%esp)
081b2bf3 +0x2f:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
081b2bf8 +0x34:  movsbl -0xc(%ebp),%edx
081b2bfc +0x38:  cmp    %edx,%eax
081b2bfe +0x3a:  jae    081b2c07 <+0x43>
081b2c00 +0x3c:  mov    $0x1,%eax
081b2c05 +0x41:  jmp    081b2c0c <+0x48>
081b2c07 +0x43:  mov    $0x0,%eax
081b2c0c +0x48:  test   %al,%al
081b2c0e +0x4a:  je     081b2c17 <+0x53>
081b2c10 +0x4c:  mov    $0x0,%eax
081b2c15 +0x51:  jmp    081b2c1c <+0x58>
081b2c17 +0x53:  mov    $0x1,%eax
081b2c1c +0x58:  leave
081b2c1d +0x59:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex @ 0x81b2bc4

/* CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const */

bool __thiscall
CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(CHARAC_LOAD_MERCENARY *this,char param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  G_CDataManager();
  cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
  if (cVar2 == '\0') {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                      ((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                       (iVar3 + 0xa8f0));
    if ((uint)(int)param_1 <= uVar4) {
      bVar1 = false;
      goto LAB_081b2c0c;
    }
  }
  bVar1 = true;
LAB_081b2c0c:
  return !bVar1;
}
```
