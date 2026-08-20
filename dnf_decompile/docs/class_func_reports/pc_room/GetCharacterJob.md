# GetCharacterJob

`_ZN7pc_room15GetCharacterJobER5CUserRc`

`pc_room::GetCharacterJob(CUser&, char&)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x082712a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082712a6  _ZN7pc_room15GetCharacterJobER5CUserRc
#           pc_room::GetCharacterJob(CUser&, char&)
# range [0x082712a6, 0x082712d9]
082712a6 +0x00:  push   %ebp
082712a7 +0x01:  mov    %esp,%ebp
082712a9 +0x03:  sub    $0x28,%esp
082712ac +0x06:  mov    0x8(%ebp),%eax
082712af +0x09:  mov    %eax,(%esp)
082712b2 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082712b7 +0x11:  mov    %eax,-0xc(%ebp)
082712ba +0x14:  cmpl   $0x0,-0xc(%ebp)
082712be +0x18:  jne    082712c7 <+0x21>
082712c0 +0x1a:  mov    $0x0,%eax
082712c5 +0x1f:  jmp    082712d8 <+0x32>
082712c7 +0x21:  mov    -0xc(%ebp),%eax
082712ca +0x24:  movzbl 0x26(%eax),%edx
082712ce +0x28:  mov    0xc(%ebp),%eax
082712d1 +0x2b:  mov    %dl,(%eax)
082712d3 +0x2d:  mov    $0x1,%eax
082712d8 +0x32:  leave
082712d9 +0x33:  ret
```

## 反编译 C

```c
// pc_room::GetCharacterJob @ 0x82712a6

/* pc_room::GetCharacterJob(CUser&, char&) */

bool pc_room::GetCharacterJob(CUser *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    *param_2 = *(char *)(iVar1 + 0x26);
  }
  return iVar1 != 0;
}
```
