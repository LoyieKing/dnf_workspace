# checkValiedPassword

`_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc`

`Dispatcher_MouseRegister::checkValiedPassword(char const*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x082632ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082632ca  _ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc
#           Dispatcher_MouseRegister::checkValiedPassword(char const*)
# range [0x082632ca, 0x08263339]
082632ca +0x00:  push   %ebp
082632cb +0x01:  mov    %esp,%ebp
082632cd +0x03:  sub    $0x28,%esp
082632d0 +0x06:  mov    0x8(%ebp),%eax
082632d3 +0x09:  mov    %eax,(%esp)
082632d6 +0x0c:  call   0807e3b0 <_init+0xca8>
082632db +0x11:  mov    %eax,-0x10(%ebp)
082632de +0x14:  cmpl   $0x6,-0x10(%ebp)
082632e2 +0x18:  jle    082632eb <+0x21>
082632e4 +0x1a:  mov    $0x0,%eax
082632e9 +0x1f:  jmp    08263338 <+0x6e>
082632eb +0x21:  movl   $0x0,-0xc(%ebp)
082632f2 +0x28:  jmp    08263326 <+0x5c>
082632f4 +0x2a:  mov    -0xc(%ebp),%eax
082632f7 +0x2d:  add    0x8(%ebp),%eax
082632fa +0x30:  movzbl (%eax),%eax
082632fd +0x33:  cmp    $0x61,%al
082632ff +0x35:  je     08263322 <+0x58>
08263301 +0x37:  mov    -0xc(%ebp),%eax
08263304 +0x3a:  add    0x8(%ebp),%eax
08263307 +0x3d:  movzbl (%eax),%eax
0826330a +0x40:  cmp    $0x2f,%al
0826330c +0x42:  jle    0826331b <+0x51>
0826330e +0x44:  mov    -0xc(%ebp),%eax
08263311 +0x47:  add    0x8(%ebp),%eax
08263314 +0x4a:  movzbl (%eax),%eax
08263317 +0x4d:  cmp    $0x39,%al
08263319 +0x4f:  jle    08263322 <+0x58>
0826331b +0x51:  mov    $0x0,%eax
08263320 +0x56:  jmp    08263338 <+0x6e>
08263322 +0x58:  addl   $0x1,-0xc(%ebp)
08263326 +0x5c:  mov    -0xc(%ebp),%eax
08263329 +0x5f:  cmp    -0x10(%ebp),%eax
0826332c +0x62:  setl   %al
0826332f +0x65:  test   %al,%al
08263331 +0x67:  jne    082632f4 <+0x2a>
08263333 +0x69:  mov    $0x1,%eax
08263338 +0x6e:  leave
08263339 +0x6f:  ret
```

## 反编译 C

```c
// Dispatcher_MouseRegister::checkValiedPassword @ 0x82632ca

/* Dispatcher_MouseRegister::checkValiedPassword(char const*) */

undefined4 Dispatcher_MouseRegister::checkValiedPassword(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  int local_10;
  
  sVar1 = strlen(param_1);
  if ((int)sVar1 < 7) {
    for (local_10 = 0; local_10 < (int)sVar1; local_10 = local_10 + 1) {
      if ((param_1[local_10] != 'a') && ((param_1[local_10] < '0' || ('9' < param_1[local_10])))) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
