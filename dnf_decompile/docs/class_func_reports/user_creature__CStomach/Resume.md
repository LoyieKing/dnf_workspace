# Resume

`_ZN13user_creature8CStomach6ResumeEv`

`user_creature::CStomach::Resume()`

| 类 | 地址 |
|---|---|
| `user_creature::CStomach` | `0x08336e4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336e4c  _ZN13user_creature8CStomach6ResumeEv
#           user_creature::CStomach::Resume()
# range [0x08336e4c, 0x08336e65]
08336e4c +0x00:  push   %ebp
08336e4d +0x01:  mov    %esp,%ebp
08336e4f +0x03:  sub    $0x18,%esp
08336e52 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08336e59 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08336e5e +0x12:  mov    0x8(%ebp),%edx
08336e61 +0x15:  mov    %eax,(%edx)
08336e63 +0x17:  leave
08336e64 +0x18:  ret
08336e65 +0x19:  nop
```

## 反编译 C

```c
// user_creature::CStomach::Resume @ 0x8336e4c

/* user_creature::CStomach::Resume() */

void __thiscall user_creature::CStomach::Resume(CStomach *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)this = uVar1;
  return;
}
```
