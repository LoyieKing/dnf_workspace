# AddSecuRewardItem

`_ZN5CUser17AddSecuRewardItemEh`

`CUser::AddSecuRewardItem(unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08688328` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688328  _ZN5CUser17AddSecuRewardItemEh
#           CUser::AddSecuRewardItem(unsigned char)
# range [0x08688328, 0x0868833b]
08688328 +0x00:  push   %ebp
08688329 +0x01:  mov    %esp,%ebp
0868832b +0x03:  sub    $0xa4,%esp
08688331 +0x09:  mov    0xc(%ebp),%eax
08688334 +0x0c:  mov    %al,-0xa4(%ebp)
0868833a +0x12:  leave
0868833b +0x13:  ret
```

## 反编译 C

```c
// CUser::AddSecuRewardItem @ 0x8688328

/* CUser::AddSecuRewardItem(unsigned char) */

void CUser::AddSecuRewardItem(uchar param_1)

{
  return;
}
```
