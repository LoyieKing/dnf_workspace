# loadData

`_ZN11Redeem_Item11CRedeemItem8loadDataEP5CUserPc`

`Redeem_Item::CRedeemItem::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f7830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7830  _ZN11Redeem_Item11CRedeemItem8loadDataEP5CUserPc
#           Redeem_Item::CRedeemItem::loadData(CUser*, char*)
# range [0x085f7830, 0x085f78bb]
085f7830 +0x00:  push   %ebp
085f7831 +0x01:  mov    %esp,%ebp
085f7833 +0x03:  sub    $0x28,%esp
085f7836 +0x06:  mov    0x8(%ebp),%eax
085f7839 +0x09:  mov    (%eax),%eax
085f783b +0x0b:  add    $0x1c,%eax
085f783e +0x0e:  mov    (%eax),%edx
085f7840 +0x10:  mov    0x8(%ebp),%eax
085f7843 +0x13:  mov    %eax,(%esp)
085f7846 +0x16:  call   *%edx
085f7848 +0x18:  mov    0x10(%ebp),%eax
085f784b +0x1b:  mov    %eax,-0x10(%ebp)
085f784e +0x1e:  movl   $0x0,-0xc(%ebp)
085f7855 +0x25:  jmp    085f78a5 <+0x75>
085f7857 +0x27:  mov    -0xc(%ebp),%eax
085f785a +0x2a:  mov    -0x10(%ebp),%edx
085f785d +0x2d:  shl    $0x2,%eax
085f7860 +0x30:  mov    %eax,%ecx
085f7862 +0x32:  shl    $0x4,%ecx
085f7865 +0x35:  add    %ecx,%eax
085f7867 +0x37:  mov    0xa(%eax,%edx,1),%eax
085f786b +0x3b:  test   %eax,%eax
085f786d +0x3d:  jne    085f787c <+0x4c>
085f786f +0x3f:  mov    0x8(%ebp),%eax
085f7872 +0x42:  mov    %eax,(%esp)
085f7875 +0x45:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085f787a +0x4a:  jmp    085f78a1 <+0x71>
085f787c +0x4c:  mov    -0xc(%ebp),%eax
085f787f +0x4f:  shl    $0x2,%eax
085f7882 +0x52:  mov    %eax,%edx
085f7884 +0x54:  shl    $0x4,%edx
085f7887 +0x57:  add    %edx,%eax
085f7889 +0x59:  add    -0x10(%ebp),%eax
085f788c +0x5c:  lea    0x8(%eax),%edx
085f788f +0x5f:  mov    0x8(%ebp),%eax
085f7892 +0x62:  add    $0x8,%eax
085f7895 +0x65:  mov    %edx,0x4(%esp)
085f7899 +0x69:  mov    %eax,(%esp)
085f789c +0x6c:  call   085f7da6 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x1e2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x1e2
085f78a1 +0x71:  addl   $0x1,-0xc(%ebp)
085f78a5 +0x75:  mov    -0x10(%ebp),%eax
085f78a8 +0x78:  mov    0x4(%eax),%eax
085f78ab +0x7b:  cmp    -0xc(%ebp),%eax
085f78ae +0x7e:  seta   %al
085f78b1 +0x81:  test   %al,%al
085f78b3 +0x83:  jne    085f7857 <+0x27>
085f78b5 +0x85:  mov    $0x1,%eax
085f78ba +0x8a:  leave
085f78bb +0x8b:  ret
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::loadData @ 0x85f7830

/* Redeem_Item::CRedeemItem::loadData(CUser*, char*) */

undefined4 __thiscall
Redeem_Item::CRedeemItem::loadData(CRedeemItem *this,CUser *param_1,char *param_2)

{
  uint local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  for (local_10 = 0; local_10 < *(uint *)(param_2 + 4); local_10 = local_10 + 1) {
    if (*(int *)(param_2 + local_10 * 0x44 + 10) == 0) {
      charac_expand::CData::alter((CData *)this);
    }
    else {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::push_back((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                   *)(this + 8),(Inven_Item_Expand_RedeemInfo *)(param_2 + local_10 * 0x44 + 8));
    }
  }
  return 1;
}
```
