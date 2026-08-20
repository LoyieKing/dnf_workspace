# ResetPackage

`_ZN8WongWork8CMailBox5CMail12ResetPackageEv`

`WongWork::CMailBox::CMail::ResetPackage()`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox::CMail` | `0x085519fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085519fe  _ZN8WongWork8CMailBox5CMail12ResetPackageEv
#           WongWork::CMailBox::CMail::ResetPackage()
# range [0x085519fe, 0x08551a35]
085519fe +0x00:  push   %ebp
085519ff +0x01:  mov    %esp,%ebp
08551a01 +0x03:  sub    $0x18,%esp
08551a04 +0x06:  mov    0x8(%ebp),%eax
08551a07 +0x09:  movb   $0x0,0x8(%eax)
08551a0b +0x0d:  mov    0x8(%ebp),%eax
08551a0e +0x10:  add    $0x2c,%eax
08551a11 +0x13:  mov    %eax,(%esp)
08551a14 +0x16:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08551a19 +0x1b:  mov    0x8(%ebp),%eax
08551a1c +0x1e:  movl   $0x0,0x28(%eax)
08551a23 +0x25:  mov    0x8(%ebp),%eax
08551a26 +0x28:  movb   $0x0,0x74(%eax)
08551a2a +0x2c:  mov    0x8(%ebp),%eax
08551a2d +0x2f:  movl   $0x0,0x70(%eax)
08551a34 +0x36:  leave
08551a35 +0x37:  ret
```

## 反编译 C

```c
// WongWork::CMailBox::CMail::ResetPackage @ 0x85519fe

/* WongWork::CMailBox::CMail::ResetPackage() */

void __thiscall WongWork::CMailBox::CMail::ResetPackage(CMail *this)

{
  this[8] = (CMail)0x0;
  Inven_Item::reset((Inven_Item *)(this + 0x2c));
  *(undefined4 *)(this + 0x28) = 0;
  this[0x74] = (CMail)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}
```
