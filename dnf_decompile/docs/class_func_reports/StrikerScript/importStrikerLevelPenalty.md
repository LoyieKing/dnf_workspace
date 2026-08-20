# importStrikerLevelPenalty

`_ZN13StrikerScript25importStrikerLevelPenaltyEv`

`StrikerScript::importStrikerLevelPenalty()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e628` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e628  _ZN13StrikerScript25importStrikerLevelPenaltyEv
#           StrikerScript::importStrikerLevelPenalty()
# range [0x08a9e628, 0x08a9e653]
08a9e628 +0x00:  push   %ebp
08a9e629 +0x01:  mov    %esp,%ebp
08a9e62b +0x03:  sub    $0x18,%esp
08a9e62e +0x06:  movl   $0x0,(%esp)
08a9e635 +0x0d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e63a +0x12:  mov    0x8(%ebp),%edx
08a9e63d +0x15:  mov    %eax,0x64(%edx)
08a9e640 +0x18:  movl   $0x0,(%esp)
08a9e647 +0x1f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e64c +0x24:  mov    0x8(%ebp),%edx
08a9e64f +0x27:  mov    %eax,0x68(%edx)
08a9e652 +0x2a:  leave
08a9e653 +0x2b:  ret
```

## 反编译 C

```c
// StrikerScript::importStrikerLevelPenalty @ 0x8a9e628

/* StrikerScript::importStrikerLevelPenalty() */

void __thiscall StrikerScript::importStrikerLevelPenalty(StrikerScript *this)

{
  undefined4 uVar1;
  
  uVar1 = ScanInt((bool *)0x0);
  *(undefined4 *)(this + 100) = uVar1;
  uVar1 = ScanInt((bool *)0x0);
  *(undefined4 *)(this + 0x68) = uVar1;
  return;
}
```
