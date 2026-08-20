# Reset

`_ZN12CRelayBattle5ResetEv`

`CRelayBattle::Reset()`

| 类 | 地址 |
|---|---|
| `CRelayBattle` | `0x085de01a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de01a  _ZN12CRelayBattle5ResetEv
#           CRelayBattle::Reset()
# range [0x085de01a, 0x085de045]
085de01a +0x00:  push   %ebp
085de01b +0x01:  mov    %esp,%ebp
085de01d +0x03:  mov    0x8(%ebp),%eax
085de020 +0x06:  movl   $0x0,(%eax)
085de026 +0x0c:  mov    0x8(%ebp),%eax
085de029 +0x0f:  movw   $0x0,0x4(%eax)
085de02f +0x15:  mov    0x8(%ebp),%eax
085de032 +0x18:  movb   $0x0,0x6(%eax)
085de036 +0x1c:  mov    0x8(%ebp),%eax
085de039 +0x1f:  movb   $0x0,0x7(%eax)
085de03d +0x23:  mov    0x8(%ebp),%eax
085de040 +0x26:  movb   $0x0,0x8(%eax)
085de044 +0x2a:  pop    %ebp
085de045 +0x2b:  ret
```

## 反编译 C

```c
// CRelayBattle::Reset @ 0x85de01a

/* CRelayBattle::Reset() */

void __thiscall CRelayBattle::Reset(CRelayBattle *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  this[6] = (CRelayBattle)0x0;
  this[7] = (CRelayBattle)0x0;
  this[8] = (CRelayBattle)0x0;
  return;
}
```
