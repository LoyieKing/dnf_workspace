# Teleport

`_GLOBAL__I__ZN8TeleportC2Ev`

`global constructors keyed to Teleport::Teleport()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Teleport` | `0x08284393` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284393  _GLOBAL__I__ZN8TeleportC2Ev
#           global constructors keyed to Teleport::Teleport()
# range [0x08284393, 0x082844c3]
08284393 +0x000:  push   %ebp
08284394 +0x001:  mov    %esp,%ebp
08284396 +0x003:  sub    $0x18,%esp
08284399 +0x006:  movl   $0xffff,0x4(%esp)
082843a1 +0x00e:  movl   $0x1,(%esp)
082843a8 +0x015:  call   08284353 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082843ad +0x01a:  leave
082843ae +0x01b:  ret
082843af +0x01c:  nop
082843b0 +0x01d:  push   %ebp
082843b1 +0x01e:  mov    %esp,%ebp
082843b3 +0x020:  sub    $0x18,%esp
082843b6 +0x023:  mov    0x8(%ebp),%eax
082843b9 +0x026:  movl   $&_ZTV8Teleport+0x8,(%eax)
082843bf +0x02c:  mov    $0x0,%eax
082843c4 +0x031:  test   %al,%al
082843c6 +0x033:  je     082843d3 <+0x40>
082843c8 +0x035:  mov    0x8(%ebp),%eax
082843cb +0x038:  mov    %eax,(%esp)
082843ce +0x03b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082843d3 +0x040:  leave
082843d4 +0x041:  ret
082843d5 +0x042:  nop
082843d6 +0x043:  push   %ebp
082843d7 +0x044:  mov    %esp,%ebp
082843d9 +0x046:  sub    $0x18,%esp
082843dc +0x049:  mov    0x8(%ebp),%eax
082843df +0x04c:  mov    %eax,(%esp)
082843e2 +0x04f:  call   082843b0 <+0x1d>
082843e7 +0x054:  mov    0x8(%ebp),%eax
082843ea +0x057:  mov    %eax,(%esp)
082843ed +0x05a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082843f2 +0x05f:  leave
082843f3 +0x060:  ret
082843f4 +0x061:  push   %ebp
082843f5 +0x062:  mov    %esp,%ebp
082843f7 +0x064:  sub    $0x18,%esp
082843fa +0x067:  mov    0x8(%ebp),%eax
082843fd +0x06a:  movl   $&_ZTV12NPC_Teleport+0x8,(%eax)
08284403 +0x070:  mov    0x8(%ebp),%eax
08284406 +0x073:  mov    %eax,(%esp)
08284409 +0x076:  call   082843b0 <+0x1d>
0828440e +0x07b:  mov    $0x0,%eax
08284413 +0x080:  test   %al,%al
08284415 +0x082:  je     08284422 <+0x8f>
08284417 +0x084:  mov    0x8(%ebp),%eax
0828441a +0x087:  mov    %eax,(%esp)
0828441d +0x08a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08284422 +0x08f:  leave
08284423 +0x090:  ret
08284424 +0x091:  push   %ebp
08284425 +0x092:  mov    %esp,%ebp
08284427 +0x094:  sub    $0x18,%esp
0828442a +0x097:  mov    0x8(%ebp),%eax
0828442d +0x09a:  mov    %eax,(%esp)
08284430 +0x09d:  call   082843f4 <+0x61>
08284435 +0x0a2:  mov    0x8(%ebp),%eax
08284438 +0x0a5:  mov    %eax,(%esp)
0828443b +0x0a8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08284440 +0x0ad:  leave
08284441 +0x0ae:  ret
08284442 +0x0af:  push   %ebp
08284443 +0x0b0:  mov    %esp,%ebp
08284445 +0x0b2:  sub    $0x18,%esp
08284448 +0x0b5:  mov    0x8(%ebp),%eax
0828444b +0x0b8:  movl   $&_ZTV13User_Teleport+0x8,(%eax)
08284451 +0x0be:  mov    0x8(%ebp),%eax
08284454 +0x0c1:  mov    %eax,(%esp)
08284457 +0x0c4:  call   082843b0 <+0x1d>
0828445c +0x0c9:  mov    $0x0,%eax
08284461 +0x0ce:  test   %al,%al
08284463 +0x0d0:  je     08284470 <+0xdd>
08284465 +0x0d2:  mov    0x8(%ebp),%eax
08284468 +0x0d5:  mov    %eax,(%esp)
0828446b +0x0d8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08284470 +0x0dd:  leave
08284471 +0x0de:  ret
08284472 +0x0df:  push   %ebp
08284473 +0x0e0:  mov    %esp,%ebp
08284475 +0x0e2:  sub    $0x18,%esp
08284478 +0x0e5:  mov    0x8(%ebp),%eax
0828447b +0x0e8:  mov    %eax,(%esp)
0828447e +0x0eb:  call   08284442 <+0xaf>
08284483 +0x0f0:  mov    0x8(%ebp),%eax
08284486 +0x0f3:  mov    %eax,(%esp)
08284489 +0x0f6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828448e +0x0fb:  leave
0828448f +0x0fc:  ret
08284490 +0x0fd:  push   %ebp
08284491 +0x0fe:  mov    %esp,%ebp
08284493 +0x100:  mov    0x8(%ebp),%eax
08284496 +0x103:  mov    0x10(%eax),%eax
08284499 +0x106:  test   %eax,%eax
0828449b +0x108:  je     082844bf <+0x12c>
0828449d +0x10a:  cmpl   $0x0,0xc(%ebp)
082844a1 +0x10e:  js     082844bf <+0x12c>
082844a3 +0x110:  cmpl   $0x2,0xc(%ebp)
082844a7 +0x114:  jg     082844bf <+0x12c>
082844a9 +0x116:  mov    0x8(%ebp),%eax
082844ac +0x119:  mov    0x10(%eax),%eax
082844af +0x11c:  mov    0xc(%ebp),%edx
082844b2 +0x11f:  lea    0x4a0(%edx),%ecx
082844b8 +0x125:  mov    0x10(%ebp),%edx
082844bb +0x128:  mov    %edx,0x1(%eax,%ecx,4)
082844bf +0x12c:  pop    %ebp
082844c0 +0x12d:  ret
082844c1 +0x12e:  nop
082844c2 +0x12f:  nop
082844c3 +0x130:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8284393

/* Teleport::Teleport() */

void Teleport::_GLOBAL__I_Teleport(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
