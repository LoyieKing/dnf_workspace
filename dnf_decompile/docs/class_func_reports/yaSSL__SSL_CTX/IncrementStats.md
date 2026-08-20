# IncrementStats

`_ZN5yaSSL7SSL_CTX14IncrementStatsENS_10StatsFieldE`

`yaSSL::SSL_CTX::IncrementStats(yaSSL::StatsField)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e630  _ZN5yaSSL7SSL_CTX14IncrementStatsENS_10StatsFieldE
#           yaSSL::SSL_CTX::IncrementStats(yaSSL::StatsField)
# range [0x0874e630, 0x0874e749]
0874e630 +0x000:  push   %ebp
0874e631 +0x001:  mov    %esp,%ebp
0874e633 +0x003:  mov    0xc(%ebp),%edx
0874e636 +0x006:  call   087245c4 <__i686.get_pc_thunk.cx>
0874e63b +0x00b:  add    $0xc1e55d,%ecx
0874e641 +0x011:  mov    0x8(%ebp),%eax
0874e644 +0x014:  cmp    $0xe,%edx
0874e647 +0x017:  ja     0874e660 <+0x30>
0874e649 +0x019:  mov    -0x667cd4(%ecx,%edx,4),%edx
0874e650 +0x020:  add    %ecx,%edx
0874e652 +0x022:  jmp    *%edx
0874e654 +0x024:  lea    0x0(%esi,%eiz,1),%esi
0874e658 +0x028:  addl   $0x1,0xf0(%eax)
0874e65f +0x02f:  nop
0874e660 +0x030:  pop    %ebp
0874e661 +0x031:  ret
0874e662 +0x032:  lea    0x0(%esi),%esi
0874e668 +0x038:  addl   $0x1,0xec(%eax)
0874e66f +0x03f:  pop    %ebp
0874e670 +0x040:  ret
0874e671 +0x041:  lea    0x0(%esi,%eiz,1),%esi
0874e678 +0x048:  addl   $0x1,0xb8(%eax)
0874e67f +0x04f:  pop    %ebp
0874e680 +0x050:  ret
0874e681 +0x051:  lea    0x0(%esi,%eiz,1),%esi
0874e688 +0x058:  addl   $0x1,0xbc(%eax)
0874e68f +0x05f:  pop    %ebp
0874e690 +0x060:  ret
0874e691 +0x061:  lea    0x0(%esi,%eiz,1),%esi
0874e698 +0x068:  addl   $0x1,0xc0(%eax)
0874e69f +0x06f:  pop    %ebp
0874e6a0 +0x070:  ret
0874e6a1 +0x071:  lea    0x0(%esi,%eiz,1),%esi
0874e6a8 +0x078:  addl   $0x1,0xc4(%eax)
0874e6af +0x07f:  pop    %ebp
0874e6b0 +0x080:  ret
0874e6b1 +0x081:  lea    0x0(%esi,%eiz,1),%esi
0874e6b8 +0x088:  addl   $0x1,0xc8(%eax)
0874e6bf +0x08f:  pop    %ebp
0874e6c0 +0x090:  ret
0874e6c1 +0x091:  lea    0x0(%esi,%eiz,1),%esi
0874e6c8 +0x098:  addl   $0x1,0xcc(%eax)
0874e6cf +0x09f:  pop    %ebp
0874e6d0 +0x0a0:  ret
0874e6d1 +0x0a1:  lea    0x0(%esi,%eiz,1),%esi
0874e6d8 +0x0a8:  addl   $0x1,0xd0(%eax)
0874e6df +0x0af:  pop    %ebp
0874e6e0 +0x0b0:  ret
0874e6e1 +0x0b1:  lea    0x0(%esi,%eiz,1),%esi
0874e6e8 +0x0b8:  addl   $0x1,0xd4(%eax)
0874e6ef +0x0bf:  pop    %ebp
0874e6f0 +0x0c0:  ret
0874e6f1 +0x0c1:  lea    0x0(%esi,%eiz,1),%esi
0874e6f8 +0x0c8:  addl   $0x1,0xd8(%eax)
0874e6ff +0x0cf:  pop    %ebp
0874e700 +0x0d0:  ret
0874e701 +0x0d1:  lea    0x0(%esi,%eiz,1),%esi
0874e708 +0x0d8:  addl   $0x1,0xdc(%eax)
0874e70f +0x0df:  pop    %ebp
0874e710 +0x0e0:  ret
0874e711 +0x0e1:  lea    0x0(%esi,%eiz,1),%esi
0874e718 +0x0e8:  addl   $0x1,0xe0(%eax)
0874e71f +0x0ef:  pop    %ebp
0874e720 +0x0f0:  ret
0874e721 +0x0f1:  lea    0x0(%esi,%eiz,1),%esi
0874e728 +0x0f8:  addl   $0x1,0xe4(%eax)
0874e72f +0x0ff:  pop    %ebp
0874e730 +0x100:  ret
0874e731 +0x101:  lea    0x0(%esi,%eiz,1),%esi
0874e738 +0x108:  addl   $0x1,0xe8(%eax)
0874e73f +0x10f:  pop    %ebp
0874e740 +0x110:  ret
0874e741 +0x111:  nop
0874e742 +0x112:  lea    0x0(%esi,%eiz,1),%esi
0874e749 +0x119:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::IncrementStats @ 0x874e630

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::SSL_CTX::IncrementStats(yaSSL::StatsField) */

void __thiscall yaSSL::SSL_CTX::IncrementStats(SSL_CTX *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + 1;
    return;
  case 1:
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
    return;
  case 2:
    *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + 1;
    return;
  case 3:
    *(int *)(this + 0xc4) = *(int *)(this + 0xc4) + 1;
    return;
  case 4:
    *(int *)(this + 200) = *(int *)(this + 200) + 1;
    return;
  case 5:
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
    return;
  case 6:
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
    return;
  case 7:
    *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
    return;
  case 8:
    *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
    return;
  case 9:
    *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
    return;
  case 10:
    *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + 1;
    return;
  case 0xb:
    *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
    return;
  case 0xc:
    *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
    return;
  case 0xd:
    *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
    return;
  case 0xe:
    *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
  }
  return;
}
```
