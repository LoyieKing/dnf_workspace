# isAvailableTciket

`_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv`

`advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081312ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081312ec  _ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv
#           advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const
# range [0x081312ec, 0x08131319]
081312ec +0x00:  push   %ebp
081312ed +0x01:  mov    %esp,%ebp
081312ef +0x03:  mov    0x8(%ebp),%eax
081312f2 +0x06:  mov    (%eax),%eax
081312f4 +0x08:  test   %eax,%eax
081312f6 +0x0a:  jne    081312ff <+0x13>
081312f8 +0x0c:  mov    $0x0,%eax
081312fd +0x11:  jmp    08131317 <+0x2b>
081312ff +0x13:  mov    0x8(%ebp),%eax
08131302 +0x16:  mov    (%eax),%eax
08131304 +0x18:  mov    0x4(%eax),%edx
08131307 +0x1b:  mov    0x8(%ebp),%eax
0813130a +0x1e:  mov    (%eax),%eax
0813130c +0x20:  mov    0x8(%eax),%eax
0813130f +0x23:  lea    (%edx,%eax,1),%eax
08131312 +0x26:  test   %eax,%eax
08131314 +0x28:  setg   %al
08131317 +0x2b:  pop    %ebp
08131318 +0x2c:  ret
08131319 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::isAvailableTciket @ 0x81312ec

/* advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::isAvailableTciket(CharacAdvanceAltarManager *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)this + 4) + *(int *)(*(int *)this + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
  }
  return uVar2;
}
```
