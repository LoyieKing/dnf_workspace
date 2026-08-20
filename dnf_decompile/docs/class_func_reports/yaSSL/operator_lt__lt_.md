# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Message const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08746a50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a50  _ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Message const&)
# range [0x08746a50, 0x08746a6a]
08746a50 +0x00:  push   %ebp
08746a51 +0x01:  mov    %esp,%ebp
08746a53 +0x03:  sub    $0x18,%esp
08746a56 +0x06:  mov    0xc(%ebp),%eax
08746a59 +0x09:  mov    0x8(%ebp),%ecx
08746a5c +0x0c:  mov    (%eax),%edx
08746a5e +0x0e:  mov    %ecx,0x4(%esp)
08746a62 +0x12:  mov    %eax,(%esp)
08746a65 +0x15:  call   *0x4(%edx)
08746a68 +0x18:  leave
08746a69 +0x19:  ret
08746a6a +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8746a50

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Message const&) */

void yaSSL::operator<<(output_buffer *param_1,Message *param_2)

{
  (**(code **)(*(int *)param_2 + 4))(param_2,param_1);
  return;
}
```
