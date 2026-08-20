# SetData

`_ZN5yaSSL4Data7SetDataEtPKh`

`yaSSL::Data::SetData(unsigned short, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746c60  _ZN5yaSSL4Data7SetDataEtPKh
#           yaSSL::Data::SetData(unsigned short, unsigned char const*)
# range [0x08746c60, 0x08746c79]
08746c60 +0x00:  push   %ebp
08746c61 +0x01:  mov    %esp,%ebp
08746c63 +0x03:  mov    0x8(%ebp),%eax
08746c66 +0x06:  mov    0xc(%ebp),%edx
08746c69 +0x09:  mov    %dx,0x4(%eax)
08746c6d +0x0d:  mov    0x10(%ebp),%edx
08746c70 +0x10:  mov    %edx,0xc(%eax)
08746c73 +0x13:  pop    %ebp
08746c74 +0x14:  ret
08746c75 +0x15:  nop
08746c76 +0x16:  lea    0x0(%esi),%esi
08746c79 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Data::SetData @ 0x8746c60

/* yaSSL::Data::SetData(unsigned short, unsigned char const*) */

void __thiscall yaSSL::Data::SetData(Data *this,ushort param_1,uchar *param_2)

{
  *(ushort *)(this + 4) = param_1;
  *(uchar **)(this + 0xc) = param_2;
  return;
}
```
