# dispatch_sig

`_ZN27Inter_CeraShopPurchaseCount12dispatch_sigEP5CUserPci`

`Inter_CeraShopPurchaseCount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CeraShopPurchaseCount` | `0x084e7bfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7bfe  _ZN27Inter_CeraShopPurchaseCount12dispatch_sigEP5CUserPci
#           Inter_CeraShopPurchaseCount::dispatch_sig(CUser*, char*, int)
# range [0x084e7bfe, 0x084e7c8f]
084e7bfe +0x00:  push   %ebp
084e7bff +0x01:  mov    %esp,%ebp
084e7c01 +0x03:  push   %ebx
084e7c02 +0x04:  sub    $0x44,%esp
084e7c05 +0x07:  mov    0x10(%ebp),%eax
084e7c08 +0x0a:  mov    %eax,-0xc(%ebp)
084e7c0b +0x0d:  cmpl   $0x0,-0xc(%ebp)
084e7c0f +0x11:  jne    084e7c4e <+0x50>
084e7c11 +0x13:  movl   $0x5,0xc(%esp)
084e7c19 +0x1b:  movl   $0x6a96,0x8(%esp)
084e7c21 +0x23:  movl   $&_ZZN27Inter_CeraShopPurchaseCount12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e7c29 +0x2b:  lea    -0x1c(%ebp),%eax
084e7c2c +0x2e:  mov    %eax,(%esp)
084e7c2f +0x31:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e7c34 +0x36:  movl   $"[PURCAHSE BONUS] internal data is null.",0x4(%esp)
084e7c3c +0x3e:  lea    -0x1c(%ebp),%eax
084e7c3f +0x41:  mov    %eax,(%esp)
084e7c42 +0x44:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e7c47 +0x49:  mov    $0x6a97,%eax
084e7c4c +0x4e:  jmp    084e7c89 <+0x8b>
084e7c4e +0x50:  mov    -0xc(%ebp),%eax
084e7c51 +0x53:  movzwl 0x8(%eax),%eax
084e7c55 +0x57:  movzwl %ax,%ebx
084e7c58 +0x5a:  mov    -0xc(%ebp),%eax
084e7c5b +0x5d:  mov    0xc(%eax),%ecx
084e7c5e +0x60:  mov    -0xc(%ebp),%eax
084e7c61 +0x63:  mov    0x4(%eax),%edx
084e7c64 +0x66:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
084e7c69 +0x6b:  mov    %ebx,0x10(%esp)
084e7c6d +0x6f:  mov    %ecx,0xc(%esp)
084e7c71 +0x73:  mov    %edx,0x8(%esp)
084e7c75 +0x77:  mov    0xc(%ebp),%edx
084e7c78 +0x7a:  mov    %edx,0x4(%esp)
084e7c7c +0x7e:  mov    %eax,(%esp)
084e7c7f +0x81:  call   08179f08 <_ZN18ItemVendingMachine24ProcessPurcahseBonusItemEP5CUsermit>  ; ItemVendingMachine::ProcessPurcahseBonusItem(CUser*, unsigned long, int, unsigned short)
084e7c84 +0x86:  mov    $0x0,%eax
084e7c89 +0x8b:  add    $0x44,%esp
084e7c8c +0x8e:  pop    %ebx
084e7c8d +0x8f:  pop    %ebp
084e7c8e +0x90:  ret
084e7c8f +0x91:  nop
```

## 反编译 C

```c
// Inter_CeraShopPurchaseCount::dispatch_sig @ 0x84e7bfe

/* Inter_CeraShopPurchaseCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CeraShopPurchaseCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_CeraShopPurchaseCount::dispatch_sig(CUser*, char*, int)",
                       0x6a96,5);
    cMyTrace::operator()(local_20,"[PURCAHSE BONUS] internal data is null.");
    uVar1 = 0x6a97;
  }
  else {
    ItemVendingMachine::ProcessPurcahseBonusItem
              (GlobalData::s_pItemVendingMachine,(CUser *)param_2,*(ulong *)(param_3 + 4),
               *(int *)(param_3 + 0xc),*(ushort *)(param_3 + 8));
    uVar1 = 0;
  }
  return uVar1;
}
```
