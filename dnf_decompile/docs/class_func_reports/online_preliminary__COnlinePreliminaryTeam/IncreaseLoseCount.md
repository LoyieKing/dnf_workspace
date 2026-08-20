# IncreaseLoseCount

`_ZN18online_preliminary22COnlinePreliminaryTeam17IncreaseLoseCountEv`

`online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x0858841a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858841a  _ZN18online_preliminary22COnlinePreliminaryTeam17IncreaseLoseCountEv
#           online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount()
# range [0x0858841a, 0x08588435]
0858841a +0x00:  push   %ebp
0858841b +0x01:  mov    %esp,%ebp
0858841d +0x03:  mov    0x8(%ebp),%eax
08588420 +0x06:  mov    0x10(%eax),%eax
08588423 +0x09:  lea    0x1(%eax),%edx
08588426 +0x0c:  mov    0x8(%ebp),%eax
08588429 +0x0f:  mov    %edx,0x10(%eax)
0858842c +0x12:  mov    0x8(%ebp),%eax
0858842f +0x15:  movb   $0x1,0x3c(%eax)
08588433 +0x19:  pop    %ebp
08588434 +0x1a:  ret
08588435 +0x1b:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount @ 0x858841a

/* online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount() */

void __thiscall
online_preliminary::COnlinePreliminaryTeam::IncreaseLoseCount(COnlinePreliminaryTeam *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  this[0x3c] = (COnlinePreliminaryTeam)0x1;
  return;
}
```
