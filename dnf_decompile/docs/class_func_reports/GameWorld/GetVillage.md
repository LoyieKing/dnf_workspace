# GetVillage

`_ZN9GameWorld10GetVillageEi`

`GameWorld::GetVillage(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d1764` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d1764  _ZN9GameWorld10GetVillageEi
#           GameWorld::GetVillage(int)
# range [0x086d1764, 0x086d178e]
086d1764 +0x00:  push   %ebp
086d1765 +0x01:  mov    %esp,%ebp
086d1767 +0x03:  cmpl   $0x0,0xc(%ebp)
086d176b +0x07:  js     086d1777 <+0x13>
086d176d +0x09:  mov    &MAX_VILLAGE_NUM,%eax
086d1772 +0x0e:  cmp    %eax,0xc(%ebp)
086d1775 +0x11:  jl     086d177e <+0x1a>
086d1777 +0x13:  mov    $0x0,%eax
086d177c +0x18:  jmp    086d178d <+0x29>
086d177e +0x1a:  mov    0x8(%ebp),%eax
086d1781 +0x1d:  mov    0x1c(%eax),%edx
086d1784 +0x20:  mov    0xc(%ebp),%eax
086d1787 +0x23:  imul   $0x34,%eax,%eax
086d178a +0x26:  lea    (%edx,%eax,1),%eax
086d178d +0x29:  pop    %ebp
086d178e +0x2a:  ret
```

## 反编译 C

```c
// GameWorld::GetVillage @ 0x86d1764

/* GameWorld::GetVillage(int) */

int __thiscall GameWorld::GetVillage(GameWorld *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (MAX_VILLAGE_NUM <= param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x1c) + param_1 * 0x34;
  }
  return iVar1;
}
```
