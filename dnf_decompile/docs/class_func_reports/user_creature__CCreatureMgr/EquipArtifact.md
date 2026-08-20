# EquipArtifact

`_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item`

`user_creature::CCreatureMgr::EquipArtifact(int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x083396c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083396c8  _ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item
#           user_creature::CCreatureMgr::EquipArtifact(int, Inven_Item*)
# range [0x083396c8, 0x08339717]
083396c8 +0x00:  push   %ebp
083396c9 +0x01:  mov    %esp,%ebp
083396cb +0x03:  sub    $0x28,%esp
083396ce +0x06:  mov    0xc(%ebp),%eax
083396d1 +0x09:  mov    %eax,0x4(%esp)
083396d5 +0x0d:  mov    0x8(%ebp),%eax
083396d8 +0x10:  mov    %eax,(%esp)
083396db +0x13:  call   0833be56 <_ZN13user_creature12CCreatureMgr11GetArtifactEi>  ; user_creature::CCreatureMgr::GetArtifact(int)
083396e0 +0x18:  mov    %eax,-0xc(%ebp)
083396e3 +0x1b:  cmpl   $0x0,-0xc(%ebp)
083396e7 +0x1f:  jne    083396f0 <+0x28>
083396e9 +0x21:  mov    $0x0,%eax
083396ee +0x26:  jmp    08339715 <+0x4d>
083396f0 +0x28:  mov    0x10(%ebp),%eax
083396f3 +0x2b:  mov    %eax,0x4(%esp)
083396f7 +0x2f:  mov    -0xc(%ebp),%eax
083396fa +0x32:  mov    %eax,(%esp)
083396fd +0x35:  call   08336f6e <_ZN13user_creature9CArtifact13EquipArtifactEPK10Inven_Item>  ; user_creature::CArtifact::EquipArtifact(Inven_Item const*)
08339702 +0x3a:  xor    $0x1,%eax
08339705 +0x3d:  test   %al,%al
08339707 +0x3f:  je     08339710 <+0x48>
08339709 +0x41:  mov    $0x0,%eax
0833970e +0x46:  jmp    08339715 <+0x4d>
08339710 +0x48:  mov    $0x1,%eax
08339715 +0x4d:  leave
08339716 +0x4e:  ret
08339717 +0x4f:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::EquipArtifact @ 0x83396c8

/* user_creature::CCreatureMgr::EquipArtifact(int, Inven_Item*) */

undefined4 __thiscall
user_creature::CCreatureMgr::EquipArtifact(CCreatureMgr *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  CArtifact *this_00;
  undefined4 uVar2;
  
  this_00 = (CArtifact *)GetArtifact(this,param_1);
  if (this_00 == (CArtifact *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CArtifact::EquipArtifact(this_00,param_2);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
