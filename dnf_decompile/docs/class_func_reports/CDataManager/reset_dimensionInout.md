# reset_dimensionInout

`_ZN12CDataManager20reset_dimensionInoutEv`

`CDataManager::reset_dimensionInout()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365ea0  _ZN12CDataManager20reset_dimensionInoutEv
#           CDataManager::reset_dimensionInout()
# range [0x08365ea0, 0x08365ecd]
08365ea0 +0x00:  push   %ebp
08365ea1 +0x01:  mov    %esp,%ebp
08365ea3 +0x03:  sub    $0x18,%esp
08365ea6 +0x06:  mov    0x8(%ebp),%eax
08365ea9 +0x09:  lea    0xaa7a(%eax),%edx
08365eaf +0x0f:  mov    0x8(%ebp),%eax
08365eb2 +0x12:  add    $0xaa74,%eax
08365eb7 +0x17:  movl   $0x6,0x8(%esp)
08365ebf +0x1f:  mov    %edx,0x4(%esp)
08365ec3 +0x23:  mov    %eax,(%esp)
08365ec6 +0x26:  call   0807d8a0 <_init+0x198>
08365ecb +0x2b:  leave
08365ecc +0x2c:  ret
08365ecd +0x2d:  nop
```

## 反编译 C

```c
// CDataManager::reset_dimensionInout @ 0x8365ea0

/* CDataManager::reset_dimensionInout() */

void __thiscall CDataManager::reset_dimensionInout(CDataManager *this)

{
  memcpy(this + 0xaa74,this + 0xaa7a,6);
  return;
}
```
