# CPowerWarPacketLog

`_ZN18CPowerWarPacketLogC1Ev`

`CPowerWarPacketLog::CPowerWarPacketLog()`

| 类 | 地址 |
|---|---|
| `CPowerWarPacketLog` | `0x0848085a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848085a  _ZN18CPowerWarPacketLogC1Ev
#           CPowerWarPacketLog::CPowerWarPacketLog()
# range [0x0848085a, 0x0848089b]
0848085a +0x00:  push   %ebp
0848085b +0x01:  mov    %esp,%ebp
0848085d +0x03:  push   %esi
0848085e +0x04:  push   %ebx
0848085f +0x05:  sub    $0x10,%esp
08480862 +0x08:  mov    0x8(%ebp),%eax
08480865 +0x0b:  mov    %eax,(%esp)
08480868 +0x0e:  call   08481116 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x194>  ; global constructors keyed to CPowerManager::CPowerManager()+0x194
0848086d +0x13:  mov    0x8(%ebp),%eax
08480870 +0x16:  mov    %eax,(%esp)
08480873 +0x19:  call   084808de <_ZN18CPowerWarPacketLog5ResetEv>  ; CPowerWarPacketLog::Reset()
08480878 +0x1e:  jmp    08480895 <+0x3b>
0848087a +0x20:  mov    %edx,%ebx
0848087c +0x22:  mov    %eax,%esi
0848087e +0x24:  mov    0x8(%ebp),%eax
08480881 +0x27:  mov    %eax,(%esp)
08480884 +0x2a:  call   084810d6 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x154>  ; global constructors keyed to CPowerManager::CPowerManager()+0x154
08480889 +0x2f:  mov    %esi,%eax
0848088b +0x31:  mov    %ebx,%edx
0848088d +0x33:  mov    %eax,(%esp)
08480890 +0x36:  call   08ae3750 <_Unwind_Resume>
08480895 +0x3b:  add    $0x10,%esp
08480898 +0x3e:  pop    %ebx
08480899 +0x3f:  pop    %esi
0848089a +0x40:  pop    %ebp
0848089b +0x41:  ret
```

## 反编译 C

```c
// CPowerWarPacketLog::CPowerWarPacketLog @ 0x848085a

/* CPowerWarPacketLog::CPowerWarPacketLog() */

void __thiscall CPowerWarPacketLog::CPowerWarPacketLog(CPowerWarPacketLog *this)

{
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::map
            ((map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
              *)this);
                    /* try { // try from 08480873 to 08480877 has its CatchHandler @ 0848087a */
  Reset(this);
  return;
}
```
