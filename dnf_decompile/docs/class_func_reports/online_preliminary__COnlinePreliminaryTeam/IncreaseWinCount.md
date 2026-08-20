# IncreaseWinCount

`_ZN18online_preliminary22COnlinePreliminaryTeam16IncreaseWinCountEv`

`online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x085883fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085883fe  _ZN18online_preliminary22COnlinePreliminaryTeam16IncreaseWinCountEv
#           online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount()
# range [0x085883fe, 0x08588419]
085883fe +0x00:  push   %ebp
085883ff +0x01:  mov    %esp,%ebp
08588401 +0x03:  mov    0x8(%ebp),%eax
08588404 +0x06:  mov    0xc(%eax),%eax
08588407 +0x09:  lea    0x1(%eax),%edx
0858840a +0x0c:  mov    0x8(%ebp),%eax
0858840d +0x0f:  mov    %edx,0xc(%eax)
08588410 +0x12:  mov    0x8(%ebp),%eax
08588413 +0x15:  movb   $0x1,0x3c(%eax)
08588417 +0x19:  pop    %ebp
08588418 +0x1a:  ret
08588419 +0x1b:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount @ 0x85883fe

/* online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::IncreaseWinCount(COnlinePreliminaryTeam *this)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  this[0x3c] = (COnlinePreliminaryTeam)0x1;
  return;
}
```
