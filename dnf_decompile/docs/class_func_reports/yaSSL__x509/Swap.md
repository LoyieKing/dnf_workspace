# Swap

`_ZN5yaSSL4x5094SwapERS0_`

`yaSSL::x509::Swap(yaSSL::x509&)`

| 类 | 地址 |
|---|---|
| `yaSSL::x509` | `0x087973a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087973a0  _ZN5yaSSL4x5094SwapERS0_
#           yaSSL::x509::Swap(yaSSL::x509&)
# range [0x087973a0, 0x087973c9]
087973a0 +0x00:  push   %ebp
087973a1 +0x01:  mov    %esp,%ebp
087973a3 +0x03:  mov    0x8(%ebp),%edx
087973a6 +0x06:  mov    0xc(%ebp),%eax
087973a9 +0x09:  push   %esi
087973aa +0x0a:  mov    (%edx),%ecx
087973ac +0x0c:  mov    (%eax),%esi
087973ae +0x0e:  mov    %esi,(%edx)
087973b0 +0x10:  mov    0x4(%eax),%esi
087973b3 +0x13:  mov    %ecx,(%eax)
087973b5 +0x15:  mov    0x4(%edx),%ecx
087973b8 +0x18:  mov    %esi,0x4(%edx)
087973bb +0x1b:  mov    %ecx,0x4(%eax)
087973be +0x1e:  pop    %esi
087973bf +0x1f:  pop    %ebp
087973c0 +0x20:  ret
087973c1 +0x21:  nop
087973c2 +0x22:  lea    0x0(%esi,%eiz,1),%esi
087973c9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::x509::Swap @ 0x87973a0

/* yaSSL::x509::Swap(yaSSL::x509&) */

void __thiscall yaSSL::x509::Swap(x509 *this,x509 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}
```
