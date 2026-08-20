# _checkDisjointableItem

`_ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser`

`DisPatcher_DisJointItem::_checkDisjointableItem(Inven_Item const&, CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DisJointItem` | `0x081fa0f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fa0f6  _ZN23DisPatcher_DisJointItem22_checkDisjointableItemERK10Inven_ItemP5CUser
#           DisPatcher_DisJointItem::_checkDisjointableItem(Inven_Item const&, CUser*)
# range [0x081fa0f6, 0x081fa19d]
081fa0f6 +0x00:  push   %ebp
081fa0f7 +0x01:  mov    %esp,%ebp
081fa0f9 +0x03:  push   %ebx
081fa0fa +0x04:  sub    $0x24,%esp
081fa0fd +0x07:  mov    0x8(%ebp),%eax
081fa100 +0x0a:  add    $0x11,%eax
081fa103 +0x0d:  mov    %eax,(%esp)
081fa106 +0x10:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
081fa10b +0x15:  xor    $0x1,%eax
081fa10e +0x18:  test   %al,%al
081fa110 +0x1a:  je     081fa11f <+0x29>
081fa112 +0x1c:  cmpl   $0x0,0xc(%ebp)
081fa116 +0x20:  jne    081fa11f <+0x29>
081fa118 +0x22:  mov    $0x1,%eax
081fa11d +0x27:  jmp    081fa124 <+0x2e>
081fa11f +0x29:  mov    $0x0,%eax
081fa124 +0x2e:  test   %al,%al
081fa126 +0x30:  je     081fa12f <+0x39>
081fa128 +0x32:  mov    $0xae,%eax
081fa12d +0x37:  jmp    081fa197 <+0xa1>
081fa12f +0x39:  mov    0x8(%ebp),%eax
081fa132 +0x3c:  mov    0x2(%eax),%eax
081fa135 +0x3f:  mov    %eax,%ebx
081fa137 +0x41:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081fa13c +0x46:  mov    %ebx,0x4(%esp)
081fa140 +0x4a:  mov    %eax,(%esp)
081fa143 +0x4d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081fa148 +0x52:  mov    %eax,-0x10(%ebp)
081fa14b +0x55:  cmpl   $0x0,-0x10(%ebp)
081fa14f +0x59:  jne    081fa158 <+0x62>
081fa151 +0x5b:  mov    $0x11,%eax
081fa156 +0x60:  jmp    081fa197 <+0xa1>
081fa158 +0x62:  mov    -0x10(%ebp),%eax
081fa15b +0x65:  mov    (%eax),%eax
081fa15d +0x67:  add    $0x38,%eax
081fa160 +0x6a:  mov    (%eax),%edx
081fa162 +0x6c:  mov    -0x10(%ebp),%eax
081fa165 +0x6f:  mov    %eax,(%esp)
081fa168 +0x72:  call   *%edx
081fa16a +0x74:  test   %al,%al
081fa16c +0x76:  je     081fa175 <+0x7f>
081fa16e +0x78:  mov    $0x13,%eax
081fa173 +0x7d:  jmp    081fa197 <+0xa1>
081fa175 +0x7f:  mov    -0x10(%ebp),%eax
081fa178 +0x82:  mov    %eax,(%esp)
081fa17b +0x85:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
081fa180 +0x8a:  mov    %eax,-0xc(%ebp)
081fa183 +0x8d:  mov    -0xc(%ebp),%eax
081fa186 +0x90:  cmp    $0x2,%eax
081fa189 +0x93:  jne    081fa192 <+0x9c>
081fa18b +0x95:  mov    $0x11,%eax
081fa190 +0x9a:  jmp    081fa197 <+0xa1>
081fa192 +0x9c:  mov    $0x0,%eax
081fa197 +0xa1:  add    $0x24,%esp
081fa19a +0xa4:  pop    %ebx
081fa19b +0xa5:  pop    %ebp
081fa19c +0xa6:  ret
081fa19d +0xa7:  nop
```

## 反编译 C

```c
// DisPatcher_DisJointItem::_checkDisjointableItem @ 0x81fa0f6

/* DisPatcher_DisJointItem::_checkDisjointableItem(Inven_Item const&, CUser*) */

undefined4 DisPatcher_DisJointItem::_checkDisjointableItem(Inven_Item *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this;
  CItem *this_00;
  int iVar4;
  
  cVar2 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_1 + 0x11));
  if ((cVar2 == '\x01') || (param_2 != (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0xae;
  }
  else {
    iVar4 = *(int *)(param_1 + 2);
    this = (CDataManager *)G_CDataManager();
    this_00 = (CItem *)CDataManager::find_item(this,iVar4);
    if (this_00 == (CItem *)0x0) {
      uVar3 = 0x11;
    }
    else {
      cVar2 = (**(code **)(*(int *)this_00 + 0x38))(this_00);
      if (cVar2 == '\0') {
        iVar4 = CItem::GetAttachType(this_00);
        if (iVar4 == 2) {
          uVar3 = 0x11;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
  }
  return uVar3;
}
```
