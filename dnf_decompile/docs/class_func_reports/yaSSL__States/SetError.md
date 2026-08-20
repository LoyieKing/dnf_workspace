# SetError

`_ZN5yaSSL6States8SetErrorENS_10YasslErrorE`

`yaSSL::States::SetError(yaSSL::YasslError)`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874df70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df70  _ZN5yaSSL6States8SetErrorENS_10YasslErrorE
#           yaSSL::States::SetError(yaSSL::YasslError)
# range [0x0874df70, 0x0874df7e]
0874df70 +0x00:  push   %ebp
0874df71 +0x01:  mov    %esp,%ebp
0874df73 +0x03:  mov    0xc(%ebp),%edx
0874df76 +0x06:  mov    0x8(%ebp),%eax
0874df79 +0x09:  mov    %edx,0x68(%eax)
0874df7c +0x0c:  pop    %ebp
0874df7d +0x0d:  ret
0874df7e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::States::SetError @ 0x874df70

/* yaSSL::States::SetError(yaSSL::YasslError) */

void __thiscall yaSSL::States::SetError(States *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x68) = param_2;
  return;
}
```
