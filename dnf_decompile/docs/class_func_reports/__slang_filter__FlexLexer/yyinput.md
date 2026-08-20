# yyinput

`_ZN25__slang_filter__FlexLexer7yyinputEv`

`__slang_filter__FlexLexer::yyinput()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094344  _ZN25__slang_filter__FlexLexer7yyinputEv
#           __slang_filter__FlexLexer::yyinput()
# range [0x08094344, 0x080944bb]
08094344 +0x000:  push   %ebp
08094345 +0x001:  mov    %esp,%ebp
08094347 +0x003:  sub    $0x28,%esp
0809434a +0x006:  mov    0x8(%ebp),%eax
0809434d +0x009:  mov    0x30(%eax),%eax
08094350 +0x00c:  mov    0x8(%ebp),%edx
08094353 +0x00f:  movzbl 0x28(%edx),%edx
08094357 +0x013:  mov    %dl,(%eax)
08094359 +0x015:  mov    0x8(%ebp),%eax
0809435c +0x018:  mov    0x30(%eax),%eax
0809435f +0x01b:  movzbl (%eax),%eax
08094362 +0x01e:  test   %al,%al
08094364 +0x020:  jne    0809446b <+0x127>
0809436a +0x026:  mov    0x8(%ebp),%eax
0809436d +0x029:  mov    0x30(%eax),%edx
08094370 +0x02c:  mov    0x8(%ebp),%eax
08094373 +0x02f:  mov    0x48(%eax),%ecx
08094376 +0x032:  mov    0x8(%ebp),%eax
08094379 +0x035:  mov    0x40(%eax),%eax
0809437c +0x038:  shl    $0x2,%eax
0809437f +0x03b:  lea    (%ecx,%eax,1),%eax
08094382 +0x03e:  mov    (%eax),%eax
08094384 +0x040:  mov    0x4(%eax),%ecx
08094387 +0x043:  mov    0x8(%ebp),%eax
0809438a +0x046:  mov    0x2c(%eax),%eax
0809438d +0x049:  lea    (%ecx,%eax,1),%eax
08094390 +0x04c:  cmp    %eax,%edx
08094392 +0x04e:  jae    080943a2 <+0x5e>
08094394 +0x050:  mov    0x8(%ebp),%eax
08094397 +0x053:  mov    0x30(%eax),%eax
0809439a +0x056:  movb   $0x0,(%eax)
0809439d +0x059:  jmp    0809446b <+0x127>
080943a2 +0x05e:  mov    0x8(%ebp),%eax
080943a5 +0x061:  mov    0x30(%eax),%eax
080943a8 +0x064:  mov    %eax,%edx
080943aa +0x066:  mov    0x8(%ebp),%eax
080943ad +0x069:  mov    0x4(%eax),%eax
080943b0 +0x06c:  mov    %edx,%ecx
080943b2 +0x06e:  sub    %eax,%ecx
080943b4 +0x070:  mov    %ecx,%eax
080943b6 +0x072:  mov    %eax,-0xc(%ebp)
080943b9 +0x075:  mov    0x8(%ebp),%eax
080943bc +0x078:  mov    0x30(%eax),%eax
080943bf +0x07b:  lea    0x1(%eax),%edx
080943c2 +0x07e:  mov    0x8(%ebp),%eax
080943c5 +0x081:  mov    %edx,0x30(%eax)
080943c8 +0x084:  mov    0x8(%ebp),%eax
080943cb +0x087:  mov    %eax,(%esp)
080943ce +0x08a:  call   08093b84 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv>  ; __slang_filter__FlexLexer::yy_get_next_buffer()
080943d3 +0x08f:  cmp    $0x1,%eax
080943d6 +0x092:  je     08094402 <+0xbe>
080943d8 +0x094:  cmp    $0x2,%eax
080943db +0x097:  je     080943e6 <+0xa2>
080943dd +0x099:  test   %eax,%eax
080943df +0x09b:  je     0809445a <+0x116>
080943e1 +0x09d:  jmp    0809446b <+0x127>
080943e6 +0x0a2:  mov    0x8(%ebp),%eax
080943e9 +0x0a5:  mov    (%eax),%eax
080943eb +0x0a7:  add    $0x14,%eax
080943ee +0x0aa:  mov    (%eax),%edx
080943f0 +0x0ac:  mov    0x8(%ebp),%eax
080943f3 +0x0af:  mov    0x20(%eax),%eax
080943f6 +0x0b2:  mov    %eax,0x4(%esp)
080943fa +0x0b6:  mov    0x8(%ebp),%eax
080943fd +0x0b9:  mov    %eax,(%esp)
08094400 +0x0bc:  call   *%edx
08094402 +0x0be:  mov    0x8(%ebp),%eax
08094405 +0x0c1:  mov    (%eax),%eax
08094407 +0x0c3:  add    $0x20,%eax
0809440a +0x0c6:  mov    (%eax),%edx
0809440c +0x0c8:  mov    0x8(%ebp),%eax
0809440f +0x0cb:  mov    %eax,(%esp)
08094412 +0x0ce:  call   *%edx
08094414 +0x0d0:  test   %eax,%eax
08094416 +0x0d2:  setne  %al
08094419 +0x0d5:  test   %al,%al
0809441b +0x0d7:  je     08094427 <+0xe3>
0809441d +0x0d9:  mov    $0xffffffff,%eax
08094422 +0x0de:  jmp    080944b9 <+0x175>
08094427 +0x0e3:  mov    0x8(%ebp),%eax
0809442a +0x0e6:  mov    0x3c(%eax),%eax
0809442d +0x0e9:  test   %eax,%eax
0809442f +0x0eb:  jne    0809444d <+0x109>
08094431 +0x0ed:  mov    0x8(%ebp),%eax
08094434 +0x0f0:  mov    (%eax),%eax
08094436 +0x0f2:  add    $0x14,%eax
08094439 +0x0f5:  mov    (%eax),%edx
0809443b +0x0f7:  mov    0x8(%ebp),%eax
0809443e +0x0fa:  mov    0x20(%eax),%eax
08094441 +0x0fd:  mov    %eax,0x4(%esp)
08094445 +0x101:  mov    0x8(%ebp),%eax
08094448 +0x104:  mov    %eax,(%esp)
0809444b +0x107:  call   *%edx
0809444d +0x109:  mov    0x8(%ebp),%eax
08094450 +0x10c:  mov    %eax,(%esp)
08094453 +0x10f:  call   08094344 <+0x0>
08094458 +0x114:  jmp    080944b9 <+0x175>
0809445a +0x116:  mov    0x8(%ebp),%eax
0809445d +0x119:  mov    0x4(%eax),%edx
08094460 +0x11c:  mov    -0xc(%ebp),%eax
08094463 +0x11f:  add    %eax,%edx
08094465 +0x121:  mov    0x8(%ebp),%eax
08094468 +0x124:  mov    %edx,0x30(%eax)
0809446b +0x127:  mov    0x8(%ebp),%eax
0809446e +0x12a:  mov    0x30(%eax),%eax
08094471 +0x12d:  movzbl (%eax),%eax
08094474 +0x130:  movzbl %al,%eax
08094477 +0x133:  mov    %eax,-0x10(%ebp)
0809447a +0x136:  mov    0x8(%ebp),%eax
0809447d +0x139:  mov    0x30(%eax),%eax
08094480 +0x13c:  movb   $0x0,(%eax)
08094483 +0x13f:  mov    0x8(%ebp),%eax
08094486 +0x142:  mov    0x30(%eax),%eax
08094489 +0x145:  lea    0x1(%eax),%edx
0809448c +0x148:  mov    0x8(%ebp),%eax
0809448f +0x14b:  mov    %edx,0x30(%eax)
08094492 +0x14e:  mov    0x8(%ebp),%eax
08094495 +0x151:  mov    0x30(%eax),%eax
08094498 +0x154:  movzbl (%eax),%edx
0809449b +0x157:  mov    0x8(%ebp),%eax
0809449e +0x15a:  mov    %dl,0x28(%eax)
080944a1 +0x15d:  cmpl   $0xa,-0x10(%ebp)
080944a5 +0x161:  jne    080944b6 <+0x172>
080944a7 +0x163:  mov    0x8(%ebp),%eax
080944aa +0x166:  mov    0xc(%eax),%eax
080944ad +0x169:  lea    0x1(%eax),%edx
080944b0 +0x16c:  mov    0x8(%ebp),%eax
080944b3 +0x16f:  mov    %edx,0xc(%eax)
080944b6 +0x172:  mov    -0x10(%ebp),%eax
080944b9 +0x175:  leave
080944ba +0x176:  ret
080944bb +0x177:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yyinput @ 0x8094344

/* __slang_filter__FlexLexer::yyinput() */

uint __thiscall __slang_filter__FlexLexer::yyinput(__slang_filter__FlexLexer *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  **(__slang_filter__FlexLexer **)(this + 0x30) = this[0x28];
  if (**(char **)(this + 0x30) == '\0') {
    if ((uint)(*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
              *(int *)(this + 0x2c)) <= *(uint *)(this + 0x30)) {
      iVar4 = *(int *)(this + 0x30);
      iVar2 = *(int *)(this + 4);
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      iVar3 = yy_get_next_buffer(this);
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            *(int *)(this + 0x30) = *(int *)(this + 4) + (iVar4 - iVar2);
          }
          goto LAB_0809446b;
        }
        (**(code **)(*(int *)this + 0x14))(this,*(undefined4 *)(this + 0x20));
      }
      iVar4 = (**(code **)(*(int *)this + 0x20))(this);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      if (*(int *)(this + 0x3c) == 0) {
        (**(code **)(*(int *)this + 0x14))(this,*(undefined4 *)(this + 0x20));
      }
      uVar5 = yyinput(this);
      return uVar5;
    }
    **(undefined1 **)(this + 0x30) = 0;
  }
LAB_0809446b:
  bVar1 = **(byte **)(this + 0x30);
  **(undefined1 **)(this + 0x30) = 0;
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  this[0x28] = **(__slang_filter__FlexLexer **)(this + 0x30);
  if (bVar1 == 10) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  return (uint)bVar1;
}
```
