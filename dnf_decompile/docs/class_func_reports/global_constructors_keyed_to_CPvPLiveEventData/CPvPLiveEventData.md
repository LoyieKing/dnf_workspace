# CPvPLiveEventData

`_GLOBAL__I__ZN17CPvPLiveEventDataC2Ev`

`global constructors keyed to CPvPLiveEventData::CPvPLiveEventData()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPvPLiveEventData` | `0x082694dd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082694dd  _GLOBAL__I__ZN17CPvPLiveEventDataC2Ev
#           global constructors keyed to CPvPLiveEventData::CPvPLiveEventData()
# range [0x082694dd, 0x08269517]
082694dd +0x00:  push   %ebp
082694de +0x01:  mov    %esp,%ebp
082694e0 +0x03:  sub    $0x18,%esp
082694e3 +0x06:  movl   $0xffff,0x4(%esp)
082694eb +0x0e:  movl   $0x1,(%esp)
082694f2 +0x15:  call   0826949d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082694f7 +0x1a:  leave
082694f8 +0x1b:  ret
082694f9 +0x1c:  nop
082694fa +0x1d:  push   %ebp
082694fb +0x1e:  mov    %esp,%ebp
082694fd +0x20:  mov    0x8(%ebp),%eax
08269500 +0x23:  add    $0xa0,%eax
08269505 +0x28:  pop    %ebp
08269506 +0x29:  ret
08269507 +0x2a:  nop
08269508 +0x2b:  push   %ebp
08269509 +0x2c:  mov    %esp,%ebp
0826950b +0x2e:  mov    0x8(%ebp),%eax
0826950e +0x31:  mov    0xac(%eax),%eax
08269514 +0x37:  pop    %ebp
08269515 +0x38:  ret
08269516 +0x39:  nop
08269517 +0x3a:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82694dd

/* CPvPLiveEventData::CPvPLiveEventData() */

void CPvPLiveEventData::_GLOBAL__I_CPvPLiveEventData(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
