# ~TotalMission

`_ZN12TotalMissionD0Ev`

`TotalMission::~TotalMission()`

| 类 | 地址 |
|---|---|
| `TotalMission` | `0x0816635a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816635a  _ZN12TotalMissionD0Ev
#           TotalMission::~TotalMission()
# range [0x0816635a, 0x08166377]
0816635a +0x00:  push   %ebp
0816635b +0x01:  mov    %esp,%ebp
0816635d +0x03:  sub    $0x18,%esp
08166360 +0x06:  mov    0x8(%ebp),%eax
08166363 +0x09:  mov    %eax,(%esp)
08166366 +0x0c:  call   0816632a <_ZN12TotalMissionD1Ev>  ; TotalMission::~TotalMission()
0816636b +0x11:  mov    0x8(%ebp),%eax
0816636e +0x14:  mov    %eax,(%esp)
08166371 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08166376 +0x1c:  leave
08166377 +0x1d:  ret
```

## 反编译 C

```c
// TotalMission::~TotalMission @ 0x816635a

/* TotalMission::~TotalMission() */

void __thiscall TotalMission::~TotalMission(TotalMission *this)

{
  ~TotalMission(this);
  operator_delete(this);
  return;
}
```
