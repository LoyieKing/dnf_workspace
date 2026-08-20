# DeCompress

`_ZN5yaSSL10DeCompressERNS_12input_bufferEiS1_`

`yaSSL::DeCompress(yaSSL::input_buffer&, int, yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874f0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f0a0  _ZN5yaSSL10DeCompressERNS_12input_bufferEiS1_
#           yaSSL::DeCompress(yaSSL::input_buffer&, int, yaSSL::input_buffer&)
# range [0x0874f0a0, 0x0874f0aa]
0874f0a0 +0x00:  push   %ebp
0874f0a1 +0x01:  mov    $0xffffffff,%eax
0874f0a6 +0x06:  mov    %esp,%ebp
0874f0a8 +0x08:  pop    %ebp
0874f0a9 +0x09:  ret
0874f0aa +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DeCompress @ 0x874f0a0

/* yaSSL::DeCompress(yaSSL::input_buffer&, int, yaSSL::input_buffer&) */

undefined4 yaSSL::DeCompress(input_buffer *param_1,int param_2,input_buffer *param_3)

{
  return 0xffffffff;
}
```
