# giveBonusItem

`_ZN10BlueMarble13giveBonusItemEP5CUser`

`BlueMarble::giveBonusItem(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9808  _ZN10BlueMarble13giveBonusItemEP5CUser
#           BlueMarble::giveBonusItem(CUser*)
# range [0x080d9808, 0x080d990d]
080d9808 +0x000:  push   %ebp
080d9809 +0x001:  mov    %esp,%ebp
080d980b +0x003:  sub    $0x78,%esp
080d980e +0x006:  cmpl   $0x0,0xc(%ebp)
080d9812 +0x00a:  je     080d9905 <+0xfd>
080d9818 +0x010:  mov    0xc(%ebp),%eax
080d981b +0x013:  mov    %eax,0x4(%esp)
080d981f +0x017:  mov    0x8(%ebp),%eax
080d9822 +0x01a:  mov    %eax,(%esp)
080d9825 +0x01d:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d982a +0x022:  mov    %eax,-0xc(%ebp)
080d982d +0x025:  cmpl   $0xffffffff,-0xc(%ebp)
080d9831 +0x029:  jne    080d986b <+0x63>
080d9833 +0x02b:  mov    -0xc(%ebp),%eax
080d9836 +0x02e:  mov    %eax,0x14(%esp)
080d983a +0x032:  movl   $"BlueMarble::giveBonusItem slot(%d)",0x10(%esp)
080d9842 +0x03a:  movl   $0x4ac,0xc(%esp)
080d984a +0x042:  movl   $&_ZZN10BlueMarble13giveBonusItemEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d9852 +0x04a:  movl   $"BlueMarble.cpp",0x4(%esp)
080d985a +0x052:  movl   $0x1,(%esp)
080d9861 +0x059:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d9866 +0x05e:  jmp    080d990c <+0x104>
080d986b +0x063:  mov    0x8(%ebp),%eax
080d986e +0x066:  mov    %eax,(%esp)
080d9871 +0x069:  call   080d6dc8 <_ZNK10BlueMarble8getStateEv>  ; BlueMarble::getState() const
080d9876 +0x06e:  cmp    $0x2,%eax
080d9879 +0x071:  jne    080d9892 <+0x8a>
080d987b +0x073:  mov    -0xc(%ebp),%eax
080d987e +0x076:  mov    %eax,0x4(%esp)
080d9882 +0x07a:  mov    0x8(%ebp),%eax
080d9885 +0x07d:  mov    %eax,(%esp)
080d9888 +0x080:  call   080d7966 <_ZNK10BlueMarble12getUserStateEi>  ; BlueMarble::getUserState(int) const
080d988d +0x085:  cmp    $0x1,%eax
080d9890 +0x088:  je     080d9899 <+0x91>
080d9892 +0x08a:  mov    $0x1,%eax
080d9897 +0x08f:  jmp    080d989e <+0x96>
080d9899 +0x091:  mov    $0x0,%eax
080d989e +0x096:  test   %al,%al
080d98a0 +0x098:  jne    080d9908 <+0x100>
080d98a2 +0x09a:  lea    -0x49(%ebp),%eax
080d98a5 +0x09d:  mov    %eax,(%esp)
080d98a8 +0x0a0:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080d98ad +0x0a5:  mov    -0xc(%ebp),%eax
080d98b0 +0x0a8:  mov    %eax,0x4(%esp)
080d98b4 +0x0ac:  mov    0x8(%ebp),%eax
080d98b7 +0x0af:  mov    %eax,(%esp)
080d98ba +0x0b2:  call   080d7778 <_ZNK10BlueMarble12getItemIndexEi>  ; BlueMarble::getItemIndex(int) const
080d98bf +0x0b7:  mov    %eax,-0x47(%ebp)
080d98c2 +0x0ba:  movl   $0x1,-0x42(%ebp)
080d98c9 +0x0c1:  mov    -0x47(%ebp),%eax
080d98cc +0x0c4:  test   %eax,%eax
080d98ce +0x0c6:  je     080d990b <+0x103>
080d98d0 +0x0c8:  movl   $0x41,0xc(%esp)
080d98d8 +0x0d0:  lea    -0x49(%ebp),%eax
080d98db +0x0d3:  mov    %eax,0x8(%esp)
080d98df +0x0d7:  mov    -0xc(%ebp),%eax
080d98e2 +0x0da:  mov    %eax,0x4(%esp)
080d98e6 +0x0de:  mov    0x8(%ebp),%eax
080d98e9 +0x0e1:  mov    %eax,(%esp)
080d98ec +0x0e4:  call   080d800e <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason>  ; BlueMarble::insertItem(int, Inven_Item&, eItemAddReason)
080d98f1 +0x0e9:  mov    -0xc(%ebp),%eax
080d98f4 +0x0ec:  mov    %eax,0x4(%esp)
080d98f8 +0x0f0:  mov    0x8(%ebp),%eax
080d98fb +0x0f3:  mov    %eax,(%esp)
080d98fe +0x0f6:  call   080d6da2 <_ZN10BlueMarble14resetIndexInfoEi>  ; BlueMarble::resetIndexInfo(int)
080d9903 +0x0fb:  jmp    080d990c <+0x104>
080d9905 +0x0fd:  nop
080d9906 +0x0fe:  jmp    080d990c <+0x104>
080d9908 +0x100:  nop
080d9909 +0x101:  jmp    080d990c <+0x104>
080d990b +0x103:  nop
080d990c +0x104:  leave
080d990d +0x105:  ret
```

## 反编译 C

```c
// BlueMarble::giveBonusItem @ 0x80d9808

/* BlueMarble::giveBonusItem(CUser*) */

void __thiscall BlueMarble::giveBonusItem(BlueMarble *this,CUser *param_1)

{
  bool bVar1;
  int iVar2;
  Inven_Item local_4d [2];
  int local_4b;
  undefined4 local_46;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_10 = getUserSlot(this,param_1);
    if (local_10 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::giveBonusItem(CUser*)",0x4ac,
                 "BlueMarble::giveBonusItem slot(%d)",0xffffffff);
    }
    else {
      iVar2 = getState(this);
      if ((iVar2 == 2) && (iVar2 = getUserState(this,local_10), iVar2 == 1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        Inven_Item::Inven_Item(local_4d);
        local_4b = getItemIndex(this,local_10);
        local_46 = 1;
        if (local_4b != 0) {
          insertItem(this,local_10,local_4d,0x41);
          resetIndexInfo(this,local_10);
        }
      }
    }
  }
  return;
}
```
