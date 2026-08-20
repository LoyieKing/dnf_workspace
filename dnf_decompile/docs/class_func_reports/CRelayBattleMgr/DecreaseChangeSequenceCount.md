# DecreaseChangeSequenceCount

`_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi`

`CRelayBattleMgr::DecreaseChangeSequenceCount(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de53e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de53e  _ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi
#           CRelayBattleMgr::DecreaseChangeSequenceCount(int)
# range [0x085de53e, 0x085de5e3]
085de53e +0x00:  push   %ebp
085de53f +0x01:  mov    %esp,%ebp
085de541 +0x03:  push   %ebx
085de542 +0x04:  sub    $0x24,%esp
085de545 +0x07:  cmpl   $0x0,0xc(%ebp)
085de549 +0x0b:  jle    085de5d9 <+0x9b>
085de54f +0x11:  cmpl   $0x2,0xc(%ebp)
085de553 +0x15:  jg     085de5dc <+0x9e>
085de559 +0x1b:  mov    0xc(%ebp),%eax
085de55c +0x1e:  mov    0x8(%ebp),%edx
085de55f +0x21:  lea    0x18(%eax),%ecx
085de562 +0x24:  mov    (%edx,%ecx,4),%edx
085de565 +0x27:  lea    -0x1(%edx),%ecx
085de568 +0x2a:  mov    0x8(%ebp),%edx
085de56b +0x2d:  add    $0x18,%eax
085de56e +0x30:  mov    %ecx,(%edx,%eax,4)
085de571 +0x33:  mov    0xc(%ebp),%edx
085de574 +0x36:  mov    0x8(%ebp),%eax
085de577 +0x39:  add    $0x18,%edx
085de57a +0x3c:  mov    (%eax,%edx,4),%eax
085de57d +0x3f:  test   %eax,%eax
085de57f +0x41:  jns    085de5dd <+0x9f>
085de581 +0x43:  mov    0xc(%ebp),%edx
085de584 +0x46:  mov    0x8(%ebp),%eax
085de587 +0x49:  add    $0x18,%edx
085de58a +0x4c:  mov    (%eax,%edx,4),%ebx
085de58d +0x4f:  movl   $0x0,0xc(%esp)
085de595 +0x57:  movl   $0x13ea,0x8(%esp)
085de59d +0x5f:  movl   $&_ZZN15CRelayBattleMgr27DecreaseChangeSequenceCountEiE19__PRETTY_FUNCTION__,0x4(%esp)
085de5a5 +0x67:  lea    -0x18(%ebp),%eax
085de5a8 +0x6a:  mov    %eax,(%esp)
085de5ab +0x6d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085de5b0 +0x72:  mov    %ebx,0x8(%esp)
085de5b4 +0x76:  movl   $"ERROR ChangeSequenceCount underflow (%d)",0x4(%esp)
085de5bc +0x7e:  lea    -0x18(%ebp),%eax
085de5bf +0x81:  mov    %eax,(%esp)
085de5c2 +0x84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085de5c7 +0x89:  mov    0xc(%ebp),%edx
085de5ca +0x8c:  mov    0x8(%ebp),%eax
085de5cd +0x8f:  add    $0x18,%edx
085de5d0 +0x92:  movl   $0x0,(%eax,%edx,4)
085de5d7 +0x99:  jmp    085de5dd <+0x9f>
085de5d9 +0x9b:  nop
085de5da +0x9c:  jmp    085de5dd <+0x9f>
085de5dc +0x9e:  nop
085de5dd +0x9f:  add    $0x24,%esp
085de5e0 +0xa2:  pop    %ebx
085de5e1 +0xa3:  pop    %ebp
085de5e2 +0xa4:  ret
085de5e3 +0xa5:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::DecreaseChangeSequenceCount @ 0x85de53e

/* CRelayBattleMgr::DecreaseChangeSequenceCount(int) */

void __thiscall CRelayBattleMgr::DecreaseChangeSequenceCount(CRelayBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  cMyTrace local_1c [20];
  
  if (((0 < param_1) && (param_1 < 3)) &&
     (*(int *)(this + (param_1 + 0x18) * 4) = *(int *)(this + (param_1 + 0x18) * 4) + -1,
     *(int *)(this + (param_1 + 0x18) * 4) < 0)) {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x18) * 4);
    cMyTrace::cMyTrace(local_1c,"void CRelayBattleMgr::DecreaseChangeSequenceCount(int)",0x13ea,0);
    cMyTrace::operator()(local_1c,"ERROR ChangeSequenceCount underflow (%d)",uVar1);
    *(undefined4 *)(this + (param_1 + 0x18) * 4) = 0;
  }
  return;
}
```
