# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_7MessageE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Message&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08746a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a30  _ZN5yaSSLrsERNS_12input_bufferERNS_7MessageE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Message&)
# range [0x08746a30, 0x08746a49]
08746a30 +0x00:  push   %ebp
08746a31 +0x01:  mov    %esp,%ebp
08746a33 +0x03:  sub    $0x18,%esp
08746a36 +0x06:  mov    0xc(%ebp),%eax
08746a39 +0x09:  mov    0x8(%ebp),%ecx
08746a3c +0x0c:  mov    (%eax),%edx
08746a3e +0x0e:  mov    %ecx,0x4(%esp)
08746a42 +0x12:  mov    %eax,(%esp)
08746a45 +0x15:  call   *(%edx)
08746a47 +0x17:  leave
08746a48 +0x18:  ret
08746a49 +0x19:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8746a30

/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::Message&) */

void yaSSL::operator>>(input_buffer *param_1,Message *param_2)

{
  (*(code *)**(undefined4 **)param_2)(param_2,param_1);
  return;
}
```
