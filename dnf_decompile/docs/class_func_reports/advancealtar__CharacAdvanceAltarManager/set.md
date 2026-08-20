# set

`_ZN12advancealtar25CharacAdvanceAltarManager3setERKNS_25_CharacAdvanceAltarDbDataE`

`advancealtar::CharacAdvanceAltarManager::set(advancealtar::_CharacAdvanceAltarDbData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131616  _ZN12advancealtar25CharacAdvanceAltarManager3setERKNS_25_CharacAdvanceAltarDbDataE
#           advancealtar::CharacAdvanceAltarManager::set(advancealtar::_CharacAdvanceAltarDbData const&)
# range [0x08131616, 0x0813165f]
08131616 +0x00:  push   %ebp
08131617 +0x01:  mov    %esp,%ebp
08131619 +0x03:  sub    $0x28,%esp
0813161c +0x06:  movl   $0x0,-0xc(%ebp)
08131623 +0x0d:  jmp    08131653 <+0x3d>
08131625 +0x0f:  mov    -0xc(%ebp),%eax
08131628 +0x12:  imul   $0x518,%eax,%eax
0813162e +0x18:  add    0xc(%ebp),%eax
08131631 +0x1b:  lea    0x4(%eax),%edx
08131634 +0x1e:  mov    -0xc(%ebp),%eax
08131637 +0x21:  imul   $0xd0,%eax,%eax
0813163d +0x27:  add    0x8(%ebp),%eax
08131640 +0x2a:  add    $0x4,%eax
08131643 +0x2d:  mov    %edx,0x4(%esp)
08131647 +0x31:  mov    %eax,(%esp)
0813164a +0x34:  call   088992da <_ZN12advancealtar16AdvanceAltarData3setERKNS_19_AdvanceAltarDbDataE>  ; advancealtar::AdvanceAltarData::set(advancealtar::_AdvanceAltarDbData const&)
0813164f +0x39:  addl   $0x1,-0xc(%ebp)
08131653 +0x3d:  cmpl   $0x0,-0xc(%ebp)
08131657 +0x41:  setle  %al
0813165a +0x44:  test   %al,%al
0813165c +0x46:  jne    08131625 <+0xf>
0813165e +0x48:  leave
0813165f +0x49:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::set @ 0x8131616

/* advancealtar::CharacAdvanceAltarManager::set(advancealtar::_CharacAdvanceAltarDbData const&) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::set
          (CharacAdvanceAltarManager *this,_CharacAdvanceAltarDbData *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    AdvanceAltarData::set
              ((AdvanceAltarData *)(this + local_10 * 0xd0 + 4),
               (_AdvanceAltarDbData *)(param_1 + local_10 * 0x518 + 4));
  }
  return;
}
```
