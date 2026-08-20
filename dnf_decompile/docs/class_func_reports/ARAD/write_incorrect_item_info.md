# write_incorrect_item_info

`_ZN4ARAD25write_incorrect_item_infoEjRK10Inven_ItemPKcii`

`ARAD::write_incorrect_item_info(unsigned int, Inven_Item const&, char const*, int, int)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x0819eaf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819eaf8  _ZN4ARAD25write_incorrect_item_infoEjRK10Inven_ItemPKcii
#           ARAD::write_incorrect_item_info(unsigned int, Inven_Item const&, char const*, int, int)
# range [0x0819eaf8, 0x0819ebdd]
0819eaf8 +0x00:  push   %ebp
0819eaf9 +0x01:  mov    %esp,%ebp
0819eafb +0x03:  push   %edi
0819eafc +0x04:  push   %esi
0819eafd +0x05:  push   %ebx
0819eafe +0x06:  sub    $0x7c,%esp
0819eb01 +0x09:  mov    0xc(%ebp),%eax
0819eb04 +0x0c:  add    $0x11,%eax
0819eb07 +0x0f:  mov    (%eax),%edi
0819eb09 +0x11:  mov    0xc(%ebp),%eax
0819eb0c +0x14:  mov    0xd(%eax),%eax
0819eb0f +0x17:  mov    %eax,-0x3c(%ebp)
0819eb12 +0x1a:  mov    0xc(%ebp),%eax
0819eb15 +0x1d:  movzwl 0xb(%eax),%eax
0819eb19 +0x21:  movzwl %ax,%eax
0819eb1c +0x24:  mov    %eax,-0x38(%ebp)
0819eb1f +0x27:  mov    0xc(%ebp),%eax
0819eb22 +0x2a:  mov    0x7(%eax),%eax
0819eb25 +0x2d:  mov    %eax,-0x34(%ebp)
0819eb28 +0x30:  mov    0xc(%ebp),%eax
0819eb2b +0x33:  mov    %eax,(%esp)
0819eb2e +0x36:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0819eb33 +0x3b:  movzbl %al,%eax
0819eb36 +0x3e:  mov    %eax,-0x30(%ebp)
0819eb39 +0x41:  mov    0xc(%ebp),%eax
0819eb3c +0x44:  mov    0x2(%eax),%eax
0819eb3f +0x47:  mov    %eax,-0x2c(%ebp)
0819eb42 +0x4a:  mov    0xc(%ebp),%eax
0819eb45 +0x4d:  movzbl 0x1(%eax),%eax
0819eb49 +0x51:  movzbl %al,%esi
0819eb4c +0x54:  mov    0xc(%ebp),%eax
0819eb4f +0x57:  movzbl (%eax),%eax
0819eb52 +0x5a:  movzbl %al,%ebx
0819eb55 +0x5d:  movl   $0x5,0xc(%esp)
0819eb5d +0x65:  movl   $0x106,0x8(%esp)
0819eb65 +0x6d:  movl   $&_ZZN4ARAD25write_incorrect_item_infoEjRK10Inven_ItemPKciiE19__PRETTY_FUNCTION__,0x4(%esp)
0819eb6d +0x75:  lea    -0x28(%ebp),%eax
0819eb70 +0x78:  mov    %eax,(%esp)
0819eb73 +0x7b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0819eb78 +0x80:  mov    0x14(%ebp),%eax
0819eb7b +0x83:  mov    %eax,0x34(%esp)
0819eb7f +0x87:  mov    0x18(%ebp),%eax
0819eb82 +0x8a:  mov    %eax,0x30(%esp)
0819eb86 +0x8e:  mov    0x10(%ebp),%eax
0819eb89 +0x91:  mov    %eax,0x2c(%esp)
0819eb8d +0x95:  mov    %edi,0x28(%esp)
0819eb91 +0x99:  mov    -0x3c(%ebp),%eax
0819eb94 +0x9c:  mov    %eax,0x24(%esp)
0819eb98 +0xa0:  mov    -0x38(%ebp),%eax
0819eb9b +0xa3:  mov    %eax,0x20(%esp)
0819eb9f +0xa7:  mov    -0x34(%ebp),%eax
0819eba2 +0xaa:  mov    %eax,0x1c(%esp)
0819eba6 +0xae:  mov    -0x30(%ebp),%eax
0819eba9 +0xb1:  mov    %eax,0x18(%esp)
0819ebad +0xb5:  mov    -0x2c(%ebp),%eax
0819ebb0 +0xb8:  mov    %eax,0x14(%esp)
0819ebb4 +0xbc:  mov    %esi,0x10(%esp)
0819ebb8 +0xc0:  mov    %ebx,0xc(%esp)
0819ebbc +0xc4:  mov    0x8(%ebp),%eax
0819ebbf +0xc7:  mov    %eax,0x8(%esp)
0819ebc3 +0xcb:  movl   $"charac_no[%u],Seal[%d],ItemType[%d],ItemID[%u],ItemAt[%d],add_info[%d],endurance[%d],extend_info[%u],amp_opt[%d] - inven_type[%s] slot_no(%d), error_line(%d) \n",0x4(%esp)
0819ebcb +0xd3:  lea    -0x28(%ebp),%eax
0819ebce +0xd6:  mov    %eax,(%esp)
0819ebd1 +0xd9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819ebd6 +0xde:  add    $0x7c,%esp
0819ebd9 +0xe1:  pop    %ebx
0819ebda +0xe2:  pop    %esi
0819ebdb +0xe3:  pop    %edi
0819ebdc +0xe4:  pop    %ebp
0819ebdd +0xe5:  ret
```

## 反编译 C

```c
// ARAD::write_incorrect_item_info @ 0x819eaf8

/* ARAD::write_incorrect_item_info(unsigned int, Inven_Item const&, char const*, int, int) */

void ARAD::write_incorrect_item_info
               (uint param_1,Inven_Item *param_2,char *param_3,int param_4,int param_5)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  cMyTrace local_2c [28];
  
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(ushort *)(param_2 + 0xb);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar8 = Inven_Item::GetItemAttr(param_2);
  uVar7 = *(undefined4 *)(param_2 + 2);
  IVar1 = param_2[1];
  IVar2 = *param_2;
  cMyTrace::cMyTrace(local_2c,
                     "void ARAD::write_incorrect_item_info(unsigned int, const Inven_Item&, const char*, int, int)"
                     ,0x106,5);
  cMyTrace::operator()
            (local_2c,
             "charac_no[%u],Seal[%d],ItemType[%d],ItemID[%u],ItemAt[%d],add_info[%d],endurance[%d],extend_info[%u],amp_opt[%d] - inven_type[%s] slot_no(%d), error_line(%d) \n"
             ,param_1,(uint)(byte)IVar2,(uint)(byte)IVar1,uVar7,uVar8 & 0xff,uVar6,(uint)uVar3,uVar5
             ,uVar4,param_3,param_5,param_4);
  return;
}
```
