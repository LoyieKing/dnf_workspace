# strstreambuf

`_ZNSt12strstreambufC1EPFPvjEPFvS0_E`

`std::strstreambuf::strstreambuf(void* (*)(unsigned int), void (*)(void*))`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086de730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de730  _ZNSt12strstreambufC1EPFPvjEPFvS0_E
#           std::strstreambuf::strstreambuf(void* (*)(unsigned int), void (*)(void*))
# range [0x086de730, 0x086de7df]
086de730 +0x00:  push   %ebp
086de731 +0x01:  mov    %esp,%ebp
086de733 +0x03:  push   %ebx
086de734 +0x04:  sub    $0x24,%esp
086de737 +0x07:  mov    0x8(%ebp),%ebx
086de73a +0x0a:  lea    0x1c(%ebx),%eax
086de73d +0x0d:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
086de743 +0x13:  movl   $0x0,0x4(%ebx)
086de74a +0x1a:  movl   $0x0,0x8(%ebx)
086de751 +0x21:  movl   $0x0,0xc(%ebx)
086de758 +0x28:  movl   $0x0,0x10(%ebx)
086de75f +0x2f:  movl   $0x0,0x14(%ebx)
086de766 +0x36:  movl   $0x0,0x18(%ebx)
086de76d +0x3d:  mov    %eax,(%esp)
086de770 +0x40:  call   086dd050 <_ZNSt6localeC1Ev>  ; std::locale::locale()
086de775 +0x45:  mov    0xc(%ebp),%eax
086de778 +0x48:  movl   $&_ZTVSt12strstreambuf+0x8,(%ebx)
086de77e +0x4e:  mov    %eax,0x20(%ebx)
086de781 +0x51:  mov    0x10(%ebp),%eax
086de784 +0x54:  mov    %eax,0x24(%ebx)
086de787 +0x57:  movzbl 0x28(%ebx),%eax
086de78b +0x5b:  or     $0x1,%eax
086de78e +0x5e:  and    $0xfffffff9,%eax
086de791 +0x61:  mov    %al,0x28(%ebx)
086de794 +0x64:  movl   $0x10,0x4(%esp)
086de79c +0x6c:  mov    %ebx,(%esp)
086de79f +0x6f:  call   086dda40 <_ZNSt12strstreambuf8_M_allocEj>  ; std::strstreambuf::_M_alloc(unsigned int)
086de7a4 +0x74:  test   %eax,%eax
086de7a6 +0x76:  je     086de7bd <+0x8d>
086de7a8 +0x78:  lea    0x10(%eax),%edx
086de7ab +0x7b:  mov    %eax,0x14(%ebx)
086de7ae +0x7e:  mov    %eax,0x10(%ebx)
086de7b1 +0x81:  mov    %edx,0x18(%ebx)
086de7b4 +0x84:  mov    %eax,0x4(%ebx)
086de7b7 +0x87:  mov    %eax,0x8(%ebx)
086de7ba +0x8a:  mov    %eax,0xc(%ebx)
086de7bd +0x8d:  add    $0x24,%esp
086de7c0 +0x90:  pop    %ebx
086de7c1 +0x91:  pop    %ebp
086de7c2 +0x92:  ret
086de7c3 +0x93:  mov    %eax,-0xc(%ebp)
086de7c6 +0x96:  mov    %ebx,(%esp)
086de7c9 +0x99:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
086de7ce +0x9e:  mov    -0xc(%ebp),%eax
086de7d1 +0xa1:  mov    %eax,(%esp)
086de7d4 +0xa4:  call   08ae3750 <_Unwind_Resume>
086de7d9 +0xa9:  nop
086de7da +0xaa:  nop
086de7db +0xab:  nop
086de7dc +0xac:  nop
086de7dd +0xad:  nop
086de7de +0xae:  nop
086de7df +0xaf:  nop
```

## 反编译 C

```c
// std::strstreambuf::strstreambuf @ 0x86de730

/* std::strstreambuf::strstreambuf(void* (*)(unsigned int), void (*)(void*)) */

void __thiscall
std::strstreambuf::strstreambuf
          (strstreambuf *this,_func_void_ptr_uint *param_1,_func_void_void_ptr *param_2)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(_func_void_ptr_uint **)(this + 0x20) = param_1;
  *(_func_void_void_ptr **)(this + 0x24) = param_2;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf9 | 1);
                    /* try { // try from 086de79f to 086de7a3 has its CatchHandler @ 086de7c3 */
  iVar1 = _M_alloc(this,0x10);
  if (iVar1 != 0) {
    *(int *)(this + 0x14) = iVar1;
    *(int *)(this + 0x10) = iVar1;
    *(int *)(this + 0x18) = iVar1 + 0x10;
    *(int *)(this + 4) = iVar1;
    *(int *)(this + 8) = iVar1;
    *(int *)(this + 0xc) = iVar1;
  }
  return;
}
```
