# gift

`_ZN5nexon4cash9NexonCash4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE`

`nexon::cash::NexonCash::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, nexon::cash::NXTransaction&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae330  _ZN5nexon4cash9NexonCash4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE
#           nexon::cash::NexonCash::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, nexon::cash::NXTransaction&)
# range [0x081ae330, 0x081ae38f]
081ae330 +0x00:  push   %ebp
081ae331 +0x01:  mov    %esp,%ebp
081ae333 +0x03:  sub    $0x48,%esp
081ae336 +0x06:  mov    0xc(%ebp),%eax
081ae339 +0x09:  mov    %eax,-0x10(%ebp)
081ae33c +0x0c:  mov    0x10(%ebp),%eax
081ae33f +0x0f:  mov    %eax,-0xc(%ebp)
081ae342 +0x12:  mov    0x8(%ebp),%eax
081ae345 +0x15:  mov    (%eax),%ecx
081ae347 +0x17:  mov    0x2c(%ebp),%eax
081ae34a +0x1a:  mov    %eax,0x24(%esp)
081ae34e +0x1e:  mov    0x28(%ebp),%eax
081ae351 +0x21:  mov    %eax,0x20(%esp)
081ae355 +0x25:  mov    0x24(%ebp),%eax
081ae358 +0x28:  mov    %eax,0x1c(%esp)
081ae35c +0x2c:  mov    0x20(%ebp),%eax
081ae35f +0x2f:  mov    %eax,0x18(%esp)
081ae363 +0x33:  mov    0x1c(%ebp),%eax
081ae366 +0x36:  mov    %eax,0x14(%esp)
081ae36a +0x3a:  mov    0x18(%ebp),%eax
081ae36d +0x3d:  mov    %eax,0x10(%esp)
081ae371 +0x41:  mov    0x14(%ebp),%eax
081ae374 +0x44:  mov    %eax,0xc(%esp)
081ae378 +0x48:  mov    -0x10(%ebp),%eax
081ae37b +0x4b:  mov    -0xc(%ebp),%edx
081ae37e +0x4e:  mov    %eax,0x4(%esp)
081ae382 +0x52:  mov    %edx,0x8(%esp)
081ae386 +0x56:  mov    %ecx,(%esp)
081ae389 +0x59:  call   081ad9c4 <_ZN5nexon4cash9NCashImpl4giftEyiiPKcS3_S3_S3_RNS0_13NXTransactionE>  ; nexon::cash::NCashImpl::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, nexon::cash::NXTransaction&)
081ae38e +0x5e:  leave
081ae38f +0x5f:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::gift @ 0x81ae330

/* nexon::cash::NexonCash::gift(unsigned long long, int, int, char const*, char const*, char const*,
   char const*, nexon::cash::NXTransaction&) */

void __thiscall
nexon::cash::NexonCash::gift
          (NexonCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,NXTransaction *param_8)

{
  NCashImpl::gift(CONCAT44((undefined4)param_1,*(undefined4 *)this),param_1._4_4_,param_2,
                  (char *)param_3,param_4,param_5,param_6,(NXTransaction *)param_7);
  return;
}
```
