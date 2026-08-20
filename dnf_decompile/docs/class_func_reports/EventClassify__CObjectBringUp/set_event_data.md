# set_event_data

`_ZN13EventClassify14CObjectBringUp14set_event_dataEiP17InGameEventScript`

`EventClassify::CObjectBringUp::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CObjectBringUp` | `0x0810fcb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fcb2  _ZN13EventClassify14CObjectBringUp14set_event_dataEiP17InGameEventScript
#           EventClassify::CObjectBringUp::set_event_data(int, InGameEventScript*)
# range [0x0810fcb2, 0x0810fcdb]
0810fcb2 +0x00:  push   %ebp
0810fcb3 +0x01:  mov    %esp,%ebp
0810fcb5 +0x03:  sub    $0x18,%esp
0810fcb8 +0x06:  mov    0x8(%ebp),%eax
0810fcbb +0x09:  mov    (%eax),%eax
0810fcbd +0x0b:  add    $0x18,%eax
0810fcc0 +0x0e:  mov    (%eax),%ecx
0810fcc2 +0x10:  mov    0x8(%ebp),%eax
0810fcc5 +0x13:  mov    0xc(%ebp),%edx
0810fcc8 +0x16:  mov    %edx,0x4(%esp)
0810fccc +0x1a:  mov    %eax,(%esp)
0810fccf +0x1d:  call   *%ecx
0810fcd1 +0x1f:  mov    0x10(%ebp),%edx
0810fcd4 +0x22:  mov    0x8(%ebp),%eax
0810fcd7 +0x25:  mov    %edx,0x1c(%eax)
0810fcda +0x28:  leave
0810fcdb +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CObjectBringUp::set_event_data @ 0x810fcb2

/* EventClassify::CObjectBringUp::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CObjectBringUp::set_event_data
          (CObjectBringUp *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
