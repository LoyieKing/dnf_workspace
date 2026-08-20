# StartEvent

`_GLOBAL__I__ZN22CEventAdvanceAltarOpen10StartEventEv`

`global constructors keyed to CEventAdvanceAltarOpen::StartEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CEventAdvanceAltarOpen` | `0x080e95c5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e95c5  _GLOBAL__I__ZN22CEventAdvanceAltarOpen10StartEventEv
#           global constructors keyed to CEventAdvanceAltarOpen::StartEvent()
# range [0x080e95c5, 0x080e962f]
080e95c5 +0x00:  push   %ebp
080e95c6 +0x01:  mov    %esp,%ebp
080e95c8 +0x03:  sub    $0x18,%esp
080e95cb +0x06:  movl   $0xffff,0x4(%esp)
080e95d3 +0x0e:  movl   $0x1,(%esp)
080e95da +0x15:  call   080e9585 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080e95df +0x1a:  leave
080e95e0 +0x1b:  ret
080e95e1 +0x1c:  nop
080e95e2 +0x1d:  push   %ebp
080e95e3 +0x1e:  mov    %esp,%ebp
080e95e5 +0x20:  sub    $0x18,%esp
080e95e8 +0x23:  mov    0x8(%ebp),%eax
080e95eb +0x26:  movl   $&_ZTV22CEventAdvanceAltarOpen+0x8,(%eax)
080e95f1 +0x2c:  mov    0x8(%ebp),%eax
080e95f4 +0x2f:  mov    %eax,(%esp)
080e95f7 +0x32:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080e95fc +0x37:  mov    $0x0,%eax
080e9601 +0x3c:  test   %al,%al
080e9603 +0x3e:  je     080e9610 <+0x4b>
080e9605 +0x40:  mov    0x8(%ebp),%eax
080e9608 +0x43:  mov    %eax,(%esp)
080e960b +0x46:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e9610 +0x4b:  leave
080e9611 +0x4c:  ret
080e9612 +0x4d:  push   %ebp
080e9613 +0x4e:  mov    %esp,%ebp
080e9615 +0x50:  sub    $0x18,%esp
080e9618 +0x53:  mov    0x8(%ebp),%eax
080e961b +0x56:  mov    %eax,(%esp)
080e961e +0x59:  call   080e95e2 <+0x1d>
080e9623 +0x5e:  mov    0x8(%ebp),%eax
080e9626 +0x61:  mov    %eax,(%esp)
080e9629 +0x64:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e962e +0x69:  leave
080e962f +0x6a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x80e95c5

/* CEventAdvanceAltarOpen::StartEvent() */

void CEventAdvanceAltarOpen::_GLOBAL__I_StartEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
