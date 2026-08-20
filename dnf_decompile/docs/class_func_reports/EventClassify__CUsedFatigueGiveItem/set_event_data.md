# set_event_data

`_ZN13EventClassify20CUsedFatigueGiveItem14set_event_dataEiP17InGameEventScript`

`EventClassify::CUsedFatigueGiveItem::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CUsedFatigueGiveItem` | `0x081105be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081105be  _ZN13EventClassify20CUsedFatigueGiveItem14set_event_dataEiP17InGameEventScript
#           EventClassify::CUsedFatigueGiveItem::set_event_data(int, InGameEventScript*)
# range [0x081105be, 0x081105e7]
081105be +0x00:  push   %ebp
081105bf +0x01:  mov    %esp,%ebp
081105c1 +0x03:  sub    $0x18,%esp
081105c4 +0x06:  mov    0x8(%ebp),%eax
081105c7 +0x09:  mov    (%eax),%eax
081105c9 +0x0b:  add    $0x18,%eax
081105cc +0x0e:  mov    (%eax),%ecx
081105ce +0x10:  mov    0x8(%ebp),%eax
081105d1 +0x13:  mov    0xc(%ebp),%edx
081105d4 +0x16:  mov    %edx,0x4(%esp)
081105d8 +0x1a:  mov    %eax,(%esp)
081105db +0x1d:  call   *%ecx
081105dd +0x1f:  mov    0x10(%ebp),%edx
081105e0 +0x22:  mov    0x8(%ebp),%eax
081105e3 +0x25:  mov    %edx,0x1c(%eax)
081105e6 +0x28:  leave
081105e7 +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CUsedFatigueGiveItem::set_event_data @ 0x81105be

/* EventClassify::CUsedFatigueGiveItem::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CUsedFatigueGiveItem::set_event_data
          (CUsedFatigueGiveItem *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
