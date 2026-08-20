# LoadArtifact

`_ZN13user_creature12CCreatureMgr12LoadArtifactEiP10Inven_Item`

`user_creature::CCreatureMgr::LoadArtifact(int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833be7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833be7c  _ZN13user_creature12CCreatureMgr12LoadArtifactEiP10Inven_Item
#           user_creature::CCreatureMgr::LoadArtifact(int, Inven_Item*)
# range [0x0833be7c, 0x0833beb3]
0833be7c +0x00:  push   %ebp
0833be7d +0x01:  mov    %esp,%ebp
0833be7f +0x03:  sub    $0x18,%esp
0833be82 +0x06:  mov    0x10(%ebp),%eax
0833be85 +0x09:  mov    %eax,(%esp)
0833be88 +0x0c:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0833be8d +0x11:  test   %al,%al
0833be8f +0x13:  je     0833be98 <+0x1c>
0833be91 +0x15:  mov    $0x1,%eax
0833be96 +0x1a:  jmp    0833beb1 <+0x35>
0833be98 +0x1c:  mov    0x10(%ebp),%eax
0833be9b +0x1f:  mov    %eax,0x8(%esp)
0833be9f +0x23:  mov    0xc(%ebp),%eax
0833bea2 +0x26:  mov    %eax,0x4(%esp)
0833bea6 +0x2a:  mov    0x8(%ebp),%eax
0833bea9 +0x2d:  mov    %eax,(%esp)
0833beac +0x30:  call   083396c8 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item>  ; user_creature::CCreatureMgr::EquipArtifact(int, Inven_Item*)
0833beb1 +0x35:  leave
0833beb2 +0x36:  ret
0833beb3 +0x37:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::LoadArtifact @ 0x833be7c

/* user_creature::CCreatureMgr::LoadArtifact(int, Inven_Item*) */

undefined4 __thiscall
user_creature::CCreatureMgr::LoadArtifact(CCreatureMgr *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Inven_Item::isEmpty(param_2);
  if (cVar1 == '\0') {
    uVar2 = EquipArtifact(this,param_1,param_2);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
