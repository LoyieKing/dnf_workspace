# set_event_data

`_ZN13EventClassify18CAccountFirstLogin14set_event_dataEiP17InGameEventScript`

`EventClassify::CAccountFirstLogin::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAccountFirstLogin` | `0x0810deda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810deda  _ZN13EventClassify18CAccountFirstLogin14set_event_dataEiP17InGameEventScript
#           EventClassify::CAccountFirstLogin::set_event_data(int, InGameEventScript*)
# range [0x0810deda, 0x0810df03]
0810deda +0x00:  push   %ebp
0810dedb +0x01:  mov    %esp,%ebp
0810dedd +0x03:  sub    $0x18,%esp
0810dee0 +0x06:  mov    0x8(%ebp),%eax
0810dee3 +0x09:  mov    (%eax),%eax
0810dee5 +0x0b:  add    $0x18,%eax
0810dee8 +0x0e:  mov    (%eax),%ecx
0810deea +0x10:  mov    0x8(%ebp),%eax
0810deed +0x13:  mov    0xc(%ebp),%edx
0810def0 +0x16:  mov    %edx,0x4(%esp)
0810def4 +0x1a:  mov    %eax,(%esp)
0810def7 +0x1d:  call   *%ecx
0810def9 +0x1f:  mov    0x10(%ebp),%edx
0810defc +0x22:  mov    0x8(%ebp),%eax
0810deff +0x25:  mov    %edx,0x1c(%eax)
0810df02 +0x28:  leave
0810df03 +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CAccountFirstLogin::set_event_data @ 0x810deda

/* EventClassify::CAccountFirstLogin::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAccountFirstLogin::set_event_data
          (CAccountFirstLogin *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
