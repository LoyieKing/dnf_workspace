# ~failure

`_ZNSt8ios_base7failureD1Ev`

`std::ios_base::failure::~failure()`

| 类 | 地址 |
|---|---|
| `std::ios_base::failure` | `0x086da060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086da060  _ZNSt8ios_base7failureD1Ev
#           std::ios_base::failure::~failure()
# range [0x086da060, 0x086da0bf]
086da060 +0x00:  push   %ebp
086da061 +0x01:  mov    %esp,%ebp
086da063 +0x03:  push   %ebx
086da064 +0x04:  sub    $0x24,%esp
086da067 +0x07:  mov    0x8(%ebp),%ebx
086da06a +0x0a:  mov    0x4(%ebx),%eax
086da06d +0x0d:  movl   $&_ZTVNSt8ios_base7failureE+0x8,(%ebx)
086da073 +0x13:  sub    $0xc,%eax
086da076 +0x16:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
086da07b +0x1b:  jne    086da08b <+0x2b>
086da07d +0x1d:  mov    %ebx,(%esp)
086da080 +0x20:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086da085 +0x25:  add    $0x24,%esp
086da088 +0x28:  pop    %ebx
086da089 +0x29:  pop    %ebp
086da08a +0x2a:  ret
086da08b +0x2b:  mov    $&data#bb92cc41(.plt),%edx
086da090 +0x30:  test   %edx,%edx
086da092 +0x32:  je     086da0b1 <+0x51>
086da094 +0x34:  or     $0xffffffff,%edx
086da097 +0x37:  lock xadd %edx,0x8(%eax)
086da09c +0x3c:  test   %edx,%edx
086da09e +0x3e:  jg     086da07d <+0x1d>
086da0a0 +0x40:  lea    -0x9(%ebp),%edx
086da0a3 +0x43:  mov    %edx,0x4(%esp)
086da0a7 +0x47:  mov    %eax,(%esp)
086da0aa +0x4a:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
086da0af +0x4f:  jmp    086da07d <+0x1d>
086da0b1 +0x51:  mov    0x8(%eax),%edx
086da0b4 +0x54:  lea    -0x1(%edx),%ecx
086da0b7 +0x57:  mov    %ecx,0x8(%eax)
086da0ba +0x5a:  jmp    086da09c <+0x3c>
086da0bc +0x5c:  nop
086da0bd +0x5d:  nop
086da0be +0x5e:  nop
086da0bf +0x5f:  nop
```

## 反编译 C

```c
// std::ios_base::failure::~failure @ 0x86da060

/* WARNING: Removing unreachable block (ram,0x086da0b1) */
/* std::ios_base::failure::~failure() */

void __thiscall std::ios_base::failure::~failure(failure *this)

{
  int *piVar1;
  int iVar2;
  allocator *paVar3;
  
  *(undefined ***)this = &PTR__failure_08cfdf10;
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
