# GiveMeBoxReward

`_ZN5CUser15GiveMeBoxRewardEv`

`CUser::GiveMeBoxReward()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08693758` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08693758  _ZN5CUser15GiveMeBoxRewardEv
#           CUser::GiveMeBoxReward()
# range [0x08693758, 0x0869376a]
08693758 +0x00:  push   %ebp
08693759 +0x01:  mov    %esp,%ebp
0869375b +0x03:  sub    $0x18,%esp
0869375e +0x06:  mov    0x8(%ebp),%eax
08693761 +0x09:  mov    %eax,(%esp)
08693764 +0x0c:  call   0815d2c8 <_ZN26DBInsertGiveBoxEventReward11makeRequestEP5CUser>  ; DBInsertGiveBoxEventReward::makeRequest(CUser*)
08693769 +0x11:  leave
0869376a +0x12:  ret
```

## 反编译 C

```c
// CUser::GiveMeBoxReward @ 0x8693758

/* CUser::GiveMeBoxReward() */

void __thiscall CUser::GiveMeBoxReward(CUser *this)

{
  DBInsertGiveBoxEventReward::makeRequest(this);
  return;
}
```
