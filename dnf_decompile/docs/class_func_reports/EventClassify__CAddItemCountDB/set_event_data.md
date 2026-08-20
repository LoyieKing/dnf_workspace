# set_event_data

`_ZN13EventClassify15CAddItemCountDB14set_event_dataEiP17InGameEventScript`

`EventClassify::CAddItemCountDB::set_event_data(int, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAddItemCountDB` | `0x0810e064` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e064  _ZN13EventClassify15CAddItemCountDB14set_event_dataEiP17InGameEventScript
#           EventClassify::CAddItemCountDB::set_event_data(int, InGameEventScript*)
# range [0x0810e064, 0x0810e08d]
0810e064 +0x00:  push   %ebp
0810e065 +0x01:  mov    %esp,%ebp
0810e067 +0x03:  sub    $0x18,%esp
0810e06a +0x06:  mov    0x8(%ebp),%eax
0810e06d +0x09:  mov    (%eax),%eax
0810e06f +0x0b:  add    $0x18,%eax
0810e072 +0x0e:  mov    (%eax),%ecx
0810e074 +0x10:  mov    0x8(%ebp),%eax
0810e077 +0x13:  mov    0xc(%ebp),%edx
0810e07a +0x16:  mov    %edx,0x4(%esp)
0810e07e +0x1a:  mov    %eax,(%esp)
0810e081 +0x1d:  call   *%ecx
0810e083 +0x1f:  mov    0x10(%ebp),%edx
0810e086 +0x22:  mov    0x8(%ebp),%eax
0810e089 +0x25:  mov    %edx,0x1c(%eax)
0810e08c +0x28:  leave
0810e08d +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CAddItemCountDB::set_event_data @ 0x810e064

/* EventClassify::CAddItemCountDB::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAddItemCountDB::set_event_data
          (CAddItemCountDB *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}
```
