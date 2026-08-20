# getData

`_ZNK11Redeem_Item11CRedeemItem7getDataEPc`

`Redeem_Item::CRedeemItem::getData(char*) const`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f78bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f78bc  _ZNK11Redeem_Item11CRedeemItem7getDataEPc
#           Redeem_Item::CRedeemItem::getData(char*) const
# range [0x085f78bc, 0x085f7997]
085f78bc +0x00:  push   %ebp
085f78bd +0x01:  mov    %esp,%ebp
085f78bf +0x03:  push   %edi
085f78c0 +0x04:  push   %esi
085f78c1 +0x05:  push   %ebx
085f78c2 +0x06:  sub    $0x2c,%esp
085f78c5 +0x09:  mov    0xc(%ebp),%eax
085f78c8 +0x0c:  mov    %eax,-0x20(%ebp)
085f78cb +0x0f:  mov    0x8(%ebp),%eax
085f78ce +0x12:  lea    0x8(%eax),%edx
085f78d1 +0x15:  lea    -0x28(%ebp),%eax
085f78d4 +0x18:  mov    %edx,0x4(%esp)
085f78d8 +0x1c:  mov    %eax,(%esp)
085f78db +0x1f:  call   085f7d14 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x150>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x150
085f78e0 +0x24:  sub    $0x4,%esp
085f78e3 +0x27:  mov    0x8(%ebp),%eax
085f78e6 +0x2a:  add    $0x8,%eax
085f78e9 +0x2d:  mov    %eax,(%esp)
085f78ec +0x30:  call   085f7cac <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0xe8>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0xe8
085f78f1 +0x35:  mov    -0x20(%ebp),%edx
085f78f4 +0x38:  mov    %eax,0x4(%edx)
085f78f7 +0x3b:  movl   $0x0,-0x1c(%ebp)
085f78fe +0x42:  jmp    085f7943 <+0x87>
085f7900 +0x44:  mov    -0x1c(%ebp),%ebx
085f7903 +0x47:  lea    -0x28(%ebp),%eax
085f7906 +0x4a:  mov    %eax,(%esp)
085f7909 +0x4d:  call   085f7f5c <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x398>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x398
085f790e +0x52:  mov    %eax,%edx
085f7910 +0x54:  mov    -0x20(%ebp),%ecx
085f7913 +0x57:  mov    %ebx,%eax
085f7915 +0x59:  shl    $0x2,%eax
085f7918 +0x5c:  mov    %eax,%ebx
085f791a +0x5e:  shl    $0x4,%ebx
085f791d +0x61:  add    %ebx,%eax
085f791f +0x63:  lea    (%ecx,%eax,1),%eax
085f7922 +0x66:  add    $0x8,%eax
085f7925 +0x69:  mov    %edx,%ebx
085f7927 +0x6b:  mov    $0x11,%edx
085f792c +0x70:  mov    %eax,%edi
085f792e +0x72:  mov    %ebx,%esi
085f7930 +0x74:  mov    %edx,%ecx
085f7932 +0x76:  rep movsl %ds:(%esi),%es:(%edi)
085f7934 +0x78:  lea    -0x28(%ebp),%eax
085f7937 +0x7b:  mov    %eax,(%esp)
085f793a +0x7e:  call   085f7f6a <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x3a6>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x3a6
085f793f +0x83:  addl   $0x1,-0x1c(%ebp)
085f7943 +0x87:  mov    -0x1c(%ebp),%eax
085f7946 +0x8a:  cmp    $0x14,%eax
085f7949 +0x8d:  ja     085f7980 <+0xc4>
085f794b +0x8f:  mov    0x8(%ebp),%eax
085f794e +0x92:  lea    0x8(%eax),%edx
085f7951 +0x95:  lea    -0x24(%ebp),%eax
085f7954 +0x98:  mov    %edx,0x4(%esp)
085f7958 +0x9c:  mov    %eax,(%esp)
085f795b +0x9f:  call   085f7cf0 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x12c>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x12c
085f7960 +0xa4:  sub    $0x4,%esp
085f7963 +0xa7:  lea    -0x24(%ebp),%eax
085f7966 +0xaa:  mov    %eax,0x4(%esp)
085f796a +0xae:  lea    -0x28(%ebp),%eax
085f796d +0xb1:  mov    %eax,(%esp)
085f7970 +0xb4:  call   085f7f48 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x384>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x384
085f7975 +0xb9:  test   %al,%al
085f7977 +0xbb:  je     085f7980 <+0xc4>
085f7979 +0xbd:  mov    $0x1,%eax
085f797e +0xc2:  jmp    085f7985 <+0xc9>
085f7980 +0xc4:  mov    $0x0,%eax
085f7985 +0xc9:  test   %al,%al
085f7987 +0xcb:  jne    085f7900 <+0x44>
085f798d +0xd1:  lea    -0xc(%ebp),%esp
085f7990 +0xd4:  add    $0x0,%esp
085f7993 +0xd7:  pop    %ebx
085f7994 +0xd8:  pop    %esi
085f7995 +0xd9:  pop    %edi
085f7996 +0xda:  pop    %ebp
085f7997 +0xdb:  ret
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::getData @ 0x85f78bc

/* Redeem_Item::CRedeemItem::getData(char*) const */

void __thiscall Redeem_Item::CRedeemItem::getData(CRedeemItem *this,char *param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  _List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_2c [4];
  _List_const_iterator local_28 [4];
  char *local_24;
  uint local_20;
  
  bVar8 = 0;
  local_24 = param_1;
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::begin();
  uVar4 = std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::size();
  *(undefined4 *)(local_24 + 4) = uVar4;
  local_20 = 0;
  do {
    if (local_20 < 0x15) {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::end();
      cVar3 = std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_2c,local_28);
      if (cVar3 == '\0') goto LAB_085f7980;
      bVar1 = true;
    }
    else {
LAB_085f7980:
      bVar1 = false;
    }
    uVar2 = local_20;
    if (!bVar1) {
      return;
    }
    puVar5 = (undefined4 *)
             std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*
                       (local_2c);
    pcVar7 = local_24 + uVar2 * 0x44 + 8;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
    }
    std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_2c);
    local_20 = local_20 + 1;
  } while( true );
}
```
