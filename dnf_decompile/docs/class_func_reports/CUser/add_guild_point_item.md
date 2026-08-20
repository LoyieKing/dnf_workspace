# add_guild_point_item

`_ZN5CUser20add_guild_point_itemEv`

`CUser::add_guild_point_item()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865ccc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865ccc8  _ZN5CUser20add_guild_point_itemEv
#           CUser::add_guild_point_item()
# range [0x0865ccc8, 0x0865cd09]
0865ccc8 +0x00:  push   %ebp
0865ccc9 +0x01:  mov    %esp,%ebp
0865cccb +0x03:  sub    $0x28,%esp
0865ccce +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865ccd3 +0x0b:  mov    0xa510(%eax),%eax
0865ccd9 +0x11:  mov    %eax,-0xc(%ebp)
0865ccdc +0x14:  movl   $0x2710,(%esp)
0865cce3 +0x1b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0865cce8 +0x20:  cmp    -0xc(%ebp),%eax
0865cceb +0x23:  setl   %al
0865ccee +0x26:  test   %al,%al
0865ccf0 +0x28:  je     0865cd07 <+0x3f>
0865ccf2 +0x2a:  movl   $0xc84,0x4(%esp)
0865ccfa +0x32:  mov    0x8(%ebp),%eax
0865ccfd +0x35:  mov    %eax,(%esp)
0865cd00 +0x38:  call   0865cadc <_ZN5CUser18add_inventory_itemEj>  ; CUser::add_inventory_item(unsigned int)
0865cd05 +0x3d:  jmp    0865cd08 <+0x40>
0865cd07 +0x3f:  nop
0865cd08 +0x40:  leave
0865cd09 +0x41:  ret
```

## 反编译 C

```c
// CUser::add_guild_point_item @ 0x865ccc8

/* CUser::add_guild_point_item() */

void __thiscall CUser::add_guild_point_item(CUser *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = G_CDataManager();
  iVar1 = *(int *)(iVar1 + 0xa510);
  iVar2 = get_rand_int(10000);
  if (iVar2 < iVar1) {
    add_inventory_item(this,0xc84);
  }
  return;
}
```
