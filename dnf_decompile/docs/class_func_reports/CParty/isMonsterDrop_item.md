# isMonsterDrop_item

`_ZN6CParty18isMonsterDrop_itemEi`

`CParty::isMonsterDrop_item(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a7786` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a7786  _ZN6CParty18isMonsterDrop_itemEi
#           CParty::isMonsterDrop_item(int)
# range [0x085a7786, 0x085a77d7]
085a7786 +0x00:  push   %ebp
085a7787 +0x01:  mov    %esp,%ebp
085a7789 +0x03:  sub    $0x78,%esp
085a778c +0x06:  lea    -0x60(%ebp),%eax
085a778f +0x09:  mov    %eax,(%esp)
085a7792 +0x0c:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
085a7797 +0x11:  mov    0x8(%ebp),%eax
085a779a +0x14:  lea    0xb24(%eax),%edx
085a77a0 +0x1a:  lea    -0x60(%ebp),%eax
085a77a3 +0x1d:  mov    %eax,0x8(%esp)
085a77a7 +0x21:  mov    0xc(%ebp),%eax
085a77aa +0x24:  mov    %eax,0x4(%esp)
085a77ae +0x28:  mov    %edx,(%esp)
085a77b1 +0x2b:  call   0830d9c0 <_ZN13CBattle_Field14get_field_itemEiR8map_item>  ; CBattle_Field::get_field_item(int, map_item&)
085a77b6 +0x30:  mov    %al,-0x9(%ebp)
085a77b9 +0x33:  cmpb   $0x0,-0x9(%ebp)
085a77bd +0x37:  je     085a77d1 <+0x4b>
085a77bf +0x39:  movzbl -0x60(%ebp),%eax
085a77c3 +0x3d:  xor    $0x1,%eax
085a77c6 +0x40:  test   %al,%al
085a77c8 +0x42:  je     085a77d1 <+0x4b>
085a77ca +0x44:  mov    $0x0,%eax
085a77cf +0x49:  jmp    085a77d6 <+0x50>
085a77d1 +0x4b:  mov    $0x1,%eax
085a77d6 +0x50:  leave
085a77d7 +0x51:  ret
```

## 反编译 C

```c
// CParty::isMonsterDrop_item @ 0x85a7786

/* CParty::isMonsterDrop_item(int) */

undefined4 __thiscall CParty::isMonsterDrop_item(CParty *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  map_item local_64 [96];
  
  map_item::map_item(local_64);
  cVar1 = CBattle_Field::get_field_item((CBattle_Field *)(this + 0xb24),param_1,local_64);
  if ((cVar1 == '\0') || (local_64[0] == (map_item)0x1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
