# is_visited_map

`_ZN13CBattle_Field14is_visited_mapEii`

`CBattle_Field::is_visited_map(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307c7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307c7a  _ZN13CBattle_Field14is_visited_mapEii
#           CBattle_Field::is_visited_map(int, int)
# range [0x08307c7a, 0x08307cbd]
08307c7a +0x00:  push   %ebp
08307c7b +0x01:  mov    %esp,%ebp
08307c7d +0x03:  sub    $0x28,%esp
08307c80 +0x06:  movl   $0x0,0xc(%esp)
08307c88 +0x0e:  mov    0x10(%ebp),%eax
08307c8b +0x11:  mov    %eax,0x8(%esp)
08307c8f +0x15:  mov    0xc(%ebp),%eax
08307c92 +0x18:  mov    %eax,0x4(%esp)
08307c96 +0x1c:  mov    0x8(%ebp),%eax
08307c99 +0x1f:  mov    %eax,(%esp)
08307c9c +0x22:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307ca1 +0x27:  mov    %eax,-0xc(%ebp)
08307ca4 +0x2a:  mov    -0xc(%ebp),%eax
08307ca7 +0x2d:  movzbl 0x1(%eax),%eax
08307cab +0x31:  test   %al,%al
08307cad +0x33:  je     08307cb6 <+0x3c>
08307caf +0x35:  mov    $0x1,%eax
08307cb4 +0x3a:  jmp    08307cbb <+0x41>
08307cb6 +0x3c:  mov    $0x0,%eax
08307cbb +0x41:  leave
08307cbc +0x42:  ret
08307cbd +0x43:  nop
```

## 反编译 C

```c
// CBattle_Field::is_visited_map @ 0x8307c7a

/* CBattle_Field::is_visited_map(int, int) */

bool __thiscall CBattle_Field::is_visited_map(CBattle_Field *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetMapInfoFromPos(this,param_1,param_2,false);
  return *(char *)(iVar1 + 1) != '\0';
}
```
