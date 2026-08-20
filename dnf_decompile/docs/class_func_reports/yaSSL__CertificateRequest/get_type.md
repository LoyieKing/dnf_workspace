# get_type

`_ZNK5yaSSL18CertificateRequest8get_typeEv`

`yaSSL::CertificateRequest::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x08747060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747060  _ZNK5yaSSL18CertificateRequest8get_typeEv
#           yaSSL::CertificateRequest::get_type() const
# range [0x08747060, 0x0874706a]
08747060 +0x00:  push   %ebp
08747061 +0x01:  mov    $0xd,%eax
08747066 +0x06:  mov    %esp,%ebp
08747068 +0x08:  pop    %ebp
08747069 +0x09:  ret
0874706a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::CertificateRequest::get_type @ 0x8747060

/* yaSSL::CertificateRequest::get_type() const */

undefined4 yaSSL::CertificateRequest::get_type(void)

{
  return 0xd;
}
```
