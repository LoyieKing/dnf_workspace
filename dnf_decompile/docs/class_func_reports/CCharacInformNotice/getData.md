# getData

`_ZNK19CCharacInformNotice7getDataEPc`

`CCharacInformNotice::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4b2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4b2c  _ZNK19CCharacInformNotice7getDataEPc
#           CCharacInformNotice::getData(char*) const
# range [0x080e4b2c, 0x080e4b51]
080e4b2c +0x00:  push   %ebp
080e4b2d +0x01:  mov    %esp,%ebp
080e4b2f +0x03:  sub    $0x18,%esp
080e4b32 +0x06:  mov    0x8(%ebp),%eax
080e4b35 +0x09:  add    $0x5,%eax
080e4b38 +0x0c:  movl   $0x10,0x8(%esp)
080e4b40 +0x14:  mov    %eax,0x4(%esp)
080e4b44 +0x18:  mov    0xc(%ebp),%eax
080e4b47 +0x1b:  mov    %eax,(%esp)
080e4b4a +0x1e:  call   0807d8a0 <_init+0x198>
080e4b4f +0x23:  leave
080e4b50 +0x24:  ret
080e4b51 +0x25:  nop
```

## 反编译 C

```c
// CCharacInformNotice::getData @ 0x80e4b2c

/* CCharacInformNotice::getData(char*) const */

void __thiscall CCharacInformNotice::getData(CCharacInformNotice *this,char *param_1)

{
  memcpy(param_1,this + 5,0x10);
  return;
}
```
