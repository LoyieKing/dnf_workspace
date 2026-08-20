# TOD_UserState

`_ZN13TOD_UserStateC1Ev`

`TOD_UserState::TOD_UserState()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x08643460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643460  _ZN13TOD_UserStateC1Ev
#           TOD_UserState::TOD_UserState()
# range [0x08643460, 0x086434ad]
08643460 +0x00:  push   %ebp
08643461 +0x01:  mov    %esp,%ebp
08643463 +0x03:  push   %esi
08643464 +0x04:  push   %ebx
08643465 +0x05:  sub    $0x10,%esp
08643468 +0x08:  mov    0x8(%ebp),%eax
0864346b +0x0b:  mov    %eax,(%esp)
0864346e +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
08643473 +0x13:  mov    0x8(%ebp),%eax
08643476 +0x16:  movl   $&_ZTV13TOD_UserState+0x8,(%eax)
0864347c +0x1c:  mov    0x8(%ebp),%eax
0864347f +0x1f:  add    $0x8,%eax
08643482 +0x22:  mov    %eax,(%esp)
08643485 +0x25:  call   08491f68 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x2c46>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x2c46
0864348a +0x2a:  jmp    086434a7 <+0x47>
0864348c +0x2c:  mov    %edx,%ebx
0864348e +0x2e:  mov    %eax,%esi
08643490 +0x30:  mov    0x8(%ebp),%eax
08643493 +0x33:  mov    %eax,(%esp)
08643496 +0x36:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0864349b +0x3b:  mov    %esi,%eax
0864349d +0x3d:  mov    %ebx,%edx
0864349f +0x3f:  mov    %eax,(%esp)
086434a2 +0x42:  call   08ae3750 <_Unwind_Resume>
086434a7 +0x47:  add    $0x10,%esp
086434aa +0x4a:  pop    %ebx
086434ab +0x4b:  pop    %esi
086434ac +0x4c:  pop    %ebp
086434ad +0x4d:  ret
```

## 反编译 C

```c
// TOD_UserState::TOD_UserState @ 0x8643460

/* TOD_UserState::TOD_UserState() */

void __thiscall TOD_UserState::TOD_UserState(TOD_UserState *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cec608;
                    /* try { // try from 08643485 to 08643489 has its CatchHandler @ 0864348c */
  SIG_REQUEST_TOD_USER_STATE::SIG_REQUEST_TOD_USER_STATE((SIG_REQUEST_TOD_USER_STATE *)(this + 8));
  return;
}
```
