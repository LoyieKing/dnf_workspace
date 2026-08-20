# AradAppInit

`_ZN13AradAppSystem11AradAppInitEiPPc`

`AradAppSystem::AradAppInit(int, char**)`

| 类 | 地址 |
|---|---|
| `AradAppSystem` | `0x0817de00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817de00  _ZN13AradAppSystem11AradAppInitEiPPc
#           AradAppSystem::AradAppInit(int, char**)
# range [0x0817de00, 0x0817de99]
0817de00 +0x00:  push   %ebp
0817de01 +0x01:  mov    %esp,%ebp
0817de03 +0x03:  sub    $0x18,%esp
0817de06 +0x06:  movl   $"[!] Server Starting...\n",0x4(%esp)
0817de0e +0x0e:  movl   $&_ZSt4cerr,(%esp)
0817de15 +0x15:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0817de1a +0x1a:  movl   $0x0,(%esp)
0817de21 +0x21:  call   0807d750 <_init+0x48>
0817de26 +0x26:  mov    %eax,(%esp)
0817de29 +0x29:  call   0807d780 <_init+0x78>
0817de2e +0x2e:  cmpl   $0x2,0x8(%ebp)
0817de32 +0x32:  jmp    0817de4f <+0x4f>
0817de34 +0x34:  movl   $"[!] Check Args Fail!!\n",0x4(%esp)
0817de3c +0x3c:  movl   $&_ZSt4cerr,(%esp)
0817de43 +0x43:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0817de48 +0x48:  mov    $0x0,%eax
0817de4d +0x4d:  jmp    0817de98 <+0x98>
0817de4f +0x4f:  mov    0xc(%ebp),%eax
0817de52 +0x52:  add    $0x4,%eax
0817de55 +0x55:  mov    (%eax),%eax
0817de57 +0x57:  mov    %eax,(%esp)
0817de5a +0x5a:  call   0817deea <_ZN13AradAppSystem8open_logEPc>  ; AradAppSystem::open_log(char*)
0817de5f +0x5f:  xor    $0x1,%eax
0817de62 +0x62:  test   %al,%al
0817de64 +0x64:  je     0817de6d <+0x6d>
0817de66 +0x66:  mov    $0x0,%eax
0817de6b +0x6b:  jmp    0817de98 <+0x98>
0817de6d +0x6d:  call   084b9ad4 <_ZN10HistoryLog4InitEv>  ; HistoryLog::Init()
0817de72 +0x72:  xor    $0x1,%eax
0817de75 +0x75:  test   %al,%al
0817de77 +0x77:  je     0817de80 <+0x80>
0817de79 +0x79:  mov    $0x0,%eax
0817de7e +0x7e:  jmp    0817de98 <+0x98>
0817de80 +0x80:  call   0817de9a <_ZN13AradAppSystem11script_loadEv>  ; AradAppSystem::script_load()
0817de85 +0x85:  xor    $0x1,%eax
0817de88 +0x88:  test   %al,%al
0817de8a +0x8a:  je     0817de93 <+0x93>
0817de8c +0x8c:  mov    $0x0,%eax
0817de91 +0x91:  jmp    0817de98 <+0x98>
0817de93 +0x93:  mov    $0x1,%eax
0817de98 +0x98:  leave
0817de99 +0x99:  ret
```

## 反编译 C

```c
// AradAppSystem::AradAppInit @ 0x817de00

/* AradAppSystem::AradAppInit(int, char**) */

undefined4 AradAppSystem::AradAppInit(int param_1,char **param_2)

{
  char cVar1;
  uint __seed;
  undefined4 uVar2;
  
  std::operator<<((ostream *)&std::cerr,"[!] Server Starting...\n");
  __seed = time((time_t *)0x0);
  srand(__seed);
  cVar1 = open_log(param_2[1]);
  if (cVar1 == '\x01') {
    cVar1 = HistoryLog::Init();
    if (cVar1 == '\x01') {
      cVar1 = script_load();
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
