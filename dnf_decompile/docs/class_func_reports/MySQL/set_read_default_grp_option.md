# set_read_default_grp_option

`_ZN5MySQL27set_read_default_grp_optionEv`

`MySQL::set_read_default_grp_option()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3b80  _ZN5MySQL27set_read_default_grp_optionEv
#           MySQL::set_read_default_grp_option()
# range [0x083f3b80, 0x083f3c01]
083f3b80 +0x00:  push   %ebp
083f3b81 +0x01:  mov    %esp,%ebp
083f3b83 +0x03:  sub    $0x28,%esp
083f3b86 +0x06:  mov    0x8(%ebp),%eax
083f3b89 +0x09:  mov    0x4(%eax),%eax
083f3b8c +0x0c:  movl   $"UseSQL",0x8(%esp)
083f3b94 +0x14:  movl   $0x5,0x4(%esp)
083f3b9c +0x1c:  mov    %eax,(%esp)
083f3b9f +0x1f:  call   08734e70 <mysql_options>
083f3ba4 +0x24:  test   %eax,%eax
083f3ba6 +0x26:  setne  %al
083f3ba9 +0x29:  test   %al,%al
083f3bab +0x2b:  je     083f3bfa <+0x7a>
083f3bad +0x2d:  movl   $0x5,0xc(%esp)
083f3bb5 +0x35:  movl   $0x4f,0x8(%esp)
083f3bbd +0x3d:  movl   $&_ZZN5MySQL27set_read_default_grp_optionEvE19__PRETTY_FUNCTION__,0x4(%esp)
083f3bc5 +0x45:  lea    -0x18(%ebp),%eax
083f3bc8 +0x48:  mov    %eax,(%esp)
083f3bcb +0x4b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083f3bd0 +0x50:  movl   $0x4f,0xc(%esp)
083f3bd8 +0x58:  movl   $&_ZZN5MySQL27set_read_default_grp_optionEvE19__PRETTY_FUNCTION__,0x8(%esp)
083f3be0 +0x60:  movl   $"[%s][%d]",0x4(%esp)
083f3be8 +0x68:  lea    -0x18(%ebp),%eax
083f3beb +0x6b:  mov    %eax,(%esp)
083f3bee +0x6e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083f3bf3 +0x73:  mov    $0x0,%eax
083f3bf8 +0x78:  jmp    083f3bff <+0x7f>
083f3bfa +0x7a:  mov    $0x1,%eax
083f3bff +0x7f:  leave
083f3c00 +0x80:  ret
083f3c01 +0x81:  nop
```

## 反编译 C

```c
// MySQL::set_read_default_grp_option @ 0x83f3b80

/* MySQL::set_read_default_grp_option() */

bool __thiscall MySQL::set_read_default_grp_option(MySQL *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  iVar1 = mysql_options(*(undefined4 *)(this + 4),5,"UseSQL");
  if (iVar1 != 0) {
    cMyTrace::cMyTrace(local_1c,"bool MySQL::set_read_default_grp_option()",0x4f,5);
    cMyTrace::operator()(local_1c,"[%s][%d]","bool MySQL::set_read_default_grp_option()",0x4f);
  }
  return iVar1 == 0;
}
```
