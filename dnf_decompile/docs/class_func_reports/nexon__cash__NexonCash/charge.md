# charge

`_ZN5nexon4cash9NexonCash6chargeEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE`

`nexon::cash::NexonCash::charge(char*, unsigned char, unsigned char, int, char*, char*, char*, char*, int, nexon::cash::NXTransaction&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae440  _ZN5nexon4cash9NexonCash6chargeEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE
#           nexon::cash::NexonCash::charge(char*, unsigned char, unsigned char, int, char*, char*, char*, char*, int, nexon::cash::NXTransaction&)
# range [0x081ae440, 0x081ae4ad]
081ae440 +0x00:  push   %ebp
081ae441 +0x01:  mov    %esp,%ebp
081ae443 +0x03:  push   %ebx
081ae444 +0x04:  sub    $0x44,%esp
081ae447 +0x07:  mov    0x10(%ebp),%edx
081ae44a +0x0a:  mov    0x14(%ebp),%eax
081ae44d +0x0d:  mov    %dl,-0xc(%ebp)
081ae450 +0x10:  mov    %al,-0x10(%ebp)
081ae453 +0x13:  movzbl -0x10(%ebp),%ecx
081ae457 +0x17:  movzbl -0xc(%ebp),%edx
081ae45b +0x1b:  mov    0x8(%ebp),%eax
081ae45e +0x1e:  mov    (%eax),%eax
081ae460 +0x20:  mov    0x30(%ebp),%ebx
081ae463 +0x23:  mov    %ebx,0x28(%esp)
081ae467 +0x27:  mov    0x2c(%ebp),%ebx
081ae46a +0x2a:  mov    %ebx,0x24(%esp)
081ae46e +0x2e:  mov    0x28(%ebp),%ebx
081ae471 +0x31:  mov    %ebx,0x20(%esp)
081ae475 +0x35:  mov    0x24(%ebp),%ebx
081ae478 +0x38:  mov    %ebx,0x1c(%esp)
081ae47c +0x3c:  mov    0x20(%ebp),%ebx
081ae47f +0x3f:  mov    %ebx,0x18(%esp)
081ae483 +0x43:  mov    0x1c(%ebp),%ebx
081ae486 +0x46:  mov    %ebx,0x14(%esp)
081ae48a +0x4a:  mov    0x18(%ebp),%ebx
081ae48d +0x4d:  mov    %ebx,0x10(%esp)
081ae491 +0x51:  mov    %ecx,0xc(%esp)
081ae495 +0x55:  mov    %edx,0x8(%esp)
081ae499 +0x59:  mov    0xc(%ebp),%edx
081ae49c +0x5c:  mov    %edx,0x4(%esp)
081ae4a0 +0x60:  mov    %eax,(%esp)
081ae4a3 +0x63:  call   081ade34 <_ZN5nexon4cash9NCashImpl10chargeCashEPchhiS2_S2_S2_S2_iRNS0_13NXTransactionE>  ; nexon::cash::NCashImpl::chargeCash(char*, unsigned char, unsigned char, int, char*, char*, char*, char*, int, nexon::cash::NXTransaction&)
081ae4a8 +0x68:  add    $0x44,%esp
081ae4ab +0x6b:  pop    %ebx
081ae4ac +0x6c:  pop    %ebp
081ae4ad +0x6d:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::charge @ 0x81ae440

/* nexon::cash::NexonCash::charge(char*, unsigned char, unsigned char, int, char*, char*, char*,
   char*, int, nexon::cash::NXTransaction&) */

void __thiscall
nexon::cash::NexonCash::charge
          (NexonCash *this,char *param_1,uchar param_2,uchar param_3,int param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,int param_9,NXTransaction *param_10)

{
  NCashImpl::chargeCash
            (*(NCashImpl **)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10);
  return;
}
```
