# init

`_ZN10QuickParty11CQuickParty4initEv`

`QuickParty::CQuickParty::init()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269546` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269546  _ZN10QuickParty11CQuickParty4initEv
#           QuickParty::CQuickParty::init()
# range [0x08269546, 0x082695c9]
08269546 +0x00:  push   %ebp
08269547 +0x01:  mov    %esp,%ebp
08269549 +0x03:  sub    $0x28,%esp
0826954c +0x06:  mov    0x8(%ebp),%eax
0826954f +0x09:  movl   $0x10,0x8(%esp)
08269557 +0x11:  movl   $0xffffffff,0x4(%esp)
0826955f +0x19:  mov    %eax,(%esp)
08269562 +0x1c:  call   0807dcc0 <_init+0x5b8>
08269567 +0x21:  mov    0x8(%ebp),%eax
0826956a +0x24:  movl   $0xffffffff,0x10(%eax)
08269571 +0x2b:  mov    0x8(%ebp),%eax
08269574 +0x2e:  movb   $0x0,0x14(%eax)
08269578 +0x32:  mov    0x8(%ebp),%eax
0826957b +0x35:  movw   $0x0,0x16(%eax)
08269581 +0x3b:  mov    0x8(%ebp),%eax
08269584 +0x3e:  movb   $0xff,0x18(%eax)
08269588 +0x42:  mov    0x8(%ebp),%eax
0826958b +0x45:  movb   $0xff,0x19(%eax)
0826958f +0x49:  movl   $0x9d,-0xc(%ebp)
08269596 +0x50:  jmp    082695b3 <+0x6d>
08269598 +0x52:  mov    -0xc(%ebp),%eax
0826959b +0x55:  lea    -0x9d(%eax),%edx
082695a1 +0x5b:  mov    0x8(%ebp),%eax
082695a4 +0x5e:  add    $0x4,%edx
082695a7 +0x61:  movl   $0x0,0xc(%eax,%edx,4)
082695af +0x69:  addl   $0x1,-0xc(%ebp)
082695b3 +0x6d:  cmpl   $0x9e,-0xc(%ebp)
082695ba +0x74:  setle  %al
082695bd +0x77:  test   %al,%al
082695bf +0x79:  jne    08269598 <+0x52>
082695c1 +0x7b:  mov    0x8(%ebp),%eax
082695c4 +0x7e:  movb   $0x0,0x24(%eax)
082695c8 +0x82:  leave
082695c9 +0x83:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::init @ 0x8269546

/* QuickParty::CQuickParty::init() */

void __thiscall QuickParty::CQuickParty::init(CQuickParty *this)

{
  int local_10;
  
  memset(this,-1,0x10);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x14] = (CQuickParty)0x0;
  *(undefined2 *)(this + 0x16) = 0;
  this[0x18] = (CQuickParty)0xff;
  this[0x19] = (CQuickParty)0xff;
  for (local_10 = 0x9d; local_10 < 0x9f; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + -0x99) * 4 + 0xc) = 0;
  }
  this[0x24] = (CQuickParty)0x0;
  return;
}
```
