# kRewardItem_

`_GLOBAL__I__ZN14EventGiveMeBox12kRewardItem_E`

`global constructors keyed to EventGiveMeBox::kRewardItem_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to EventGiveMeBox` | `0x08164b4f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164b4f  _GLOBAL__I__ZN14EventGiveMeBox12kRewardItem_E
#           global constructors keyed to EventGiveMeBox::kRewardItem_
# range [0x08164b4f, 0x08164b6b]
08164b4f +0x00:  push   %ebp
08164b50 +0x01:  mov    %esp,%ebp
08164b52 +0x03:  sub    $0x18,%esp
08164b55 +0x06:  movl   $0xffff,0x4(%esp)
08164b5d +0x0e:  movl   $0x1,(%esp)
08164b64 +0x15:  call   08164b0f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08164b69 +0x1a:  leave
08164b6a +0x1b:  ret
08164b6b +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8164b4f

/* EventGiveMeBox::kRewardItem_ */

void EventGiveMeBox::_GLOBAL__I_kRewardItem_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
