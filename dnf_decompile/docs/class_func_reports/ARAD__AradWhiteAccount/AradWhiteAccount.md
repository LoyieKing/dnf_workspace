# AradWhiteAccount

`_ZN4ARAD16AradWhiteAccountC1Ev`

`ARAD::AradWhiteAccount::AradWhiteAccount()`

| 类 | 地址 |
|---|---|
| `ARAD::AradWhiteAccount` | `0x081ab518` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ab518  _ZN4ARAD16AradWhiteAccountC1Ev
#           ARAD::AradWhiteAccount::AradWhiteAccount()
# range [0x081ab518, 0x081ab559]
081ab518 +0x00:  push   %ebp
081ab519 +0x01:  mov    %esp,%ebp
081ab51b +0x03:  push   %esi
081ab51c +0x04:  push   %ebx
081ab51d +0x05:  sub    $0x10,%esp
081ab520 +0x08:  mov    0x8(%ebp),%eax
081ab523 +0x0b:  mov    %eax,(%esp)
081ab526 +0x0e:  call   081ab6de <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x30>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x30
081ab52b +0x13:  mov    0x8(%ebp),%eax
081ab52e +0x16:  mov    %eax,(%esp)
081ab531 +0x19:  call   081ab5f8 <_ZN4ARAD16AradWhiteAccount4LoadEv>  ; ARAD::AradWhiteAccount::Load()
081ab536 +0x1e:  jmp    081ab553 <+0x3b>
081ab538 +0x20:  mov    %edx,%ebx
081ab53a +0x22:  mov    %eax,%esi
081ab53c +0x24:  mov    0x8(%ebp),%eax
081ab53f +0x27:  mov    %eax,(%esp)
081ab542 +0x2a:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
081ab547 +0x2f:  mov    %esi,%eax
081ab549 +0x31:  mov    %ebx,%edx
081ab54b +0x33:  mov    %eax,(%esp)
081ab54e +0x36:  call   08ae3750 <_Unwind_Resume>
081ab553 +0x3b:  add    $0x10,%esp
081ab556 +0x3e:  pop    %ebx
081ab557 +0x3f:  pop    %esi
081ab558 +0x40:  pop    %ebp
081ab559 +0x41:  ret
```

## 反编译 C

```c
// ARAD::AradWhiteAccount::AradWhiteAccount @ 0x81ab518

/* ARAD::AradWhiteAccount::AradWhiteAccount() */

void __thiscall ARAD::AradWhiteAccount::AradWhiteAccount(AradWhiteAccount *this)

{
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)this);
                    /* try { // try from 081ab531 to 081ab535 has its CatchHandler @ 081ab538 */
  Load();
  return;
}
```
