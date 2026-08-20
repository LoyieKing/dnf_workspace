# getVersion

`_ZNK5yaSSL10SSL_METHOD10getVersionEv`

`yaSSL::SSL_METHOD::getVersion() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e3c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e3c0  _ZNK5yaSSL10SSL_METHOD10getVersionEv
#           yaSSL::SSL_METHOD::getVersion() const
# range [0x0874e3c0, 0x0874e3da]
0874e3c0 +0x00:  push   %ebp
0874e3c1 +0x01:  mov    %esp,%ebp
0874e3c3 +0x03:  mov    0xc(%ebp),%edx
0874e3c6 +0x06:  mov    0x8(%ebp),%eax
0874e3c9 +0x09:  movzwl (%edx),%edx
0874e3cc +0x0c:  mov    %dx,(%eax)
0874e3cf +0x0f:  pop    %ebp
0874e3d0 +0x10:  ret    $0x4
0874e3d3 +0x13:  nop
0874e3d4 +0x14:  lea    0x0(%esi),%esi
0874e3da +0x1a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::getVersion @ 0x874e3c0

/* yaSSL::SSL_METHOD::getVersion() const */

void yaSSL::SSL_METHOD::getVersion(void)

{
  undefined2 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  return;
}
```
