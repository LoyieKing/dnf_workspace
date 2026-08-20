# updateEmblemSocket

`_ZN8WongWork14CAvatarItemMgr18updateEmblemSocketEijPcPm`

`WongWork::CAvatarItemMgr::updateEmblemSocket(int, unsigned int, char*, unsigned long*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f913e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f913e  _ZN8WongWork14CAvatarItemMgr18updateEmblemSocketEijPcPm
#           WongWork::CAvatarItemMgr::updateEmblemSocket(int, unsigned int, char*, unsigned long*)
# range [0x082f913e, 0x082f91cd]
082f913e +0x00:  push   %ebp
082f913f +0x01:  mov    %esp,%ebp
082f9141 +0x03:  sub    $0x28,%esp
082f9144 +0x06:  mov    0xc(%ebp),%eax
082f9147 +0x09:  mov    %eax,0x4(%esp)
082f914b +0x0d:  mov    0x8(%ebp),%eax
082f914e +0x10:  mov    %eax,(%esp)
082f9151 +0x13:  call   082f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>  ; WongWork::CAvatarItemMgr::_FindItem(int) const
082f9156 +0x18:  mov    %eax,-0x10(%ebp)
082f9159 +0x1b:  cmpl   $0x0,-0x10(%ebp)
082f915d +0x1f:  jne    082f9166 <+0x28>
082f915f +0x21:  mov    $0x0,%eax
082f9164 +0x26:  jmp    082f91cb <+0x8d>
082f9166 +0x28:  movl   $0x0,-0xc(%ebp)
082f916d +0x2f:  jmp    082f91a0 <+0x62>
082f916f +0x31:  mov    -0xc(%ebp),%eax
082f9172 +0x34:  shl    $0x2,%eax
082f9175 +0x37:  add    0x18(%ebp),%eax
082f9178 +0x3a:  mov    (%eax),%edx
082f917a +0x3c:  mov    -0xc(%ebp),%eax
082f917d +0x3f:  mov    0x14(%ebp),%ecx
082f9180 +0x42:  lea    (%ecx,%eax,1),%eax
082f9183 +0x45:  movzbl (%eax),%eax
082f9186 +0x48:  movsbl %al,%eax
082f9189 +0x4b:  mov    %edx,0x8(%esp)
082f918d +0x4f:  mov    %eax,0x4(%esp)
082f9191 +0x53:  mov    -0x10(%ebp),%eax
082f9194 +0x56:  mov    %eax,(%esp)
082f9197 +0x59:  call   082fa2a6 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0xd8>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0xd8
082f919c +0x5e:  addl   $0x1,-0xc(%ebp)
082f91a0 +0x62:  mov    -0xc(%ebp),%eax
082f91a3 +0x65:  cmp    0x10(%ebp),%eax
082f91a6 +0x68:  setb   %al
082f91a9 +0x6b:  test   %al,%al
082f91ab +0x6d:  jne    082f916f <+0x31>
082f91ad +0x6f:  mov    -0x10(%ebp),%eax
082f91b0 +0x72:  mov    %eax,0x8(%esp)
082f91b4 +0x76:  mov    0xc(%ebp),%eax
082f91b7 +0x79:  mov    %eax,0x4(%esp)
082f91bb +0x7d:  mov    0x8(%ebp),%eax
082f91be +0x80:  mov    %eax,(%esp)
082f91c1 +0x83:  call   082f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
082f91c6 +0x88:  mov    $0x1,%eax
082f91cb +0x8d:  leave
082f91cc +0x8e:  ret
082f91cd +0x8f:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::updateEmblemSocket @ 0x82f913e

/* WongWork::CAvatarItemMgr::updateEmblemSocket(int, unsigned int, char*, unsigned long*) */

undefined4 __thiscall
WongWork::CAvatarItemMgr::updateEmblemSocket
          (CAvatarItemMgr *this,int param_1,uint param_2,char *param_3,ulong *param_4)

{
  Avatar_Item *this_00;
  undefined4 uVar1;
  uint local_10;
  
  this_00 = (Avatar_Item *)_FindItem((int)this);
  if (this_00 == (Avatar_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
      Avatar_Item::updateEmblemSocket(this_00,(int)param_3[local_10],param_4[local_10]);
    }
    AddEmblemEndurance(this,param_1,this_00);
    uVar1 = 1;
  }
  return uVar1;
}
```
