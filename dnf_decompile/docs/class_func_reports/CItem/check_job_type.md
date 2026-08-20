# check_job_type

`_ZNK5CItem14check_job_typeEc`

`CItem::check_job_type(char) const`

| 类 | 地址 |
|---|---|
| `CItem` | `0x0850d728` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850d728  _ZNK5CItem14check_job_typeEc
#           CItem::check_job_type(char) const
# range [0x0850d728, 0x0850d755]
0850d728 +0x00:  push   %ebp
0850d729 +0x01:  mov    %esp,%ebp
0850d72b +0x03:  sub    $0x14,%esp
0850d72e +0x06:  mov    0xc(%ebp),%eax
0850d731 +0x09:  mov    %al,-0x14(%ebp)
0850d734 +0x0c:  cmpb   $0xa,-0x14(%ebp)
0850d738 +0x10:  jle    0850d741 <+0x19>
0850d73a +0x12:  mov    $0x0,%eax
0850d73f +0x17:  jmp    0850d753 <+0x2b>
0850d741 +0x19:  movsbl -0x14(%ebp),%eax
0850d745 +0x1d:  mov    %eax,-0x4(%ebp)
0850d748 +0x20:  mov    -0x4(%ebp),%eax
0850d74b +0x23:  mov    0x8(%ebp),%edx
0850d74e +0x26:  movzbl 0x3c(%edx,%eax,1),%eax
0850d753 +0x2b:  leave
0850d754 +0x2c:  ret
0850d755 +0x2d:  nop
```

## 反编译 C

```c
// CItem::check_job_type @ 0x850d728

/* CItem::check_job_type(char) const */

CItem __thiscall CItem::check_job_type(CItem *this,char param_1)

{
  CItem CVar1;
  
  if (param_1 < '\v') {
    CVar1 = this[param_1 + 0x3c];
  }
  else {
    CVar1 = (CItem)0x0;
  }
  return CVar1;
}
```
