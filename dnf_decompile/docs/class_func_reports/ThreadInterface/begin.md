# begin

`_ZN15ThreadInterface5beginEv`

`ThreadInterface::begin()`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630b8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630b8a  _ZN15ThreadInterface5beginEv
#           ThreadInterface::begin()
# range [0x08630b8a, 0x08630c13]
08630b8a +0x00:  push   %ebp
08630b8b +0x01:  mov    %esp,%ebp
08630b8d +0x03:  sub    $0x28,%esp
08630b90 +0x06:  mov    0x8(%ebp),%eax
08630b93 +0x09:  lea    0x4(%eax),%edx
08630b96 +0x0c:  mov    0x8(%ebp),%eax
08630b99 +0x0f:  mov    %eax,0xc(%esp)
08630b9d +0x13:  movl   $&_ZN15ThreadInterface14dispatch_proxyEPv,0x8(%esp)
08630ba5 +0x1b:  movl   $0x0,0x4(%esp)
08630bad +0x23:  mov    %edx,(%esp)
08630bb0 +0x26:  call   0807d890 <_init+0x188>
08630bb5 +0x2b:  mov    %eax,-0xc(%ebp)
08630bb8 +0x2e:  cmpl   $0x0,-0xc(%ebp)
08630bbc +0x32:  je     08630c01 <+0x77>
08630bbe +0x34:  movl   $"[ThreadInterface::begin] Can't begin thread",0x4(%esp)
08630bc6 +0x3c:  movl   $&_ZSt4cout,(%esp)
08630bcd +0x43:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08630bd2 +0x48:  movl   $" ",0x4(%esp)
08630bda +0x50:  mov    %eax,(%esp)
08630bdd +0x53:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08630be2 +0x58:  mov    -0xc(%ebp),%edx
08630be5 +0x5b:  mov    %edx,0x4(%esp)
08630be9 +0x5f:  mov    %eax,(%esp)
08630bec +0x62:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
08630bf1 +0x67:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08630bf9 +0x6f:  mov    %eax,(%esp)
08630bfc +0x72:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08630c01 +0x77:  mov    0x8(%ebp),%eax
08630c04 +0x7a:  mov    0x4(%eax),%edx
08630c07 +0x7d:  mov    0x8(%ebp),%eax
08630c0a +0x80:  mov    %edx,0x8(%eax)
08630c0d +0x83:  mov    $0x1,%eax
08630c12 +0x88:  leave
08630c13 +0x89:  ret
```

## 反编译 C

```c
// ThreadInterface::begin @ 0x8630b8a

/* ThreadInterface::begin() */

undefined4 __thiscall ThreadInterface::begin(ThreadInterface *this)

{
  int iVar1;
  ostream *poVar2;
  
  iVar1 = pthread_create((pthread_t *)(this + 4),(pthread_attr_t *)0x0,dispatch_proxy,this);
  if (iVar1 != 0) {
    poVar2 = std::operator<<((ostream *)std::cout,"[ThreadInterface::begin] Can\'t begin thread");
    poVar2 = std::operator<<(poVar2," ");
    poVar2 = (ostream *)std::ostream::operator<<(poVar2,iVar1);
    std::ostream::operator<<(poVar2,std::endl<char,std::char_traits<char>>);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 4);
  return 1;
}
```
