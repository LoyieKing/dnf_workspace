# check_visited_map

`_ZN13CBattle_Field17check_visited_mapEiiRb`

`CBattle_Field::check_visited_map(int, int, bool&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307d7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307d7c  _ZN13CBattle_Field17check_visited_mapEiiRb
#           CBattle_Field::check_visited_map(int, int, bool&)
# range [0x08307d7c, 0x08307e43]
08307d7c +0x00:  push   %ebp
08307d7d +0x01:  mov    %esp,%ebp
08307d7f +0x03:  sub    $0x18,%esp
08307d82 +0x06:  mov    0x8(%ebp),%eax
08307d85 +0x09:  mov    0x188(%eax),%eax
08307d8b +0x0f:  test   %eax,%eax
08307d8d +0x11:  je     08307dab <+0x2f>
08307d8f +0x13:  mov    0x8(%ebp),%eax
08307d92 +0x16:  mov    0x188(%eax),%eax
08307d98 +0x1c:  mov    %eax,(%esp)
08307d9b +0x1f:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
08307da0 +0x24:  test   %al,%al
08307da2 +0x26:  je     08307dab <+0x2f>
08307da4 +0x28:  mov    $0x1,%eax
08307da9 +0x2d:  jmp    08307db0 <+0x34>
08307dab +0x2f:  mov    $0x0,%eax
08307db0 +0x34:  test   %al,%al
08307db2 +0x36:  je     08307df8 <+0x7c>
08307db4 +0x38:  mov    0x10(%ebp),%eax
08307db7 +0x3b:  mov    %eax,0x8(%esp)
08307dbb +0x3f:  mov    0xc(%ebp),%eax
08307dbe +0x42:  mov    %eax,0x4(%esp)
08307dc2 +0x46:  mov    0x8(%ebp),%eax
08307dc5 +0x49:  mov    %eax,(%esp)
08307dc8 +0x4c:  call   08307cbe <_ZN13CBattle_Field19is_visited_map_gotoEii>  ; CBattle_Field::is_visited_map_goto(int, int)
08307dcd +0x51:  test   %al,%al
08307dcf +0x53:  je     08307e3c <+0xc0>
08307dd1 +0x55:  mov    0x14(%ebp),%eax
08307dd4 +0x58:  mov    %eax,0xc(%esp)
08307dd8 +0x5c:  mov    0x10(%ebp),%eax
08307ddb +0x5f:  mov    %eax,0x8(%esp)
08307ddf +0x63:  mov    0xc(%ebp),%eax
08307de2 +0x66:  mov    %eax,0x4(%esp)
08307de6 +0x6a:  mov    0x8(%ebp),%eax
08307de9 +0x6d:  mov    %eax,(%esp)
08307dec +0x70:  call   08307d0c <_ZN13CBattle_Field18on_not_visited_mapEiiRb>  ; CBattle_Field::on_not_visited_map(int, int, bool&)
08307df1 +0x75:  mov    $0x1,%eax
08307df6 +0x7a:  jmp    08307e41 <+0xc5>
08307df8 +0x7c:  mov    0x10(%ebp),%eax
08307dfb +0x7f:  mov    %eax,0x8(%esp)
08307dff +0x83:  mov    0xc(%ebp),%eax
08307e02 +0x86:  mov    %eax,0x4(%esp)
08307e06 +0x8a:  mov    0x8(%ebp),%eax
08307e09 +0x8d:  mov    %eax,(%esp)
08307e0c +0x90:  call   08307c7a <_ZN13CBattle_Field14is_visited_mapEii>  ; CBattle_Field::is_visited_map(int, int)
08307e11 +0x95:  test   %al,%al
08307e13 +0x97:  je     08307e3c <+0xc0>
08307e15 +0x99:  mov    0x14(%ebp),%eax
08307e18 +0x9c:  mov    %eax,0xc(%esp)
08307e1c +0xa0:  mov    0x10(%ebp),%eax
08307e1f +0xa3:  mov    %eax,0x8(%esp)
08307e23 +0xa7:  mov    0xc(%ebp),%eax
08307e26 +0xaa:  mov    %eax,0x4(%esp)
08307e2a +0xae:  mov    0x8(%ebp),%eax
08307e2d +0xb1:  mov    %eax,(%esp)
08307e30 +0xb4:  call   08307d0c <_ZN13CBattle_Field18on_not_visited_mapEiiRb>  ; CBattle_Field::on_not_visited_map(int, int, bool&)
08307e35 +0xb9:  mov    $0x1,%eax
08307e3a +0xbe:  jmp    08307e41 <+0xc5>
08307e3c +0xc0:  mov    $0x0,%eax
08307e41 +0xc5:  leave
08307e42 +0xc6:  ret
08307e43 +0xc7:  nop
```

## 反编译 C

```c
// CBattle_Field::check_visited_map @ 0x8307d7c

/* CBattle_Field::check_visited_map(int, int, bool&) */

undefined4 __thiscall
CBattle_Field::check_visited_map(CBattle_Field *this,int param_1,int param_2,bool *param_3)

{
  bool bVar1;
  char cVar2;
  
  if ((*(int *)(this + 0x188) == 0) ||
     (cVar2 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188)), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = is_visited_map_goto(this,param_1,param_2);
    if (cVar2 != '\0') {
      on_not_visited_map(this,param_1,param_2,param_3);
      return 1;
    }
  }
  else {
    cVar2 = is_visited_map(this,param_1,param_2);
    if (cVar2 != '\0') {
      on_not_visited_map(this,param_1,param_2,param_3);
      return 1;
    }
  }
  return 0;
}
```
