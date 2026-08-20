# init

`_ZN12EpollHandler4initEv`

`EpollHandler::init()`

| 类 | 地址 |
|---|---|
| `EpollHandler` | `0x0857c122` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857c122  _ZN12EpollHandler4initEv
#           EpollHandler::init()
# range [0x0857c122, 0x0857c1bf]
0857c122 +0x00:  push   %ebp
0857c123 +0x01:  mov    %esp,%ebp
0857c125 +0x03:  sub    $0x18,%esp
0857c128 +0x06:  movl   $0x258,(%esp)
0857c12f +0x0d:  call   0807db30 <_init+0x428>
0857c134 +0x12:  mov    0x8(%ebp),%edx
0857c137 +0x15:  mov    %eax,0x10(%edx)
0857c13a +0x18:  mov    0x8(%ebp),%eax
0857c13d +0x1b:  mov    0x10(%eax),%eax
0857c140 +0x1e:  test   %eax,%eax
0857c142 +0x20:  jns    0857c16f <+0x4d>
0857c144 +0x22:  movl   $"[Epoll::init] Can't init epoll create",0x4(%esp)
0857c14c +0x2a:  movl   $&_ZSt4cerr,(%esp)
0857c153 +0x31:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0857c158 +0x36:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0857c160 +0x3e:  mov    %eax,(%esp)
0857c163 +0x41:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0857c168 +0x46:  mov    $0x0,%eax
0857c16d +0x4b:  jmp    0857c1bd <+0x9b>
0857c16f +0x4d:  movl   $0x1c20,(%esp)
0857c176 +0x54:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0857c17b +0x59:  mov    %eax,%edx
0857c17d +0x5b:  mov    0x8(%ebp),%eax
0857c180 +0x5e:  mov    %edx,0xc(%eax)
0857c183 +0x61:  mov    0x8(%ebp),%eax
0857c186 +0x64:  mov    0xc(%eax),%eax
0857c189 +0x67:  test   %eax,%eax
0857c18b +0x69:  jne    0857c1b8 <+0x96>
0857c18d +0x6b:  movl   $"[Epoll::init] Can't alloc event memory",0x4(%esp)
0857c195 +0x73:  movl   $&_ZSt4cerr,(%esp)
0857c19c +0x7a:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0857c1a1 +0x7f:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0857c1a9 +0x87:  mov    %eax,(%esp)
0857c1ac +0x8a:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0857c1b1 +0x8f:  mov    $0x0,%eax
0857c1b6 +0x94:  jmp    0857c1bd <+0x9b>
0857c1b8 +0x96:  mov    $0x1,%eax
0857c1bd +0x9b:  leave
0857c1be +0x9c:  ret
0857c1bf +0x9d:  nop
```

## 反编译 C

```c
// EpollHandler::init @ 0x857c122

/* EpollHandler::init() */

undefined4 __thiscall EpollHandler::init(EpollHandler *this)

{
  int iVar1;
  ostream *poVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  iVar1 = epoll_create(600);
  *(int *)(this + 0x10) = iVar1;
  if (*(int *)(this + 0x10) < 0) {
    poVar2 = std::operator<<((ostream *)&std::cerr,"[Epoll::init] Can\'t init epoll create");
    std::ostream::operator<<(poVar2,std::endl<char,std::char_traits<char>>);
    uVar3 = 0;
  }
  else {
    pvVar4 = operator_new__(0x1c20);
    *(void **)(this + 0xc) = pvVar4;
    if (*(int *)(this + 0xc) == 0) {
      poVar2 = std::operator<<((ostream *)&std::cerr,"[Epoll::init] Can\'t alloc event memory");
      std::ostream::operator<<(poVar2,std::endl<char,std::char_traits<char>>);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
