# AddMoneyMinus

`_ZN5CUser13AddMoneyMinusEi`

`CUser::AddMoneyMinus(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f310  _ZN5CUser13AddMoneyMinusEi
#           CUser::AddMoneyMinus(int)
# range [0x0868f310, 0x0868f3b9]
0868f310 +0x00:  push   %ebp
0868f311 +0x01:  mov    %esp,%ebp
0868f313 +0x03:  push   %ebx
0868f314 +0x04:  sub    $0x24,%esp
0868f317 +0x07:  mov    0x8(%ebp),%eax
0868f31a +0x0a:  mov    %eax,(%esp)
0868f31d +0x0d:  call   0868f3ba <_ZN5CUser21exceptedStateMoneyLogEv>  ; CUser::exceptedStateMoneyLog()
0868f322 +0x12:  test   %al,%al
0868f324 +0x14:  jne    0868f3b3 <+0xa3>
0868f32a +0x1a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868f331 +0x21:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868f336 +0x26:  mov    %eax,-0xc(%ebp)
0868f339 +0x29:  mov    -0xc(%ebp),%eax
0868f33c +0x2c:  mov    %eax,0x4(%esp)
0868f340 +0x30:  mov    0x8(%ebp),%eax
0868f343 +0x33:  mov    %eax,(%esp)
0868f346 +0x36:  call   0868f1c0 <_ZN5CUser18NextCharacMoneyLogEi>  ; CUser::NextCharacMoneyLog(int)
0868f34b +0x3b:  mov    0x8(%ebp),%eax
0868f34e +0x3e:  mov    0x796c8(%eax),%edx
0868f354 +0x44:  mov    0x8(%ebp),%ecx
0868f357 +0x47:  mov    %edx,%eax
0868f359 +0x49:  add    %eax,%eax
0868f35b +0x4b:  add    %edx,%eax
0868f35d +0x4d:  shl    $0x2,%eax
0868f360 +0x50:  lea    (%ecx,%eax,1),%eax
0868f363 +0x53:  lea    0x7967c(%eax),%edx
0868f369 +0x59:  mov    -0xc(%ebp),%eax
0868f36c +0x5c:  mov    %eax,(%edx)
0868f36e +0x5e:  mov    0x8(%ebp),%eax
0868f371 +0x61:  mov    0x796c8(%eax),%edx
0868f377 +0x67:  mov    0x8(%ebp),%eax
0868f37a +0x6a:  mov    0x796c8(%eax),%ecx
0868f380 +0x70:  mov    0x8(%ebp),%ebx
0868f383 +0x73:  mov    %ecx,%eax
0868f385 +0x75:  add    %eax,%eax
0868f387 +0x77:  add    %ecx,%eax
0868f389 +0x79:  shl    $0x2,%eax
0868f38c +0x7c:  lea    (%ebx,%eax,1),%eax
0868f38f +0x7f:  add    $0x79678,%eax
0868f394 +0x84:  mov    (%eax),%ecx
0868f396 +0x86:  mov    0xc(%ebp),%eax
0868f399 +0x89:  add    %eax,%ecx
0868f39b +0x8b:  mov    0x8(%ebp),%ebx
0868f39e +0x8e:  mov    %edx,%eax
0868f3a0 +0x90:  add    %eax,%eax
0868f3a2 +0x92:  add    %edx,%eax
0868f3a4 +0x94:  shl    $0x2,%eax
0868f3a7 +0x97:  lea    (%ebx,%eax,1),%eax
0868f3aa +0x9a:  add    $0x79678,%eax
0868f3af +0x9f:  mov    %ecx,(%eax)
0868f3b1 +0xa1:  jmp    0868f3b4 <+0xa4>
0868f3b3 +0xa3:  nop
0868f3b4 +0xa4:  add    $0x24,%esp
0868f3b7 +0xa7:  pop    %ebx
0868f3b8 +0xa8:  pop    %ebp
0868f3b9 +0xa9:  ret
```

## 反编译 C

```c
// CUser::AddMoneyMinus @ 0x868f310

/* CUser::AddMoneyMinus(int) */

void __thiscall CUser::AddMoneyMinus(CUser *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = exceptedStateMoneyLog(this);
  if (cVar1 == '\0') {
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    NextCharacMoneyLog((int)this);
    *(undefined4 *)(this + *(int *)(this + 0x796c8) * 0xc + 0x7967c) = uVar2;
    *(int *)(this + *(int *)(this + 0x796c8) * 0xc + 0x79678) =
         *(int *)(this + *(int *)(this + 0x796c8) * 0xc + 0x79678) + param_1;
  }
  return;
}
```
