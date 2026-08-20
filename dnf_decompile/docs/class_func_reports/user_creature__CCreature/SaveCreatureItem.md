# SaveCreatureItem

`_ZN13user_creature9CCreature16SaveCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser`

`user_creature::CCreature::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083387f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083387f6  _ZN13user_creature9CCreature16SaveCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOP5CUser
#           user_creature::CCreature::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)
# range [0x083387f6, 0x083388eb]
083387f6 +0x00:  push   %ebp
083387f7 +0x01:  mov    %esp,%ebp
083387f9 +0x03:  sub    $0x28,%esp
083387fc +0x06:  mov    0x8(%ebp),%eax
083387ff +0x09:  movzbl 0x4c(%eax),%eax
08338803 +0x0d:  movzbl %al,%edx
08338806 +0x10:  mov    0x8(%ebp),%eax
08338809 +0x13:  mov    0x3c(%eax),%eax
0833880c +0x16:  mov    0x8(%ebp),%ecx
0833880f +0x19:  add    $0x34,%ecx
08338812 +0x1c:  mov    %edx,0x8(%esp)
08338816 +0x20:  mov    %eax,0x4(%esp)
0833881a +0x24:  mov    %ecx,(%esp)
0833881d +0x27:  call   08336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>  ; user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)
08338822 +0x2c:  fnstcw -0xa(%ebp)
08338825 +0x2f:  movzwl -0xa(%ebp),%eax
08338829 +0x33:  mov    $0xc,%ah
0833882b +0x35:  mov    %ax,-0xc(%ebp)
0833882f +0x39:  fldcw  -0xc(%ebp)
08338832 +0x3c:  fistpl -0x10(%ebp)
08338835 +0x3f:  fldcw  -0xa(%ebp)
08338838 +0x42:  mov    -0x10(%ebp),%edx
0833883b +0x45:  mov    0x10(%ebp),%eax
0833883e +0x48:  mov    %edx,0x18(%eax)
08338841 +0x4b:  mov    0x8(%ebp),%eax
08338844 +0x4e:  mov    0x30(%eax),%edx
08338847 +0x51:  mov    0x10(%ebp),%eax
0833884a +0x54:  mov    %edx,0x20(%eax)
0833884d +0x57:  mov    0x8(%ebp),%eax
08338850 +0x5a:  mov    0xc(%eax),%edx
08338853 +0x5d:  mov    0x10(%ebp),%eax
08338856 +0x60:  mov    %edx,0x4(%eax)
08338859 +0x63:  mov    0x8(%ebp),%eax
0833885c +0x66:  mov    0x3c(%eax),%eax
0833885f +0x69:  mov    0x8(%ebp),%edx
08338862 +0x6c:  add    $0x34,%edx
08338865 +0x6f:  mov    %eax,0x4(%esp)
08338869 +0x73:  mov    %edx,(%esp)
0833886c +0x76:  call   08336dee <_ZN13user_creature8CStomach13IsSaveStomachENS_14CREATURE_STATEE>  ; user_creature::CStomach::IsSaveStomach(user_creature::CREATURE_STATE)
08338871 +0x7b:  mov    0x8(%ebp),%edx
08338874 +0x7e:  mov    %al,0x40(%edx)
08338877 +0x81:  mov    0x8(%ebp),%eax
0833887a +0x84:  mov    %eax,(%esp)
0833887d +0x87:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
08338882 +0x8c:  mov    %eax,%edx
08338884 +0x8e:  mov    0xc(%ebp),%eax
08338887 +0x91:  mov    %edx,0x2(%eax)
0833888a +0x94:  mov    0x8(%ebp),%eax
0833888d +0x97:  mov    %eax,(%esp)
08338890 +0x9a:  call   0833efca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1097>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1097
08338895 +0x9f:  mov    0x10(%ebp),%edx
08338898 +0xa2:  mov    %eax,(%edx)
0833889a +0xa4:  mov    0x8(%ebp),%eax
0833889d +0xa7:  mov    0x8(%eax),%eax
083388a0 +0xaa:  mov    %eax,%edx
083388a2 +0xac:  mov    0x10(%ebp),%eax
083388a5 +0xaf:  mov    %dl,0x24(%eax)
083388a8 +0xb2:  mov    0x8(%ebp),%eax
083388ab +0xb5:  lea    0x1c(%eax),%edx
083388ae +0xb8:  mov    0x10(%ebp),%eax
083388b1 +0xbb:  add    $0x8,%eax
083388b4 +0xbe:  movl   $0xc,0x8(%esp)
083388bc +0xc6:  mov    %edx,0x4(%esp)
083388c0 +0xca:  mov    %eax,(%esp)
083388c3 +0xcd:  call   0807d8d0 <_init+0x1c8>
083388c8 +0xd2:  mov    0x8(%ebp),%eax
083388cb +0xd5:  movzbl 0x14(%eax),%eax
083388cf +0xd9:  mov    %eax,%edx
083388d1 +0xdb:  mov    0x10(%ebp),%eax
083388d4 +0xde:  mov    %dl,0x26(%eax)
083388d7 +0xe1:  mov    0x8(%ebp),%eax
083388da +0xe4:  movzbl 0x15(%eax),%edx
083388de +0xe8:  mov    0x10(%ebp),%eax
083388e1 +0xeb:  mov    %dl,0x27(%eax)
083388e4 +0xee:  mov    $0x1,%eax
083388e9 +0xf3:  leave
083388ea +0xf4:  ret
083388eb +0xf5:  nop
```

## 反编译 C

```c
// user_creature::CCreature::SaveCreatureItem @ 0x83387f6

/* user_creature::CCreature::SaveCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*, CUser*)
    */

undefined4
user_creature::CCreature::SaveCreatureItem
          (Inven_Item *param_1,SIG_CREATURE_ITEM_DETAIL_INFO *param_2,CUser *param_3)

{
  Inven_Item IVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  lVar3 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),param_1[0x4c]);
  *(int *)(param_3 + 0x18) = (int)ROUND(lVar3);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0xc);
  IVar1 = (Inven_Item)
          CStomach::IsSaveStomach((CStomach *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c));
  param_1[0x40] = IVar1;
  uVar2 = CCreatureItem::GetItemId((CCreatureItem *)param_1);
  *(undefined4 *)(param_2 + 2) = uVar2;
  uVar2 = CCreatureItem::GetSlotNo((CCreatureItem *)param_1);
  *(undefined4 *)param_3 = uVar2;
  param_3[0x24] = SUB41(*(undefined4 *)(param_1 + 8),0);
  strncpy((char *)(param_3 + 8),(char *)(param_1 + 0x1c),0xc);
  *(Inven_Item *)(param_3 + 0x26) = param_1[0x14];
  *(Inven_Item *)(param_3 + 0x27) = param_1[0x15];
  return 1;
}
```
