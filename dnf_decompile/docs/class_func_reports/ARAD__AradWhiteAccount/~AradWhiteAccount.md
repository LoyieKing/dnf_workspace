# ~AradWhiteAccount

`_ZN4ARAD16AradWhiteAccountD1Ev`

`ARAD::AradWhiteAccount::~AradWhiteAccount()`

| 类 | 地址 |
|---|---|
| `ARAD::AradWhiteAccount` | `0x081ab55a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ab55a  _ZN4ARAD16AradWhiteAccountD1Ev
#           ARAD::AradWhiteAccount::~AradWhiteAccount()
# range [0x081ab55a, 0x081ab59b]
081ab55a +0x00:  push   %ebp
081ab55b +0x01:  mov    %esp,%ebp
081ab55d +0x03:  push   %esi
081ab55e +0x04:  push   %ebx
081ab55f +0x05:  sub    $0x10,%esp
081ab562 +0x08:  mov    0x8(%ebp),%eax
081ab565 +0x0b:  mov    %eax,(%esp)
081ab568 +0x0e:  call   081ab758 <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xaa>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xaa
081ab56d +0x13:  jmp    081ab58a <+0x30>
081ab56f +0x15:  mov    %edx,%ebx
081ab571 +0x17:  mov    %eax,%esi
081ab573 +0x19:  mov    0x8(%ebp),%eax
081ab576 +0x1c:  mov    %eax,(%esp)
081ab579 +0x1f:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
081ab57e +0x24:  mov    %esi,%eax
081ab580 +0x26:  mov    %ebx,%edx
081ab582 +0x28:  mov    %eax,(%esp)
081ab585 +0x2b:  call   08ae3750 <_Unwind_Resume>
081ab58a +0x30:  mov    0x8(%ebp),%eax
081ab58d +0x33:  mov    %eax,(%esp)
081ab590 +0x36:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
081ab595 +0x3b:  add    $0x10,%esp
081ab598 +0x3e:  pop    %ebx
081ab599 +0x3f:  pop    %esi
081ab59a +0x40:  pop    %ebp
081ab59b +0x41:  ret
```

## 反编译 C

```c
// ARAD::AradWhiteAccount::~AradWhiteAccount @ 0x81ab55a

/* ARAD::AradWhiteAccount::~AradWhiteAccount() */

void __thiscall ARAD::AradWhiteAccount::~AradWhiteAccount(AradWhiteAccount *this)

{
                    /* try { // try from 081ab568 to 081ab56c has its CatchHandler @ 081ab56f */
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::clear
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
  return;
}
```
