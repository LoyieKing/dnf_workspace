# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08746cf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746cf0  _ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
# range [0x08746cf0, 0x08746d0a]
08746cf0 +0x00:  push   %ebp
08746cf1 +0x01:  mov    %esp,%ebp
08746cf3 +0x03:  sub    $0x18,%esp
08746cf6 +0x06:  mov    0xc(%ebp),%eax
08746cf9 +0x09:  mov    0x8(%ebp),%ecx
08746cfc +0x0c:  mov    (%eax),%edx
08746cfe +0x0e:  mov    %ecx,0x4(%esp)
08746d02 +0x12:  mov    %eax,(%esp)
08746d05 +0x15:  call   *0x8(%edx)
08746d08 +0x18:  leave
08746d09 +0x19:  ret
08746d0a +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8746cf0

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::HandShakeBase const&) */

void yaSSL::operator<<(output_buffer *param_1,HandShakeBase *param_2)

{
  (**(code **)(*(int *)param_2 + 8))(param_2,param_1);
  return;
}
```
