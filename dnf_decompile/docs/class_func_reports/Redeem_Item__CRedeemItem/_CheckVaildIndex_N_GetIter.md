# _CheckVaildIndex_N_GetIter

`_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi`

`Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f710e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f710e  _ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi
#           Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const
# range [0x085f710e, 0x085f71a7]
085f710e +0x00:  push   %ebp
085f710f +0x01:  mov    %esp,%ebp
085f7111 +0x03:  push   %ebx
085f7112 +0x04:  sub    $0x24,%esp
085f7115 +0x07:  mov    0x8(%ebp),%ebx
085f7118 +0x0a:  cmpl   $0x0,0x10(%ebp)
085f711c +0x0e:  js     085f7148 <+0x3a>
085f711e +0x10:  mov    0xc(%ebp),%eax
085f7121 +0x13:  add    $0x8,%eax
085f7124 +0x16:  mov    %eax,(%esp)
085f7127 +0x19:  call   085f7c9a <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0xd6>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0xd6
085f712c +0x1e:  test   %al,%al
085f712e +0x20:  jne    085f7148 <+0x3a>
085f7130 +0x22:  mov    0xc(%ebp),%eax
085f7133 +0x25:  add    $0x8,%eax
085f7136 +0x28:  mov    %eax,(%esp)
085f7139 +0x2b:  call   085f7cac <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0xe8>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0xe8
085f713e +0x30:  mov    0x10(%ebp),%edx
085f7141 +0x33:  add    $0x1,%edx
085f7144 +0x36:  cmp    %edx,%eax
085f7146 +0x38:  jge    085f714f <+0x41>
085f7148 +0x3a:  mov    $0x1,%eax
085f714d +0x3f:  jmp    085f7154 <+0x46>
085f714f +0x41:  mov    $0x0,%eax
085f7154 +0x46:  test   %al,%al
085f7156 +0x48:  je     085f716f <+0x61>
085f7158 +0x4a:  mov    0xc(%ebp),%eax
085f715b +0x4d:  add    $0x8,%eax
085f715e +0x50:  mov    %eax,0x4(%esp)
085f7162 +0x54:  mov    %ebx,(%esp)
085f7165 +0x57:  call   085f7cf0 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x12c>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x12c
085f716a +0x5c:  sub    $0x4,%esp
085f716d +0x5f:  jmp    085f719e <+0x90>
085f716f +0x61:  mov    0xc(%ebp),%eax
085f7172 +0x64:  lea    0x8(%eax),%edx
085f7175 +0x67:  lea    -0xc(%ebp),%eax
085f7178 +0x6a:  mov    %edx,0x4(%esp)
085f717c +0x6e:  mov    %eax,(%esp)
085f717f +0x71:  call   085f7d14 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x150>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x150
085f7184 +0x76:  sub    $0x4,%esp
085f7187 +0x79:  mov    0x10(%ebp),%eax
085f718a +0x7c:  mov    %eax,0x4(%esp)
085f718e +0x80:  lea    -0xc(%ebp),%eax
085f7191 +0x83:  mov    %eax,(%esp)
085f7194 +0x86:  call   085f7d39 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x175>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x175
085f7199 +0x8b:  mov    -0xc(%ebp),%eax
085f719c +0x8e:  mov    %eax,(%ebx)
085f719e +0x90:  mov    %ebx,%eax
085f71a0 +0x92:  mov    -0x4(%ebp),%ebx
085f71a3 +0x95:  leave
085f71a4 +0x96:  ret    $0x4
085f71a7 +0x99:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter @ 0x85f710e

/* Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const */

int Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_10 [2];
  
  if (-1 < in_stack_0000000c) {
    cVar2 = std::
            list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
            ::empty((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                     *)(in_stack_00000008 + 8));
    if (cVar2 == '\0') {
      iVar3 = std::
              list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
              ::size();
      if (in_stack_0000000c + 1 <= iVar3) {
        bVar1 = false;
        goto LAB_085f7154;
      }
    }
  }
  bVar1 = true;
LAB_085f7154:
  if (bVar1) {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::end();
  }
  else {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::begin();
    std::advance<std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>,int>
              ((_List_const_iterator *)local_10,in_stack_0000000c);
    *(undefined4 *)param_1 = local_10[0];
  }
  return param_1;
}
```
