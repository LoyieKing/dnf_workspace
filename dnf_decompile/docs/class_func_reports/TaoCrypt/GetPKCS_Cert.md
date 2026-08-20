# GetPKCS_Cert

`_ZN8TaoCrypt12GetPKCS_CertEPKcRNS_6SourceE`

`TaoCrypt::GetPKCS_Cert(char const*, TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08753c10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753c10  _ZN8TaoCrypt12GetPKCS_CertEPKcRNS_6SourceE
#           TaoCrypt::GetPKCS_Cert(char const*, TaoCrypt::Source&)
# range [0x08753c10, 0x08753c49]
08753c10 +0x00:  push   %ebp
08753c11 +0x01:  mov    %esp,%ebp
08753c13 +0x03:  push   %ebx
08753c14 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08753c19 +0x09:  add    $0xc18f7f,%ebx
08753c1f +0x0f:  sub    $0x24,%esp
08753c22 +0x12:  mov    0xc(%ebp),%eax
08753c25 +0x15:  mov    %eax,-0xc(%ebp)
08753c28 +0x18:  mov    -0x2f4(%ebx),%eax
08753c2e +0x1e:  add    $0x8,%eax
08753c31 +0x21:  mov    %eax,-0x10(%ebp)
08753c34 +0x24:  lea    -0x10(%ebp),%eax
08753c37 +0x27:  mov    %eax,(%esp)
08753c3a +0x2a:  call   08753b50 <_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv>  ; TaoCrypt::PKCS12_Decoder::Decode()
08753c3f +0x2f:  add    $0x24,%esp
08753c42 +0x32:  xor    %eax,%eax
08753c44 +0x34:  pop    %ebx
08753c45 +0x35:  pop    %ebp
08753c46 +0x36:  ret
08753c47 +0x37:  nop
08753c48 +0x38:  nop
08753c49 +0x39:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::GetPKCS_Cert @ 0x8753c10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::GetPKCS_Cert(char const*, TaoCrypt::Source&) */

undefined4 TaoCrypt::GetPKCS_Cert(char *param_1,Source *param_2)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8753c19;
  local_10 = param_2;
  local_14 = PTR_vtable_0936c8a4 + 8;
  PKCS12_Decoder::Decode((PKCS12_Decoder *)&local_14);
  return 0;
}
```
