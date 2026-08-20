# loadAdvanceAltarTimeLineParameter

`_ZN12CDataManager33loadAdvanceAltarTimeLineParameterERN12advancealtar22StageTimeLineParameterE`

`CDataManager::loadAdvanceAltarTimeLineParameter(advancealtar::StageTimeLineParameter&)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365010  _ZN12CDataManager33loadAdvanceAltarTimeLineParameterERN12advancealtar22StageTimeLineParameterE
#           CDataManager::loadAdvanceAltarTimeLineParameter(advancealtar::StageTimeLineParameter&)
# range [0x08365010, 0x08365065]
08365010 +0x00:  push   %ebp
08365011 +0x01:  mov    %esp,%ebp
08365013 +0x03:  sub    $0x28,%esp
08365016 +0x06:  mov    0x8(%ebp),%eax
08365019 +0x09:  mov    %eax,(%esp)
0836501c +0x0c:  call   08899ef6 <_ZN12advancealtar22StageTimeLineParameter5resetEv>  ; advancealtar::StageTimeLineParameter::reset()
08365021 +0x11:  movl   $"Etc/AdvanceAltar/AdvanceAltarSummonData.etc",0x4(%esp)
08365029 +0x19:  mov    0x8(%ebp),%eax
0836502c +0x1c:  mov    %eax,(%esp)
0836502f +0x1f:  call   08899f26 <_ZN12advancealtar22StageTimeLineParameter28importStageTimeLineParameterEPKc>  ; advancealtar::StageTimeLineParameter::importStageTimeLineParameter(char const*)
08365034 +0x24:  mov    %eax,-0xc(%ebp)
08365037 +0x27:  cmpl   $0x0,-0xc(%ebp)
0836503b +0x2b:  je     08365055 <+0x45>
0836503d +0x2d:  mov    -0xc(%ebp),%eax
08365040 +0x30:  mov    %eax,0x4(%esp)
08365044 +0x34:  movl   $"importStageTimeLineParameter Fail(%d)\n",(%esp)
0836504b +0x3b:  call   0807db60 <_init+0x458>
08365050 +0x40:  mov    -0xc(%ebp),%eax
08365053 +0x43:  jmp    08365063 <+0x53>
08365055 +0x45:  mov    0x8(%ebp),%eax
08365058 +0x48:  mov    %eax,(%esp)
0836505b +0x4b:  call   0889a02c <_ZN12advancealtar22StageTimeLineParameter8debugLogEv>  ; advancealtar::StageTimeLineParameter::debugLog()
08365060 +0x50:  mov    -0xc(%ebp),%eax
08365063 +0x53:  leave
08365064 +0x54:  ret
08365065 +0x55:  nop
```

## 反编译 C

```c
// CDataManager::loadAdvanceAltarTimeLineParameter @ 0x8365010

/* CDataManager::loadAdvanceAltarTimeLineParameter(advancealtar::StageTimeLineParameter&) */

int CDataManager::loadAdvanceAltarTimeLineParameter(StageTimeLineParameter *param_1)

{
  int iVar1;
  
  advancealtar::StageTimeLineParameter::reset(param_1);
  iVar1 = advancealtar::StageTimeLineParameter::importStageTimeLineParameter
                    (param_1,"Etc/AdvanceAltar/AdvanceAltarSummonData.etc");
  if (iVar1 == 0) {
    advancealtar::StageTimeLineParameter::debugLog();
  }
  else {
    printf("importStageTimeLineParameter Fail(%d)\n",iVar1);
  }
  return iVar1;
}
```
