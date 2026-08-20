# purchase

`_ZN5nexon4cash9NexonCash8purchaseEyiiPKcS3_RNS0_13NXTransactionEs`

`nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&, short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae2ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae2ce  _ZN5nexon4cash9NexonCash8purchaseEyiiPKcS3_RNS0_13NXTransactionEs
#           nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&, short)
# range [0x081ae2ce, 0x081ae32f]
081ae2ce +0x00:  push   %ebp
081ae2cf +0x01:  mov    %esp,%ebp
081ae2d1 +0x03:  sub    $0x48,%esp
081ae2d4 +0x06:  mov    0x28(%ebp),%eax
081ae2d7 +0x09:  mov    0xc(%ebp),%edx
081ae2da +0x0c:  mov    %edx,-0x10(%ebp)
081ae2dd +0x0f:  mov    0x10(%ebp),%edx
081ae2e0 +0x12:  mov    %edx,-0xc(%ebp)
081ae2e3 +0x15:  mov    %ax,-0x14(%ebp)
081ae2e7 +0x19:  movswl -0x14(%ebp),%eax
081ae2eb +0x1d:  mov    0x8(%ebp),%edx
081ae2ee +0x20:  mov    (%edx),%ecx
081ae2f0 +0x22:  mov    %eax,0x20(%esp)
081ae2f4 +0x26:  mov    0x24(%ebp),%eax
081ae2f7 +0x29:  mov    %eax,0x1c(%esp)
081ae2fb +0x2d:  mov    0x20(%ebp),%eax
081ae2fe +0x30:  mov    %eax,0x18(%esp)
081ae302 +0x34:  mov    0x1c(%ebp),%eax
081ae305 +0x37:  mov    %eax,0x14(%esp)
081ae309 +0x3b:  mov    0x18(%ebp),%eax
081ae30c +0x3e:  mov    %eax,0x10(%esp)
081ae310 +0x42:  mov    0x14(%ebp),%eax
081ae313 +0x45:  mov    %eax,0xc(%esp)
081ae317 +0x49:  mov    -0x10(%ebp),%eax
081ae31a +0x4c:  mov    -0xc(%ebp),%edx
081ae31d +0x4f:  mov    %eax,0x4(%esp)
081ae321 +0x53:  mov    %edx,0x8(%esp)
081ae325 +0x57:  mov    %ecx,(%esp)
081ae328 +0x5a:  call   081ad7ae <_ZN5nexon4cash9NCashImpl8purchaseEyiiPKcS3_RNS0_13NXTransactionEs>  ; nexon::cash::NCashImpl::purchase(unsigned long long, int, int, char const*, char const*, nexon::cash::NXTransaction&, short)
081ae32d +0x5f:  leave
081ae32e +0x60:  ret
081ae32f +0x61:  nop
```

## 反编译 C

```c
// nexon::cash::NexonCash::purchase @ 0x81ae2ce

/* nexon::cash::NexonCash::purchase(unsigned long long, int, int, char const*, char const*,
   nexon::cash::NXTransaction&, short) */

void __thiscall
nexon::cash::NexonCash::purchase
          (NexonCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          NXTransaction *param_6,short param_7)

{
  NCashImpl::purchase(CONCAT44((undefined4)param_1,*(undefined4 *)this),param_1._4_4_,param_2,
                      (char *)param_3,param_4,(NXTransaction *)param_5,(short)param_6);
  return;
}
```
