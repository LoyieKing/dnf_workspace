# checkLoad_packetq

`_ZN15CAppLoadChecker17checkLoad_packetqEi`

`CAppLoadChecker::checkLoad_packetq(int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x086002b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086002b0  _ZN15CAppLoadChecker17checkLoad_packetqEi
#           CAppLoadChecker::checkLoad_packetq(int)
# range [0x086002b0, 0x086004af]
086002b0 +0x000:  push   %ebp
086002b1 +0x001:  mov    %esp,%ebp
086002b3 +0x003:  sub    $0x10,%esp
086002b6 +0x006:  mov    0x8(%ebp),%eax
086002b9 +0x009:  mov    0xc(%eax),%eax
086002bc +0x00c:  mov    0xc(%ebp),%edx
086002bf +0x00f:  mov    %edx,%ecx
086002c1 +0x011:  sub    %eax,%ecx
086002c3 +0x013:  mov    %ecx,%eax
086002c5 +0x015:  mov    %eax,-0x8(%ebp)
086002c8 +0x018:  mov    0x8(%ebp),%eax
086002cb +0x01b:  mov    0xc(%eax),%eax
086002ce +0x01e:  sub    0xc(%ebp),%eax
086002d1 +0x021:  mov    %eax,-0x4(%ebp)
086002d4 +0x024:  mov    0x8(%ebp),%eax
086002d7 +0x027:  movzbl 0x13(%eax),%eax
086002db +0x02b:  test   %al,%al
086002dd +0x02d:  jg     086002f6 <+0x46>
086002df +0x02f:  cmpl   $0xa,-0x8(%ebp)
086002e3 +0x033:  jle    086002f6 <+0x46>
086002e5 +0x035:  mov    0x8(%ebp),%eax
086002e8 +0x038:  movb   $0x1,0x13(%eax)
086002ec +0x03c:  mov    $0x1,%eax
086002f1 +0x041:  jmp    086004ad <+0x1fd>
086002f6 +0x046:  mov    0x8(%ebp),%eax
086002f9 +0x049:  movzbl 0x13(%eax),%eax
086002fd +0x04d:  cmp    $0x1,%al
086002ff +0x04f:  jg     08600318 <+0x68>
08600301 +0x051:  cmpl   $0x19,-0x8(%ebp)
08600305 +0x055:  jle    08600318 <+0x68>
08600307 +0x057:  mov    0x8(%ebp),%eax
0860030a +0x05a:  movb   $0x2,0x13(%eax)
0860030e +0x05e:  mov    $0x1,%eax
08600313 +0x063:  jmp    086004ad <+0x1fd>
08600318 +0x068:  mov    0x8(%ebp),%eax
0860031b +0x06b:  movzbl 0x13(%eax),%eax
0860031f +0x06f:  cmp    $0x2,%al
08600321 +0x071:  jg     0860033a <+0x8a>
08600323 +0x073:  cmpl   $0x28,-0x8(%ebp)
08600327 +0x077:  jle    0860033a <+0x8a>
08600329 +0x079:  mov    0x8(%ebp),%eax
0860032c +0x07c:  movb   $0x3,0x13(%eax)
08600330 +0x080:  mov    $0x1,%eax
08600335 +0x085:  jmp    086004ad <+0x1fd>
0860033a +0x08a:  mov    0x8(%ebp),%eax
0860033d +0x08d:  movzbl 0x13(%eax),%eax
08600341 +0x091:  cmp    $0x3,%al
08600343 +0x093:  jg     0860035c <+0xac>
08600345 +0x095:  cmpl   $0x50,-0x8(%ebp)
08600349 +0x099:  jle    0860035c <+0xac>
0860034b +0x09b:  mov    0x8(%ebp),%eax
0860034e +0x09e:  movb   $0x4,0x13(%eax)
08600352 +0x0a2:  mov    $0x1,%eax
08600357 +0x0a7:  jmp    086004ad <+0x1fd>
0860035c +0x0ac:  mov    0x8(%ebp),%eax
0860035f +0x0af:  movzbl 0x13(%eax),%eax
08600363 +0x0b3:  cmp    $0x4,%al
08600365 +0x0b5:  jg     08600381 <+0xd1>
08600367 +0x0b7:  cmpl   $0x96,-0x8(%ebp)
0860036e +0x0be:  jle    08600381 <+0xd1>
08600370 +0x0c0:  mov    0x8(%ebp),%eax
08600373 +0x0c3:  movb   $0x5,0x13(%eax)
08600377 +0x0c7:  mov    $0x1,%eax
0860037c +0x0cc:  jmp    086004ad <+0x1fd>
08600381 +0x0d1:  mov    0x8(%ebp),%eax
08600384 +0x0d4:  movzbl 0x13(%eax),%eax
08600388 +0x0d8:  cmp    $0x5,%al
0860038a +0x0da:  jg     086003a6 <+0xf6>
0860038c +0x0dc:  cmpl   $0xfa,-0x8(%ebp)
08600393 +0x0e3:  jle    086003a6 <+0xf6>
08600395 +0x0e5:  mov    0x8(%ebp),%eax
08600398 +0x0e8:  movb   $0x6,0x13(%eax)
0860039c +0x0ec:  mov    $0x1,%eax
086003a1 +0x0f1:  jmp    086004ad <+0x1fd>
086003a6 +0x0f6:  mov    0x8(%ebp),%eax
086003a9 +0x0f9:  movzbl 0x13(%eax),%eax
086003ad +0x0fd:  cmp    $0x6,%al
086003af +0x0ff:  jne    086003c4 <+0x114>
086003b1 +0x101:  cmpl   $0xfa,-0x8(%ebp)
086003b8 +0x108:  jle    086003c4 <+0x114>
086003ba +0x10a:  mov    $0x1,%eax
086003bf +0x10f:  jmp    086004ad <+0x1fd>
086003c4 +0x114:  mov    0x8(%ebp),%eax
086003c7 +0x117:  movzbl 0x13(%eax),%eax
086003cb +0x11b:  test   %al,%al
086003cd +0x11d:  js     086003e6 <+0x136>
086003cf +0x11f:  cmpl   $0xa,-0x4(%ebp)
086003d3 +0x123:  jle    086003e6 <+0x136>
086003d5 +0x125:  mov    0x8(%ebp),%eax
086003d8 +0x128:  movb   $0xff,0x13(%eax)
086003dc +0x12c:  mov    $0x1,%eax
086003e1 +0x131:  jmp    086004ad <+0x1fd>
086003e6 +0x136:  mov    0x8(%ebp),%eax
086003e9 +0x139:  movzbl 0x13(%eax),%eax
086003ed +0x13d:  cmp    $0xff,%al
086003ef +0x13f:  jl     08600408 <+0x158>
086003f1 +0x141:  cmpl   $0x19,-0x4(%ebp)
086003f5 +0x145:  jle    08600408 <+0x158>
086003f7 +0x147:  mov    0x8(%ebp),%eax
086003fa +0x14a:  movb   $0xfe,0x13(%eax)
086003fe +0x14e:  mov    $0x1,%eax
08600403 +0x153:  jmp    086004ad <+0x1fd>
08600408 +0x158:  mov    0x8(%ebp),%eax
0860040b +0x15b:  movzbl 0x13(%eax),%eax
0860040f +0x15f:  cmp    $0xfe,%al
08600411 +0x161:  jl     0860042a <+0x17a>
08600413 +0x163:  cmpl   $0x28,-0x4(%ebp)
08600417 +0x167:  jle    0860042a <+0x17a>
08600419 +0x169:  mov    0x8(%ebp),%eax
0860041c +0x16c:  movb   $0xfd,0x13(%eax)
08600420 +0x170:  mov    $0x1,%eax
08600425 +0x175:  jmp    086004ad <+0x1fd>
0860042a +0x17a:  mov    0x8(%ebp),%eax
0860042d +0x17d:  movzbl 0x13(%eax),%eax
08600431 +0x181:  cmp    $0xfd,%al
08600433 +0x183:  jl     08600449 <+0x199>
08600435 +0x185:  cmpl   $0x50,-0x4(%ebp)
08600439 +0x189:  jle    08600449 <+0x199>
0860043b +0x18b:  mov    0x8(%ebp),%eax
0860043e +0x18e:  movb   $0xfc,0x13(%eax)
08600442 +0x192:  mov    $0x1,%eax
08600447 +0x197:  jmp    086004ad <+0x1fd>
08600449 +0x199:  mov    0x8(%ebp),%eax
0860044c +0x19c:  movzbl 0x13(%eax),%eax
08600450 +0x1a0:  cmp    $0xfc,%al
08600452 +0x1a2:  jl     0860046b <+0x1bb>
08600454 +0x1a4:  cmpl   $0x96,-0x4(%ebp)
0860045b +0x1ab:  jle    0860046b <+0x1bb>
0860045d +0x1ad:  mov    0x8(%ebp),%eax
08600460 +0x1b0:  movb   $0xfb,0x13(%eax)
08600464 +0x1b4:  mov    $0x1,%eax
08600469 +0x1b9:  jmp    086004ad <+0x1fd>
0860046b +0x1bb:  mov    0x8(%ebp),%eax
0860046e +0x1be:  movzbl 0x13(%eax),%eax
08600472 +0x1c2:  cmp    $0xfb,%al
08600474 +0x1c4:  jl     0860048d <+0x1dd>
08600476 +0x1c6:  cmpl   $0xfa,-0x4(%ebp)
0860047d +0x1cd:  jle    0860048d <+0x1dd>
0860047f +0x1cf:  mov    0x8(%ebp),%eax
08600482 +0x1d2:  movb   $0xfa,0x13(%eax)
08600486 +0x1d6:  mov    $0x1,%eax
0860048b +0x1db:  jmp    086004ad <+0x1fd>
0860048d +0x1dd:  mov    0x8(%ebp),%eax
08600490 +0x1e0:  movzbl 0x13(%eax),%eax
08600494 +0x1e4:  cmp    $0xfa,%al
08600496 +0x1e6:  jne    086004a8 <+0x1f8>
08600498 +0x1e8:  cmpl   $0xfa,-0x4(%ebp)
0860049f +0x1ef:  jle    086004a8 <+0x1f8>
086004a1 +0x1f1:  mov    $0x1,%eax
086004a6 +0x1f6:  jmp    086004ad <+0x1fd>
086004a8 +0x1f8:  mov    $0x0,%eax
086004ad +0x1fd:  leave
086004ae +0x1fe:  ret
086004af +0x1ff:  nop
```

## 反编译 C

```c
// CAppLoadChecker::checkLoad_packetq @ 0x86002b0

/* CAppLoadChecker::checkLoad_packetq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_packetq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 0xc) - param_1;
  if (((char)this[0x13] < '\x01') && (10 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x02') && (0x19 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x03') && (0x28 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x04') && (0x50 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x05') && (0x96 < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\x06') && (0xfa < iVar3)) {
    this[0x13] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x13] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x13] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x13] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x13] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x13] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x13] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x13] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x13] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x13] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x13] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x13] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x13] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x13] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x13] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}
```
