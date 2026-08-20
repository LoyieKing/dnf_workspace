# initCharacStat

`_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii`

`global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to global::tools::InitializeCharacStat` | `0x081462e3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081462e3  _GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii
#           global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)
# range [0x081462e3, 0x081464f7]
081462e3 +0x000:  push   %ebp
081462e4 +0x001:  mov    %esp,%ebp
081462e6 +0x003:  sub    $0x18,%esp
081462e9 +0x006:  movl   $0xffff,0x4(%esp)
081462f1 +0x00e:  movl   $0x1,(%esp)
081462f8 +0x015:  call   081462a3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081462fd +0x01a:  leave
081462fe +0x01b:  ret
081462ff +0x01c:  nop
08146300 +0x01d:  push   %ebp
08146301 +0x01e:  mov    %esp,%ebp
08146303 +0x020:  push   %ebx
08146304 +0x021:  sub    $0x10,%esp
08146307 +0x024:  mov    0x8(%ebp),%eax
0814630a +0x027:  mov    (%eax),%edx
0814630c +0x029:  mov    0xc(%ebp),%eax
0814630f +0x02c:  mov    (%eax),%eax
08146311 +0x02e:  add    %eax,%edx
08146313 +0x030:  mov    0x8(%ebp),%eax
08146316 +0x033:  mov    %edx,(%eax)
08146318 +0x035:  mov    0x8(%ebp),%eax
0814631b +0x038:  mov    0x4(%eax),%edx
0814631e +0x03b:  mov    0xc(%ebp),%eax
08146321 +0x03e:  mov    0x4(%eax),%eax
08146324 +0x041:  add    %eax,%edx
08146326 +0x043:  mov    0x8(%ebp),%eax
08146329 +0x046:  mov    %edx,0x4(%eax)
0814632c +0x049:  mov    0x8(%ebp),%eax
0814632f +0x04c:  movzwl 0x8(%eax),%edx
08146333 +0x050:  mov    0xc(%ebp),%eax
08146336 +0x053:  movzwl 0x8(%eax),%eax
0814633a +0x057:  add    %eax,%edx
0814633c +0x059:  mov    0x8(%ebp),%eax
0814633f +0x05c:  mov    %dx,0x8(%eax)
08146343 +0x060:  mov    0x8(%ebp),%eax
08146346 +0x063:  movzwl 0xa(%eax),%edx
0814634a +0x067:  mov    0xc(%ebp),%eax
0814634d +0x06a:  movzwl 0xa(%eax),%eax
08146351 +0x06e:  add    %eax,%edx
08146353 +0x070:  mov    0x8(%ebp),%eax
08146356 +0x073:  mov    %dx,0xa(%eax)
0814635a +0x077:  mov    0x8(%ebp),%eax
0814635d +0x07a:  movzwl 0xc(%eax),%edx
08146361 +0x07e:  mov    0xc(%ebp),%eax
08146364 +0x081:  movzwl 0xc(%eax),%eax
08146368 +0x085:  add    %eax,%edx
0814636a +0x087:  mov    0x8(%ebp),%eax
0814636d +0x08a:  mov    %dx,0xc(%eax)
08146371 +0x08e:  mov    0x8(%ebp),%eax
08146374 +0x091:  movzwl 0xe(%eax),%edx
08146378 +0x095:  mov    0xc(%ebp),%eax
0814637b +0x098:  movzwl 0xe(%eax),%eax
0814637f +0x09c:  add    %eax,%edx
08146381 +0x09e:  mov    0x8(%ebp),%eax
08146384 +0x0a1:  mov    %dx,0xe(%eax)
08146388 +0x0a5:  movl   $0x0,-0xc(%ebp)
0814638f +0x0ac:  jmp    081463c3 <+0xe0>
08146391 +0x0ae:  mov    -0xc(%ebp),%ecx
08146394 +0x0b1:  mov    -0xc(%ebp),%edx
08146397 +0x0b4:  mov    0x8(%ebp),%eax
0814639a +0x0b7:  add    $0x8,%edx
0814639d +0x0ba:  movzwl (%eax,%edx,2),%eax
081463a1 +0x0be:  mov    %eax,%edx
081463a3 +0x0c0:  mov    -0xc(%ebp),%ebx
081463a6 +0x0c3:  mov    0xc(%ebp),%eax
081463a9 +0x0c6:  add    $0x8,%ebx
081463ac +0x0c9:  movzwl (%eax,%ebx,2),%eax
081463b0 +0x0cd:  lea    (%edx,%eax,1),%eax
081463b3 +0x0d0:  mov    %eax,%edx
081463b5 +0x0d2:  mov    0x8(%ebp),%eax
081463b8 +0x0d5:  add    $0x8,%ecx
081463bb +0x0d8:  mov    %dx,(%eax,%ecx,2)
081463bf +0x0dc:  addl   $0x1,-0xc(%ebp)
081463c3 +0x0e0:  cmpl   $0x3,-0xc(%ebp)
081463c7 +0x0e4:  setle  %al
081463ca +0x0e7:  test   %al,%al
081463cc +0x0e9:  jne    08146391 <+0xae>
081463ce +0x0eb:  movl   $0x0,-0x8(%ebp)
081463d5 +0x0f2:  jmp    0814640c <+0x129>
081463d7 +0x0f4:  mov    -0x8(%ebp),%ecx
081463da +0x0f7:  mov    -0x8(%ebp),%edx
081463dd +0x0fa:  mov    0x8(%ebp),%eax
081463e0 +0x0fd:  add    $0x8,%edx
081463e3 +0x100:  movzwl 0x8(%eax,%edx,2),%eax
081463e8 +0x105:  mov    %eax,%edx
081463ea +0x107:  mov    -0x8(%ebp),%ebx
081463ed +0x10a:  mov    0xc(%ebp),%eax
081463f0 +0x10d:  add    $0x8,%ebx
081463f3 +0x110:  movzwl 0x8(%eax,%ebx,2),%eax
081463f8 +0x115:  lea    (%edx,%eax,1),%eax
081463fb +0x118:  mov    %eax,%edx
081463fd +0x11a:  mov    0x8(%ebp),%eax
08146400 +0x11d:  add    $0x8,%ecx
08146403 +0x120:  mov    %dx,0x8(%eax,%ecx,2)
08146408 +0x125:  addl   $0x1,-0x8(%ebp)
0814640c +0x129:  cmpl   $0x10,-0x8(%ebp)
08146410 +0x12d:  setle  %al
08146413 +0x130:  test   %al,%al
08146415 +0x132:  jne    081463d7 <+0xf4>
08146417 +0x134:  mov    0x8(%ebp),%eax
0814641a +0x137:  mov    0x3a(%eax),%edx
0814641d +0x13a:  mov    0xc(%ebp),%eax
08146420 +0x13d:  mov    0x3a(%eax),%eax
08146423 +0x140:  add    %eax,%edx
08146425 +0x142:  mov    0x8(%ebp),%eax
08146428 +0x145:  mov    %edx,0x3a(%eax)
0814642b +0x148:  mov    0x8(%ebp),%eax
0814642e +0x14b:  movzwl 0x3e(%eax),%eax
08146432 +0x14f:  mov    %eax,%edx
08146434 +0x151:  mov    0xc(%ebp),%eax
08146437 +0x154:  movzwl 0x3e(%eax),%eax
0814643b +0x158:  lea    (%edx,%eax,1),%eax
0814643e +0x15b:  mov    %eax,%edx
08146440 +0x15d:  mov    0x8(%ebp),%eax
08146443 +0x160:  mov    %dx,0x3e(%eax)
08146447 +0x164:  mov    0x8(%ebp),%eax
0814644a +0x167:  movzwl 0x40(%eax),%eax
0814644e +0x16b:  mov    %eax,%edx
08146450 +0x16d:  mov    0xc(%ebp),%eax
08146453 +0x170:  movzwl 0x40(%eax),%eax
08146457 +0x174:  lea    (%edx,%eax,1),%eax
0814645a +0x177:  mov    %eax,%edx
0814645c +0x179:  mov    0x8(%ebp),%eax
0814645f +0x17c:  mov    %dx,0x40(%eax)
08146463 +0x180:  mov    0x8(%ebp),%eax
08146466 +0x183:  mov    0x42(%eax),%edx
08146469 +0x186:  mov    0xc(%ebp),%eax
0814646c +0x189:  mov    0x42(%eax),%eax
0814646f +0x18c:  add    %eax,%edx
08146471 +0x18e:  mov    0x8(%ebp),%eax
08146474 +0x191:  mov    %edx,0x42(%eax)
08146477 +0x194:  mov    0x8(%ebp),%eax
0814647a +0x197:  movzwl 0x46(%eax),%edx
0814647e +0x19b:  mov    0xc(%ebp),%eax
08146481 +0x19e:  movzwl 0x46(%eax),%eax
08146485 +0x1a2:  add    %eax,%edx
08146487 +0x1a4:  mov    0x8(%ebp),%eax
0814648a +0x1a7:  mov    %dx,0x46(%eax)
0814648e +0x1ab:  mov    0x8(%ebp),%eax
08146491 +0x1ae:  movzwl 0x48(%eax),%edx
08146495 +0x1b2:  mov    0xc(%ebp),%eax
08146498 +0x1b5:  movzwl 0x48(%eax),%eax
0814649c +0x1b9:  add    %eax,%edx
0814649e +0x1bb:  mov    0x8(%ebp),%eax
081464a1 +0x1be:  mov    %dx,0x48(%eax)
081464a5 +0x1c2:  mov    0x8(%ebp),%eax
081464a8 +0x1c5:  movzwl 0x4a(%eax),%eax
081464ac +0x1c9:  mov    %eax,%edx
081464ae +0x1cb:  mov    0xc(%ebp),%eax
081464b1 +0x1ce:  movzwl 0x4a(%eax),%eax
081464b5 +0x1d2:  lea    (%edx,%eax,1),%eax
081464b8 +0x1d5:  mov    %eax,%edx
081464ba +0x1d7:  mov    0x8(%ebp),%eax
081464bd +0x1da:  mov    %dx,0x4a(%eax)
081464c1 +0x1de:  mov    0x8(%ebp),%eax
081464c4 +0x1e1:  movzwl 0x4c(%eax),%eax
081464c8 +0x1e5:  mov    %eax,%edx
081464ca +0x1e7:  mov    0xc(%ebp),%eax
081464cd +0x1ea:  movzwl 0x4c(%eax),%eax
081464d1 +0x1ee:  lea    (%edx,%eax,1),%eax
081464d4 +0x1f1:  mov    %eax,%edx
081464d6 +0x1f3:  mov    0x8(%ebp),%eax
081464d9 +0x1f6:  mov    %dx,0x4c(%eax)
081464dd +0x1fa:  mov    0x8(%ebp),%eax
081464e0 +0x1fd:  mov    0x4e(%eax),%edx
081464e3 +0x200:  mov    0xc(%ebp),%eax
081464e6 +0x203:  mov    0x4e(%eax),%eax
081464e9 +0x206:  add    %eax,%edx
081464eb +0x208:  mov    0x8(%ebp),%eax
081464ee +0x20b:  mov    %edx,0x4e(%eax)
081464f1 +0x20e:  add    $0x10,%esp
081464f4 +0x211:  pop    %ebx
081464f5 +0x212:  pop    %ebp
081464f6 +0x213:  ret
081464f7 +0x214:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81462e3

/* global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int,
   int, int) */

void global::tools::InitializeCharacStat::_GLOBAL__I_initCharacStat(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
