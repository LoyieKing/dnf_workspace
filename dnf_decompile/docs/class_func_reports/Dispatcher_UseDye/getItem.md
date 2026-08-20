# getItem

`_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item`

`Dispatcher_UseDye::getItem(CUser const&, int, short, Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseDye` | `0x081e71c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e71c0  _ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item
#           Dispatcher_UseDye::getItem(CUser const&, int, short, Inven_Item&) const
# range [0x081e71c0, 0x081e727d]
081e71c0 +0x00:  push   %ebp
081e71c1 +0x01:  mov    %esp,%ebp
081e71c3 +0x03:  push   %esi
081e71c4 +0x04:  push   %ebx
081e71c5 +0x05:  sub    $0x60,%esp
081e71c8 +0x08:  mov    0x14(%ebp),%eax
081e71cb +0x0b:  mov    %ax,-0xc(%ebp)
081e71cf +0x0f:  movswl -0xc(%ebp),%esi
081e71d3 +0x13:  mov    0xc(%ebp),%eax
081e71d6 +0x16:  mov    %eax,(%esp)
081e71d9 +0x19:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e71de +0x1e:  mov    0x18(%ebp),%ebx
081e71e1 +0x21:  lea    -0x58(%ebp),%edx
081e71e4 +0x24:  mov    %esi,0xc(%esp)
081e71e8 +0x28:  mov    0x10(%ebp),%ecx
081e71eb +0x2b:  mov    %ecx,0x8(%esp)
081e71ef +0x2f:  mov    %eax,0x4(%esp)
081e71f3 +0x33:  mov    %edx,(%esp)
081e71f6 +0x36:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e71fb +0x3b:  sub    $0x4,%esp
081e71fe +0x3e:  mov    -0x58(%ebp),%eax
081e7201 +0x41:  mov    %eax,(%ebx)
081e7203 +0x43:  mov    -0x54(%ebp),%eax
081e7206 +0x46:  mov    %eax,0x4(%ebx)
081e7209 +0x49:  mov    -0x50(%ebp),%eax
081e720c +0x4c:  mov    %eax,0x8(%ebx)
081e720f +0x4f:  mov    -0x4c(%ebp),%eax
081e7212 +0x52:  mov    %eax,0xc(%ebx)
081e7215 +0x55:  mov    -0x48(%ebp),%eax
081e7218 +0x58:  mov    %eax,0x10(%ebx)
081e721b +0x5b:  mov    -0x44(%ebp),%eax
081e721e +0x5e:  mov    %eax,0x14(%ebx)
081e7221 +0x61:  mov    -0x40(%ebp),%eax
081e7224 +0x64:  mov    %eax,0x18(%ebx)
081e7227 +0x67:  mov    -0x3c(%ebp),%eax
081e722a +0x6a:  mov    %eax,0x1c(%ebx)
081e722d +0x6d:  mov    -0x38(%ebp),%eax
081e7230 +0x70:  mov    %eax,0x20(%ebx)
081e7233 +0x73:  mov    -0x34(%ebp),%eax
081e7236 +0x76:  mov    %eax,0x24(%ebx)
081e7239 +0x79:  mov    -0x30(%ebp),%eax
081e723c +0x7c:  mov    %eax,0x28(%ebx)
081e723f +0x7f:  mov    -0x2c(%ebp),%eax
081e7242 +0x82:  mov    %eax,0x2c(%ebx)
081e7245 +0x85:  mov    -0x28(%ebp),%eax
081e7248 +0x88:  mov    %eax,0x30(%ebx)
081e724b +0x8b:  mov    -0x24(%ebp),%eax
081e724e +0x8e:  mov    %eax,0x34(%ebx)
081e7251 +0x91:  mov    -0x20(%ebp),%eax
081e7254 +0x94:  mov    %eax,0x38(%ebx)
081e7257 +0x97:  movzbl -0x1c(%ebp),%eax
081e725b +0x9b:  mov    %al,0x3c(%ebx)
081e725e +0x9e:  mov    0x18(%ebp),%eax
081e7261 +0xa1:  mov    0x2(%eax),%eax
081e7264 +0xa4:  test   %eax,%eax
081e7266 +0xa6:  jne    081e726f <+0xaf>
081e7268 +0xa8:  mov    $0x1,%eax
081e726d +0xad:  jmp    081e7274 <+0xb4>
081e726f +0xaf:  mov    $0x0,%eax
081e7274 +0xb4:  lea    -0x8(%ebp),%esp
081e7277 +0xb7:  add    $0x0,%esp
081e727a +0xba:  pop    %ebx
081e727b +0xbb:  pop    %esi
081e727c +0xbc:  pop    %ebp
081e727d +0xbd:  ret
```

## 反编译 C

```c
// Dispatcher_UseDye::getItem @ 0x81e71c0

/* Dispatcher_UseDye::getItem(CUser const&, int, short, Inven_Item&) const */

bool __thiscall
Dispatcher_UseDye::getItem
          (Dispatcher_UseDye *this,CUser *param_1,int param_2,short param_3,Inven_Item *param_4)

{
  int iVar1;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  short local_10;
  
  local_10 = param_3;
  iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_5c,iVar1);
  *(undefined4 *)param_4 = local_5c;
  *(undefined4 *)(param_4 + 4) = local_58;
  *(undefined4 *)(param_4 + 8) = local_54;
  *(undefined4 *)(param_4 + 0xc) = local_50;
  *(undefined4 *)(param_4 + 0x10) = local_4c;
  *(undefined4 *)(param_4 + 0x14) = local_48;
  *(undefined4 *)(param_4 + 0x18) = local_44;
  *(undefined4 *)(param_4 + 0x1c) = local_40;
  *(undefined4 *)(param_4 + 0x20) = local_3c;
  *(undefined4 *)(param_4 + 0x24) = local_38;
  *(undefined4 *)(param_4 + 0x28) = local_34;
  *(undefined4 *)(param_4 + 0x2c) = local_30;
  *(undefined4 *)(param_4 + 0x30) = local_2c;
  *(undefined4 *)(param_4 + 0x34) = local_28;
  *(undefined4 *)(param_4 + 0x38) = local_24;
  param_4[0x3c] = local_20;
  return *(int *)(param_4 + 2) == 0;
}
```
