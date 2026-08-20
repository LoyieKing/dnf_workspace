# strstreambuf

`_ZNSt12strstreambufC1EPhiS0_`

`std::strstreambuf::strstreambuf(unsigned char*, int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086de490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de490  _ZNSt12strstreambufC1EPhiS0_
#           std::strstreambuf::strstreambuf(unsigned char*, int, unsigned char*)
# range [0x086de490, 0x086de52f]
086de490 +0x00:  push   %ebp
086de491 +0x01:  mov    %esp,%ebp
086de493 +0x03:  sub    $0x38,%esp
086de496 +0x06:  mov    %ebx,-0xc(%ebp)
086de499 +0x09:  mov    0x8(%ebp),%ebx
086de49c +0x0c:  mov    0x10(%ebp),%eax
086de49f +0x0f:  mov    %esi,-0x8(%ebp)
086de4a2 +0x12:  mov    0xc(%ebp),%esi
086de4a5 +0x15:  mov    %edi,-0x4(%ebp)
086de4a8 +0x18:  mov    0x14(%ebp),%edi
086de4ab +0x1b:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
086de4b1 +0x21:  lea    0x1c(%ebx),%edx
086de4b4 +0x24:  movl   $0x0,0x4(%ebx)
086de4bb +0x2b:  movl   $0x0,0x8(%ebx)
086de4c2 +0x32:  movl   $0x0,0xc(%ebx)
086de4c9 +0x39:  movl   $0x0,0x10(%ebx)
086de4d0 +0x40:  movl   $0x0,0x14(%ebx)
086de4d7 +0x47:  movl   $0x0,0x18(%ebx)
086de4de +0x4e:  mov    %eax,-0x1c(%ebp)
086de4e1 +0x51:  mov    %edx,(%esp)
086de4e4 +0x54:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086de4e9 +0x59:  andb   $0xf8,0x28(%ebx)
086de4ed +0x5d:  mov    -0x1c(%ebp),%eax
086de4f0 +0x60:  movl   $&_ZTVSt12strstreambuf+0x8,(%ebx)
086de4f6 +0x66:  movl   $0x0,0x20(%ebx)
086de4fd +0x6d:  movl   $0x0,0x24(%ebx)
086de504 +0x74:  mov    %edi,0x10(%ebp)
086de507 +0x77:  mov    -0x4(%ebp),%edi
086de50a +0x7a:  mov    %esi,0xc(%ebp)
086de50d +0x7d:  mov    -0x8(%ebp),%esi
086de510 +0x80:  mov    %ebx,0x8(%ebp)
086de513 +0x83:  mov    -0xc(%ebp),%ebx
086de516 +0x86:  mov    %eax,0x14(%ebp)
086de519 +0x89:  mov    %ebp,%esp
086de51b +0x8b:  pop    %ebp
086de51c +0x8c:  jmp    086dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>  ; std::strstreambuf::_M_setup(char*, char*, int)
086de521 +0x91:  nop
086de522 +0x92:  nop
086de523 +0x93:  nop
086de524 +0x94:  nop
086de525 +0x95:  nop
086de526 +0x96:  nop
086de527 +0x97:  nop
086de528 +0x98:  nop
086de529 +0x99:  nop
086de52a +0x9a:  nop
086de52b +0x9b:  nop
086de52c +0x9c:  nop
086de52d +0x9d:  nop
086de52e +0x9e:  nop
086de52f +0x9f:  nop
```

## 反编译 C

```c
// std::strstreambuf::strstreambuf @ 0x86de490

/* std::strstreambuf::strstreambuf(unsigned char*, int, unsigned char*) */

void __thiscall
std::strstreambuf::strstreambuf(strstreambuf *this,uchar *param_1,int param_2,uchar *param_3)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf8);
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  _M_setup(this,(char *)param_1,(char *)param_3,param_2);
  return;
}
```
