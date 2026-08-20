# dispatch_sig

`_ZN17Inter_LoadMileage12dispatch_sigEP5CUserPci`

`Inter_LoadMileage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadMileage` | `0x084e4d4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4d4e  _ZN17Inter_LoadMileage12dispatch_sigEP5CUserPci
#           Inter_LoadMileage::dispatch_sig(CUser*, char*, int)
# range [0x084e4d4e, 0x084e4d8f]
084e4d4e +0x00:  push   %ebp
084e4d4f +0x01:  mov    %esp,%ebp
084e4d51 +0x03:  sub    $0x28,%esp
084e4d54 +0x06:  mov    0x10(%ebp),%eax
084e4d57 +0x09:  mov    %eax,-0x10(%ebp)
084e4d5a +0x0c:  mov    -0x10(%ebp),%eax
084e4d5d +0x0f:  mov    0x8(%eax),%eax
084e4d60 +0x12:  mov    %eax,-0xc(%ebp)
084e4d63 +0x15:  mov    -0xc(%ebp),%eax
084e4d66 +0x18:  mov    %eax,0x4(%esp)
084e4d6a +0x1c:  mov    0xc(%ebp),%eax
084e4d6d +0x1f:  mov    %eax,(%esp)
084e4d70 +0x22:  call   086509c6 <_ZN5CUser10SetMileageEi>  ; CUser::SetMileage(int)
084e4d75 +0x27:  movl   $0x0,0x4(%esp)
084e4d7d +0x2f:  mov    0xc(%ebp),%eax
084e4d80 +0x32:  mov    %eax,(%esp)
084e4d83 +0x35:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
084e4d88 +0x3a:  mov    $0x0,%eax
084e4d8d +0x3f:  leave
084e4d8e +0x40:  ret
084e4d8f +0x41:  nop
```

## 反编译 C

```c
// Inter_LoadMileage::dispatch_sig @ 0x84e4d4e

/* Inter_LoadMileage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadMileage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser::SetMileage((CUser *)param_2,*(int *)(param_3 + 8));
  CUser::SendCashData((CUser *)param_2,false);
  return 0;
}
```
