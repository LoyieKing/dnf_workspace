# script_load

`_ZN13AradAppSystem11script_loadEv`

`AradAppSystem::script_load()`

| 类 | 地址 |
|---|---|
| `AradAppSystem` | `0x0817de9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817de9a  _ZN13AradAppSystem11script_loadEv
#           AradAppSystem::script_load()
# range [0x0817de9a, 0x0817dee9]
0817de9a +0x00:  push   %ebp
0817de9b +0x01:  mov    %esp,%ebp
0817de9d +0x03:  sub    $0x18,%esp
0817dea0 +0x06:  movl   $"[!] script loading...\n",0x4(%esp)
0817dea8 +0x0e:  movl   $&_ZSt4cerr,(%esp)
0817deaf +0x15:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0817deb4 +0x1a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0817deb9 +0x1f:  mov    %eax,(%esp)
0817debc +0x22:  call   08358332 <_ZN12CDataManager4initEv>  ; CDataManager::init()
0817dec1 +0x27:  xor    $0x1,%eax
0817dec4 +0x2a:  test   %al,%al
0817dec6 +0x2c:  je     0817decf <+0x35>
0817dec8 +0x2e:  mov    $0x0,%eax
0817decd +0x33:  jmp    0817dee8 <+0x4e>
0817decf +0x35:  movl   $"[!] script loading Complete!!\n",0x4(%esp)
0817ded7 +0x3d:  movl   $&_ZSt4cerr,(%esp)
0817dede +0x44:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0817dee3 +0x49:  mov    $0x1,%eax
0817dee8 +0x4e:  leave
0817dee9 +0x4f:  ret
```

## 反编译 C

```c
// AradAppSystem::script_load @ 0x817de9a

/* AradAppSystem::script_load() */

bool AradAppSystem::script_load(void)

{
  char cVar1;
  CDataManager *this;
  
  std::operator<<((ostream *)&std::cerr,"[!] script loading...\n");
  this = (CDataManager *)G_CDataManager();
  cVar1 = CDataManager::init(this);
  if (cVar1 == '\x01') {
    std::operator<<((ostream *)&std::cerr,"[!] script loading Complete!!\n");
  }
  return cVar1 == '\x01';
}
```
