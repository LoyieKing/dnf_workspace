# set_compress_option

`_ZN5MySQL19set_compress_optionEv`

`MySQL::set_compress_option()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3afe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3afe  _ZN5MySQL19set_compress_optionEv
#           MySQL::set_compress_option()
# range [0x083f3afe, 0x083f3b7f]
083f3afe +0x00:  push   %ebp
083f3aff +0x01:  mov    %esp,%ebp
083f3b01 +0x03:  sub    $0x28,%esp
083f3b04 +0x06:  mov    0x8(%ebp),%eax
083f3b07 +0x09:  mov    0x4(%eax),%eax
083f3b0a +0x0c:  movl   $0x0,0x8(%esp)
083f3b12 +0x14:  movl   $0x1,0x4(%esp)
083f3b1a +0x1c:  mov    %eax,(%esp)
083f3b1d +0x1f:  call   08734e70 <mysql_options>
083f3b22 +0x24:  test   %eax,%eax
083f3b24 +0x26:  setne  %al
083f3b27 +0x29:  test   %al,%al
083f3b29 +0x2b:  je     083f3b78 <+0x7a>
083f3b2b +0x2d:  movl   $0x5,0xc(%esp)
083f3b33 +0x35:  movl   $0x40,0x8(%esp)
083f3b3b +0x3d:  movl   $&_ZZN5MySQL19set_compress_optionEvE19__PRETTY_FUNCTION__,0x4(%esp)
083f3b43 +0x45:  lea    -0x18(%ebp),%eax
083f3b46 +0x48:  mov    %eax,(%esp)
083f3b49 +0x4b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f3b4e +0x50:  movl   $0x40,0xc(%esp)
083f3b56 +0x58:  movl   $&_ZZN5MySQL19set_compress_optionEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f3b5e +0x60:  movl   $"[%s][%d]",0x4(%esp)
083f3b66 +0x68:  lea    -0x18(%ebp),%eax
083f3b69 +0x6b:  mov    %eax,(%esp)
083f3b6c +0x6e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f3b71 +0x73:  mov    $0x0,%eax
083f3b76 +0x78:  jmp    083f3b7d <+0x7f>
083f3b78 +0x7a:  mov    $0x1,%eax
083f3b7d +0x7f:  leave
083f3b7e +0x80:  ret
083f3b7f +0x81:  nop
```

## 反编译 C

```c
// MySQL::set_compress_option @ 0x83f3afe

/* MySQL::set_compress_option() */

bool __thiscall MySQL::set_compress_option(MySQL *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  iVar1 = mysql_options(*(undefined4 *)(this + 4),1,0);
  if (iVar1 != 0) {
    cMyTrace::cMyTrace(local_1c,"bool MySQL::set_compress_option()",0x40,5);
    cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::set_compress_option()",0x40);
  }
  return iVar1 == 0;
}
```
