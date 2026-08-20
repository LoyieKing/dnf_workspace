# OnDestroyRoom

`_ZN8fair_pvp10CFairMatch13OnDestroyRoomEP5CUser`

`fair_pvp::CFairMatch::OnDestroyRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562dc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562dc6  _ZN8fair_pvp10CFairMatch13OnDestroyRoomEP5CUser
#           fair_pvp::CFairMatch::OnDestroyRoom(CUser*)
# range [0x08562dc6, 0x08562df5]
08562dc6 +0x00:  push   %ebp
08562dc7 +0x01:  mov    %esp,%ebp
08562dc9 +0x03:  sub    $0x18,%esp
08562dcc +0x06:  mov    0x8(%ebp),%eax
08562dcf +0x09:  movl   $0x0,0x4(%eax)
08562dd6 +0x10:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08562ddb +0x15:  mov    (%eax),%eax
08562ddd +0x17:  add    $0x4,%eax
08562de0 +0x1a:  mov    (%eax),%ecx
08562de2 +0x1c:  mov    0x8(%ebp),%edx
08562de5 +0x1f:  mov    &_ZN8fair_pvp10CFairMatch17pWaitingRoomList_E,%eax
08562dea +0x24:  mov    %edx,0x4(%esp)
08562dee +0x28:  mov    %eax,(%esp)
08562df1 +0x2b:  call   *%ecx
08562df3 +0x2d:  leave
08562df4 +0x2e:  ret
08562df5 +0x2f:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnDestroyRoom @ 0x8562dc6

/* fair_pvp::CFairMatch::OnDestroyRoom(CUser*) */

void fair_pvp::CFairMatch::OnDestroyRoom(CUser *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}
```
