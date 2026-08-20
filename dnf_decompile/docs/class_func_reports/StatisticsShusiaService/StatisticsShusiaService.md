# StatisticsShusiaService

`_ZN23StatisticsShusiaServiceC1Ev`

`StatisticsShusiaService::StatisticsShusiaService()`

| 类 | 地址 |
|---|---|
| `StatisticsShusiaService` | `0x0860c07a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c07a  _ZN23StatisticsShusiaServiceC1Ev
#           StatisticsShusiaService::StatisticsShusiaService()
# range [0x0860c07a, 0x0860c0e5]
0860c07a +0x00:  push   %ebp
0860c07b +0x01:  mov    %esp,%ebp
0860c07d +0x03:  push   %esi
0860c07e +0x04:  push   %ebx
0860c07f +0x05:  sub    $0x10,%esp
0860c082 +0x08:  mov    0x8(%ebp),%eax
0860c085 +0x0b:  mov    %eax,(%esp)
0860c088 +0x0e:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0860c08d +0x13:  mov    0x8(%ebp),%eax
0860c090 +0x16:  add    $0x18,%eax
0860c093 +0x19:  mov    %eax,(%esp)
0860c096 +0x1c:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0860c09b +0x21:  mov    0x8(%ebp),%eax
0860c09e +0x24:  add    $0x30,%eax
0860c0a1 +0x27:  mov    %eax,(%esp)
0860c0a4 +0x2a:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0860c0a9 +0x2f:  jmp    0860c0de <+0x64>
0860c0ab +0x31:  mov    %edx,%ebx
0860c0ad +0x33:  mov    %eax,%esi
0860c0af +0x35:  mov    0x8(%ebp),%eax
0860c0b2 +0x38:  add    $0x18,%eax
0860c0b5 +0x3b:  mov    %eax,(%esp)
0860c0b8 +0x3e:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860c0bd +0x43:  mov    %esi,%eax
0860c0bf +0x45:  mov    %ebx,%edx
0860c0c1 +0x47:  jmp    0860c0c3 <+0x49>
0860c0c3 +0x49:  mov    %edx,%ebx
0860c0c5 +0x4b:  mov    %eax,%esi
0860c0c7 +0x4d:  mov    0x8(%ebp),%eax
0860c0ca +0x50:  mov    %eax,(%esp)
0860c0cd +0x53:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860c0d2 +0x58:  mov    %esi,%eax
0860c0d4 +0x5a:  mov    %ebx,%edx
0860c0d6 +0x5c:  mov    %eax,(%esp)
0860c0d9 +0x5f:  call   08ae3750 <_Unwind_Resume>
0860c0de +0x64:  add    $0x10,%esp
0860c0e1 +0x67:  pop    %ebx
0860c0e2 +0x68:  pop    %esi
0860c0e3 +0x69:  pop    %ebp
0860c0e4 +0x6a:  ret
0860c0e5 +0x6b:  nop
```

## 反编译 C

```c
// StatisticsShusiaService::StatisticsShusiaService @ 0x860c07a

/* StatisticsShusiaService::StatisticsShusiaService() */

void __thiscall StatisticsShusiaService::StatisticsShusiaService(StatisticsShusiaService *this)

{
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0860c096 to 0860c09a has its CatchHandler @ 0860c0c3 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
                    /* try { // try from 0860c0a4 to 0860c0a8 has its CatchHandler @ 0860c0ab */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  return;
}
```
