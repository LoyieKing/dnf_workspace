# checkLoad_logdbq

`_ZN15CAppLoadChecker16checkLoad_logdbqEi`

`CAppLoadChecker::checkLoad_logdbq(int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x085ffeb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ffeb0  _ZN15CAppLoadChecker16checkLoad_logdbqEi
#           CAppLoadChecker::checkLoad_logdbq(int)
# range [0x085ffeb0, 0x086000af]
085ffeb0 +0x000:  push   %ebp
085ffeb1 +0x001:  mov    %esp,%ebp
085ffeb3 +0x003:  sub    $0x10,%esp
085ffeb6 +0x006:  mov    0x8(%ebp),%eax
085ffeb9 +0x009:  mov    0x4(%eax),%eax
085ffebc +0x00c:  mov    0xc(%ebp),%edx
085ffebf +0x00f:  mov    %edx,%ecx
085ffec1 +0x011:  sub    %eax,%ecx
085ffec3 +0x013:  mov    %ecx,%eax
085ffec5 +0x015:  mov    %eax,-0x8(%ebp)
085ffec8 +0x018:  mov    0x8(%ebp),%eax
085ffecb +0x01b:  mov    0x4(%eax),%eax
085ffece +0x01e:  sub    0xc(%ebp),%eax
085ffed1 +0x021:  mov    %eax,-0x4(%ebp)
085ffed4 +0x024:  mov    0x8(%ebp),%eax
085ffed7 +0x027:  movzbl 0x11(%eax),%eax
085ffedb +0x02b:  test   %al,%al
085ffedd +0x02d:  jg     085ffef6 <+0x46>
085ffedf +0x02f:  cmpl   $0xa,-0x8(%ebp)
085ffee3 +0x033:  jle    085ffef6 <+0x46>
085ffee5 +0x035:  mov    0x8(%ebp),%eax
085ffee8 +0x038:  movb   $0x1,0x11(%eax)
085ffeec +0x03c:  mov    $0x1,%eax
085ffef1 +0x041:  jmp    086000ad <+0x1fd>
085ffef6 +0x046:  mov    0x8(%ebp),%eax
085ffef9 +0x049:  movzbl 0x11(%eax),%eax
085ffefd +0x04d:  cmp    $0x1,%al
085ffeff +0x04f:  jg     085fff18 <+0x68>
085fff01 +0x051:  cmpl   $0x19,-0x8(%ebp)
085fff05 +0x055:  jle    085fff18 <+0x68>
085fff07 +0x057:  mov    0x8(%ebp),%eax
085fff0a +0x05a:  movb   $0x2,0x11(%eax)
085fff0e +0x05e:  mov    $0x1,%eax
085fff13 +0x063:  jmp    086000ad <+0x1fd>
085fff18 +0x068:  mov    0x8(%ebp),%eax
085fff1b +0x06b:  movzbl 0x11(%eax),%eax
085fff1f +0x06f:  cmp    $0x2,%al
085fff21 +0x071:  jg     085fff3a <+0x8a>
085fff23 +0x073:  cmpl   $0x28,-0x8(%ebp)
085fff27 +0x077:  jle    085fff3a <+0x8a>
085fff29 +0x079:  mov    0x8(%ebp),%eax
085fff2c +0x07c:  movb   $0x3,0x11(%eax)
085fff30 +0x080:  mov    $0x1,%eax
085fff35 +0x085:  jmp    086000ad <+0x1fd>
085fff3a +0x08a:  mov    0x8(%ebp),%eax
085fff3d +0x08d:  movzbl 0x11(%eax),%eax
085fff41 +0x091:  cmp    $0x3,%al
085fff43 +0x093:  jg     085fff5c <+0xac>
085fff45 +0x095:  cmpl   $0x50,-0x8(%ebp)
085fff49 +0x099:  jle    085fff5c <+0xac>
085fff4b +0x09b:  mov    0x8(%ebp),%eax
085fff4e +0x09e:  movb   $0x4,0x11(%eax)
085fff52 +0x0a2:  mov    $0x1,%eax
085fff57 +0x0a7:  jmp    086000ad <+0x1fd>
085fff5c +0x0ac:  mov    0x8(%ebp),%eax
085fff5f +0x0af:  movzbl 0x11(%eax),%eax
085fff63 +0x0b3:  cmp    $0x4,%al
085fff65 +0x0b5:  jg     085fff81 <+0xd1>
085fff67 +0x0b7:  cmpl   $0x96,-0x8(%ebp)
085fff6e +0x0be:  jle    085fff81 <+0xd1>
085fff70 +0x0c0:  mov    0x8(%ebp),%eax
085fff73 +0x0c3:  movb   $0x5,0x11(%eax)
085fff77 +0x0c7:  mov    $0x1,%eax
085fff7c +0x0cc:  jmp    086000ad <+0x1fd>
085fff81 +0x0d1:  mov    0x8(%ebp),%eax
085fff84 +0x0d4:  movzbl 0x11(%eax),%eax
085fff88 +0x0d8:  cmp    $0x5,%al
085fff8a +0x0da:  jg     085fffa6 <+0xf6>
085fff8c +0x0dc:  cmpl   $0xfa,-0x8(%ebp)
085fff93 +0x0e3:  jle    085fffa6 <+0xf6>
085fff95 +0x0e5:  mov    0x8(%ebp),%eax
085fff98 +0x0e8:  movb   $0x6,0x11(%eax)
085fff9c +0x0ec:  mov    $0x1,%eax
085fffa1 +0x0f1:  jmp    086000ad <+0x1fd>
085fffa6 +0x0f6:  mov    0x8(%ebp),%eax
085fffa9 +0x0f9:  movzbl 0x11(%eax),%eax
085fffad +0x0fd:  cmp    $0x6,%al
085fffaf +0x0ff:  jne    085fffc4 <+0x114>
085fffb1 +0x101:  cmpl   $0xfa,-0x8(%ebp)
085fffb8 +0x108:  jle    085fffc4 <+0x114>
085fffba +0x10a:  mov    $0x1,%eax
085fffbf +0x10f:  jmp    086000ad <+0x1fd>
085fffc4 +0x114:  mov    0x8(%ebp),%eax
085fffc7 +0x117:  movzbl 0x11(%eax),%eax
085fffcb +0x11b:  test   %al,%al
085fffcd +0x11d:  js     085fffe6 <+0x136>
085fffcf +0x11f:  cmpl   $0xa,-0x4(%ebp)
085fffd3 +0x123:  jle    085fffe6 <+0x136>
085fffd5 +0x125:  mov    0x8(%ebp),%eax
085fffd8 +0x128:  movb   $0xff,0x11(%eax)
085fffdc +0x12c:  mov    $0x1,%eax
085fffe1 +0x131:  jmp    086000ad <+0x1fd>
085fffe6 +0x136:  mov    0x8(%ebp),%eax
085fffe9 +0x139:  movzbl 0x11(%eax),%eax
085fffed +0x13d:  cmp    $0xff,%al
085fffef +0x13f:  jl     08600008 <+0x158>
085ffff1 +0x141:  cmpl   $0x19,-0x4(%ebp)
085ffff5 +0x145:  jle    08600008 <+0x158>
085ffff7 +0x147:  mov    0x8(%ebp),%eax
085ffffa +0x14a:  movb   $0xfe,0x11(%eax)
085ffffe +0x14e:  mov    $0x1,%eax
08600003 +0x153:  jmp    086000ad <+0x1fd>
08600008 +0x158:  mov    0x8(%ebp),%eax
0860000b +0x15b:  movzbl 0x11(%eax),%eax
0860000f +0x15f:  cmp    $0xfe,%al
08600011 +0x161:  jl     0860002a <+0x17a>
08600013 +0x163:  cmpl   $0x28,-0x4(%ebp)
08600017 +0x167:  jle    0860002a <+0x17a>
08600019 +0x169:  mov    0x8(%ebp),%eax
0860001c +0x16c:  movb   $0xfd,0x11(%eax)
08600020 +0x170:  mov    $0x1,%eax
08600025 +0x175:  jmp    086000ad <+0x1fd>
0860002a +0x17a:  mov    0x8(%ebp),%eax
0860002d +0x17d:  movzbl 0x11(%eax),%eax
08600031 +0x181:  cmp    $0xfd,%al
08600033 +0x183:  jl     08600049 <+0x199>
08600035 +0x185:  cmpl   $0x50,-0x4(%ebp)
08600039 +0x189:  jle    08600049 <+0x199>
0860003b +0x18b:  mov    0x8(%ebp),%eax
0860003e +0x18e:  movb   $0xfc,0x11(%eax)
08600042 +0x192:  mov    $0x1,%eax
08600047 +0x197:  jmp    086000ad <+0x1fd>
08600049 +0x199:  mov    0x8(%ebp),%eax
0860004c +0x19c:  movzbl 0x11(%eax),%eax
08600050 +0x1a0:  cmp    $0xfc,%al
08600052 +0x1a2:  jl     0860006b <+0x1bb>
08600054 +0x1a4:  cmpl   $0x96,-0x4(%ebp)
0860005b +0x1ab:  jle    0860006b <+0x1bb>
0860005d +0x1ad:  mov    0x8(%ebp),%eax
08600060 +0x1b0:  movb   $0xfb,0x11(%eax)
08600064 +0x1b4:  mov    $0x1,%eax
08600069 +0x1b9:  jmp    086000ad <+0x1fd>
0860006b +0x1bb:  mov    0x8(%ebp),%eax
0860006e +0x1be:  movzbl 0x11(%eax),%eax
08600072 +0x1c2:  cmp    $0xfb,%al
08600074 +0x1c4:  jl     0860008d <+0x1dd>
08600076 +0x1c6:  cmpl   $0xfa,-0x4(%ebp)
0860007d +0x1cd:  jle    0860008d <+0x1dd>
0860007f +0x1cf:  mov    0x8(%ebp),%eax
08600082 +0x1d2:  movb   $0xfa,0x11(%eax)
08600086 +0x1d6:  mov    $0x1,%eax
0860008b +0x1db:  jmp    086000ad <+0x1fd>
0860008d +0x1dd:  mov    0x8(%ebp),%eax
08600090 +0x1e0:  movzbl 0x11(%eax),%eax
08600094 +0x1e4:  cmp    $0xfa,%al
08600096 +0x1e6:  jne    086000a8 <+0x1f8>
08600098 +0x1e8:  cmpl   $0xfa,-0x4(%ebp)
0860009f +0x1ef:  jle    086000a8 <+0x1f8>
086000a1 +0x1f1:  mov    $0x1,%eax
086000a6 +0x1f6:  jmp    086000ad <+0x1fd>
086000a8 +0x1f8:  mov    $0x0,%eax
086000ad +0x1fd:  leave
086000ae +0x1fe:  ret
086000af +0x1ff:  nop
```

## 反编译 C

```c
// CAppLoadChecker::checkLoad_logdbq @ 0x85ffeb0

/* CAppLoadChecker::checkLoad_logdbq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_logdbq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)(this + 4);
  iVar1 = *(int *)(this + 4) - param_1;
  if (((char)this[0x11] < '\x01') && (10 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x02') && (0x19 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x03') && (0x28 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x04') && (0x50 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x05') && (0x96 < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\x06') && (0xfa < iVar3)) {
    this[0x11] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x11] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x11] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x11] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x11] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x11] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x11] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x11] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x11] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x11] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x11] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x11] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x11] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x11] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x11] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}
```
