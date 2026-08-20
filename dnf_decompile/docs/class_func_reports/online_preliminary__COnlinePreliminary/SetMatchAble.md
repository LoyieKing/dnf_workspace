# SetMatchAble

`_ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb`

`online_preliminary::COnlinePreliminary::SetMatchAble(bool)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085608da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085608da  _ZN18online_preliminary18COnlinePreliminary12SetMatchAbleEb
#           online_preliminary::COnlinePreliminary::SetMatchAble(bool)
# range [0x085608da, 0x085608f1]
085608da +0x00:  push   %ebp
085608db +0x01:  mov    %esp,%ebp
085608dd +0x03:  sub    $0x4,%esp
085608e0 +0x06:  mov    0x8(%ebp),%eax
085608e3 +0x09:  mov    %al,-0x4(%ebp)
085608e6 +0x0c:  movzbl -0x4(%ebp),%eax
085608ea +0x10:  mov    %al,&_ZN18online_preliminary18COnlinePreliminary11bMatchable_E
085608ef +0x15:  leave
085608f0 +0x16:  ret
085608f1 +0x17:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::SetMatchAble @ 0x85608da

/* online_preliminary::COnlinePreliminary::SetMatchAble(bool) */

void online_preliminary::COnlinePreliminary::SetMatchAble(bool param_1)

{
  bMatchable_ = param_1;
  return;
}
```
