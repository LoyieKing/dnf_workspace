# verifyUsablePlace

`_ZN14CStackableItem17verifyUsablePlaceEP5CUser`

`CStackableItem::verifyUsablePlace(CUser*)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850e9f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850e9f4  _ZN14CStackableItem17verifyUsablePlaceEP5CUser
#           CStackableItem::verifyUsablePlace(CUser*)
# range [0x0850e9f4, 0x0850eb41]
0850e9f4 +0x000:  push   %ebp
0850e9f5 +0x001:  mov    %esp,%ebp
0850e9f7 +0x003:  sub    $0x38,%esp
0850e9fa +0x006:  mov    0x8(%ebp),%eax
0850e9fd +0x009:  add    $0x3ac,%eax
0850ea02 +0x00e:  mov    %eax,(%esp)
0850ea05 +0x011:  call   085175be <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3bf3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3bf3
0850ea0a +0x016:  test   %al,%al
0850ea0c +0x018:  je     0850ea18 <+0x24>
0850ea0e +0x01a:  mov    $0x1,%eax
0850ea13 +0x01f:  jmp    0850eb40 <+0x14c>
0850ea18 +0x024:  movl   $0x0,-0x1c(%ebp)
0850ea1f +0x02b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0850ea24 +0x030:  mov    %eax,(%esp)
0850ea27 +0x033:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0850ea2c +0x038:  test   %al,%al
0850ea2e +0x03a:  je     0850ea39 <+0x45>
0850ea30 +0x03c:  movl   $0x3,-0x1c(%ebp)
0850ea37 +0x043:  jmp    0850ea5e <+0x6a>
0850ea39 +0x045:  mov    0xc(%ebp),%eax
0850ea3c +0x048:  mov    %eax,(%esp)
0850ea3f +0x04b:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0850ea44 +0x050:  cmp    $0x3,%eax
0850ea47 +0x053:  je     0850ea57 <+0x63>
0850ea49 +0x055:  cmp    $0x5,%eax
0850ea4c +0x058:  jne    0850ea5e <+0x6a>
0850ea4e +0x05a:  movl   $0x2,-0x1c(%ebp)
0850ea55 +0x061:  jmp    0850ea5e <+0x6a>
0850ea57 +0x063:  movl   $0x1,-0x1c(%ebp)
0850ea5e +0x06a:  mov    0x8(%ebp),%eax
0850ea61 +0x06d:  lea    0x3ac(%eax),%edx
0850ea67 +0x073:  lea    -0x18(%ebp),%eax
0850ea6a +0x076:  mov    %edx,0x4(%esp)
0850ea6e +0x07a:  mov    %eax,(%esp)
0850ea71 +0x07d:  call   08517626 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3c5b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3c5b
0850ea76 +0x082:  sub    $0x4,%esp
0850ea79 +0x085:  mov    0x8(%ebp),%eax
0850ea7c +0x088:  lea    0x3ac(%eax),%edx
0850ea82 +0x08e:  lea    -0x10(%ebp),%eax
0850ea85 +0x091:  mov    %edx,0x4(%esp)
0850ea89 +0x095:  mov    %eax,(%esp)
0850ea8c +0x098:  call   08517626 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3c5b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3c5b
0850ea91 +0x09d:  sub    $0x4,%esp
0850ea94 +0x0a0:  mov    0x8(%ebp),%eax
0850ea97 +0x0a3:  lea    0x3ac(%eax),%edx
0850ea9d +0x0a9:  lea    -0xc(%ebp),%eax
0850eaa0 +0x0ac:  mov    %edx,0x4(%esp)
0850eaa4 +0x0b0:  mov    %eax,(%esp)
0850eaa7 +0x0b3:  call   08517602 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3c37>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3c37
0850eaac +0x0b8:  sub    $0x4,%esp
0850eaaf +0x0bb:  lea    -0x14(%ebp),%eax
0850eab2 +0x0be:  lea    -0x1c(%ebp),%edx
0850eab5 +0x0c1:  mov    %edx,0xc(%esp)
0850eab9 +0x0c5:  mov    -0x10(%ebp),%edx
0850eabc +0x0c8:  mov    %edx,0x8(%esp)
0850eac0 +0x0cc:  mov    -0xc(%ebp),%edx
0850eac3 +0x0cf:  mov    %edx,0x4(%esp)
0850eac7 +0x0d3:  mov    %eax,(%esp)
0850eaca +0x0d6:  call   0851764c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3c81>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3c81
0850eacf +0x0db:  sub    $0x4,%esp
0850ead2 +0x0de:  lea    -0x18(%ebp),%eax
0850ead5 +0x0e1:  mov    %eax,0x4(%esp)
0850ead9 +0x0e5:  lea    -0x14(%ebp),%eax
0850eadc +0x0e8:  mov    %eax,(%esp)
0850eadf +0x0eb:  call   085176a0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3cd5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3cd5
0850eae4 +0x0f0:  test   %al,%al
0850eae6 +0x0f2:  je     0850eaef <+0xfb>
0850eae8 +0x0f4:  mov    $0x0,%eax
0850eaed +0x0f9:  jmp    0850eb40 <+0x14c>
0850eaef +0x0fb:  mov    0x8(%ebp),%eax
0850eaf2 +0x0fe:  movzbl 0x14c(%eax),%eax
0850eaf9 +0x105:  test   %al,%al
0850eafb +0x107:  js     0850eb24 <+0x130>
0850eafd +0x109:  mov    0x8(%ebp),%eax
0850eb00 +0x10c:  movzbl 0x14c(%eax),%eax
0850eb07 +0x113:  test   %al,%al
0850eb09 +0x115:  js     0850eb2b <+0x137>
0850eb0b +0x117:  mov    0xc(%ebp),%eax
0850eb0e +0x11a:  mov    %eax,(%esp)
0850eb11 +0x11d:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0850eb16 +0x122:  mov    0x8(%ebp),%edx
0850eb19 +0x125:  movzbl 0x14c(%edx),%edx
0850eb20 +0x12c:  cmp    %dl,%al
0850eb22 +0x12e:  jne    0850eb2b <+0x137>
0850eb24 +0x130:  mov    $0x1,%eax
0850eb29 +0x135:  jmp    0850eb30 <+0x13c>
0850eb2b +0x137:  mov    $0x0,%eax
0850eb30 +0x13c:  test   %al,%al
0850eb32 +0x13e:  je     0850eb3b <+0x147>
0850eb34 +0x140:  mov    $0x1,%eax
0850eb39 +0x145:  jmp    0850eb40 <+0x14c>
0850eb3b +0x147:  mov    $0x0,%eax
0850eb40 +0x14c:  leave
0850eb41 +0x14d:  ret
```

## 反编译 C

```c
// CStackableItem::verifyUsablePlace @ 0x850e9f4

/* CStackableItem::verifyUsablePlace(CUser*) */

undefined1 __thiscall CStackableItem::verifyUsablePlace(CStackableItem *this,CUser *param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  CStackableItem CVar4;
  GameWorld *this_00;
  int iVar5;
  undefined4 local_20;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  cVar2 = std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::
          empty();
  if (cVar2 != '\0') {
    return 1;
  }
  local_20 = 0;
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(this_00);
  if (cVar2 == '\0') {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      local_20 = 1;
    }
    else if (iVar5 == 5) {
      local_20 = 2;
    }
  }
  else {
    local_20 = 3;
  }
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::end();
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::end();
  std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<StackableAction::UsablePlace*,std::vector<StackableAction::UsablePlace,std::allocator<StackableAction::UsablePlace>>>,StackableAction::UsablePlace>
            (local_18,local_10,local_14,&local_20);
  bVar3 = __gnu_cxx::operator==(local_18,local_1c);
  if (!bVar3) {
    if (((char)this[0x14c] < '\0') ||
       ((-1 < (char)this[0x14c] &&
        (CVar4 = (CStackableItem)
                 CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
        CVar4 == this[0x14c])))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}
```
