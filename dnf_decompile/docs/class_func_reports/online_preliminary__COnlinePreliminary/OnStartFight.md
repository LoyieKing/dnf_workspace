# OnStartFight

`_ZN18online_preliminary18COnlinePreliminary12OnStartFightEv`

`online_preliminary::COnlinePreliminary::OnStartFight()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561a52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561a52  _ZN18online_preliminary18COnlinePreliminary12OnStartFightEv
#           online_preliminary::COnlinePreliminary::OnStartFight()
# range [0x08561a52, 0x08561a6f]
08561a52 +0x00:  push   %ebp
08561a53 +0x01:  mov    %esp,%ebp
08561a55 +0x03:  sub    $0x18,%esp
08561a58 +0x06:  mov    0x8(%ebp),%eax
08561a5b +0x09:  movl   $0x5,0x4(%eax)
08561a62 +0x10:  mov    0x8(%ebp),%eax
08561a65 +0x13:  mov    %eax,(%esp)
08561a68 +0x16:  call   085605ee <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv>  ; online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount()
08561a6d +0x1b:  leave
08561a6e +0x1c:  ret
08561a6f +0x1d:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnStartFight @ 0x8561a52

/* online_preliminary::COnlinePreliminary::OnStartFight() */

void __thiscall online_preliminary::COnlinePreliminary::OnStartFight(COnlinePreliminary *this)

{
  *(undefined4 *)(this + 4) = 5;
  _IncreaseEachOtherPlayCount(this);
  return;
}
```
