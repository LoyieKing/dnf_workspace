# GetOriginalKey

`_ZN6Cipher14GetOriginalKeyEPh`

`Cipher::GetOriginalKey(unsigned char*)`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x080975de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080975de  _ZN6Cipher14GetOriginalKeyEPh
#           Cipher::GetOriginalKey(unsigned char*)
# range [0x080975de, 0x08097603]
080975de +0x00:  push   %ebp
080975df +0x01:  mov    %esp,%ebp
080975e1 +0x03:  sub    $0x18,%esp
080975e4 +0x06:  mov    0x8(%ebp),%eax
080975e7 +0x09:  mov    (%eax),%eax
080975e9 +0x0b:  mov    0x8(%ebp),%edx
080975ec +0x0e:  add    $0x10,%edx
080975ef +0x11:  mov    %eax,0x8(%esp)
080975f3 +0x15:  mov    %edx,0x4(%esp)
080975f7 +0x19:  mov    0xc(%ebp),%eax
080975fa +0x1c:  mov    %eax,(%esp)
080975fd +0x1f:  call   0807d8a0 <_init+0x198>
08097602 +0x24:  leave
08097603 +0x25:  ret
```

## 反编译 C

```c
// Cipher::GetOriginalKey @ 0x80975de

/* Cipher::GetOriginalKey(unsigned char*) */

void __thiscall Cipher::GetOriginalKey(Cipher *this,uchar *param_1)

{
  memcpy(param_1,this + 0x10,*(size_t *)this);
  return;
}
```
