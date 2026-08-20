# setCurrentAdvanceAltarData

`_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE`

`advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData(advancealtar::RidableId::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131254  _ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE
#           advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData(advancealtar::RidableId::T)
# range [0x08131254, 0x081312cf]
08131254 +0x00:  push   %ebp
08131255 +0x01:  mov    %esp,%ebp
08131257 +0x03:  sub    $0x28,%esp
0813125a +0x06:  mov    0xc(%ebp),%eax
0813125d +0x09:  mov    %eax,(%esp)
08131260 +0x0c:  call   08898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>  ; advancealtar::isValidRidableId(advancealtar::RidableId::T)
08131265 +0x11:  xor    $0x1,%eax
08131268 +0x14:  test   %al,%al
0813126a +0x16:  je     08131273 <+0x1f>
0813126c +0x18:  mov    $0x0,%eax
08131271 +0x1d:  jmp    081312cd <+0x79>
08131273 +0x1f:  movl   $0x0,-0xc(%ebp)
0813127a +0x26:  jmp    081312b4 <+0x60>
0813127c +0x28:  mov    -0xc(%ebp),%eax
0813127f +0x2b:  mov    0x8(%ebp),%edx
08131282 +0x2e:  imul   $0xd0,%eax,%eax
08131288 +0x34:  lea    (%edx,%eax,1),%eax
0813128b +0x37:  add    $0x4,%eax
0813128e +0x3a:  mov    (%eax),%eax
08131290 +0x3c:  cmp    0xc(%ebp),%eax
08131293 +0x3f:  jne    081312b0 <+0x5c>
08131295 +0x41:  mov    -0xc(%ebp),%eax
08131298 +0x44:  imul   $0xd0,%eax,%eax
0813129e +0x4a:  add    0x8(%ebp),%eax
081312a1 +0x4d:  lea    0x4(%eax),%edx
081312a4 +0x50:  mov    0x8(%ebp),%eax
081312a7 +0x53:  mov    %edx,(%eax)
081312a9 +0x55:  mov    $0x1,%eax
081312ae +0x5a:  jmp    081312cd <+0x79>
081312b0 +0x5c:  addl   $0x1,-0xc(%ebp)
081312b4 +0x60:  cmpl   $0x0,-0xc(%ebp)
081312b8 +0x64:  setle  %al
081312bb +0x67:  test   %al,%al
081312bd +0x69:  jne    0813127c <+0x28>
081312bf +0x6b:  mov    0x8(%ebp),%eax
081312c2 +0x6e:  movl   $0x0,(%eax)
081312c8 +0x74:  mov    $0x0,%eax
081312cd +0x79:  leave
081312ce +0x7a:  ret
081312cf +0x7b:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData @ 0x8131254

/* advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData(advancealtar::RidableId::T)
    */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData
          (CharacAdvanceAltarManager *this,int param_2)

{
  char cVar1;
  int local_10;
  
  cVar1 = isValidRidableId(param_2);
  if (cVar1 == '\x01') {
    for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
      if (*(int *)(this + local_10 * 0xd0 + 4) == param_2) {
        *(CharacAdvanceAltarManager **)this = this + local_10 * 0xd0 + 4;
        return 1;
      }
    }
    *(undefined4 *)this = 0;
  }
  return 0;
}
```
