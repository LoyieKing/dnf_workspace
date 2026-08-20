# StatisticsToObserveCrash

`_ZN24StatisticsToObserveCrashC1Ev`

`StatisticsToObserveCrash::StatisticsToObserveCrash()`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860b934` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b934  _ZN24StatisticsToObserveCrashC1Ev
#           StatisticsToObserveCrash::StatisticsToObserveCrash()
# range [0x0860b934, 0x0860b9cd]
0860b934 +0x00:  push   %ebp
0860b935 +0x01:  mov    %esp,%ebp
0860b937 +0x03:  push   %esi
0860b938 +0x04:  push   %ebx
0860b939 +0x05:  sub    $0x10,%esp
0860b93c +0x08:  mov    0x8(%ebp),%eax
0860b93f +0x0b:  add    $0x4,%eax
0860b942 +0x0e:  mov    %eax,(%esp)
0860b945 +0x11:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0860b94a +0x16:  mov    0x8(%ebp),%eax
0860b94d +0x19:  add    $0x1c,%eax
0860b950 +0x1c:  mov    %eax,(%esp)
0860b953 +0x1f:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0860b958 +0x24:  mov    0x8(%ebp),%eax
0860b95b +0x27:  add    $0x34,%eax
0860b95e +0x2a:  mov    %eax,(%esp)
0860b961 +0x2d:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0860b966 +0x32:  mov    0x8(%ebp),%eax
0860b969 +0x35:  add    $0x4c,%eax
0860b96c +0x38:  mov    %eax,(%esp)
0860b96f +0x3b:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0860b974 +0x40:  mov    0x8(%ebp),%eax
0860b977 +0x43:  movl   $0x0,(%eax)
0860b97d +0x49:  add    $0x10,%esp
0860b980 +0x4c:  pop    %ebx
0860b981 +0x4d:  pop    %esi
0860b982 +0x4e:  pop    %ebp
0860b983 +0x4f:  ret
0860b984 +0x50:  mov    %edx,%ebx
0860b986 +0x52:  mov    %eax,%esi
0860b988 +0x54:  mov    0x8(%ebp),%eax
0860b98b +0x57:  add    $0x34,%eax
0860b98e +0x5a:  mov    %eax,(%esp)
0860b991 +0x5d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860b996 +0x62:  mov    %esi,%eax
0860b998 +0x64:  mov    %ebx,%edx
0860b99a +0x66:  jmp    0860b99c <+0x68>
0860b99c +0x68:  mov    %edx,%ebx
0860b99e +0x6a:  mov    %eax,%esi
0860b9a0 +0x6c:  mov    0x8(%ebp),%eax
0860b9a3 +0x6f:  add    $0x1c,%eax
0860b9a6 +0x72:  mov    %eax,(%esp)
0860b9a9 +0x75:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0860b9ae +0x7a:  mov    %esi,%eax
0860b9b0 +0x7c:  mov    %ebx,%edx
0860b9b2 +0x7e:  jmp    0860b9b4 <+0x80>
0860b9b4 +0x80:  mov    %edx,%ebx
0860b9b6 +0x82:  mov    %eax,%esi
0860b9b8 +0x84:  mov    0x8(%ebp),%eax
0860b9bb +0x87:  add    $0x4,%eax
0860b9be +0x8a:  mov    %eax,(%esp)
0860b9c1 +0x8d:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0860b9c6 +0x92:  mov    %esi,%eax
0860b9c8 +0x94:  mov    %ebx,%edx
0860b9ca +0x96:  mov    %eax,(%esp)
0860b9cd +0x99:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// StatisticsToObserveCrash::StatisticsToObserveCrash @ 0x860b934

/* StatisticsToObserveCrash::StatisticsToObserveCrash() */

void __thiscall StatisticsToObserveCrash::StatisticsToObserveCrash(StatisticsToObserveCrash *this)

{
  Mutex::Mutex((Mutex *)(this + 4));
                    /* try { // try from 0860b953 to 0860b957 has its CatchHandler @ 0860b9b4 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
                    /* try { // try from 0860b961 to 0860b965 has its CatchHandler @ 0860b99c */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
                    /* try { // try from 0860b96f to 0860b973 has its CatchHandler @ 0860b984 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x4c));
  *(undefined4 *)this = 0;
  return;
}
```
