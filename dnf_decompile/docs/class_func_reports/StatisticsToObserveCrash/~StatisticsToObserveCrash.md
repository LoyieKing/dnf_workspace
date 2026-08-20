# ~StatisticsToObserveCrash

`_ZN24StatisticsToObserveCrashD1Ev`

`StatisticsToObserveCrash::~StatisticsToObserveCrash()`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860b9d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b9d2  _ZN24StatisticsToObserveCrashD1Ev
#           StatisticsToObserveCrash::~StatisticsToObserveCrash()
# range [0x0860b9d2, 0x0860ba6d]
0860b9d2 +0x00:  push   %ebp
0860b9d3 +0x01:  mov    %esp,%ebp
0860b9d5 +0x03:  push   %esi
0860b9d6 +0x04:  push   %ebx
0860b9d7 +0x05:  sub    $0x10,%esp
0860b9da +0x08:  mov    0x8(%ebp),%eax
0860b9dd +0x0b:  add    $0x4c,%eax
0860b9e0 +0x0e:  mov    %eax,(%esp)
0860b9e3 +0x11:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860b9e8 +0x16:  jmp    0860ba02 <+0x30>
0860b9ea +0x18:  mov    %edx,%ebx
0860b9ec +0x1a:  mov    %eax,%esi
0860b9ee +0x1c:  mov    0x8(%ebp),%eax
0860b9f1 +0x1f:  add    $0x34,%eax
0860b9f4 +0x22:  mov    %eax,(%esp)
0860b9f7 +0x25:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860b9fc +0x2a:  mov    %esi,%eax
0860b9fe +0x2c:  mov    %ebx,%edx
0860ba00 +0x2e:  jmp    0860ba12 <+0x40>
0860ba02 +0x30:  mov    0x8(%ebp),%eax
0860ba05 +0x33:  add    $0x34,%eax
0860ba08 +0x36:  mov    %eax,(%esp)
0860ba0b +0x39:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860ba10 +0x3e:  jmp    0860ba2a <+0x58>
0860ba12 +0x40:  mov    %edx,%ebx
0860ba14 +0x42:  mov    %eax,%esi
0860ba16 +0x44:  mov    0x8(%ebp),%eax
0860ba19 +0x47:  add    $0x1c,%eax
0860ba1c +0x4a:  mov    %eax,(%esp)
0860ba1f +0x4d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860ba24 +0x52:  mov    %esi,%eax
0860ba26 +0x54:  mov    %ebx,%edx
0860ba28 +0x56:  jmp    0860ba3a <+0x68>
0860ba2a +0x58:  mov    0x8(%ebp),%eax
0860ba2d +0x5b:  add    $0x1c,%eax
0860ba30 +0x5e:  mov    %eax,(%esp)
0860ba33 +0x61:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860ba38 +0x66:  jmp    0860ba58 <+0x86>
0860ba3a +0x68:  mov    %edx,%ebx
0860ba3c +0x6a:  mov    %eax,%esi
0860ba3e +0x6c:  mov    0x8(%ebp),%eax
0860ba41 +0x6f:  add    $0x4,%eax
0860ba44 +0x72:  mov    %eax,(%esp)
0860ba47 +0x75:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860ba4c +0x7a:  mov    %esi,%eax
0860ba4e +0x7c:  mov    %ebx,%edx
0860ba50 +0x7e:  mov    %eax,(%esp)
0860ba53 +0x81:  call   08ae3750 <_Unwind_Resume>
0860ba58 +0x86:  mov    0x8(%ebp),%eax
0860ba5b +0x89:  add    $0x4,%eax
0860ba5e +0x8c:  mov    %eax,(%esp)
0860ba61 +0x8f:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860ba66 +0x94:  add    $0x10,%esp
0860ba69 +0x97:  pop    %ebx
0860ba6a +0x98:  pop    %esi
0860ba6b +0x99:  pop    %ebp
0860ba6c +0x9a:  ret
0860ba6d +0x9b:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::~StatisticsToObserveCrash @ 0x860b9d2

/* StatisticsToObserveCrash::~StatisticsToObserveCrash() */

void __thiscall StatisticsToObserveCrash::~StatisticsToObserveCrash(StatisticsToObserveCrash *this)

{
                    /* try { // try from 0860b9e3 to 0860b9e7 has its CatchHandler @ 0860b9ea */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c));
                    /* try { // try from 0860ba0b to 0860ba0f has its CatchHandler @ 0860ba12 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
                    /* try { // try from 0860ba33 to 0860ba37 has its CatchHandler @ 0860ba3a */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  Mutex::~Mutex((Mutex *)(this + 4));
  return;
}
```
