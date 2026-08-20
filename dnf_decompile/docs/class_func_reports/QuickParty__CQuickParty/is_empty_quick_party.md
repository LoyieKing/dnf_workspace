# is_empty_quick_party

`_ZN10QuickParty11CQuickParty20is_empty_quick_partyEv`

`QuickParty::CQuickParty::is_empty_quick_party()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269884  _ZN10QuickParty11CQuickParty20is_empty_quick_partyEv
#           QuickParty::CQuickParty::is_empty_quick_party()
# range [0x08269884, 0x082698bd]
08269884 +0x00:  push   %ebp
08269885 +0x01:  mov    %esp,%ebp
08269887 +0x03:  sub    $0x10,%esp
0826988a +0x06:  movl   $0x0,-0x4(%ebp)
08269891 +0x0d:  jmp    082698ac <+0x28>
08269893 +0x0f:  mov    -0x4(%ebp),%edx
08269896 +0x12:  mov    0x8(%ebp),%eax
08269899 +0x15:  mov    (%eax,%edx,4),%eax
0826989c +0x18:  cmp    $0xffffffff,%eax
0826989f +0x1b:  je     082698a8 <+0x24>
082698a1 +0x1d:  mov    $0x0,%eax
082698a6 +0x22:  jmp    082698bc <+0x38>
082698a8 +0x24:  addl   $0x1,-0x4(%ebp)
082698ac +0x28:  cmpl   $0x3,-0x4(%ebp)
082698b0 +0x2c:  setle  %al
082698b3 +0x2f:  test   %al,%al
082698b5 +0x31:  jne    08269893 <+0xf>
082698b7 +0x33:  mov    $0x1,%eax
082698bc +0x38:  leave
082698bd +0x39:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::is_empty_quick_party @ 0x8269884

/* QuickParty::CQuickParty::is_empty_quick_party() */

undefined4 __thiscall QuickParty::CQuickParty::is_empty_quick_party(CQuickParty *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 1;
    }
    if (*(int *)(this + local_8 * 4) != -1) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```
