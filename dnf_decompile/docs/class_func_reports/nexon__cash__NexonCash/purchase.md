# purchase

`_ZN5nexon4cash9NexonCash8purchaseEyiiPKcS3_RNS0_13NXTransactionE`

`nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae27c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae27c  _ZN5nexon4cash9NexonCash8purchaseEyiiPKcS3_RNS0_13NXTransactionE
#           nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&)
# range [0x081ae27c, 0x081ae2cd]
081ae27c +0x00:  push   %ebp
081ae27d +0x01:  mov    %esp,%ebp
081ae27f +0x03:  sub    $0x38,%esp
081ae282 +0x06:  mov    0xc(%ebp),%eax
081ae285 +0x09:  mov    %eax,-0x10(%ebp)
081ae288 +0x0c:  mov    0x10(%ebp),%eax
081ae28b +0x0f:  mov    %eax,-0xc(%ebp)
081ae28e +0x12:  mov    0x8(%ebp),%eax
081ae291 +0x15:  mov    (%eax),%ecx
081ae293 +0x17:  mov    0x24(%ebp),%eax
081ae296 +0x1a:  mov    %eax,0x1c(%esp)
081ae29a +0x1e:  mov    0x20(%ebp),%eax
081ae29d +0x21:  mov    %eax,0x18(%esp)
081ae2a1 +0x25:  mov    0x1c(%ebp),%eax
081ae2a4 +0x28:  mov    %eax,0x14(%esp)
081ae2a8 +0x2c:  mov    0x18(%ebp),%eax
081ae2ab +0x2f:  mov    %eax,0x10(%esp)
081ae2af +0x33:  mov    0x14(%ebp),%eax
081ae2b2 +0x36:  mov    %eax,0xc(%esp)
081ae2b6 +0x3a:  mov    -0x10(%ebp),%eax
081ae2b9 +0x3d:  mov    -0xc(%ebp),%edx
081ae2bc +0x40:  mov    %eax,0x4(%esp)
081ae2c0 +0x44:  mov    %edx,0x8(%esp)
081ae2c4 +0x48:  mov    %ecx,(%esp)
081ae2c7 +0x4b:  call   081ad5c2 <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionE>  ; nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&)
081ae2cc +0x50:  leave
081ae2cd +0x51:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::purchase @ 0x81ae27c

/* nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&) */

void __thiscall
nexon::cash::NexonCash::purchase
          (NexonCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          NXTransaction *param_6)

{
  NCashImpl::purchase(CONCAT44((undefined4)param_1,*(undefined4 *)this),param_1._4_4_,param_2,
                      (char *)param_3,param_4,(NXTransaction *)param_5);
  return;
}
```
