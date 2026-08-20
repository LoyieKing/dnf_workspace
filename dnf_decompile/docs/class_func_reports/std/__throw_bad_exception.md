# __throw_bad_exception

`_ZSt21__throw_bad_exceptionv`

`std::__throw_bad_exception()`

| 类 | 地址 |
|---|---|
| `std` | `0x086d9420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9420  _ZSt21__throw_bad_exceptionv
#           std::__throw_bad_exception()
# range [0x086d9420, 0x086d95df]
086d9420 +0x000:  push   %ebp
086d9421 +0x001:  mov    %esp,%ebp
086d9423 +0x003:  sub    $0x18,%esp
086d9426 +0x006:  movl   $0x4,(%esp)
086d942d +0x00d:  call   08725800 <__cxa_allocate_exception>
086d9432 +0x012:  movl   $&_ZTVSt13bad_exception+0x8,(%eax)
086d9438 +0x018:  movl   $&_ZNSt13bad_exceptionD1Ev,0x8(%esp)
086d9440 +0x020:  movl   $&_ZTISt13bad_exception,0x4(%esp)
086d9448 +0x028:  mov    %eax,(%esp)
086d944b +0x02b:  call   08724c50 <__cxa_throw>
086d9450 +0x030:  push   %ebp
086d9451 +0x031:  mov    %esp,%ebp
086d9453 +0x033:  sub    $0x8,%esp
086d9456 +0x036:  mov    0x8(%ebp),%eax
086d9459 +0x039:  movl   $&_ZTVSt15underflow_error+0x8,(%eax)
086d945f +0x03f:  leave
086d9460 +0x040:  jmp    086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086d9465 +0x045:  nop
086d9466 +0x046:  nop
086d9467 +0x047:  nop
086d9468 +0x048:  nop
086d9469 +0x049:  nop
086d946a +0x04a:  nop
086d946b +0x04b:  nop
086d946c +0x04c:  nop
086d946d +0x04d:  nop
086d946e +0x04e:  nop
086d946f +0x04f:  nop
086d9470 +0x050:  push   %ebp
086d9471 +0x051:  mov    %esp,%ebp
086d9473 +0x053:  sub    $0x8,%esp
086d9476 +0x056:  mov    0x8(%ebp),%eax
086d9479 +0x059:  movl   $&_ZTVSt14overflow_error+0x8,(%eax)
086d947f +0x05f:  leave
086d9480 +0x060:  jmp    086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086d9485 +0x065:  nop
086d9486 +0x066:  nop
086d9487 +0x067:  nop
086d9488 +0x068:  nop
086d9489 +0x069:  nop
086d948a +0x06a:  nop
086d948b +0x06b:  nop
086d948c +0x06c:  nop
086d948d +0x06d:  nop
086d948e +0x06e:  nop
086d948f +0x06f:  nop
086d9490 +0x070:  push   %ebp
086d9491 +0x071:  mov    %esp,%ebp
086d9493 +0x073:  sub    $0x8,%esp
086d9496 +0x076:  mov    0x8(%ebp),%eax
086d9499 +0x079:  movl   $&_ZTVSt11range_error+0x8,(%eax)
086d949f +0x07f:  leave
086d94a0 +0x080:  jmp    086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086d94a5 +0x085:  nop
086d94a6 +0x086:  nop
086d94a7 +0x087:  nop
086d94a8 +0x088:  nop
086d94a9 +0x089:  nop
086d94aa +0x08a:  nop
086d94ab +0x08b:  nop
086d94ac +0x08c:  nop
086d94ad +0x08d:  nop
086d94ae +0x08e:  nop
086d94af +0x08f:  nop
086d94b0 +0x090:  push   %ebp
086d94b1 +0x091:  mov    %esp,%ebp
086d94b3 +0x093:  sub    $0x8,%esp
086d94b6 +0x096:  mov    0x8(%ebp),%eax
086d94b9 +0x099:  movl   $&_ZTVSt12length_error+0x8,(%eax)
086d94bf +0x09f:  leave
086d94c0 +0x0a0:  jmp    086dd3d0 <_ZNSt11logic_errorD1Ev>  ; std::logic_error::~logic_error()
086d94c5 +0x0a5:  nop
086d94c6 +0x0a6:  nop
086d94c7 +0x0a7:  nop
086d94c8 +0x0a8:  nop
086d94c9 +0x0a9:  nop
086d94ca +0x0aa:  nop
086d94cb +0x0ab:  nop
086d94cc +0x0ac:  nop
086d94cd +0x0ad:  nop
086d94ce +0x0ae:  nop
086d94cf +0x0af:  nop
086d94d0 +0x0b0:  push   %ebp
086d94d1 +0x0b1:  mov    %esp,%ebp
086d94d3 +0x0b3:  sub    $0x8,%esp
086d94d6 +0x0b6:  mov    0x8(%ebp),%eax
086d94d9 +0x0b9:  movl   $&_ZTVSt12domain_error+0x8,(%eax)
086d94df +0x0bf:  leave
086d94e0 +0x0c0:  jmp    086dd3d0 <_ZNSt11logic_errorD1Ev>  ; std::logic_error::~logic_error()
086d94e5 +0x0c5:  nop
086d94e6 +0x0c6:  nop
086d94e7 +0x0c7:  nop
086d94e8 +0x0c8:  nop
086d94e9 +0x0c9:  nop
086d94ea +0x0ca:  nop
086d94eb +0x0cb:  nop
086d94ec +0x0cc:  nop
086d94ed +0x0cd:  nop
086d94ee +0x0ce:  nop
086d94ef +0x0cf:  nop
086d94f0 +0x0d0:  push   %ebp
086d94f1 +0x0d1:  mov    %esp,%ebp
086d94f3 +0x0d3:  push   %ebx
086d94f4 +0x0d4:  sub    $0x14,%esp
086d94f7 +0x0d7:  mov    0x8(%ebp),%ebx
086d94fa +0x0da:  movl   $&_ZTVSt15underflow_error+0x8,(%ebx)
086d9500 +0x0e0:  mov    %ebx,(%esp)
086d9503 +0x0e3:  call   086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086d9508 +0x0e8:  mov    %ebx,0x8(%ebp)
086d950b +0x0eb:  add    $0x14,%esp
086d950e +0x0ee:  pop    %ebx
086d950f +0x0ef:  pop    %ebp
086d9510 +0x0f0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086d9515 +0x0f5:  nop
086d9516 +0x0f6:  nop
086d9517 +0x0f7:  nop
086d9518 +0x0f8:  nop
086d9519 +0x0f9:  nop
086d951a +0x0fa:  nop
086d951b +0x0fb:  nop
086d951c +0x0fc:  nop
086d951d +0x0fd:  nop
086d951e +0x0fe:  nop
086d951f +0x0ff:  nop
086d9520 +0x100:  push   %ebp
086d9521 +0x101:  mov    %esp,%ebp
086d9523 +0x103:  push   %ebx
086d9524 +0x104:  sub    $0x14,%esp
086d9527 +0x107:  mov    0x8(%ebp),%ebx
086d952a +0x10a:  movl   $&_ZTVSt12domain_error+0x8,(%ebx)
086d9530 +0x110:  mov    %ebx,(%esp)
086d9533 +0x113:  call   086dd3d0 <_ZNSt11logic_errorD1Ev>  ; std::logic_error::~logic_error()
086d9538 +0x118:  mov    %ebx,0x8(%ebp)
086d953b +0x11b:  add    $0x14,%esp
086d953e +0x11e:  pop    %ebx
086d953f +0x11f:  pop    %ebp
086d9540 +0x120:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086d9545 +0x125:  nop
086d9546 +0x126:  nop
086d9547 +0x127:  nop
086d9548 +0x128:  nop
086d9549 +0x129:  nop
086d954a +0x12a:  nop
086d954b +0x12b:  nop
086d954c +0x12c:  nop
086d954d +0x12d:  nop
086d954e +0x12e:  nop
086d954f +0x12f:  nop
086d9550 +0x130:  push   %ebp
086d9551 +0x131:  mov    %esp,%ebp
086d9553 +0x133:  push   %ebx
086d9554 +0x134:  sub    $0x14,%esp
086d9557 +0x137:  mov    0x8(%ebp),%ebx
086d955a +0x13a:  movl   $&_ZTVSt12length_error+0x8,(%ebx)
086d9560 +0x140:  mov    %ebx,(%esp)
086d9563 +0x143:  call   086dd3d0 <_ZNSt11logic_errorD1Ev>  ; std::logic_error::~logic_error()
086d9568 +0x148:  mov    %ebx,0x8(%ebp)
086d956b +0x14b:  add    $0x14,%esp
086d956e +0x14e:  pop    %ebx
086d956f +0x14f:  pop    %ebp
086d9570 +0x150:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086d9575 +0x155:  nop
086d9576 +0x156:  nop
086d9577 +0x157:  nop
086d9578 +0x158:  nop
086d9579 +0x159:  nop
086d957a +0x15a:  nop
086d957b +0x15b:  nop
086d957c +0x15c:  nop
086d957d +0x15d:  nop
086d957e +0x15e:  nop
086d957f +0x15f:  nop
086d9580 +0x160:  push   %ebp
086d9581 +0x161:  mov    %esp,%ebp
086d9583 +0x163:  push   %ebx
086d9584 +0x164:  sub    $0x14,%esp
086d9587 +0x167:  mov    0x8(%ebp),%ebx
086d958a +0x16a:  movl   $&_ZTVSt11range_error+0x8,(%ebx)
086d9590 +0x170:  mov    %ebx,(%esp)
086d9593 +0x173:  call   086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086d9598 +0x178:  mov    %ebx,0x8(%ebp)
086d959b +0x17b:  add    $0x14,%esp
086d959e +0x17e:  pop    %ebx
086d959f +0x17f:  pop    %ebp
086d95a0 +0x180:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086d95a5 +0x185:  nop
086d95a6 +0x186:  nop
086d95a7 +0x187:  nop
086d95a8 +0x188:  nop
086d95a9 +0x189:  nop
086d95aa +0x18a:  nop
086d95ab +0x18b:  nop
086d95ac +0x18c:  nop
086d95ad +0x18d:  nop
086d95ae +0x18e:  nop
086d95af +0x18f:  nop
086d95b0 +0x190:  push   %ebp
086d95b1 +0x191:  mov    %esp,%ebp
086d95b3 +0x193:  push   %ebx
086d95b4 +0x194:  sub    $0x14,%esp
086d95b7 +0x197:  mov    0x8(%ebp),%ebx
086d95ba +0x19a:  movl   $&_ZTVSt14overflow_error+0x8,(%ebx)
086d95c0 +0x1a0:  mov    %ebx,(%esp)
086d95c3 +0x1a3:  call   086dd350 <_ZNSt13runtime_errorD1Ev>  ; std::runtime_error::~runtime_error()
086d95c8 +0x1a8:  mov    %ebx,0x8(%ebp)
086d95cb +0x1ab:  add    $0x14,%esp
086d95ce +0x1ae:  pop    %ebx
086d95cf +0x1af:  pop    %ebp
086d95d0 +0x1b0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086d95d5 +0x1b5:  nop
086d95d6 +0x1b6:  nop
086d95d7 +0x1b7:  nop
086d95d8 +0x1b8:  nop
086d95d9 +0x1b9:  nop
086d95da +0x1ba:  nop
086d95db +0x1bb:  nop
086d95dc +0x1bc:  nop
086d95dd +0x1bd:  nop
086d95de +0x1be:  nop
086d95df +0x1bf:  nop
```

## 反编译 C

```c
// std::__throw_bad_exception @ 0x86d9420

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_exception() */

void std::__throw_bad_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = &PTR__bad_exception_0936b590;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&bad_exception::typeinfo,bad_exception::~bad_exception);
}
```
