# getData

`_ZNK10CTitleBook7getDataEPc`

`CTitleBook::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086410f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086410f8  _ZNK10CTitleBook7getDataEPc
#           CTitleBook::getData(char*) const
# range [0x086410f8, 0x08641123]
086410f8 +0x00:  push   %ebp
086410f9 +0x01:  mov    %esp,%ebp
086410fb +0x03:  sub    $0x28,%esp
086410fe +0x06:  mov    0xc(%ebp),%eax
08641101 +0x09:  mov    %eax,-0xc(%ebp)
08641104 +0x0c:  mov    0x8(%ebp),%eax
08641107 +0x0f:  add    $0xc,%eax
0864110a +0x12:  movl   $0x6b3a,0x8(%esp)
08641112 +0x1a:  mov    %eax,0x4(%esp)
08641116 +0x1e:  mov    -0xc(%ebp),%eax
08641119 +0x21:  mov    %eax,(%esp)
0864111c +0x24:  call   0807d8a0 <_init+0x198>
08641121 +0x29:  leave
08641122 +0x2a:  ret
08641123 +0x2b:  nop
```

## 反编译 C

```c
// CTitleBook::getData @ 0x86410f8

/* CTitleBook::getData(char*) const */

void __thiscall CTitleBook::getData(CTitleBook *this,char *param_1)

{
  memcpy(param_1,this + 0xc,0x6b3a);
  return;
}
```
