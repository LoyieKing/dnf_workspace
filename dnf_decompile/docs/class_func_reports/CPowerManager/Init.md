# Init

`_ZN13CPowerManager4InitEv`

`CPowerManager::Init()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847eabc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847eabc  _ZN13CPowerManager4InitEv
#           CPowerManager::Init()
# range [0x0847eabc, 0x0847eb75]
0847eabc +0x00:  push   %ebp
0847eabd +0x01:  mov    %esp,%ebp
0847eabf +0x03:  sub    $0x18,%esp
0847eac2 +0x06:  mov    0x8(%ebp),%eax
0847eac5 +0x09:  movl   $0x0,0x4(%eax)
0847eacc +0x10:  mov    0x8(%ebp),%eax
0847eacf +0x13:  movl   $0x0,0x8(%eax)
0847ead6 +0x1a:  mov    0x8(%ebp),%eax
0847ead9 +0x1d:  movl   $0x0,0x14(%eax)
0847eae0 +0x24:  mov    0x8(%ebp),%eax
0847eae3 +0x27:  movl   $0x0,0x18(%eax)
0847eaea +0x2e:  mov    0x8(%ebp),%eax
0847eaed +0x31:  movl   $0x0,0xc(%eax)
0847eaf4 +0x38:  mov    0x8(%ebp),%eax
0847eaf7 +0x3b:  movl   $0x0,0x10(%eax)
0847eafe +0x42:  mov    0x8(%ebp),%eax
0847eb01 +0x45:  movl   $0x0,0x1c(%eax)
0847eb08 +0x4c:  mov    0x8(%ebp),%eax
0847eb0b +0x4f:  movl   $0x0,0x20(%eax)
0847eb12 +0x56:  mov    0x8(%ebp),%eax
0847eb15 +0x59:  add    $0x24,%eax
0847eb18 +0x5c:  movl   $0x4,0x8(%esp)
0847eb20 +0x64:  movl   $0x0,0x4(%esp)
0847eb28 +0x6c:  mov    %eax,(%esp)
0847eb2b +0x6f:  call   0807dcc0 <_init+0x5b8>
0847eb30 +0x74:  mov    0x8(%ebp),%eax
0847eb33 +0x77:  add    $0x28,%eax
0847eb36 +0x7a:  movl   $0x18c,0x8(%esp)
0847eb3e +0x82:  movl   $0x0,0x4(%esp)
0847eb46 +0x8a:  mov    %eax,(%esp)
0847eb49 +0x8d:  call   0807dcc0 <_init+0x5b8>
0847eb4e +0x92:  mov    0x8(%ebp),%eax
0847eb51 +0x95:  add    $0x1b4,%eax
0847eb56 +0x9a:  mov    %eax,(%esp)
0847eb59 +0x9d:  call   08480232 <_ZN12CPowerWarLog5ResetEv>  ; CPowerWarLog::Reset()
0847eb5e +0xa2:  mov    0x8(%ebp),%eax
0847eb61 +0xa5:  add    $0x1f0,%eax
0847eb66 +0xaa:  mov    %eax,(%esp)
0847eb69 +0xad:  call   084808de <_ZN18CPowerWarPacketLog5ResetEv>  ; CPowerWarPacketLog::Reset()
0847eb6e +0xb2:  mov    $0x1,%eax
0847eb73 +0xb7:  leave
0847eb74 +0xb8:  ret
0847eb75 +0xb9:  nop
```

## 反编译 C

```c
// CPowerManager::Init @ 0x847eabc

/* CPowerManager::Init() */

undefined4 __thiscall CPowerManager::Init(CPowerManager *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  memset(this + 0x24,0,4);
  memset(this + 0x28,0,0x18c);
  CPowerWarLog::Reset((CPowerWarLog *)(this + 0x1b4));
  CPowerWarPacketLog::Reset((CPowerWarPacketLog *)(this + 0x1f0));
  return 1;
}
```
