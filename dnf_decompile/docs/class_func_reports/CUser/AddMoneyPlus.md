# AddMoneyPlus

`_ZN5CUser12AddMoneyPlusEi`

`CUser::AddMoneyPlus(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f266  _ZN5CUser12AddMoneyPlusEi
#           CUser::AddMoneyPlus(int)
# range [0x0868f266, 0x0868f30f]
0868f266 +0x00:  push   %ebp
0868f267 +0x01:  mov    %esp,%ebp
0868f269 +0x03:  push   %ebx
0868f26a +0x04:  sub    $0x24,%esp
0868f26d +0x07:  mov    0x8(%ebp),%eax
0868f270 +0x0a:  mov    %eax,(%esp)
0868f273 +0x0d:  call   0868f3ba <_ZN5CUser21exceptedStateMoneyLogEv>  ; CUser::exceptedStateMoneyLog()
0868f278 +0x12:  test   %al,%al
0868f27a +0x14:  jne    0868f309 <+0xa3>
0868f280 +0x1a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868f287 +0x21:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868f28c +0x26:  mov    %eax,-0xc(%ebp)
0868f28f +0x29:  mov    -0xc(%ebp),%eax
0868f292 +0x2c:  mov    %eax,0x4(%esp)
0868f296 +0x30:  mov    0x8(%ebp),%eax
0868f299 +0x33:  mov    %eax,(%esp)
0868f29c +0x36:  call   0868f1c0 <_ZN5CUser18NextCharacMoneyLogEi>  ; CUser::NextCharacMoneyLog(int)
0868f2a1 +0x3b:  mov    0x8(%ebp),%eax
0868f2a4 +0x3e:  mov    0x796c8(%eax),%edx
0868f2aa +0x44:  mov    0x8(%ebp),%ecx
0868f2ad +0x47:  mov    %edx,%eax
0868f2af +0x49:  add    %eax,%eax
0868f2b1 +0x4b:  add    %edx,%eax
0868f2b3 +0x4d:  shl    $0x2,%eax
0868f2b6 +0x50:  lea    (%ecx,%eax,1),%eax
0868f2b9 +0x53:  lea    0x7967c(%eax),%edx
0868f2bf +0x59:  mov    -0xc(%ebp),%eax
0868f2c2 +0x5c:  mov    %eax,(%edx)
0868f2c4 +0x5e:  mov    0x8(%ebp),%eax
0868f2c7 +0x61:  mov    0x796c8(%eax),%edx
0868f2cd +0x67:  mov    0x8(%ebp),%eax
0868f2d0 +0x6a:  mov    0x796c8(%eax),%ecx
0868f2d6 +0x70:  mov    0x8(%ebp),%ebx
0868f2d9 +0x73:  mov    %ecx,%eax
0868f2db +0x75:  add    %eax,%eax
0868f2dd +0x77:  add    %ecx,%eax
0868f2df +0x79:  shl    $0x2,%eax
0868f2e2 +0x7c:  lea    (%ebx,%eax,1),%eax
0868f2e5 +0x7f:  add    $0x79674,%eax
0868f2ea +0x84:  mov    (%eax),%ecx
0868f2ec +0x86:  mov    0xc(%ebp),%eax
0868f2ef +0x89:  add    %eax,%ecx
0868f2f1 +0x8b:  mov    0x8(%ebp),%ebx
0868f2f4 +0x8e:  mov    %edx,%eax
0868f2f6 +0x90:  add    %eax,%eax
0868f2f8 +0x92:  add    %edx,%eax
0868f2fa +0x94:  shl    $0x2,%eax
0868f2fd +0x97:  lea    (%ebx,%eax,1),%eax
0868f300 +0x9a:  add    $0x79674,%eax
0868f305 +0x9f:  mov    %ecx,(%eax)
0868f307 +0xa1:  jmp    0868f30a <+0xa4>
0868f309 +0xa3:  nop
0868f30a +0xa4:  add    $0x24,%esp
0868f30d +0xa7:  pop    %ebx
0868f30e +0xa8:  pop    %ebp
0868f30f +0xa9:  ret
```

## 反编译 C

```c
// CUser::AddMoneyPlus @ 0x868f266

/* CUser::AddMoneyPlus(int) */

void __thiscall CUser::AddMoneyPlus(CUser *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = exceptedStateMoneyLog(this);
  if (cVar1 == '\0') {
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    NextCharacMoneyLog((int)this);
    *(undefined4 *)(this + *(int *)(this + 0x796c8) * 0xc + 0x7967c) = uVar2;
    *(int *)(this + *(int *)(this + 0x796c8) * 0xc + 0x79674) =
         *(int *)(this + *(int *)(this + 0x796c8) * 0xc + 0x79674) + param_1;
  }
  return;
}
```
