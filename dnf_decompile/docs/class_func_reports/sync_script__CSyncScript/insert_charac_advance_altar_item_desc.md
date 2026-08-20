# insert_charac_advance_altar_item_desc

`_ZN11sync_script11CSyncScript37insert_charac_advance_altar_item_descEv`

`sync_script::CSyncScript::insert_charac_advance_altar_item_desc()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625dfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625dfc  _ZN11sync_script11CSyncScript37insert_charac_advance_altar_item_descEv
#           sync_script::CSyncScript::insert_charac_advance_altar_item_desc()
# range [0x08625dfc, 0x08625e1d]
08625dfc +0x00:  push   %ebp
08625dfd +0x01:  mov    %esp,%ebp
08625dff +0x03:  sub    $0x8,%esp
08625e02 +0x06:  mov    0x8(%ebp),%eax
08625e05 +0x09:  movzbl (%eax),%eax
08625e08 +0x0c:  xor    $0x1,%eax
08625e0b +0x0f:  test   %al,%al
08625e0d +0x11:  je     08625e16 <+0x1a>
08625e0f +0x13:  mov    $0x1,%eax
08625e14 +0x18:  jmp    08625e1b <+0x1f>
08625e16 +0x1a:  call   08133ea6 <_ZN12advancealtar10SyncScript19insertItemDescTableEv>  ; advancealtar::SyncScript::insertItemDescTable()
08625e1b +0x1f:  leave
08625e1c +0x20:  ret
08625e1d +0x21:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_charac_advance_altar_item_desc @ 0x8625dfc

/* sync_script::CSyncScript::insert_charac_advance_altar_item_desc() */

undefined4 __thiscall
sync_script::CSyncScript::insert_charac_advance_altar_item_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = advancealtar::SyncScript::insertItemDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
