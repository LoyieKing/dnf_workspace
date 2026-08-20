# IncreaseChangeSequenceCount

`_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi`

`CRelayBattleMgr::IncreaseChangeSequenceCount(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de498` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de498  _ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi
#           CRelayBattleMgr::IncreaseChangeSequenceCount(int)
# range [0x085de498, 0x085de53d]
085de498 +0x00:  push   %ebp
085de499 +0x01:  mov    %esp,%ebp
085de49b +0x03:  push   %ebx
085de49c +0x04:  sub    $0x24,%esp
085de49f +0x07:  cmpl   $0x0,0xc(%ebp)
085de4a3 +0x0b:  jle    085de534 <+0x9c>
085de4a9 +0x11:  cmpl   $0x2,0xc(%ebp)
085de4ad +0x15:  jg     085de537 <+0x9f>
085de4b3 +0x1b:  mov    0xc(%ebp),%eax
085de4b6 +0x1e:  mov    0x8(%ebp),%edx
085de4b9 +0x21:  lea    0x18(%eax),%ecx
085de4bc +0x24:  mov    (%edx,%ecx,4),%edx
085de4bf +0x27:  lea    0x1(%edx),%ecx
085de4c2 +0x2a:  mov    0x8(%ebp),%edx
085de4c5 +0x2d:  add    $0x18,%eax
085de4c8 +0x30:  mov    %ecx,(%edx,%eax,4)
085de4cb +0x33:  mov    0xc(%ebp),%edx
085de4ce +0x36:  mov    0x8(%ebp),%eax
085de4d1 +0x39:  add    $0x18,%edx
085de4d4 +0x3c:  mov    (%eax,%edx,4),%eax
085de4d7 +0x3f:  cmp    $0x3,%eax
085de4da +0x42:  jle    085de538 <+0xa0>
085de4dc +0x44:  mov    0xc(%ebp),%edx
085de4df +0x47:  mov    0x8(%ebp),%eax
085de4e2 +0x4a:  add    $0x18,%edx
085de4e5 +0x4d:  mov    (%eax,%edx,4),%ebx
085de4e8 +0x50:  movl   $0x0,0xc(%esp)
085de4f0 +0x58:  movl   $0x13de,0x8(%esp)
085de4f8 +0x60:  movl   $&_ZZN15CRelayBattleMgr27IncreaseChangeSequenceCountEiE19__PRETTY_FUNCTION__,0x4(%esp)
085de500 +0x68:  lea    -0x18(%ebp),%eax
085de503 +0x6b:  mov    %eax,(%esp)
085de506 +0x6e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085de50b +0x73:  mov    %ebx,0x8(%esp)
085de50f +0x77:  movl   $"ERROR ChangeSequenceCount overflow (%d)",0x4(%esp)
085de517 +0x7f:  lea    -0x18(%ebp),%eax
085de51a +0x82:  mov    %eax,(%esp)
085de51d +0x85:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085de522 +0x8a:  mov    0xc(%ebp),%edx
085de525 +0x8d:  mov    0x8(%ebp),%eax
085de528 +0x90:  add    $0x18,%edx
085de52b +0x93:  movl   $0x4,(%eax,%edx,4)
085de532 +0x9a:  jmp    085de538 <+0xa0>
085de534 +0x9c:  nop
085de535 +0x9d:  jmp    085de538 <+0xa0>
085de537 +0x9f:  nop
085de538 +0xa0:  add    $0x24,%esp
085de53b +0xa3:  pop    %ebx
085de53c +0xa4:  pop    %ebp
085de53d +0xa5:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::IncreaseChangeSequenceCount @ 0x85de498

/* CRelayBattleMgr::IncreaseChangeSequenceCount(int) */

void __thiscall CRelayBattleMgr::IncreaseChangeSequenceCount(CRelayBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  cMyTrace local_1c [20];
  
  if (((0 < param_1) && (param_1 < 3)) &&
     (*(int *)(this + (param_1 + 0x18) * 4) = *(int *)(this + (param_1 + 0x18) * 4) + 1,
     3 < *(int *)(this + (param_1 + 0x18) * 4))) {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x18) * 4);
    cMyTrace::cMyTrace(local_1c,"void CRelayBattleMgr::IncreaseChangeSequenceCount(int)",0x13de,0);
    cMyTrace::operator()(local_1c,"ERROR ChangeSequenceCount overflow (%d)",uVar1);
    *(undefined4 *)(this + (param_1 + 0x18) * 4) = 4;
  }
  return;
}
```
