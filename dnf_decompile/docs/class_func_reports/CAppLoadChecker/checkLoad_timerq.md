# checkLoad_timerq

`_ZN15CAppLoadChecker16checkLoad_timerqEi`

`CAppLoadChecker::checkLoad_timerq(int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x086000b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086000b0  _ZN15CAppLoadChecker16checkLoad_timerqEi
#           CAppLoadChecker::checkLoad_timerq(int)
# range [0x086000b0, 0x086002af]
086000b0 +0x000:  push   %ebp
086000b1 +0x001:  mov    %esp,%ebp
086000b3 +0x003:  sub    $0x10,%esp
086000b6 +0x006:  mov    0x8(%ebp),%eax
086000b9 +0x009:  mov    0x8(%eax),%eax
086000bc +0x00c:  mov    0xc(%ebp),%edx
086000bf +0x00f:  mov    %edx,%ecx
086000c1 +0x011:  sub    %eax,%ecx
086000c3 +0x013:  mov    %ecx,%eax
086000c5 +0x015:  mov    %eax,-0x8(%ebp)
086000c8 +0x018:  mov    0x8(%ebp),%eax
086000cb +0x01b:  mov    0x8(%eax),%eax
086000ce +0x01e:  sub    0xc(%ebp),%eax
086000d1 +0x021:  mov    %eax,-0x4(%ebp)
086000d4 +0x024:  mov    0x8(%ebp),%eax
086000d7 +0x027:  movzbl 0x12(%eax),%eax
086000db +0x02b:  test   %al,%al
086000dd +0x02d:  jg     086000f6 <+0x46>
086000df +0x02f:  cmpl   $0xa,-0x8(%ebp)
086000e3 +0x033:  jle    086000f6 <+0x46>
086000e5 +0x035:  mov    0x8(%ebp),%eax
086000e8 +0x038:  movb   $0x1,0x12(%eax)
086000ec +0x03c:  mov    $0x1,%eax
086000f1 +0x041:  jmp    086002ad <+0x1fd>
086000f6 +0x046:  mov    0x8(%ebp),%eax
086000f9 +0x049:  movzbl 0x12(%eax),%eax
086000fd +0x04d:  cmp    $0x1,%al
086000ff +0x04f:  jg     08600118 <+0x68>
08600101 +0x051:  cmpl   $0x19,-0x8(%ebp)
08600105 +0x055:  jle    08600118 <+0x68>
08600107 +0x057:  mov    0x8(%ebp),%eax
0860010a +0x05a:  movb   $0x2,0x12(%eax)
0860010e +0x05e:  mov    $0x1,%eax
08600113 +0x063:  jmp    086002ad <+0x1fd>
08600118 +0x068:  mov    0x8(%ebp),%eax
0860011b +0x06b:  movzbl 0x12(%eax),%eax
0860011f +0x06f:  cmp    $0x2,%al
08600121 +0x071:  jg     0860013a <+0x8a>
08600123 +0x073:  cmpl   $0x28,-0x8(%ebp)
08600127 +0x077:  jle    0860013a <+0x8a>
08600129 +0x079:  mov    0x8(%ebp),%eax
0860012c +0x07c:  movb   $0x3,0x12(%eax)
08600130 +0x080:  mov    $0x1,%eax
08600135 +0x085:  jmp    086002ad <+0x1fd>
0860013a +0x08a:  mov    0x8(%ebp),%eax
0860013d +0x08d:  movzbl 0x12(%eax),%eax
08600141 +0x091:  cmp    $0x3,%al
08600143 +0x093:  jg     0860015c <+0xac>
08600145 +0x095:  cmpl   $0x50,-0x8(%ebp)
08600149 +0x099:  jle    0860015c <+0xac>
0860014b +0x09b:  mov    0x8(%ebp),%eax
0860014e +0x09e:  movb   $0x4,0x12(%eax)
08600152 +0x0a2:  mov    $0x1,%eax
08600157 +0x0a7:  jmp    086002ad <+0x1fd>
0860015c +0x0ac:  mov    0x8(%ebp),%eax
0860015f +0x0af:  movzbl 0x12(%eax),%eax
08600163 +0x0b3:  cmp    $0x4,%al
08600165 +0x0b5:  jg     08600181 <+0xd1>
08600167 +0x0b7:  cmpl   $0x96,-0x8(%ebp)
0860016e +0x0be:  jle    08600181 <+0xd1>
08600170 +0x0c0:  mov    0x8(%ebp),%eax
08600173 +0x0c3:  movb   $0x5,0x12(%eax)
08600177 +0x0c7:  mov    $0x1,%eax
0860017c +0x0cc:  jmp    086002ad <+0x1fd>
08600181 +0x0d1:  mov    0x8(%ebp),%eax
08600184 +0x0d4:  movzbl 0x12(%eax),%eax
08600188 +0x0d8:  cmp    $0x5,%al
0860018a +0x0da:  jg     086001a6 <+0xf6>
0860018c +0x0dc:  cmpl   $0xfa,-0x8(%ebp)
08600193 +0x0e3:  jle    086001a6 <+0xf6>
08600195 +0x0e5:  mov    0x8(%ebp),%eax
08600198 +0x0e8:  movb   $0x6,0x12(%eax)
0860019c +0x0ec:  mov    $0x1,%eax
086001a1 +0x0f1:  jmp    086002ad <+0x1fd>
086001a6 +0x0f6:  mov    0x8(%ebp),%eax
086001a9 +0x0f9:  movzbl 0x12(%eax),%eax
086001ad +0x0fd:  cmp    $0x6,%al
086001af +0x0ff:  jne    086001c4 <+0x114>
086001b1 +0x101:  cmpl   $0xfa,-0x8(%ebp)
086001b8 +0x108:  jle    086001c4 <+0x114>
086001ba +0x10a:  mov    $0x1,%eax
086001bf +0x10f:  jmp    086002ad <+0x1fd>
086001c4 +0x114:  mov    0x8(%ebp),%eax
086001c7 +0x117:  movzbl 0x12(%eax),%eax
086001cb +0x11b:  test   %al,%al
086001cd +0x11d:  js     086001e6 <+0x136>
086001cf +0x11f:  cmpl   $0xa,-0x4(%ebp)
086001d3 +0x123:  jle    086001e6 <+0x136>
086001d5 +0x125:  mov    0x8(%ebp),%eax
086001d8 +0x128:  movb   $0xff,0x12(%eax)
086001dc +0x12c:  mov    $0x1,%eax
086001e1 +0x131:  jmp    086002ad <+0x1fd>
086001e6 +0x136:  mov    0x8(%ebp),%eax
086001e9 +0x139:  movzbl 0x12(%eax),%eax
086001ed +0x13d:  cmp    $0xff,%al
086001ef +0x13f:  jl     08600208 <+0x158>
086001f1 +0x141:  cmpl   $0x19,-0x4(%ebp)
086001f5 +0x145:  jle    08600208 <+0x158>
086001f7 +0x147:  mov    0x8(%ebp),%eax
086001fa +0x14a:  movb   $0xfe,0x12(%eax)
086001fe +0x14e:  mov    $0x1,%eax
08600203 +0x153:  jmp    086002ad <+0x1fd>
08600208 +0x158:  mov    0x8(%ebp),%eax
0860020b +0x15b:  movzbl 0x12(%eax),%eax
0860020f +0x15f:  cmp    $0xfe,%al
08600211 +0x161:  jl     0860022a <+0x17a>
08600213 +0x163:  cmpl   $0x28,-0x4(%ebp)
08600217 +0x167:  jle    0860022a <+0x17a>
08600219 +0x169:  mov    0x8(%ebp),%eax
0860021c +0x16c:  movb   $0xfd,0x12(%eax)
08600220 +0x170:  mov    $0x1,%eax
08600225 +0x175:  jmp    086002ad <+0x1fd>
0860022a +0x17a:  mov    0x8(%ebp),%eax
0860022d +0x17d:  movzbl 0x12(%eax),%eax
08600231 +0x181:  cmp    $0xfd,%al
08600233 +0x183:  jl     08600249 <+0x199>
08600235 +0x185:  cmpl   $0x50,-0x4(%ebp)
08600239 +0x189:  jle    08600249 <+0x199>
0860023b +0x18b:  mov    0x8(%ebp),%eax
0860023e +0x18e:  movb   $0xfc,0x12(%eax)
08600242 +0x192:  mov    $0x1,%eax
08600247 +0x197:  jmp    086002ad <+0x1fd>
08600249 +0x199:  mov    0x8(%ebp),%eax
0860024c +0x19c:  movzbl 0x12(%eax),%eax
08600250 +0x1a0:  cmp    $0xfc,%al
08600252 +0x1a2:  jl     0860026b <+0x1bb>
08600254 +0x1a4:  cmpl   $0x96,-0x4(%ebp)
0860025b +0x1ab:  jle    0860026b <+0x1bb>
0860025d +0x1ad:  mov    0x8(%ebp),%eax
08600260 +0x1b0:  movb   $0xfb,0x12(%eax)
08600264 +0x1b4:  mov    $0x1,%eax
08600269 +0x1b9:  jmp    086002ad <+0x1fd>
0860026b +0x1bb:  mov    0x8(%ebp),%eax
0860026e +0x1be:  movzbl 0x12(%eax),%eax
08600272 +0x1c2:  cmp    $0xfb,%al
08600274 +0x1c4:  jl     0860028d <+0x1dd>
08600276 +0x1c6:  cmpl   $0xfa,-0x4(%ebp)
0860027d +0x1cd:  jle    0860028d <+0x1dd>
0860027f +0x1cf:  mov    0x8(%ebp),%eax
08600282 +0x1d2:  movb   $0xfa,0x12(%eax)
08600286 +0x1d6:  mov    $0x1,%eax
0860028b +0x1db:  jmp    086002ad <+0x1fd>
0860028d +0x1dd:  mov    0x8(%ebp),%eax
08600290 +0x1e0:  movzbl 0x12(%eax),%eax
08600294 +0x1e4:  cmp    $0xfa,%al
08600296 +0x1e6:  jne    086002a8 <+0x1f8>
08600298 +0x1e8:  cmpl   $0xfa,-0x4(%ebp)
0860029f +0x1ef:  jle    086002a8 <+0x1f8>
086002a1 +0x1f1:  mov    $0x1,%eax
086002a6 +0x1f6:  jmp    086002ad <+0x1fd>
086002a8 +0x1f8:  mov    $0x0,%eax
086002ad +0x1fd:  leave
086002ae +0x1fe:  ret
086002af +0x1ff:  nop
```

## 反编译 C

```c
// CAppLoadChecker::checkLoad_timerq @ 0x86000b0

/* CAppLoadChecker::checkLoad_timerq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_timerq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)(this + 8);
  iVar1 = *(int *)(this + 8) - param_1;
  if (((char)this[0x12] < '\x01') && (10 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x02') && (0x19 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x03') && (0x28 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x04') && (0x50 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x05') && (0x96 < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\x06') && (0xfa < iVar3)) {
    this[0x12] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x12] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x12] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x12] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x12] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x12] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x12] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x12] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x12] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x12] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x12] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x12] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x12] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x12] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x12] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}
```
