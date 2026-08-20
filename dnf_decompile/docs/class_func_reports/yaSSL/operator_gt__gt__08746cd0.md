# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_13HandShakeBaseE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::HandShakeBase&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08746cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746cd0  _ZN5yaSSLrsERNS_12input_bufferERNS_13HandShakeBaseE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::HandShakeBase&)
# range [0x08746cd0, 0x08746cea]
08746cd0 +0x00:  push   %ebp
08746cd1 +0x01:  mov    %esp,%ebp
08746cd3 +0x03:  sub    $0x18,%esp
08746cd6 +0x06:  mov    0xc(%ebp),%eax
08746cd9 +0x09:  mov    0x8(%ebp),%ecx
08746cdc +0x0c:  mov    (%eax),%edx
08746cde +0x0e:  mov    %ecx,0x4(%esp)
08746ce2 +0x12:  mov    %eax,(%esp)
08746ce5 +0x15:  call   *0x4(%edx)
08746ce8 +0x18:  leave
08746ce9 +0x19:  ret
08746cea +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8746cd0

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::HandShakeBase&) */

void yaSSL::operator>>(input_buffer *param_1,HandShakeBase *param_2)

{
  (**(code **)(*(int *)param_2 + 4))(param_2,param_1);
  return;
}
```
