# reset_load_hotkey_flag

`_ZN11CGameOption22reset_load_hotkey_flagEv`

`CGameOption::reset_load_hotkey_flag()`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b7282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7282  _ZN11CGameOption22reset_load_hotkey_flagEv
#           CGameOption::reset_load_hotkey_flag()
# range [0x084b7282, 0x084b72af]
084b7282 +0x00:  push   %ebp
084b7283 +0x01:  mov    %esp,%ebp
084b7285 +0x03:  sub    $0x10,%esp
084b7288 +0x06:  movl   $0x0,-0x4(%ebp)
084b728f +0x0d:  jmp    084b72a3 <+0x21>
084b7291 +0x0f:  mov    -0x4(%ebp),%eax
084b7294 +0x12:  mov    0x8(%ebp),%edx
084b7297 +0x15:  movb   $0x0,0x178(%edx,%eax,1)
084b729f +0x1d:  addl   $0x1,-0x4(%ebp)
084b72a3 +0x21:  cmpl   $0x1,-0x4(%ebp)
084b72a7 +0x25:  setle  %al
084b72aa +0x28:  test   %al,%al
084b72ac +0x2a:  jne    084b7291 <+0xf>
084b72ae +0x2c:  leave
084b72af +0x2d:  ret
```

## 反编译 C

```c
// CGameOption::reset_load_hotkey_flag @ 0x84b7282

/* CGameOption::reset_load_hotkey_flag() */

void __thiscall CGameOption::reset_load_hotkey_flag(CGameOption *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    this[local_8 + 0x178] = (CGameOption)0x0;
  }
  return;
}
```
