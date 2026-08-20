# IncrementTradeGold

`_ZN15CReliablePerson18IncrementTradeGoldEj`

`CReliablePerson::IncrementTradeGold(unsigned int)`

| 类 | 地址 |
|---|---|
| `CReliablePerson` | `0x086453d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086453d8  _ZN15CReliablePerson18IncrementTradeGoldEj
#           CReliablePerson::IncrementTradeGold(unsigned int)
# range [0x086453d8, 0x08645467]
086453d8 +0x00:  push   %ebp
086453d9 +0x01:  mov    %esp,%ebp
086453db +0x03:  sub    $0x14,%esp
086453de +0x06:  mov    0x8(%ebp),%eax
086453e1 +0x09:  mov    0x8(%eax),%eax
086453e4 +0x0c:  mov    %eax,%edx
086453e6 +0x0e:  add    0xc(%ebp),%edx
086453e9 +0x11:  mov    0x8(%ebp),%eax
086453ec +0x14:  mov    %edx,0x8(%eax)
086453ef +0x17:  mov    0x8(%ebp),%eax
086453f2 +0x1a:  mov    (%eax),%eax
086453f4 +0x1c:  mov    %eax,%edx
086453f6 +0x1e:  add    0xc(%ebp),%edx
086453f9 +0x21:  mov    0x8(%ebp),%eax
086453fc +0x24:  mov    %edx,(%eax)
086453fe +0x26:  mov    0x8(%ebp),%eax
08645401 +0x29:  mov    (%eax),%eax
08645403 +0x2b:  cmp    $0x3b9ac9ff,%eax
08645408 +0x30:  jbe    08645466 <+0x8e>
0864540a +0x32:  mov    0x8(%ebp),%eax
0864540d +0x35:  mov    (%eax),%eax
0864540f +0x37:  mov    %eax,-0x4(%ebp)
08645412 +0x3a:  mov    -0x4(%ebp),%ecx
08645415 +0x3d:  mov    %ecx,%eax
08645417 +0x3f:  shr    $0x9,%eax
0864541a +0x42:  mov    %eax,-0x14(%ebp)
0864541d +0x45:  mov    $0x44b83,%edx
08645422 +0x4a:  mov    -0x14(%ebp),%eax
08645425 +0x4d:  mul    %edx
08645427 +0x4f:  mov    %edx,%eax
08645429 +0x51:  shr    $0x7,%eax
0864542c +0x54:  imul   $0x3b9aca00,%eax,%eax
08645432 +0x5a:  mov    %ecx,%edx
08645434 +0x5c:  sub    %eax,%edx
08645436 +0x5e:  mov    %edx,%eax
08645438 +0x60:  mov    0x8(%ebp),%edx
0864543b +0x63:  mov    %eax,(%edx)
0864543d +0x65:  mov    0x8(%ebp),%eax
08645440 +0x68:  mov    0x4(%eax),%ecx
08645443 +0x6b:  mov    -0x4(%ebp),%eax
08645446 +0x6e:  mov    %eax,%edx
08645448 +0x70:  shr    $0x9,%edx
0864544b +0x73:  mov    %edx,-0x14(%ebp)
0864544e +0x76:  mov    $0x44b83,%edx
08645453 +0x7b:  mov    -0x14(%ebp),%eax
08645456 +0x7e:  mul    %edx
08645458 +0x80:  mov    %edx,%eax
0864545a +0x82:  shr    $0x7,%eax
0864545d +0x85:  lea    (%ecx,%eax,1),%edx
08645460 +0x88:  mov    0x8(%ebp),%eax
08645463 +0x8b:  mov    %edx,0x4(%eax)
08645466 +0x8e:  leave
08645467 +0x8f:  ret
```

## 反编译 C

```c
// CReliablePerson::IncrementTradeGold @ 0x86453d8

/* CReliablePerson::IncrementTradeGold(unsigned int) */

void __thiscall CReliablePerson::IncrementTradeGold(CReliablePerson *this,uint param_1)

{
  uint uVar1;
  
  *(uint *)(this + 8) = *(int *)(this + 8) + param_1;
  *(uint *)this = *(int *)this + param_1;
  if (999999999 < *(uint *)this) {
    uVar1 = *(uint *)this;
    *(uint *)this = uVar1 + (uint)((ulonglong)(uVar1 >> 9) * 0x44b83 >> 0x27) * -1000000000;
    *(uint *)(this + 4) = *(int *)(this + 4) + (uint)((ulonglong)(uVar1 >> 9) * 0x44b83 >> 0x27);
  }
  return;
}
```
