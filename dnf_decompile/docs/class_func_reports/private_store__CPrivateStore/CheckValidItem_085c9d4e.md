# CheckValidItem

`_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi`

`private_store::CPrivateStore::CheckValidItem(private_store::PrivateStoreItem&, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c9d4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c9d4e  _ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi
#           private_store::CPrivateStore::CheckValidItem(private_store::PrivateStoreItem&, int)
# range [0x085c9d4e, 0x085c9f21]
085c9d4e +0x000:  push   %ebp
085c9d4f +0x001:  mov    %esp,%ebp
085c9d51 +0x003:  push   %ebx
085c9d52 +0x004:  sub    $0x24,%esp
085c9d55 +0x007:  mov    0xc(%ebp),%eax
085c9d58 +0x00a:  mov    0x2(%eax),%eax
085c9d5b +0x00d:  mov    %eax,%ebx
085c9d5d +0x00f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c9d62 +0x014:  mov    %ebx,0x4(%esp)
085c9d66 +0x018:  mov    %eax,(%esp)
085c9d69 +0x01b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c9d6e +0x020:  mov    %eax,-0x10(%ebp)
085c9d71 +0x023:  cmpl   $0x0,-0x10(%ebp)
085c9d75 +0x027:  jne    085c9d81 <+0x33>
085c9d77 +0x029:  mov    $0x0,%eax
085c9d7c +0x02e:  jmp    085c9f1b <+0x1cd>
085c9d81 +0x033:  mov    -0x10(%ebp),%eax
085c9d84 +0x036:  mov    %eax,(%esp)
085c9d87 +0x039:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
085c9d8c +0x03e:  mov    %eax,-0xc(%ebp)
085c9d8f +0x041:  cmpl   $0x0,-0xc(%ebp)
085c9d93 +0x045:  je     085c9de0 <+0x92>
085c9d95 +0x047:  cmpl   $0x3,-0xc(%ebp)
085c9d99 +0x04b:  jne    085c9db2 <+0x64>
085c9d9b +0x04d:  mov    0xc(%ebp),%eax
085c9d9e +0x050:  movzbl (%eax),%eax
085c9da1 +0x053:  xor    $0x1,%eax
085c9da4 +0x056:  test   %al,%al
085c9da6 +0x058:  je     085c9de0 <+0x92>
085c9da8 +0x05a:  mov    $0x0,%eax
085c9dad +0x05f:  jmp    085c9f1b <+0x1cd>
085c9db2 +0x064:  cmpl   $0x7,-0xc(%ebp)
085c9db6 +0x068:  jne    085c9dd6 <+0x88>
085c9db8 +0x06a:  mov    0xc(%ebp),%eax
085c9dbb +0x06d:  mov    %eax,(%esp)
085c9dbe +0x070:  call   08120422 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x48>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x48
085c9dc3 +0x075:  test   %al,%al
085c9dc5 +0x077:  sete   %al
085c9dc8 +0x07a:  test   %al,%al
085c9dca +0x07c:  je     085c9de0 <+0x92>
085c9dcc +0x07e:  mov    $0x0,%eax
085c9dd1 +0x083:  jmp    085c9f1b <+0x1cd>
085c9dd6 +0x088:  mov    $0x0,%eax
085c9ddb +0x08d:  jmp    085c9f1b <+0x1cd>
085c9de0 +0x092:  mov    0xc(%ebp),%eax
085c9de3 +0x095:  movzbl 0x1(%eax),%eax
085c9de7 +0x099:  movzbl %al,%eax
085c9dea +0x09c:  mov    %eax,(%esp)
085c9ded +0x09f:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
085c9df2 +0x0a4:  test   %al,%al
085c9df4 +0x0a6:  je     085c9e00 <+0xb2>
085c9df6 +0x0a8:  mov    $0x0,%eax
085c9dfb +0x0ad:  jmp    085c9f1b <+0x1cd>
085c9e00 +0x0b2:  mov    -0x10(%ebp),%eax
085c9e03 +0x0b5:  mov    (%eax),%eax
085c9e05 +0x0b7:  add    $0x14,%eax
085c9e08 +0x0ba:  mov    (%eax),%edx
085c9e0a +0x0bc:  mov    -0x10(%ebp),%eax
085c9e0d +0x0bf:  mov    %eax,(%esp)
085c9e10 +0x0c2:  call   *%edx
085c9e12 +0x0c4:  test   %al,%al
085c9e14 +0x0c6:  je     085c9e20 <+0xd2>
085c9e16 +0x0c8:  mov    $0x0,%eax
085c9e1b +0x0cd:  jmp    085c9f1b <+0x1cd>
085c9e20 +0x0d2:  mov    -0x10(%ebp),%eax
085c9e23 +0x0d5:  mov    %eax,(%esp)
085c9e26 +0x0d8:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085c9e2b +0x0dd:  test   %al,%al
085c9e2d +0x0df:  je     085c9e44 <+0xf6>
085c9e2f +0x0e1:  mov    0xc(%ebp),%eax
085c9e32 +0x0e4:  mov    0x7(%eax),%eax
085c9e35 +0x0e7:  cmp    0x10(%ebp),%eax
085c9e38 +0x0ea:  jge    085c9e44 <+0xf6>
085c9e3a +0x0ec:  mov    $0x0,%eax
085c9e3f +0x0f1:  jmp    085c9f1b <+0x1cd>
085c9e44 +0x0f6:  mov    0xc(%ebp),%eax
085c9e47 +0x0f9:  movzbl 0x46(%eax),%eax
085c9e4b +0x0fd:  movsbl %al,%eax
085c9e4e +0x100:  cmp    $0x1,%eax
085c9e51 +0x103:  je     085c9eeb <+0x19d>
085c9e57 +0x109:  cmp    $0x1,%eax
085c9e5a +0x10c:  jg     085c9e65 <+0x117>
085c9e5c +0x10e:  test   %eax,%eax
085c9e5e +0x110:  je     085c9e74 <+0x126>
085c9e60 +0x112:  jmp    085c9f16 <+0x1c8>
085c9e65 +0x117:  cmp    $0x2,%eax
085c9e68 +0x11a:  je     085c9ec8 <+0x17a>
085c9e6a +0x11c:  cmp    $0x3,%eax
085c9e6d +0x11f:  je     085c9e9f <+0x151>
085c9e6f +0x121:  jmp    085c9f16 <+0x1c8>
085c9e74 +0x126:  mov    0xc(%ebp),%eax
085c9e77 +0x129:  mov    0x7(%eax),%edx
085c9e7a +0x12c:  mov    0xc(%ebp),%eax
085c9e7d +0x12f:  movzwl 0x48(%eax),%eax
085c9e81 +0x133:  cwtl
085c9e82 +0x134:  mov    %edx,0xc(%esp)
085c9e86 +0x138:  mov    %eax,0x8(%esp)
085c9e8a +0x13c:  movl   $0x1,0x4(%esp)
085c9e92 +0x144:  mov    0x8(%ebp),%eax
085c9e95 +0x147:  mov    %eax,(%esp)
085c9e98 +0x14a:  call   085c9bb8 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii>  ; private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int)
085c9e9d +0x14f:  jmp    085c9f1b <+0x1cd>
085c9e9f +0x151:  mov    0xc(%ebp),%eax
085c9ea2 +0x154:  movzwl 0x48(%eax),%eax
085c9ea6 +0x158:  cwtl
085c9ea7 +0x159:  movl   $0x1,0xc(%esp)
085c9eaf +0x161:  mov    %eax,0x8(%esp)
085c9eb3 +0x165:  movl   $0x0,0x4(%esp)
085c9ebb +0x16d:  mov    0x8(%ebp),%eax
085c9ebe +0x170:  mov    %eax,(%esp)
085c9ec1 +0x173:  call   085c9bb8 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii>  ; private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int)
085c9ec6 +0x178:  jmp    085c9f1b <+0x1cd>
085c9ec8 +0x17a:  mov    0xc(%ebp),%eax
085c9ecb +0x17d:  mov    0x7(%eax),%edx
085c9ece +0x180:  mov    0xc(%ebp),%eax
085c9ed1 +0x183:  movzwl 0x48(%eax),%eax
085c9ed5 +0x187:  cwtl
085c9ed6 +0x188:  mov    %edx,0x8(%esp)
085c9eda +0x18c:  mov    %eax,0x4(%esp)
085c9ede +0x190:  mov    0x8(%ebp),%eax
085c9ee1 +0x193:  mov    %eax,(%esp)
085c9ee4 +0x196:  call   085c9cc2 <_ZN13private_store13CPrivateStore14CheckValidItemEii>  ; private_store::CPrivateStore::CheckValidItem(int, int)
085c9ee9 +0x19b:  jmp    085c9f1b <+0x1cd>
085c9eeb +0x19d:  mov    0xc(%ebp),%eax
085c9eee +0x1a0:  mov    0x7(%eax),%edx
085c9ef1 +0x1a3:  mov    0xc(%ebp),%eax
085c9ef4 +0x1a6:  movzwl 0x48(%eax),%eax
085c9ef8 +0x1aa:  cwtl
085c9ef9 +0x1ab:  mov    %edx,0xc(%esp)
085c9efd +0x1af:  mov    %eax,0x8(%esp)
085c9f01 +0x1b3:  movl   $0x2,0x4(%esp)
085c9f09 +0x1bb:  mov    0x8(%ebp),%eax
085c9f0c +0x1be:  mov    %eax,(%esp)
085c9f0f +0x1c1:  call   085c9bb8 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii>  ; private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int)
085c9f14 +0x1c6:  jmp    085c9f1b <+0x1cd>
085c9f16 +0x1c8:  mov    $0x0,%eax
085c9f1b +0x1cd:  add    $0x24,%esp
085c9f1e +0x1d0:  pop    %ebx
085c9f1f +0x1d1:  pop    %ebp
085c9f20 +0x1d2:  ret
085c9f21 +0x1d3:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::CheckValidItem @ 0x85c9d4e

/* private_store::CPrivateStore::CheckValidItem(private_store::PrivateStoreItem&, int) */

undefined4 __thiscall
private_store::CPrivateStore::CheckValidItem
          (CPrivateStore *this,PrivateStoreItem *param_1,int param_2)

{
  PrivateStoreItem PVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if (this_01 == (CItem *)0x0) {
    return 0;
  }
  iVar3 = CItem::GetAttachType(this_01);
  if (iVar3 != 0) {
    if (iVar3 == 3) {
      if (*param_1 != (PrivateStoreItem)0x1) {
        return 0;
      }
    }
    else {
      if (iVar3 != 7) {
        return 0;
      }
      cVar2 = Inven_Item::GetTradeLimitCount((Inven_Item *)param_1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  cVar2 = IsCreatureItemType((uint)(byte)param_1[1]);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)this_01 + 0x14))(this_01);
    if (cVar2 == '\0') {
      cVar2 = CItem::is_stackable(this_01);
      if ((cVar2 == '\0') || (param_2 <= *(int *)(param_1 + 7))) {
        PVar1 = param_1[0x46];
        if (PVar1 == (PrivateStoreItem)0x1) {
          uVar4 = CheckValidItem(this,2,(int)*(short *)(param_1 + 0x48),*(undefined4 *)(param_1 + 7)
                                );
        }
        else {
          if ((char)PVar1 < '\x02') {
            if (PVar1 == (PrivateStoreItem)0x0) {
              uVar4 = CheckValidItem(this,1,(int)*(short *)(param_1 + 0x48),
                                     *(undefined4 *)(param_1 + 7));
              return uVar4;
            }
          }
          else {
            if (PVar1 == (PrivateStoreItem)0x2) {
              uVar4 = CheckValidItem(this,(int)*(short *)(param_1 + 0x48),*(int *)(param_1 + 7));
              return uVar4;
            }
            if (PVar1 == (PrivateStoreItem)0x3) {
              uVar4 = CheckValidItem(this,0,(int)*(short *)(param_1 + 0x48),1);
              return uVar4;
            }
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
