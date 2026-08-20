# is_recv_check_item

`_ZN13EventClassify14CLevelUpReward18is_recv_check_itemEv`

`EventClassify::CLevelUpReward::is_recv_check_item()`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e2f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e2f2  _ZN13EventClassify14CLevelUpReward18is_recv_check_itemEv
#           EventClassify::CLevelUpReward::is_recv_check_item()
# range [0x0810e2f2, 0x0810e301]
0810e2f2 +0x00:  push   %ebp
0810e2f3 +0x01:  mov    %esp,%ebp
0810e2f5 +0x03:  mov    0x8(%ebp),%eax
0810e2f8 +0x06:  mov    0x1c(%eax),%eax
0810e2fb +0x09:  movzbl 0x8(%eax),%eax
0810e2ff +0x0d:  pop    %ebp
0810e300 +0x0e:  ret
0810e301 +0x0f:  nop
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::is_recv_check_item @ 0x810e2f2

/* EventClassify::CLevelUpReward::is_recv_check_item() */

undefined1 __thiscall EventClassify::CLevelUpReward::is_recv_check_item(CLevelUpReward *this)

{
  return *(undefined1 *)(*(int *)(this + 0x1c) + 8);
}
```
