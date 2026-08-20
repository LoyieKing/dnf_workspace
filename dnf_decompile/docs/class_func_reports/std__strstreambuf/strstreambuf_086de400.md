# strstreambuf

`_ZNSt12strstreambufC1EPKci`

`std::strstreambuf::strstreambuf(char const*, int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086de400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de400  _ZNSt12strstreambufC1EPKci
#           std::strstreambuf::strstreambuf(char const*, int)
# range [0x086de400, 0x086de48f]
086de400 +0x00:  push   %ebp
086de401 +0x01:  mov    %esp,%ebp
086de403 +0x03:  push   %ebx
086de404 +0x04:  sub    $0x14,%esp
086de407 +0x07:  mov    0x8(%ebp),%ebx
086de40a +0x0a:  lea    0x1c(%ebx),%eax
086de40d +0x0d:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
086de413 +0x13:  movl   $0x0,0x4(%ebx)
086de41a +0x1a:  movl   $0x0,0x8(%ebx)
086de421 +0x21:  movl   $0x0,0xc(%ebx)
086de428 +0x28:  movl   $0x0,0x10(%ebx)
086de42f +0x2f:  movl   $0x0,0x14(%ebx)
086de436 +0x36:  movl   $0x0,0x18(%ebx)
086de43d +0x3d:  mov    %eax,(%esp)
086de440 +0x40:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086de445 +0x45:  movzbl 0x28(%ebx),%eax
086de449 +0x49:  movl   $&_ZTVSt12strstreambuf+0x8,(%ebx)
086de44f +0x4f:  movl   $0x0,0x20(%ebx)
086de456 +0x56:  movl   $0x0,0x24(%ebx)
086de45d +0x5d:  and    $0xfffffffc,%eax
086de460 +0x60:  or     $0x4,%eax
086de463 +0x63:  mov    %al,0x28(%ebx)
086de466 +0x66:  mov    0x10(%ebp),%eax
086de469 +0x69:  mov    %ebx,(%esp)
086de46c +0x6c:  movl   $0x0,0x8(%esp)
086de474 +0x74:  mov    %eax,0xc(%esp)
086de478 +0x78:  mov    0xc(%ebp),%eax
086de47b +0x7b:  mov    %eax,0x4(%esp)
086de47f +0x7f:  call   086dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>  ; std::strstreambuf::_M_setup(char*, char*, int)
086de484 +0x84:  add    $0x14,%esp
086de487 +0x87:  pop    %ebx
086de488 +0x88:  pop    %ebp
086de489 +0x89:  ret
086de48a +0x8a:  nop
086de48b +0x8b:  nop
086de48c +0x8c:  nop
086de48d +0x8d:  nop
086de48e +0x8e:  nop
086de48f +0x8f:  nop
```

## 反编译 C

```c
// std::strstreambuf::strstreambuf @ 0x86de400

/* std::strstreambuf::strstreambuf(char const*, int) */

void __thiscall std::strstreambuf::strstreambuf(strstreambuf *this,char *param_1,int param_2)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xfc | 4);
  _M_setup(this,param_1,(char *)0x0,param_2);
  return;
}
```
