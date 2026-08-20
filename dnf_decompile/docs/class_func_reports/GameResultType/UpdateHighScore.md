# UpdateHighScore

`_ZN14GameResultType15UpdateHighScoreERKS_`

`GameResultType::UpdateHighScore(GameResultType const&)`

| 类 | 地址 |
|---|---|
| `GameResultType` | `0x084b750c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b750c  _ZN14GameResultType15UpdateHighScoreERKS_
#           GameResultType::UpdateHighScore(GameResultType const&)
# range [0x084b750c, 0x084b75ad]
084b750c +0x00:  push   %ebp
084b750d +0x01:  mov    %esp,%ebp
084b750f +0x03:  sub    $0x10,%esp
084b7512 +0x06:  movl   $0x0,-0x4(%ebp)
084b7519 +0x0d:  mov    0xc(%ebp),%eax
084b751c +0x10:  movzwl 0x40(%eax),%edx
084b7520 +0x14:  mov    0x8(%ebp),%eax
084b7523 +0x17:  movzwl 0x40(%eax),%eax
084b7527 +0x1b:  cmp    %ax,%dx
084b752a +0x1e:  jbe    084b753e <+0x32>
084b752c +0x20:  mov    0xc(%ebp),%eax
084b752f +0x23:  movzwl 0x40(%eax),%edx
084b7533 +0x27:  mov    0x8(%ebp),%eax
084b7536 +0x2a:  mov    %dx,0x40(%eax)
084b753a +0x2e:  orl    $0x1,-0x4(%ebp)
084b753e +0x32:  mov    0xc(%ebp),%eax
084b7541 +0x35:  movzwl 0x42(%eax),%edx
084b7545 +0x39:  mov    0x8(%ebp),%eax
084b7548 +0x3c:  movzwl 0x42(%eax),%eax
084b754c +0x40:  cmp    %ax,%dx
084b754f +0x43:  jbe    084b7563 <+0x57>
084b7551 +0x45:  mov    0xc(%ebp),%eax
084b7554 +0x48:  movzwl 0x42(%eax),%edx
084b7558 +0x4c:  mov    0x8(%ebp),%eax
084b755b +0x4f:  mov    %dx,0x42(%eax)
084b755f +0x53:  orl    $0x2,-0x4(%ebp)
084b7563 +0x57:  mov    0xc(%ebp),%eax
084b7566 +0x5a:  movzwl 0x48(%eax),%edx
084b756a +0x5e:  mov    0x8(%ebp),%eax
084b756d +0x61:  movzwl 0x48(%eax),%eax
084b7571 +0x65:  cmp    %ax,%dx
084b7574 +0x68:  jbe    084b7588 <+0x7c>
084b7576 +0x6a:  mov    0xc(%ebp),%eax
084b7579 +0x6d:  movzwl 0x48(%eax),%edx
084b757d +0x71:  mov    0x8(%ebp),%eax
084b7580 +0x74:  mov    %dx,0x48(%eax)
084b7584 +0x78:  orl    $0x8,-0x4(%ebp)
084b7588 +0x7c:  mov    0xc(%ebp),%eax
084b758b +0x7f:  mov    0x44(%eax),%edx
084b758e +0x82:  mov    0x8(%ebp),%eax
084b7591 +0x85:  mov    0x44(%eax),%eax
084b7594 +0x88:  cmp    %eax,%edx
084b7596 +0x8a:  jae    084b75a8 <+0x9c>
084b7598 +0x8c:  mov    0xc(%ebp),%eax
084b759b +0x8f:  mov    0x44(%eax),%edx
084b759e +0x92:  mov    0x8(%ebp),%eax
084b75a1 +0x95:  mov    %edx,0x44(%eax)
084b75a4 +0x98:  orl    $0x4,-0x4(%ebp)
084b75a8 +0x9c:  mov    -0x4(%ebp),%eax
084b75ab +0x9f:  leave
084b75ac +0xa0:  ret
084b75ad +0xa1:  nop
```

## 反编译 C

```c
// GameResultType::UpdateHighScore @ 0x84b750c

/* GameResultType::UpdateHighScore(GameResultType const&) */

byte __thiscall GameResultType::UpdateHighScore(GameResultType *this,GameResultType *param_1)

{
  byte bVar1;
  
  bVar1 = *(ushort *)(this + 0x40) < *(ushort *)(param_1 + 0x40);
  if ((bool)bVar1) {
    *(undefined2 *)(this + 0x40) = *(undefined2 *)(param_1 + 0x40);
  }
  if (*(ushort *)(this + 0x42) < *(ushort *)(param_1 + 0x42)) {
    *(undefined2 *)(this + 0x42) = *(undefined2 *)(param_1 + 0x42);
    bVar1 = bVar1 | 2;
  }
  if (*(ushort *)(this + 0x48) < *(ushort *)(param_1 + 0x48)) {
    *(undefined2 *)(this + 0x48) = *(undefined2 *)(param_1 + 0x48);
    bVar1 = bVar1 | 8;
  }
  if (*(uint *)(param_1 + 0x44) < *(uint *)(this + 0x44)) {
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
    bVar1 = bVar1 | 4;
  }
  return bVar1;
}
```
