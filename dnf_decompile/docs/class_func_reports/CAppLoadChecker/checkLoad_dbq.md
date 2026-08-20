# checkLoad_dbq

`_ZN15CAppLoadChecker13checkLoad_dbqEi`

`CAppLoadChecker::checkLoad_dbq(int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x085ffcb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ffcb2  _ZN15CAppLoadChecker13checkLoad_dbqEi
#           CAppLoadChecker::checkLoad_dbq(int)
# range [0x085ffcb2, 0x085ffeaf]
085ffcb2 +0x000:  push   %ebp
085ffcb3 +0x001:  mov    %esp,%ebp
085ffcb5 +0x003:  sub    $0x10,%esp
085ffcb8 +0x006:  mov    0x8(%ebp),%eax
085ffcbb +0x009:  mov    (%eax),%eax
085ffcbd +0x00b:  mov    0xc(%ebp),%edx
085ffcc0 +0x00e:  mov    %edx,%ecx
085ffcc2 +0x010:  sub    %eax,%ecx
085ffcc4 +0x012:  mov    %ecx,%eax
085ffcc6 +0x014:  mov    %eax,-0x8(%ebp)
085ffcc9 +0x017:  mov    0x8(%ebp),%eax
085ffccc +0x01a:  mov    (%eax),%eax
085ffcce +0x01c:  sub    0xc(%ebp),%eax
085ffcd1 +0x01f:  mov    %eax,-0x4(%ebp)
085ffcd4 +0x022:  mov    0x8(%ebp),%eax
085ffcd7 +0x025:  movzbl 0x10(%eax),%eax
085ffcdb +0x029:  test   %al,%al
085ffcdd +0x02b:  jg     085ffcf6 <+0x44>
085ffcdf +0x02d:  cmpl   $0xa,-0x8(%ebp)
085ffce3 +0x031:  jle    085ffcf6 <+0x44>
085ffce5 +0x033:  mov    0x8(%ebp),%eax
085ffce8 +0x036:  movb   $0x1,0x10(%eax)
085ffcec +0x03a:  mov    $0x1,%eax
085ffcf1 +0x03f:  jmp    085ffead <+0x1fb>
085ffcf6 +0x044:  mov    0x8(%ebp),%eax
085ffcf9 +0x047:  movzbl 0x10(%eax),%eax
085ffcfd +0x04b:  cmp    $0x1,%al
085ffcff +0x04d:  jg     085ffd18 <+0x66>
085ffd01 +0x04f:  cmpl   $0x19,-0x8(%ebp)
085ffd05 +0x053:  jle    085ffd18 <+0x66>
085ffd07 +0x055:  mov    0x8(%ebp),%eax
085ffd0a +0x058:  movb   $0x2,0x10(%eax)
085ffd0e +0x05c:  mov    $0x1,%eax
085ffd13 +0x061:  jmp    085ffead <+0x1fb>
085ffd18 +0x066:  mov    0x8(%ebp),%eax
085ffd1b +0x069:  movzbl 0x10(%eax),%eax
085ffd1f +0x06d:  cmp    $0x2,%al
085ffd21 +0x06f:  jg     085ffd3a <+0x88>
085ffd23 +0x071:  cmpl   $0x28,-0x8(%ebp)
085ffd27 +0x075:  jle    085ffd3a <+0x88>
085ffd29 +0x077:  mov    0x8(%ebp),%eax
085ffd2c +0x07a:  movb   $0x3,0x10(%eax)
085ffd30 +0x07e:  mov    $0x1,%eax
085ffd35 +0x083:  jmp    085ffead <+0x1fb>
085ffd3a +0x088:  mov    0x8(%ebp),%eax
085ffd3d +0x08b:  movzbl 0x10(%eax),%eax
085ffd41 +0x08f:  cmp    $0x3,%al
085ffd43 +0x091:  jg     085ffd5c <+0xaa>
085ffd45 +0x093:  cmpl   $0x50,-0x8(%ebp)
085ffd49 +0x097:  jle    085ffd5c <+0xaa>
085ffd4b +0x099:  mov    0x8(%ebp),%eax
085ffd4e +0x09c:  movb   $0x4,0x10(%eax)
085ffd52 +0x0a0:  mov    $0x1,%eax
085ffd57 +0x0a5:  jmp    085ffead <+0x1fb>
085ffd5c +0x0aa:  mov    0x8(%ebp),%eax
085ffd5f +0x0ad:  movzbl 0x10(%eax),%eax
085ffd63 +0x0b1:  cmp    $0x4,%al
085ffd65 +0x0b3:  jg     085ffd81 <+0xcf>
085ffd67 +0x0b5:  cmpl   $0x96,-0x8(%ebp)
085ffd6e +0x0bc:  jle    085ffd81 <+0xcf>
085ffd70 +0x0be:  mov    0x8(%ebp),%eax
085ffd73 +0x0c1:  movb   $0x5,0x10(%eax)
085ffd77 +0x0c5:  mov    $0x1,%eax
085ffd7c +0x0ca:  jmp    085ffead <+0x1fb>
085ffd81 +0x0cf:  mov    0x8(%ebp),%eax
085ffd84 +0x0d2:  movzbl 0x10(%eax),%eax
085ffd88 +0x0d6:  cmp    $0x5,%al
085ffd8a +0x0d8:  jg     085ffda6 <+0xf4>
085ffd8c +0x0da:  cmpl   $0xfa,-0x8(%ebp)
085ffd93 +0x0e1:  jle    085ffda6 <+0xf4>
085ffd95 +0x0e3:  mov    0x8(%ebp),%eax
085ffd98 +0x0e6:  movb   $0x6,0x10(%eax)
085ffd9c +0x0ea:  mov    $0x1,%eax
085ffda1 +0x0ef:  jmp    085ffead <+0x1fb>
085ffda6 +0x0f4:  mov    0x8(%ebp),%eax
085ffda9 +0x0f7:  movzbl 0x10(%eax),%eax
085ffdad +0x0fb:  cmp    $0x6,%al
085ffdaf +0x0fd:  jne    085ffdc4 <+0x112>
085ffdb1 +0x0ff:  cmpl   $0xfa,-0x8(%ebp)
085ffdb8 +0x106:  jle    085ffdc4 <+0x112>
085ffdba +0x108:  mov    $0x1,%eax
085ffdbf +0x10d:  jmp    085ffead <+0x1fb>
085ffdc4 +0x112:  mov    0x8(%ebp),%eax
085ffdc7 +0x115:  movzbl 0x10(%eax),%eax
085ffdcb +0x119:  test   %al,%al
085ffdcd +0x11b:  js     085ffde6 <+0x134>
085ffdcf +0x11d:  cmpl   $0xa,-0x4(%ebp)
085ffdd3 +0x121:  jle    085ffde6 <+0x134>
085ffdd5 +0x123:  mov    0x8(%ebp),%eax
085ffdd8 +0x126:  movb   $0xff,0x10(%eax)
085ffddc +0x12a:  mov    $0x1,%eax
085ffde1 +0x12f:  jmp    085ffead <+0x1fb>
085ffde6 +0x134:  mov    0x8(%ebp),%eax
085ffde9 +0x137:  movzbl 0x10(%eax),%eax
085ffded +0x13b:  cmp    $0xff,%al
085ffdef +0x13d:  jl     085ffe08 <+0x156>
085ffdf1 +0x13f:  cmpl   $0x19,-0x4(%ebp)
085ffdf5 +0x143:  jle    085ffe08 <+0x156>
085ffdf7 +0x145:  mov    0x8(%ebp),%eax
085ffdfa +0x148:  movb   $0xfe,0x10(%eax)
085ffdfe +0x14c:  mov    $0x1,%eax
085ffe03 +0x151:  jmp    085ffead <+0x1fb>
085ffe08 +0x156:  mov    0x8(%ebp),%eax
085ffe0b +0x159:  movzbl 0x10(%eax),%eax
085ffe0f +0x15d:  cmp    $0xfe,%al
085ffe11 +0x15f:  jl     085ffe2a <+0x178>
085ffe13 +0x161:  cmpl   $0x28,-0x4(%ebp)
085ffe17 +0x165:  jle    085ffe2a <+0x178>
085ffe19 +0x167:  mov    0x8(%ebp),%eax
085ffe1c +0x16a:  movb   $0xfd,0x10(%eax)
085ffe20 +0x16e:  mov    $0x1,%eax
085ffe25 +0x173:  jmp    085ffead <+0x1fb>
085ffe2a +0x178:  mov    0x8(%ebp),%eax
085ffe2d +0x17b:  movzbl 0x10(%eax),%eax
085ffe31 +0x17f:  cmp    $0xfd,%al
085ffe33 +0x181:  jl     085ffe49 <+0x197>
085ffe35 +0x183:  cmpl   $0x50,-0x4(%ebp)
085ffe39 +0x187:  jle    085ffe49 <+0x197>
085ffe3b +0x189:  mov    0x8(%ebp),%eax
085ffe3e +0x18c:  movb   $0xfc,0x10(%eax)
085ffe42 +0x190:  mov    $0x1,%eax
085ffe47 +0x195:  jmp    085ffead <+0x1fb>
085ffe49 +0x197:  mov    0x8(%ebp),%eax
085ffe4c +0x19a:  movzbl 0x10(%eax),%eax
085ffe50 +0x19e:  cmp    $0xfc,%al
085ffe52 +0x1a0:  jl     085ffe6b <+0x1b9>
085ffe54 +0x1a2:  cmpl   $0x96,-0x4(%ebp)
085ffe5b +0x1a9:  jle    085ffe6b <+0x1b9>
085ffe5d +0x1ab:  mov    0x8(%ebp),%eax
085ffe60 +0x1ae:  movb   $0xfb,0x10(%eax)
085ffe64 +0x1b2:  mov    $0x1,%eax
085ffe69 +0x1b7:  jmp    085ffead <+0x1fb>
085ffe6b +0x1b9:  mov    0x8(%ebp),%eax
085ffe6e +0x1bc:  movzbl 0x10(%eax),%eax
085ffe72 +0x1c0:  cmp    $0xfb,%al
085ffe74 +0x1c2:  jl     085ffe8d <+0x1db>
085ffe76 +0x1c4:  cmpl   $0xfa,-0x4(%ebp)
085ffe7d +0x1cb:  jle    085ffe8d <+0x1db>
085ffe7f +0x1cd:  mov    0x8(%ebp),%eax
085ffe82 +0x1d0:  movb   $0xfa,0x10(%eax)
085ffe86 +0x1d4:  mov    $0x1,%eax
085ffe8b +0x1d9:  jmp    085ffead <+0x1fb>
085ffe8d +0x1db:  mov    0x8(%ebp),%eax
085ffe90 +0x1de:  movzbl 0x10(%eax),%eax
085ffe94 +0x1e2:  cmp    $0xfa,%al
085ffe96 +0x1e4:  jne    085ffea8 <+0x1f6>
085ffe98 +0x1e6:  cmpl   $0xfa,-0x4(%ebp)
085ffe9f +0x1ed:  jle    085ffea8 <+0x1f6>
085ffea1 +0x1ef:  mov    $0x1,%eax
085ffea6 +0x1f4:  jmp    085ffead <+0x1fb>
085ffea8 +0x1f6:  mov    $0x0,%eax
085ffead +0x1fb:  leave
085ffeae +0x1fc:  ret
085ffeaf +0x1fd:  nop
```

## 反编译 C

```c
// CAppLoadChecker::checkLoad_dbq @ 0x85ffcb2

/* CAppLoadChecker::checkLoad_dbq(int) */

undefined4 __thiscall CAppLoadChecker::checkLoad_dbq(CAppLoadChecker *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 - *(int *)this;
  iVar1 = *(int *)this - param_1;
  if (((char)this[0x10] < '\x01') && (10 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x1;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x02') && (0x19 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x2;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x03') && (0x28 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x3;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x04') && (0x50 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x4;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x05') && (0x96 < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x5;
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\x06') && (0xfa < iVar3)) {
    this[0x10] = (CAppLoadChecker)0x6;
    uVar2 = 1;
  }
  else if ((this[0x10] == (CAppLoadChecker)0x6) && (0xfa < iVar3)) {
    uVar2 = 1;
  }
  else if (((char)this[0x10] < '\0') || (iVar1 < 0xb)) {
    if (((char)this[0x10] < -1) || (iVar1 < 0x1a)) {
      if (((char)this[0x10] < -2) || (iVar1 < 0x29)) {
        if (((char)this[0x10] < -3) || (iVar1 < 0x51)) {
          if (((char)this[0x10] < -4) || (iVar1 < 0x97)) {
            if (((char)this[0x10] < -5) || (iVar1 < 0xfb)) {
              if ((this[0x10] == (CAppLoadChecker)0xfa) && (0xfa < iVar1)) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              this[0x10] = (CAppLoadChecker)0xfa;
              uVar2 = 1;
            }
          }
          else {
            this[0x10] = (CAppLoadChecker)0xfb;
            uVar2 = 1;
          }
        }
        else {
          this[0x10] = (CAppLoadChecker)0xfc;
          uVar2 = 1;
        }
      }
      else {
        this[0x10] = (CAppLoadChecker)0xfd;
        uVar2 = 1;
      }
    }
    else {
      this[0x10] = (CAppLoadChecker)0xfe;
      uVar2 = 1;
    }
  }
  else {
    this[0x10] = (CAppLoadChecker)0xff;
    uVar2 = 1;
  }
  return uVar2;
}
```
