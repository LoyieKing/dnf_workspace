# check_able_To_use

`_ZN14CStackableItem17check_able_To_useEii`

`CStackableItem::check_able_To_use(int, int)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850eb52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850eb52  _ZN14CStackableItem17check_able_To_useEii
#           CStackableItem::check_able_To_use(int, int)
# range [0x0850eb52, 0x0850eba1]
0850eb52 +0x00:  push   %ebp
0850eb53 +0x01:  mov    %esp,%ebp
0850eb55 +0x03:  sub    $0x18,%esp
0850eb58 +0x06:  mov    0xc(%ebp),%eax
0850eb5b +0x09:  movsbl %al,%edx
0850eb5e +0x0c:  mov    0x8(%ebp),%eax
0850eb61 +0x0f:  mov    %edx,0x4(%esp)
0850eb65 +0x13:  mov    %eax,(%esp)
0850eb68 +0x16:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
0850eb6d +0x1b:  xor    $0x1,%eax
0850eb70 +0x1e:  test   %al,%al
0850eb72 +0x20:  je     0850eb7b <+0x29>
0850eb74 +0x22:  mov    $0x1,%eax
0850eb79 +0x27:  jmp    0850eba0 <+0x4e>
0850eb7b +0x29:  mov    0x8(%ebp),%eax
0850eb7e +0x2c:  mov    0x10(%ebp),%edx
0850eb81 +0x2f:  mov    %edx,0x4(%esp)
0850eb85 +0x33:  mov    %eax,(%esp)
0850eb88 +0x36:  call   084e95bc <_GLOBAL__I__Z7getUserj+0x56e>  ; global constructors keyed to getUser(unsigned int)+0x56e
0850eb8d +0x3b:  xor    $0x1,%eax
0850eb90 +0x3e:  test   %al,%al
0850eb92 +0x40:  je     0850eb9b <+0x49>
0850eb94 +0x42:  mov    $0x2,%eax
0850eb99 +0x47:  jmp    0850eba0 <+0x4e>
0850eb9b +0x49:  mov    $0x0,%eax
0850eba0 +0x4e:  leave
0850eba1 +0x4f:  ret
```

## 反编译 C

```c
// CStackableItem::check_able_To_use @ 0x850eb52

/* CStackableItem::check_able_To_use(int, int) */

undefined4 __thiscall
CStackableItem::check_able_To_use(CStackableItem *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CItem::check_job_type((CItem *)this,(char)param_1);
  if (cVar1 == '\x01') {
    cVar1 = CItem::check_low_level((CItem *)this,param_2);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
