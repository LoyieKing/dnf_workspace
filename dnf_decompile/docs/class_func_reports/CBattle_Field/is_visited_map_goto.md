# is_visited_map_goto

`_ZN13CBattle_Field19is_visited_map_gotoEii`

`CBattle_Field::is_visited_map_goto(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307cbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307cbe  _ZN13CBattle_Field19is_visited_map_gotoEii
#           CBattle_Field::is_visited_map_goto(int, int)
# range [0x08307cbe, 0x08307d0b]
08307cbe +0x00:  push   %ebp
08307cbf +0x01:  mov    %esp,%ebp
08307cc1 +0x03:  sub    $0x28,%esp
08307cc4 +0x06:  movl   $0x0,0xc(%esp)
08307ccc +0x0e:  mov    0x10(%ebp),%eax
08307ccf +0x11:  mov    %eax,0x8(%esp)
08307cd3 +0x15:  mov    0xc(%ebp),%eax
08307cd6 +0x18:  mov    %eax,0x4(%esp)
08307cda +0x1c:  mov    0x8(%ebp),%eax
08307cdd +0x1f:  mov    %eax,(%esp)
08307ce0 +0x22:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307ce5 +0x27:  mov    %eax,-0xc(%ebp)
08307ce8 +0x2a:  mov    -0xc(%ebp),%eax
08307ceb +0x2d:  movzbl 0x1(%eax),%eax
08307cef +0x31:  test   %al,%al
08307cf1 +0x33:  jne    08307cfe <+0x40>
08307cf3 +0x35:  mov    -0xc(%ebp),%eax
08307cf6 +0x38:  movzbl 0x2(%eax),%eax
08307cfa +0x3c:  test   %al,%al
08307cfc +0x3e:  je     08307d05 <+0x47>
08307cfe +0x40:  mov    $0x1,%eax
08307d03 +0x45:  jmp    08307d0a <+0x4c>
08307d05 +0x47:  mov    $0x0,%eax
08307d0a +0x4c:  leave
08307d0b +0x4d:  ret
```

## 反编译 C

```c
// CBattle_Field::is_visited_map_goto @ 0x8307cbe

/* CBattle_Field::is_visited_map_goto(int, int) */

undefined4 __thiscall
CBattle_Field::is_visited_map_goto(CBattle_Field *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetMapInfoFromPos(this,param_1,param_2,false);
  if ((*(char *)(iVar1 + 1) == '\0') && (*(char *)(iVar1 + 2) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
