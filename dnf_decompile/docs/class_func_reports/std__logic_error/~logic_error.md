# ~logic_error

`_ZNSt11logic_errorD1Ev`

`std::logic_error::~logic_error()`

| 类 | 地址 |
|---|---|
| `std::logic_error` | `0x086dd3d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd3d0  _ZNSt11logic_errorD1Ev
#           std::logic_error::~logic_error()
# range [0x086dd3d0, 0x086dd42f]
086dd3d0 +0x00:  push   %ebp
086dd3d1 +0x01:  mov    %esp,%ebp
086dd3d3 +0x03:  push   %ebx
086dd3d4 +0x04:  sub    $0x24,%esp
086dd3d7 +0x07:  mov    0x8(%ebp),%ebx
086dd3da +0x0a:  mov    0x4(%ebx),%eax
086dd3dd +0x0d:  movl   $&_ZTVSt11logic_error+0x8,(%ebx)
086dd3e3 +0x13:  sub    $0xc,%eax
086dd3e6 +0x16:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086dd3eb +0x1b:  jne    086dd3fb <+0x2b>
086dd3ed +0x1d:  mov    %ebx,(%esp)
086dd3f0 +0x20:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086dd3f5 +0x25:  add    $0x24,%esp
086dd3f8 +0x28:  pop    %ebx
086dd3f9 +0x29:  pop    %ebp
086dd3fa +0x2a:  ret
086dd3fb +0x2b:  mov    $&data#bb92cc41(.plt),%edx
086dd400 +0x30:  test   %edx,%edx
086dd402 +0x32:  je     086dd421 <+0x51>
086dd404 +0x34:  or     $0xffffffff,%edx
086dd407 +0x37:  lock xadd %edx,0x8(%eax)
086dd40c +0x3c:  test   %edx,%edx
086dd40e +0x3e:  jg     086dd3ed <+0x1d>
086dd410 +0x40:  lea    -0x9(%ebp),%edx
086dd413 +0x43:  mov    %edx,0x4(%esp)
086dd417 +0x47:  mov    %eax,(%esp)
086dd41a +0x4a:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086dd41f +0x4f:  jmp    086dd3ed <+0x1d>
086dd421 +0x51:  mov    0x8(%eax),%edx
086dd424 +0x54:  lea    -0x1(%edx),%ecx
086dd427 +0x57:  mov    %ecx,0x8(%eax)
086dd42a +0x5a:  jmp    086dd40c <+0x3c>
086dd42c +0x5c:  nop
086dd42d +0x5d:  nop
086dd42e +0x5e:  nop
086dd42f +0x5f:  nop
```

## 反编译 C

```c
// std::logic_error::~logic_error @ 0x86dd3d0

/* WARNING: Removing unreachable block (ram,0x086dd421) */
/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  int *piVar1;
  int iVar2;
  allocator *paVar3;
  
  *(undefined ***)this = &PTR__logic_error_08cfe1d0;
  paVar3 = (allocator *)(*(int *)(this + 4) + -0xc);
  if (paVar3 != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(*(int *)(this + 4) + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      string::_Rep::_M_destroy(paVar3);
    }
  }
  exception::~exception((exception *)this);
  return;
}
```
