# verfiyHandShakeComplete

`_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv`

`yaSSL::SSL::verfiyHandShakeComplete()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e0e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e0e0  _ZN5yaSSL3SSL23verfiyHandShakeCompleteEv
#           yaSSL::SSL::verfiyHandShakeComplete()
# range [0x0874e0e0, 0x0874e139]
0874e0e0 +0x00:  push   %ebp
0874e0e1 +0x01:  mov    %esp,%ebp
0874e0e3 +0x03:  sub    $0x18,%esp
0874e0e6 +0x06:  mov    %ebx,-0x8(%ebp)
0874e0e9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e0ee +0x0e:  add    $0xc1eaaa,%ebx
0874e0f4 +0x14:  mov    %esi,-0x4(%ebp)
0874e0f7 +0x17:  mov    0x8(%ebp),%esi
0874e0fa +0x1a:  mov    %esi,(%esp)
0874e0fd +0x1d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874e102 +0x22:  test   %eax,%eax
0874e104 +0x24:  je     0874e110 <+0x30>
0874e106 +0x26:  mov    -0x8(%ebp),%ebx
0874e109 +0x29:  mov    -0x4(%ebp),%esi
0874e10c +0x2c:  mov    %ebp,%esp
0874e10e +0x2e:  pop    %ebp
0874e10f +0x2f:  ret
0874e110 +0x30:  lea    0x8ec(%esi),%eax
0874e116 +0x36:  mov    %eax,(%esp)
0874e119 +0x39:  call   0874de90 <_ZNK5yaSSL6States12getHandShakeEv>  ; yaSSL::States::getHandShake() const
0874e11e +0x3e:  cmpl   $0x3,(%eax)
0874e121 +0x41:  je     0874e106 <+0x26>
0874e123 +0x43:  mov    %esi,(%esp)
0874e126 +0x46:  call   0874e030 <_ZN5yaSSL3SSL11order_errorEv>  ; yaSSL::SSL::order_error()
0874e12b +0x4b:  mov    -0x8(%ebp),%ebx
0874e12e +0x4e:  mov    -0x4(%ebp),%esi
0874e131 +0x51:  mov    %ebp,%esp
0874e133 +0x53:  pop    %ebp
0874e134 +0x54:  ret
0874e135 +0x55:  nop
0874e136 +0x56:  lea    0x0(%esi),%esi
0874e139 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::verfiyHandShakeComplete @ 0x874e0e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verfiyHandShakeComplete() */

void __thiscall yaSSL::SSL::verfiyHandShakeComplete(SSL *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getHandShake((States *)(this + 0x8ec));
    if (*piVar2 != 3) {
      order_error(this);
      return;
    }
  }
  return;
}
```
