# RestrictGeolocation

`_ZN19RestrictGeolocationC1Ev`

`RestrictGeolocation::RestrictGeolocation()`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x0817097c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817097c  _ZN19RestrictGeolocationC1Ev
#           RestrictGeolocation::RestrictGeolocation()
# range [0x0817097c, 0x081709fd]
0817097c +0x00:  push   %ebp
0817097d +0x01:  mov    %esp,%ebp
0817097f +0x03:  push   %esi
08170980 +0x04:  push   %ebx
08170981 +0x05:  sub    $0x30,%esp
08170984 +0x08:  mov    0x8(%ebp),%eax
08170987 +0x0b:  mov    %eax,(%esp)
0817098a +0x0e:  call   081713a6 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x26b>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x26b
0817098f +0x13:  mov    0x8(%ebp),%eax
08170992 +0x16:  movl   $0x0,(%eax)
08170998 +0x1c:  lea    -0xb(%ebp),%eax
0817099b +0x1f:  mov    %eax,(%esp)
0817099e +0x22:  call   080d259a <_GLOBAL__I__ZN10BingoEventC2Ev+0x73e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x73e7
081709a3 +0x27:  mov    0x8(%ebp),%eax
081709a6 +0x2a:  lea    0x4(%eax),%edx
081709a9 +0x2d:  lea    -0xb(%ebp),%eax
081709ac +0x30:  mov    %eax,0x10(%esp)
081709b0 +0x34:  lea    -0xa(%ebp),%eax
081709b3 +0x37:  mov    %eax,0xc(%esp)
081709b7 +0x3b:  lea    -0x9(%ebp),%eax
081709ba +0x3e:  mov    %eax,0x8(%esp)
081709be +0x42:  movl   $0xb,0x4(%esp)
081709c6 +0x4a:  mov    %edx,(%esp)
081709c9 +0x4d:  call   08171406 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x2cb>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x2cb
081709ce +0x52:  jmp    081709eb <+0x6f>
081709d0 +0x54:  mov    %edx,%ebx
081709d2 +0x56:  mov    %eax,%esi
081709d4 +0x58:  lea    -0xb(%ebp),%eax
081709d7 +0x5b:  mov    %eax,(%esp)
081709da +0x5e:  call   080d100a <_GLOBAL__I__ZN10BingoEventC2Ev+0x5e57>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5e57
081709df +0x63:  mov    %esi,%eax
081709e1 +0x65:  mov    %ebx,%edx
081709e3 +0x67:  mov    %eax,(%esp)
081709e6 +0x6a:  call   08ae3750 <_Unwind_Resume>
081709eb +0x6f:  lea    -0xb(%ebp),%eax
081709ee +0x72:  mov    %eax,(%esp)
081709f1 +0x75:  call   080d100a <_GLOBAL__I__ZN10BingoEventC2Ev+0x5e57>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5e57
081709f6 +0x7a:  add    $0x30,%esp
081709f9 +0x7d:  pop    %ebx
081709fa +0x7e:  pop    %esi
081709fb +0x7f:  pop    %ebp
081709fc +0x80:  ret
081709fd +0x81:  nop
```

## 反编译 C

```c
// RestrictGeolocation::RestrictGeolocation @ 0x817097c

/* RestrictGeolocation::RestrictGeolocation() */

void __thiscall RestrictGeolocation::RestrictGeolocation(RestrictGeolocation *this)

{
  allocator<std::string> local_f;
  allocator local_e;
  equal_to local_d;
  
  ARAD::Singleton<RestrictGeolocation>::Singleton();
  *(undefined4 *)this = 0;
  std::allocator<std::string>::allocator();
                    /* try { // try from 081709c9 to 081709cd has its CatchHandler @ 081709d0 */
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::unordered_set((uint)(this + 4),(hash *)0xb,&local_d,&local_e);
  std::allocator<std::string>::~allocator(&local_f);
  return;
}
```
