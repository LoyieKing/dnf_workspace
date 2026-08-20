# ~CPowerWarPacketLog

`_ZN18CPowerWarPacketLogD1Ev`

`CPowerWarPacketLog::~CPowerWarPacketLog()`

| 类 | 地址 |
|---|---|
| `CPowerWarPacketLog` | `0x0848089c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848089c  _ZN18CPowerWarPacketLogD1Ev
#           CPowerWarPacketLog::~CPowerWarPacketLog()
# range [0x0848089c, 0x084808dd]
0848089c +0x00:  push   %ebp
0848089d +0x01:  mov    %esp,%ebp
0848089f +0x03:  push   %esi
084808a0 +0x04:  push   %ebx
084808a1 +0x05:  sub    $0x10,%esp
084808a4 +0x08:  mov    0x8(%ebp),%eax
084808a7 +0x0b:  mov    %eax,(%esp)
084808aa +0x0e:  call   084808de <_ZN18CPowerWarPacketLog5ResetEv>  ; CPowerWarPacketLog::Reset()
084808af +0x13:  jmp    084808cc <+0x30>
084808b1 +0x15:  mov    %edx,%ebx
084808b3 +0x17:  mov    %eax,%esi
084808b5 +0x19:  mov    0x8(%ebp),%eax
084808b8 +0x1c:  mov    %eax,(%esp)
084808bb +0x1f:  call   084810d6 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x154>  ; global constructors keyed to CPowerManager::CPowerManager()+0x154
084808c0 +0x24:  mov    %esi,%eax
084808c2 +0x26:  mov    %ebx,%edx
084808c4 +0x28:  mov    %eax,(%esp)
084808c7 +0x2b:  call   08ae3750 <_Unwind_Resume>
084808cc +0x30:  mov    0x8(%ebp),%eax
084808cf +0x33:  mov    %eax,(%esp)
084808d2 +0x36:  call   084810d6 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x154>  ; global constructors keyed to CPowerManager::CPowerManager()+0x154
084808d7 +0x3b:  add    $0x10,%esp
084808da +0x3e:  pop    %ebx
084808db +0x3f:  pop    %esi
084808dc +0x40:  pop    %ebp
084808dd +0x41:  ret
```

## 反编译 C

```c
// CPowerWarPacketLog::~CPowerWarPacketLog @ 0x848089c

/* CPowerWarPacketLog::~CPowerWarPacketLog() */

void __thiscall CPowerWarPacketLog::~CPowerWarPacketLog(CPowerWarPacketLog *this)

{
                    /* try { // try from 084808aa to 084808ae has its CatchHandler @ 084808b1 */
  Reset(this);
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::~map
            ((map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
              *)this);
  return;
}
```
