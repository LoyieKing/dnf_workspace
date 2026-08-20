# ShowTCP

`_ZN5yaSSL3Log7ShowTCPEib`

`yaSSL::Log::ShowTCP(int, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Log` | `0x087a1470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1470  _ZN5yaSSL3Log7ShowTCPEib
#           yaSSL::Log::ShowTCP(int, bool)
# range [0x087a1470, 0x087a1479]
087a1470 +0x00:  push   %ebp
087a1471 +0x01:  mov    %esp,%ebp
087a1473 +0x03:  pop    %ebp
087a1474 +0x04:  ret
087a1475 +0x05:  nop
087a1476 +0x06:  lea    0x0(%esi),%esi
087a1479 +0x09:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Log::ShowTCP @ 0x87a1470

/* yaSSL::Log::ShowTCP(int, bool) */

void yaSSL::Log::ShowTCP(int param_1,bool param_2)

{
  return;
}
```
