# ~StatisticsShusiaService

`_ZN23StatisticsShusiaServiceD1Ev`

`StatisticsShusiaService::~StatisticsShusiaService()`

| 类 | 地址 |
|---|---|
| `StatisticsShusiaService` | `0x0860c0e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c0e6  _ZN23StatisticsShusiaServiceD1Ev
#           StatisticsShusiaService::~StatisticsShusiaService()
# range [0x0860c0e6, 0x0860c153]
0860c0e6 +0x00:  push   %ebp
0860c0e7 +0x01:  mov    %esp,%ebp
0860c0e9 +0x03:  push   %esi
0860c0ea +0x04:  push   %ebx
0860c0eb +0x05:  sub    $0x10,%esp
0860c0ee +0x08:  mov    0x8(%ebp),%eax
0860c0f1 +0x0b:  add    $0x30,%eax
0860c0f4 +0x0e:  mov    %eax,(%esp)
0860c0f7 +0x11:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860c0fc +0x16:  jmp    0860c116 <+0x30>
0860c0fe +0x18:  mov    %edx,%ebx
0860c100 +0x1a:  mov    %eax,%esi
0860c102 +0x1c:  mov    0x8(%ebp),%eax
0860c105 +0x1f:  add    $0x18,%eax
0860c108 +0x22:  mov    %eax,(%esp)
0860c10b +0x25:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860c110 +0x2a:  mov    %esi,%eax
0860c112 +0x2c:  mov    %ebx,%edx
0860c114 +0x2e:  jmp    0860c126 <+0x40>
0860c116 +0x30:  mov    0x8(%ebp),%eax
0860c119 +0x33:  add    $0x18,%eax
0860c11c +0x36:  mov    %eax,(%esp)
0860c11f +0x39:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860c124 +0x3e:  jmp    0860c141 <+0x5b>
0860c126 +0x40:  mov    %edx,%ebx
0860c128 +0x42:  mov    %eax,%esi
0860c12a +0x44:  mov    0x8(%ebp),%eax
0860c12d +0x47:  mov    %eax,(%esp)
0860c130 +0x4a:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860c135 +0x4f:  mov    %esi,%eax
0860c137 +0x51:  mov    %ebx,%edx
0860c139 +0x53:  mov    %eax,(%esp)
0860c13c +0x56:  call   08ae3750 <_Unwind_Resume>
0860c141 +0x5b:  mov    0x8(%ebp),%eax
0860c144 +0x5e:  mov    %eax,(%esp)
0860c147 +0x61:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860c14c +0x66:  add    $0x10,%esp
0860c14f +0x69:  pop    %ebx
0860c150 +0x6a:  pop    %esi
0860c151 +0x6b:  pop    %ebp
0860c152 +0x6c:  ret
0860c153 +0x6d:  nop
```

## 反编译 C

```c
// StatisticsShusiaService::~StatisticsShusiaService @ 0x860c0e6

/* StatisticsShusiaService::~StatisticsShusiaService() */

void __thiscall StatisticsShusiaService::~StatisticsShusiaService(StatisticsShusiaService *this)

{
                    /* try { // try from 0860c0f7 to 0860c0fb has its CatchHandler @ 0860c0fe */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 0860c11f to 0860c123 has its CatchHandler @ 0860c126 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
