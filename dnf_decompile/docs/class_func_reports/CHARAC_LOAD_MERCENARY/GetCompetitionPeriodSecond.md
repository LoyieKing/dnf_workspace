# GetCompetitionPeriodSecond

`_ZNK21CHARAC_LOAD_MERCENARY26GetCompetitionPeriodSecondEc`

`CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(char) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2ed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2ed2  _ZNK21CHARAC_LOAD_MERCENARY26GetCompetitionPeriodSecondEc
#           CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(char) const
# range [0x081b2ed2, 0x081b2f31]
081b2ed2 +0x00:  push   %ebp
081b2ed3 +0x01:  mov    %esp,%ebp
081b2ed5 +0x03:  push   %esi
081b2ed6 +0x04:  push   %ebx
081b2ed7 +0x05:  sub    $0x20,%esp
081b2eda +0x08:  mov    0xc(%ebp),%eax
081b2edd +0x0b:  mov    %al,-0xc(%ebp)
081b2ee0 +0x0e:  movsbl -0xc(%ebp),%eax
081b2ee4 +0x12:  mov    %eax,0x4(%esp)
081b2ee8 +0x16:  mov    0x8(%ebp),%eax
081b2eeb +0x19:  mov    %eax,(%esp)
081b2eee +0x1c:  call   081b2bc4 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc>  ; CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const
081b2ef3 +0x21:  xor    $0x1,%eax
081b2ef6 +0x24:  test   %al,%al
081b2ef8 +0x26:  je     081b2f01 <+0x2f>
081b2efa +0x28:  mov    $0x0,%eax
081b2eff +0x2d:  jmp    081b2f2b <+0x59>
081b2f01 +0x2f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2f06 +0x34:  mov    0xa8dc(%eax),%esi
081b2f0c +0x3a:  movsbl -0xc(%ebp),%ebx
081b2f10 +0x3e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2f15 +0x43:  add    $0xa8f0,%eax
081b2f1a +0x48:  mov    %ebx,0x4(%esp)
081b2f1e +0x4c:  mov    %eax,(%esp)
081b2f21 +0x4f:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
081b2f26 +0x54:  mov    (%eax),%eax
081b2f28 +0x56:  imul   %esi,%eax
081b2f2b +0x59:  add    $0x20,%esp
081b2f2e +0x5c:  pop    %ebx
081b2f2f +0x5d:  pop    %esi
081b2f30 +0x5e:  pop    %ebp
081b2f31 +0x5f:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond @ 0x81b2ed2

/* CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(char) const */

int __thiscall
CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(CHARAC_LOAD_MERCENARY *this,char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  cVar1 = CheckCompetitionPeriodIndex(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = G_CDataManager();
    iVar2 = *(int *)(iVar2 + 0xa8dc);
    iVar3 = G_CDataManager();
    piVar4 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                    operator[]((vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                               (iVar3 + 0xa8f0),(int)param_1);
    iVar2 = *piVar4 * iVar2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
```
