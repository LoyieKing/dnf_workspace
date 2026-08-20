# c16toa

`_ZN5yaSSL6c16toaEtPh`

`yaSSL::c16toa(unsigned short, unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874ddd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ddd0  _ZN5yaSSL6c16toaEtPh
#           yaSSL::c16toa(unsigned short, unsigned char*)
# range [0x0874ddd0, 0x0874dde9]
0874ddd0 +0x00:  push   %ebp
0874ddd1 +0x01:  mov    %esp,%ebp
0874ddd3 +0x03:  movzwl 0x8(%ebp),%edx
0874ddd7 +0x07:  mov    0xc(%ebp),%eax
0874ddda +0x0a:  mov    %edx,%ecx
0874dddc +0x0c:  shr    $0x8,%cx
0874dde0 +0x10:  mov    %cl,(%eax)
0874dde2 +0x12:  mov    %dl,0x1(%eax)
0874dde5 +0x15:  pop    %ebp
0874dde6 +0x16:  ret
0874dde7 +0x17:  mov    %esi,%esi
0874dde9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::c16toa @ 0x874ddd0

/* yaSSL::c16toa(unsigned short, unsigned char*) */

void yaSSL::c16toa(ushort param_1,uchar *param_2)

{
  *param_2 = (uchar)(param_1 >> 8);
  param_2[1] = (uchar)param_1;
  return;
}
```
