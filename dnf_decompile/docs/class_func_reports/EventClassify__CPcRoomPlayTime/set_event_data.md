# set_event_data

`_ZN13EventClassify15CPcRoomPlayTime14set_event_dataEiP17InGameEventScript`

`EventClassify::CPcRoomPlayTime::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CPcRoomPlayTime` | `0x08110872` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08110872  _ZN13EventClassify15CPcRoomPlayTime14set_event_dataEiP17InGameEventScript
#           EventClassify::CPcRoomPlayTime::set_event_data(int, InGameEventScript*)
# range [0x08110872, 0x0811089b]
08110872 +0x00:  push   %ebp
08110873 +0x01:  mov    %esp,%ebp
08110875 +0x03:  sub    $0x18,%esp
08110878 +0x06:  mov    0x8(%ebp),%eax
0811087b +0x09:  mov    (%eax),%eax
0811087d +0x0b:  add    $0x18,%eax
08110880 +0x0e:  mov    (%eax),%ecx
08110882 +0x10:  mov    0x8(%ebp),%eax
08110885 +0x13:  mov    0xc(%ebp),%edx
08110888 +0x16:  mov    %edx,0x4(%esp)
0811088c +0x1a:  mov    %eax,(%esp)
0811088f +0x1d:  call   *%ecx
08110891 +0x1f:  mov    0x10(%ebp),%edx
08110894 +0x22:  mov    0x8(%ebp),%eax
08110897 +0x25:  mov    %edx,0x1c(%eax)
0811089a +0x28:  leave
0811089b +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CPcRoomPlayTime::set_event_data @ 0x8110872

/* EventClassify::CPcRoomPlayTime::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CPcRoomPlayTime::set_event_data
          (CPcRoomPlayTime *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
