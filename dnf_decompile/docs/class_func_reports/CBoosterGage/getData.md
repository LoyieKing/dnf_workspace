# getData

`_ZNK12CBoosterGage7getDataEPc`

`CBoosterGage::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd24e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd24e  _ZNK12CBoosterGage7getDataEPc
#           CBoosterGage::getData(char*) const
# range [0x080dd24e, 0x080dd283]
080dd24e +0x00:  push   %ebp
080dd24f +0x01:  mov    %esp,%ebp
080dd251 +0x03:  sub    $0x28,%esp
080dd254 +0x06:  mov    0xc(%ebp),%eax
080dd257 +0x09:  mov    %eax,-0xc(%ebp)
080dd25a +0x0c:  movl   $0x8,0x8(%esp)
080dd262 +0x14:  movl   $0x0,0x4(%esp)
080dd26a +0x1c:  mov    -0xc(%ebp),%eax
080dd26d +0x1f:  mov    %eax,(%esp)
080dd270 +0x22:  call   0807dcc0 <_init+0x5b8>
080dd275 +0x27:  mov    0x8(%ebp),%eax
080dd278 +0x2a:  mov    0x8(%eax),%edx
080dd27b +0x2d:  mov    -0xc(%ebp),%eax
080dd27e +0x30:  mov    %edx,0x4(%eax)
080dd281 +0x33:  leave
080dd282 +0x34:  ret
080dd283 +0x35:  nop
```

## 反编译 C

```c
// CBoosterGage::getData @ 0x80dd24e

/* CBoosterGage::getData(char*) const */

void __thiscall CBoosterGage::getData(CBoosterGage *this,char *param_1)

{
  memset(param_1,0,8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 8);
  return;
}
```
