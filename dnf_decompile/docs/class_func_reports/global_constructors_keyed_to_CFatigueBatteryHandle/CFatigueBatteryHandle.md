# CFatigueBatteryHandle

`_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev`

`global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CFatigueBatteryHandle` | `0x084a849a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a849a  _GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev
#           global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()
# range [0x084a849a, 0x084a859f]
084a849a +0x000:  push   %ebp
084a849b +0x001:  mov    %esp,%ebp
084a849d +0x003:  sub    $0x18,%esp
084a84a0 +0x006:  movl   $0xffff,0x4(%esp)
084a84a8 +0x00e:  movl   $0x1,(%esp)
084a84af +0x015:  call   084a845a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084a84b4 +0x01a:  leave
084a84b5 +0x01b:  ret
084a84b6 +0x01c:  push   %ebp
084a84b7 +0x01d:  mov    %esp,%ebp
084a84b9 +0x01f:  mov    0xc(%ebp),%eax
084a84bc +0x022:  lea    -0x1(%eax),%edx
084a84bf +0x025:  mov    0x8(%ebp),%eax
084a84c2 +0x028:  movzbl 0x10(%eax),%eax
084a84c6 +0x02c:  movzbl %al,%eax
084a84c9 +0x02f:  cmp    %eax,%edx
084a84cb +0x031:  jg     084a84d3 <+0x39>
084a84cd +0x033:  cmpl   $0x0,0xc(%ebp)
084a84d1 +0x037:  jg     084a84da <+0x40>
084a84d3 +0x039:  mov    $0x0,%eax
084a84d8 +0x03e:  jmp    084a84eb <+0x51>
084a84da +0x040:  mov    0xc(%ebp),%eax
084a84dd +0x043:  lea    -0x1(%eax),%edx
084a84e0 +0x046:  mov    0x8(%ebp),%eax
084a84e3 +0x049:  add    $0x8,%edx
084a84e6 +0x04c:  movzwl 0x2(%eax,%edx,2),%eax
084a84eb +0x051:  pop    %ebp
084a84ec +0x052:  ret
084a84ed +0x053:  nop
084a84ee +0x054:  push   %ebp
084a84ef +0x055:  mov    %esp,%ebp
084a84f1 +0x057:  sub    $0x18,%esp
084a84f4 +0x05a:  mov    0x8(%ebp),%eax
084a84f7 +0x05d:  movl   $0x11,0x8(%esp)
084a84ff +0x065:  movl   $0xc4a,0x4(%esp)
084a8507 +0x06d:  mov    %eax,(%esp)
084a850a +0x070:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
084a850f +0x075:  mov    0x8(%ebp),%eax
084a8512 +0x078:  movb   $0x0,0xa(%eax)
084a8516 +0x07c:  mov    0x8(%ebp),%eax
084a8519 +0x07f:  movl   $0x0,0xb(%eax)
084a8520 +0x086:  mov    0x8(%ebp),%eax
084a8523 +0x089:  movw   $0x0,0xf(%eax)
084a8529 +0x08f:  leave
084a852a +0x090:  ret
084a852b +0x091:  nop
084a852c +0x092:  push   %ebp
084a852d +0x093:  mov    %esp,%ebp
084a852f +0x095:  mov    0x8(%ebp),%eax
084a8532 +0x098:  mov    0x10(%eax),%eax
084a8535 +0x09b:  test   %eax,%eax
084a8537 +0x09d:  je     084a8545 <+0xab>
084a8539 +0x09f:  mov    0x8(%ebp),%eax
084a853c +0x0a2:  mov    0x10(%eax),%eax
084a853f +0x0a5:  movzwl 0x37(%eax),%eax
084a8543 +0x0a9:  jmp    084a854a <+0xb0>
084a8545 +0x0ab:  mov    $0x0,%eax
084a854a +0x0b0:  pop    %ebp
084a854b +0x0b1:  ret
084a854c +0x0b2:  push   %ebp
084a854d +0x0b3:  mov    %esp,%ebp
084a854f +0x0b5:  sub    $0x28,%esp
084a8552 +0x0b8:  mov    0xc(%ebp),%eax
084a8555 +0x0bb:  mov    %ax,-0xc(%ebp)
084a8559 +0x0bf:  mov    0x8(%ebp),%eax
084a855c +0x0c2:  mov    0x10(%eax),%eax
084a855f +0x0c5:  test   %eax,%eax
084a8561 +0x0c7:  je     084a857c <+0xe2>
084a8563 +0x0c9:  mov    0x8(%ebp),%eax
084a8566 +0x0cc:  mov    %eax,(%esp)
084a8569 +0x0cf:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
084a856e +0x0d4:  mov    0x8(%ebp),%eax
084a8571 +0x0d7:  mov    0x10(%eax),%eax
084a8574 +0x0da:  movzwl -0xc(%ebp),%edx
084a8578 +0x0de:  mov    %dx,0x37(%eax)
084a857c +0x0e2:  leave
084a857d +0x0e3:  ret
084a857e +0x0e4:  push   %ebp
084a857f +0x0e5:  mov    %esp,%ebp
084a8581 +0x0e7:  mov    0x8(%ebp),%eax
084a8584 +0x0ea:  mov    0x10(%eax),%eax
084a8587 +0x0ed:  test   %eax,%eax
084a8589 +0x0ef:  je     084a8597 <+0xfd>
084a858b +0x0f1:  mov    0x8(%ebp),%eax
084a858e +0x0f4:  mov    0x10(%eax),%eax
084a8591 +0x0f7:  movzwl 0x4f(%eax),%eax
084a8595 +0x0fb:  jmp    084a859c <+0x102>
084a8597 +0x0fd:  mov    $0x0,%eax
084a859c +0x102:  pop    %ebp
084a859d +0x103:  ret
084a859e +0x104:  nop
084a859f +0x105:  nop
```

## 反编译 C

```c
// <global>::global @ 0x84a849a

/* CFatigueBatteryHandle::CFatigueBatteryHandle() */

void CFatigueBatteryHandle::_GLOBAL__I_CFatigueBatteryHandle(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
