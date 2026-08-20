# getFromMemory

`_ZN12advancealtar23DBAndExchangeServerProc13getFromMemoryERK5CUserRNS_25_CharacAdvanceAltarDbDataE`

`advancealtar::DBAndExchangeServerProc::getFromMemory(CUser const&, advancealtar::_CharacAdvanceAltarDbData&)`

| 类 | 地址 |
|---|---|
| `advancealtar::DBAndExchangeServerProc` | `0x0813394c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813394c  _ZN12advancealtar23DBAndExchangeServerProc13getFromMemoryERK5CUserRNS_25_CharacAdvanceAltarDbDataE
#           advancealtar::DBAndExchangeServerProc::getFromMemory(CUser const&, advancealtar::_CharacAdvanceAltarDbData&)
# range [0x0813394c, 0x081339af]
0813394c +0x00:  push   %ebp
0813394d +0x01:  mov    %esp,%ebp
0813394f +0x03:  sub    $0x18,%esp
08133952 +0x06:  mov    0x8(%ebp),%eax
08133955 +0x09:  mov    %eax,(%esp)
08133958 +0x0c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0813395d +0x11:  mov    %eax,%edx
0813395f +0x13:  mov    0xc(%ebp),%eax
08133962 +0x16:  mov    %edx,(%eax)
08133964 +0x18:  mov    0x8(%ebp),%eax
08133967 +0x1b:  lea    0x8df60(%eax),%edx
0813396d +0x21:  mov    0xc(%ebp),%eax
08133970 +0x24:  mov    %eax,0x4(%esp)
08133974 +0x28:  mov    %edx,(%esp)
08133977 +0x2b:  call   08131710 <_ZNK12advancealtar25CharacAdvanceAltarManager27getCharacAdvanceAltarDbDataERNS_25_CharacAdvanceAltarDbDataE>  ; advancealtar::CharacAdvanceAltarManager::getCharacAdvanceAltarDbData(advancealtar::_CharacAdvanceAltarDbData&) const
0813397c +0x30:  mov    0x8(%ebp),%eax
0813397f +0x33:  add    $0x8df60,%eax
08133984 +0x38:  mov    %eax,(%esp)
08133987 +0x3b:  call   081316a0 <_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv>  ; advancealtar::CharacAdvanceAltarManager::isUpdated() const
0813398c +0x40:  test   %al,%al
0813398e +0x42:  je     081339ac <+0x60>
08133990 +0x44:  mov    0x8(%ebp),%eax
08133993 +0x47:  mov    %eax,(%esp)
08133996 +0x4a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0813399b +0x4f:  mov    0xc(%ebp),%edx
0813399e +0x52:  mov    %edx,0x4(%esp)
081339a2 +0x56:  mov    %eax,(%esp)
081339a5 +0x59:  call   0813eb38 <_ZN12advancealtar9DB_Update11makeRequestEiRKNS_25_CharacAdvanceAltarDbDataE>  ; advancealtar::DB_Update::makeRequest(int, advancealtar::_CharacAdvanceAltarDbData const&)
081339aa +0x5e:  jmp    081339ad <+0x61>
081339ac +0x60:  nop
081339ad +0x61:  leave
081339ae +0x62:  ret
081339af +0x63:  nop
```

## 反编译 C

```c
// advancealtar::DBAndExchangeServerProc::getFromMemory @ 0x813394c

/* advancealtar::DBAndExchangeServerProc::getFromMemory(CUser const&,
   advancealtar::_CharacAdvanceAltarDbData&) */

void advancealtar::DBAndExchangeServerProc::getFromMemory
               (CUser *param_1,_CharacAdvanceAltarDbData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)param_2 = uVar2;
  CharacAdvanceAltarManager::getCharacAdvanceAltarDbData
            ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),param_2);
  cVar1 = CharacAdvanceAltarManager::isUpdated((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
  if (cVar1 != '\0') {
    iVar3 = CUser::GetUID(param_1);
    DB_Update::makeRequest(iVar3,param_2);
  }
  return;
}
```
