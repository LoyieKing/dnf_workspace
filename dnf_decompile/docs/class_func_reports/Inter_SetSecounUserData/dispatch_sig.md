# dispatch_sig

`_ZN23Inter_SetSecounUserData12dispatch_sigEP5CUserPci`

`Inter_SetSecounUserData::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SetSecounUserData` | `0x084e0972` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e0972  _ZN23Inter_SetSecounUserData12dispatch_sigEP5CUserPci
#           Inter_SetSecounUserData::dispatch_sig(CUser*, char*, int)
# range [0x084e0972, 0x084e09cd]
084e0972 +0x00:  push   %ebp
084e0973 +0x01:  mov    %esp,%ebp
084e0975 +0x03:  push   %edi
084e0976 +0x04:  push   %esi
084e0977 +0x05:  push   %ebx
084e0978 +0x06:  sub    $0x3c,%esp
084e097b +0x09:  mov    0x10(%ebp),%eax
084e097e +0x0c:  mov    %eax,-0x1c(%ebp)
084e0981 +0x0f:  mov    -0x1c(%ebp),%eax
084e0984 +0x12:  mov    0x8(%eax),%ecx
084e0987 +0x15:  mov    0xc(%eax),%ebx
084e098a +0x18:  mov    -0x1c(%ebp),%eax
084e098d +0x1b:  mov    0x10(%eax),%edi
084e0990 +0x1e:  mov    -0x1c(%ebp),%eax
084e0993 +0x21:  mov    0x4(%eax),%edx
084e0996 +0x24:  mov    (%eax),%eax
084e0998 +0x26:  mov    -0x1c(%ebp),%esi
084e099b +0x29:  mov    0x14(%esi),%esi
084e099e +0x2c:  mov    %ecx,0x14(%esp)
084e09a2 +0x30:  mov    %ebx,0x18(%esp)
084e09a6 +0x34:  mov    %edi,0x10(%esp)
084e09aa +0x38:  mov    %eax,0x8(%esp)
084e09ae +0x3c:  mov    %edx,0xc(%esp)
084e09b2 +0x40:  mov    %esi,0x4(%esp)
084e09b6 +0x44:  mov    0xc(%ebp),%eax
084e09b9 +0x47:  mov    %eax,(%esp)
084e09bc +0x4a:  call   0867fbba <_ZN5CUser21gainMoneyFromHackUserEjyjy>  ; CUser::gainMoneyFromHackUser(unsigned int, unsigned long long, unsigned int, unsigned long long)
084e09c1 +0x4f:  mov    $0x0,%eax
084e09c6 +0x54:  add    $0x3c,%esp
084e09c9 +0x57:  pop    %ebx
084e09ca +0x58:  pop    %esi
084e09cb +0x59:  pop    %edi
084e09cc +0x5a:  pop    %ebp
084e09cd +0x5b:  ret
```

## 反编译 C

```c
// Inter_SetSecounUserData::dispatch_sig @ 0x84e0972

/* Inter_SetSecounUserData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetSecounUserData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser::gainMoneyFromHackUser
            ((uint)param_2,CONCAT44(*(undefined4 *)param_3,*(undefined4 *)(param_3 + 0x14)),
             *(uint *)(param_3 + 4),
             CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10)));
  return 0;
}
```
