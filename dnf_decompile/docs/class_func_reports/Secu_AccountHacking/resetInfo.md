# resetInfo

`_ZN19Secu_AccountHacking9resetInfoEv`

`Secu_AccountHacking::resetInfo()`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278ab4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278ab4  _ZN19Secu_AccountHacking9resetInfoEv
#           Secu_AccountHacking::resetInfo()
# range [0x08278ab4, 0x08278aeb]
08278ab4 +0x00:  push   %ebp
08278ab5 +0x01:  mov    %esp,%ebp
08278ab7 +0x03:  sub    $0x18,%esp
08278aba +0x06:  mov    0x8(%ebp),%eax
08278abd +0x09:  movl   $0x6,0x8(%esp)
08278ac5 +0x11:  movl   $0x0,0x4(%esp)
08278acd +0x19:  mov    %eax,(%esp)
08278ad0 +0x1c:  call   0807dcc0 <_init+0x5b8>
08278ad5 +0x21:  mov    0x8(%ebp),%eax
08278ad8 +0x24:  movl   $0x0,0x8(%eax)
08278adf +0x2b:  mov    0x8(%ebp),%eax
08278ae2 +0x2e:  movl   $0x0,0xc(%eax)
08278ae9 +0x35:  leave
08278aea +0x36:  ret
08278aeb +0x37:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::resetInfo @ 0x8278ab4

/* Secu_AccountHacking::resetInfo() */

void __thiscall Secu_AccountHacking::resetInfo(Secu_AccountHacking *this)

{
  memset(this,0,6);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
