# check_change_job_type

`_ZNK14CStackableItem21check_change_job_typeEcc`

`CStackableItem::check_change_job_type(char, char) const`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850eba2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850eba2  _ZNK14CStackableItem21check_change_job_typeEcc
#           CStackableItem::check_change_job_type(char, char) const
# range [0x0850eba2, 0x0850ebfb]
0850eba2 +0x00:  push   %ebp
0850eba3 +0x01:  mov    %esp,%ebp
0850eba5 +0x03:  sub    $0x10,%esp
0850eba8 +0x06:  mov    0xc(%ebp),%edx
0850ebab +0x09:  mov    0x10(%ebp),%eax
0850ebae +0x0c:  mov    %dl,-0x4(%ebp)
0850ebb1 +0x0f:  mov    %al,-0x8(%ebp)
0850ebb4 +0x12:  movsbl -0x8(%ebp),%edx
0850ebb8 +0x16:  mov    0x8(%ebp),%eax
0850ebbb +0x19:  mov    %edx,0x4(%esp)
0850ebbf +0x1d:  mov    %eax,(%esp)
0850ebc2 +0x20:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
0850ebc7 +0x25:  xor    $0x1,%eax
0850ebca +0x28:  test   %al,%al
0850ebcc +0x2a:  je     0850ebd5 <+0x33>
0850ebce +0x2c:  mov    $0x0,%eax
0850ebd3 +0x31:  jmp    0850ebfa <+0x58>
0850ebd5 +0x33:  mov    0x8(%ebp),%eax
0850ebd8 +0x36:  movzbl 0x14c(%eax),%eax
0850ebdf +0x3d:  test   %al,%al
0850ebe1 +0x3f:  jns    0850ebea <+0x48>
0850ebe3 +0x41:  mov    $0x1,%eax
0850ebe8 +0x46:  jmp    0850ebfa <+0x58>
0850ebea +0x48:  mov    0x8(%ebp),%eax
0850ebed +0x4b:  movzbl 0x14c(%eax),%eax
0850ebf4 +0x52:  cmp    -0x4(%ebp),%al
0850ebf7 +0x55:  sete   %al
0850ebfa +0x58:  leave
0850ebfb +0x59:  ret
```

## 反编译 C

```c
// CStackableItem::check_change_job_type @ 0x850eba2

/* CStackableItem::check_change_job_type(char, char) const */

bool __thiscall
CStackableItem::check_change_job_type(CStackableItem *this,char param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = CItem::check_job_type((CItem *)this,param_2);
  if (cVar1 == '\x01') {
    if ((char)this[0x14c] < '\0') {
      bVar2 = true;
    }
    else {
      bVar2 = this[0x14c] == (CStackableItem)param_1;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
```
