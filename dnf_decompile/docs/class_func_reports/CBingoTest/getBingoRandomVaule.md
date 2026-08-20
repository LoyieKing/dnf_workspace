# getBingoRandomVaule

`_ZN10CBingoTest19getBingoRandomVauleEv`

`CBingoTest::getBingoRandomVaule()`

| 类 | 地址 |
|---|---|
| `CBingoTest` | `0x080cb07e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cb07e  _ZN10CBingoTest19getBingoRandomVauleEv
#           CBingoTest::getBingoRandomVaule()
# range [0x080cb07e, 0x080cb172]
080cb07e +0x00:  push   %ebp
080cb07f +0x01:  mov    %esp,%ebp
080cb081 +0x03:  sub    $0x38,%esp
080cb084 +0x06:  movl   $0x0,-0x20(%ebp)
080cb08b +0x0d:  movl   $0x0,-0x1c(%ebp)
080cb092 +0x14:  jmp    080cb0ae <+0x30>
080cb094 +0x16:  mov    0x8(%ebp),%eax
080cb097 +0x19:  movl   $0xa,0x4(%esp)
080cb09f +0x21:  mov    %eax,(%esp)
080cb0a2 +0x24:  call   080cae70 <_ZN6CBingo19getBingoRandomVauleEi>  ; CBingo::getBingoRandomVaule(int)
080cb0a7 +0x29:  mov    %eax,-0x20(%ebp)
080cb0aa +0x2c:  addl   $0x1,-0x1c(%ebp)
080cb0ae +0x30:  cmpl   $0x63,-0x1c(%ebp)
080cb0b2 +0x34:  setle  %al
080cb0b5 +0x37:  test   %al,%al
080cb0b7 +0x39:  jne    080cb094 <+0x16>
080cb0b9 +0x3b:  movl   $0x0,-0x18(%ebp)
080cb0c0 +0x42:  jmp    080cb0dc <+0x5e>
080cb0c2 +0x44:  mov    0x8(%ebp),%eax
080cb0c5 +0x47:  movl   $0x14,0x4(%esp)
080cb0cd +0x4f:  mov    %eax,(%esp)
080cb0d0 +0x52:  call   080cae70 <_ZN6CBingo19getBingoRandomVauleEi>  ; CBingo::getBingoRandomVaule(int)
080cb0d5 +0x57:  mov    %eax,-0x20(%ebp)
080cb0d8 +0x5a:  addl   $0x1,-0x18(%ebp)
080cb0dc +0x5e:  cmpl   $0x63,-0x18(%ebp)
080cb0e0 +0x62:  setle  %al
080cb0e3 +0x65:  test   %al,%al
080cb0e5 +0x67:  jne    080cb0c2 <+0x44>
080cb0e7 +0x69:  movl   $0x0,-0x14(%ebp)
080cb0ee +0x70:  jmp    080cb10a <+0x8c>
080cb0f0 +0x72:  mov    0x8(%ebp),%eax
080cb0f3 +0x75:  movl   $0x1e,0x4(%esp)
080cb0fb +0x7d:  mov    %eax,(%esp)
080cb0fe +0x80:  call   080cae70 <_ZN6CBingo19getBingoRandomVauleEi>  ; CBingo::getBingoRandomVaule(int)
080cb103 +0x85:  mov    %eax,-0x20(%ebp)
080cb106 +0x88:  addl   $0x1,-0x14(%ebp)
080cb10a +0x8c:  cmpl   $0x63,-0x14(%ebp)
080cb10e +0x90:  setle  %al
080cb111 +0x93:  test   %al,%al
080cb113 +0x95:  jne    080cb0f0 <+0x72>
080cb115 +0x97:  movl   $0x0,-0x10(%ebp)
080cb11c +0x9e:  jmp    080cb138 <+0xba>
080cb11e +0xa0:  mov    0x8(%ebp),%eax
080cb121 +0xa3:  movl   $0x28,0x4(%esp)
080cb129 +0xab:  mov    %eax,(%esp)
080cb12c +0xae:  call   080cae70 <_ZN6CBingo19getBingoRandomVauleEi>  ; CBingo::getBingoRandomVaule(int)
080cb131 +0xb3:  mov    %eax,-0x20(%ebp)
080cb134 +0xb6:  addl   $0x1,-0x10(%ebp)
080cb138 +0xba:  cmpl   $0x63,-0x10(%ebp)
080cb13c +0xbe:  setle  %al
080cb13f +0xc1:  test   %al,%al
080cb141 +0xc3:  jne    080cb11e <+0xa0>
080cb143 +0xc5:  movl   $0x0,-0xc(%ebp)
080cb14a +0xcc:  jmp    080cb166 <+0xe8>
080cb14c +0xce:  mov    0x8(%ebp),%eax
080cb14f +0xd1:  movl   $0x32,0x4(%esp)
080cb157 +0xd9:  mov    %eax,(%esp)
080cb15a +0xdc:  call   080cae70 <_ZN6CBingo19getBingoRandomVauleEi>  ; CBingo::getBingoRandomVaule(int)
080cb15f +0xe1:  mov    %eax,-0x20(%ebp)
080cb162 +0xe4:  addl   $0x1,-0xc(%ebp)
080cb166 +0xe8:  cmpl   $0x63,-0xc(%ebp)
080cb16a +0xec:  setle  %al
080cb16d +0xef:  test   %al,%al
080cb16f +0xf1:  jne    080cb14c <+0xce>
080cb171 +0xf3:  leave
080cb172 +0xf4:  ret
```

## 反编译 C

```c
// CBingoTest::getBingoRandomVaule @ 0x80cb07e

/* CBingoTest::getBingoRandomVaule() */

void __thiscall CBingoTest::getBingoRandomVaule(CBingoTest *this)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,10);
  }
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x14);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x1e);
  }
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x28);
  }
  for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x32);
  }
  return;
}
```
