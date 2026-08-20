# reset

`_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE`

`TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned char> >&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Source` | `0x08758830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758830  _ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE
#           TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned char> >&)
# range [0x08758830, 0x08758859]
08758830 +0x00:  push   %ebp
08758831 +0x01:  mov    %esp,%ebp
08758833 +0x03:  mov    0x8(%ebp),%eax
08758836 +0x06:  mov    0xc(%ebp),%edx
08758839 +0x09:  push   %esi
0875883a +0x0a:  mov    (%eax),%ecx
0875883c +0x0c:  mov    (%edx),%esi
0875883e +0x0e:  mov    %esi,(%eax)
08758840 +0x10:  mov    0x4(%edx),%esi
08758843 +0x13:  mov    %ecx,(%edx)
08758845 +0x15:  mov    0x4(%eax),%ecx
08758848 +0x18:  movl   $0x0,0xc(%eax)
0875884f +0x1f:  mov    %esi,0x4(%eax)
08758852 +0x22:  mov    %ecx,0x4(%edx)
08758855 +0x25:  pop    %esi
08758856 +0x26:  pop    %ebp
08758857 +0x27:  ret
08758858 +0x28:  nop
08758859 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Source::reset @ 0x8758830

/* TaoCrypt::Source::reset(TaoCrypt::Block<unsigned char, TaoCrypt::AllocatorWithCleanup<unsigned
   char> >&) */

void __thiscall TaoCrypt::Source::reset(Source *this,Block *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)param_1 = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}
```
