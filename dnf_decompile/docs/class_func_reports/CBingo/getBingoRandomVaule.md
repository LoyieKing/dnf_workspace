# getBingoRandomVaule

`_ZN6CBingo19getBingoRandomVauleEi`

`CBingo::getBingoRandomVaule(int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cae70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cae70  _ZN6CBingo19getBingoRandomVauleEi
#           CBingo::getBingoRandomVaule(int)
# range [0x080cae70, 0x080caec3]
080cae70 +0x00:  push   %ebp
080cae71 +0x01:  mov    %esp,%ebp
080cae73 +0x03:  sub    $0x28,%esp
080cae76 +0x06:  movl   $0x9,-0x10(%ebp)
080cae7d +0x0d:  mov    0x8(%ebp),%eax
080cae80 +0x10:  add    $0x10,%eax
080cae83 +0x13:  mov    %eax,(%esp)
080cae86 +0x16:  call   080cea1e <_GLOBAL__I__ZN10BingoEventC2Ev+0x386b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x386b
080cae8b +0x1b:  lea    -0x10(%ebp),%edx
080cae8e +0x1e:  mov    %edx,0x4(%esp)
080cae92 +0x22:  mov    %eax,(%esp)
080cae95 +0x25:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
080cae9a +0x2a:  add    $0x1,%eax
080cae9d +0x2d:  mov    %eax,-0xc(%ebp)
080caea0 +0x30:  mov    -0xc(%ebp),%eax
080caea3 +0x33:  sub    $0xa,%eax
080caea6 +0x36:  add    0xc(%ebp),%eax
080caea9 +0x39:  mov    %eax,-0xc(%ebp)
080caeac +0x3c:  cmpl   $0x0,-0xc(%ebp)
080caeb0 +0x40:  jle    080caebd <+0x4d>
080caeb2 +0x42:  cmpl   $0x32,-0xc(%ebp)
080caeb6 +0x46:  jg     080caebd <+0x4d>
080caeb8 +0x48:  mov    -0xc(%ebp),%eax
080caebb +0x4b:  jmp    080caec2 <+0x52>
080caebd +0x4d:  mov    $0x0,%eax
080caec2 +0x52:  leave
080caec3 +0x53:  ret
```

## 反编译 C

```c
// CBingo::getBingoRandomVaule @ 0x80cae70

/* CBingo::getBingoRandomVaule(int) */

int __thiscall CBingo::getBingoRandomVaule(CBingo *this,int param_1)

{
  CMTRand *this_00;
  int iVar1;
  ulong local_14 [4];
  
  local_14[0] = 9;
  this_00 = (CMTRand *)boost::shared_ptr<CMTRand>::operator->((shared_ptr<CMTRand> *)(this + 0x10));
  iVar1 = CMTRand::randInt(this_00,local_14);
  iVar1 = iVar1 + -9 + param_1;
  if ((iVar1 < 1) || (0x32 < iVar1)) {
    iVar1 = 0;
  }
  return iVar1;
}
```
