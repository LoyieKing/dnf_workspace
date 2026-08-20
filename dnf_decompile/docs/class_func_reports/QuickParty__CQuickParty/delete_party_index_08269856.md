# delete_party_index

`_ZN10QuickParty11CQuickParty18delete_party_indexEv`

`QuickParty::CQuickParty::delete_party_index()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269856  _ZN10QuickParty11CQuickParty18delete_party_indexEv
#           QuickParty::CQuickParty::delete_party_index()
# range [0x08269856, 0x08269883]
08269856 +0x00:  push   %ebp
08269857 +0x01:  mov    %esp,%ebp
08269859 +0x03:  sub    $0x10,%esp
0826985c +0x06:  movl   $0x0,-0x4(%ebp)
08269863 +0x0d:  jmp    08269876 <+0x20>
08269865 +0x0f:  mov    -0x4(%ebp),%edx
08269868 +0x12:  mov    0x8(%ebp),%eax
0826986b +0x15:  movl   $0xffffffff,(%eax,%edx,4)
08269872 +0x1c:  addl   $0x1,-0x4(%ebp)
08269876 +0x20:  cmpl   $0x3,-0x4(%ebp)
0826987a +0x24:  setle  %al
0826987d +0x27:  test   %al,%al
0826987f +0x29:  jne    08269865 <+0xf>
08269881 +0x2b:  leave
08269882 +0x2c:  ret
08269883 +0x2d:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::delete_party_index @ 0x8269856

/* QuickParty::CQuickParty::delete_party_index() */

void __thiscall QuickParty::CQuickParty::delete_party_index(CQuickParty *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = 0xffffffff;
  }
  return;
}
```
