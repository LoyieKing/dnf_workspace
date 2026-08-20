# checkAllMemberReady

`_ZN8WongWork9CBossPlay19checkAllMemberReadyEi`

`WongWork::CBossPlay::checkAllMemberReady(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x081493fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081493fe  _ZN8WongWork9CBossPlay19checkAllMemberReadyEi
#           WongWork::CBossPlay::checkAllMemberReady(int)
# range [0x081493fe, 0x08149465]
081493fe +0x00:  push   %ebp
081493ff +0x01:  mov    %esp,%ebp
08149401 +0x03:  sub    $0x10,%esp
08149404 +0x06:  mov    0x8(%ebp),%eax
08149407 +0x09:  movzbl 0xc(%eax),%eax
0814940b +0x0d:  test   %al,%al
0814940d +0x0f:  je     08149416 <+0x18>
0814940f +0x11:  mov    $0x1,%eax
08149414 +0x16:  jmp    08149463 <+0x65>
08149416 +0x18:  movl   $0x0,-0x8(%ebp)
0814941d +0x1f:  movl   $0x0,-0x4(%ebp)
08149424 +0x26:  jmp    08149453 <+0x55>
08149426 +0x28:  mov    -0x4(%ebp),%eax
08149429 +0x2b:  mov    0x8(%ebp),%edx
0814942c +0x2e:  movzbl 0x11(%edx,%eax,1),%eax
08149431 +0x33:  test   %al,%al
08149433 +0x35:  je     0814944f <+0x51>
08149435 +0x37:  addl   $0x1,-0x8(%ebp)
08149439 +0x3b:  mov    -0x8(%ebp),%eax
0814943c +0x3e:  cmp    0xc(%ebp),%eax
0814943f +0x41:  jne    0814944f <+0x51>
08149441 +0x43:  mov    0x8(%ebp),%eax
08149444 +0x46:  movb   $0x1,0xc(%eax)
08149448 +0x4a:  mov    $0x1,%eax
0814944d +0x4f:  jmp    08149463 <+0x65>
0814944f +0x51:  addl   $0x1,-0x4(%ebp)
08149453 +0x55:  cmpl   $0x3,-0x4(%ebp)
08149457 +0x59:  setle  %al
0814945a +0x5c:  test   %al,%al
0814945c +0x5e:  jne    08149426 <+0x28>
0814945e +0x60:  mov    $0x0,%eax
08149463 +0x65:  leave
08149464 +0x66:  ret
08149465 +0x67:  nop
```

## 反编译 C

```c
// WongWork::CBossPlay::checkAllMemberReady @ 0x81493fe

/* WongWork::CBossPlay::checkAllMemberReady(int) */

undefined4 __thiscall WongWork::CBossPlay::checkAllMemberReady(CBossPlay *this,int param_1)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (this[0xc] == (CBossPlay)0x0) {
    local_c = 0;
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((this[local_8 + 0x11] != (CBossPlay)0x0) && (local_c = local_c + 1, local_c == param_1)) {
        this[0xc] = (CBossPlay)0x1;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
