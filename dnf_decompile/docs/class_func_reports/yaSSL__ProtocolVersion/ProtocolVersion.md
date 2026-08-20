# ProtocolVersion

`_ZN5yaSSL15ProtocolVersionC1Ehh`

`yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `yaSSL::ProtocolVersion` | `0x08746950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746950  _ZN5yaSSL15ProtocolVersionC1Ehh
#           yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
# range [0x08746950, 0x0874696a]
08746950 +0x00:  push   %ebp
08746951 +0x01:  mov    %esp,%ebp
08746953 +0x03:  mov    0xc(%ebp),%edx
08746956 +0x06:  mov    0x8(%ebp),%eax
08746959 +0x09:  mov    %dl,(%eax)
0874695b +0x0b:  mov    0x10(%ebp),%edx
0874695e +0x0e:  mov    %dl,0x1(%eax)
08746961 +0x11:  pop    %ebp
08746962 +0x12:  ret
08746963 +0x13:  nop
08746964 +0x14:  lea    0x0(%esi),%esi
0874696a +0x1a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::ProtocolVersion::ProtocolVersion @ 0x8746950

/* yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char) */

void __thiscall
yaSSL::ProtocolVersion::ProtocolVersion(ProtocolVersion *this,uchar param_1,uchar param_2)

{
  *this = (ProtocolVersion)param_1;
  this[1] = (ProtocolVersion)param_2;
  return;
}
```
