# putTitleOnly

`_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi`

`CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641e88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641e88  _ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi
#           CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&)
# range [0x08641e88, 0x08641fab]
08641e88 +0x000:  push   %ebp
08641e89 +0x001:  mov    %esp,%ebp
08641e8b +0x003:  sub    $0x68,%esp
08641e8e +0x006:  movl   $0xe,0x4(%esp)
08641e96 +0x00e:  mov    0x8(%ebp),%eax
08641e99 +0x011:  mov    %eax,(%esp)
08641e9c +0x014:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08641ea1 +0x019:  mov    %eax,-0x10(%ebp)
08641ea4 +0x01c:  cmpl   $0x0,-0x10(%ebp)
08641ea8 +0x020:  jne    08641eb4 <+0x2c>
08641eaa +0x022:  mov    $0x0,%eax
08641eaf +0x027:  jmp    08641faa <+0x122>
08641eb4 +0x02c:  cmpl   $0x0,0xc(%ebp)
08641eb8 +0x030:  jne    08641ec4 <+0x3c>
08641eba +0x032:  mov    $0x0,%eax
08641ebf +0x037:  jmp    08641faa <+0x122>
08641ec4 +0x03c:  lea    -0x4d(%ebp),%eax
08641ec7 +0x03f:  mov    %eax,(%esp)
08641eca +0x042:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08641ecf +0x047:  mov    0xc(%ebp),%eax
08641ed2 +0x04a:  mov    %eax,-0x4b(%ebp)
08641ed5 +0x04d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08641eda +0x052:  mov    0xc(%ebp),%edx
08641edd +0x055:  mov    %edx,0x4(%esp)
08641ee1 +0x059:  mov    %eax,(%esp)
08641ee4 +0x05c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08641ee9 +0x061:  mov    %eax,-0xc(%ebp)
08641eec +0x064:  cmpl   $0x0,-0xc(%ebp)
08641ef0 +0x068:  jne    08641efc <+0x74>
08641ef2 +0x06a:  mov    $0x0,%eax
08641ef7 +0x06f:  jmp    08641faa <+0x122>
08641efc +0x074:  mov    -0xc(%ebp),%eax
08641eff +0x077:  mov    (%eax),%eax
08641f01 +0x079:  add    $0x8,%eax
08641f04 +0x07c:  mov    (%eax),%edx
08641f06 +0x07e:  lea    -0x4d(%ebp),%eax
08641f09 +0x081:  mov    %eax,0x4(%esp)
08641f0d +0x085:  mov    -0xc(%ebp),%eax
08641f10 +0x088:  mov    %eax,(%esp)
08641f13 +0x08b:  call   *%edx
08641f15 +0x08d:  movl   $0x1,0x4(%esp)
08641f1d +0x095:  lea    -0x4d(%ebp),%eax
08641f20 +0x098:  mov    %eax,(%esp)
08641f23 +0x09b:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08641f28 +0x0a0:  mov    -0x4b(%ebp),%eax
08641f2b +0x0a3:  mov    0x14(%ebp),%edx
08641f2e +0x0a6:  mov    %edx,0x8(%esp)
08641f32 +0x0aa:  mov    0x10(%ebp),%edx
08641f35 +0x0ad:  mov    %edx,0x4(%esp)
08641f39 +0x0b1:  mov    %eax,(%esp)
08641f3c +0x0b4:  call   08642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&)
08641f41 +0x0b9:  xor    $0x1,%eax
08641f44 +0x0bc:  test   %al,%al
08641f46 +0x0be:  je     08641f4f <+0xc7>
08641f48 +0x0c0:  mov    $0x0,%eax
08641f4d +0x0c5:  jmp    08641faa <+0x122>
08641f4f +0x0c7:  mov    0x14(%ebp),%eax
08641f52 +0x0ca:  mov    (%eax),%edx
08641f54 +0x0cc:  mov    0x10(%ebp),%eax
08641f57 +0x0cf:  mov    (%eax),%eax
08641f59 +0x0d1:  lea    -0x4d(%ebp),%ecx
08641f5c +0x0d4:  mov    %ecx,0xc(%esp)
08641f60 +0x0d8:  mov    %edx,0x8(%esp)
08641f64 +0x0dc:  mov    %eax,0x4(%esp)
08641f68 +0x0e0:  mov    -0x10(%ebp),%eax
08641f6b +0x0e3:  mov    %eax,(%esp)
08641f6e +0x0e6:  call   08641bdc <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>  ; CTitleBook::_checkInsertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)
08641f73 +0x0eb:  xor    $0x1,%eax
08641f76 +0x0ee:  test   %al,%al
08641f78 +0x0f0:  je     08641f81 <+0xf9>
08641f7a +0x0f2:  mov    $0x0,%eax
08641f7f +0x0f7:  jmp    08641faa <+0x122>
08641f81 +0x0f9:  mov    0x14(%ebp),%eax
08641f84 +0x0fc:  mov    (%eax),%edx
08641f86 +0x0fe:  mov    0x10(%ebp),%eax
08641f89 +0x101:  mov    (%eax),%eax
08641f8b +0x103:  lea    -0x4d(%ebp),%ecx
08641f8e +0x106:  mov    %ecx,0xc(%esp)
08641f92 +0x10a:  mov    %edx,0x8(%esp)
08641f96 +0x10e:  mov    %eax,0x4(%esp)
08641f9a +0x112:  mov    -0x10(%ebp),%eax
08641f9d +0x115:  mov    %eax,(%esp)
08641fa0 +0x118:  call   08641d16 <_ZN10CTitleBook12_insertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>  ; CTitleBook::_insertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)
08641fa5 +0x11d:  mov    $0x1,%eax
08641faa +0x122:  leave
08641fab +0x123:  ret
```

## 反编译 C

```c
// CTitleBook::putTitleOnly @ 0x8641e88

/* CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&) */

undefined4
CTitleBook::putTitleOnly(CUser *param_1,int param_2,ENUM_TITLE_BOOK_CATEGORY *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  CDataManager *this;
  Inven_Item local_51 [2];
  int local_4f;
  CTitleBook *local_14;
  int *local_10;
  
  local_14 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  if (local_14 == (CTitleBook *)0x0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_51);
    local_4f = param_2;
    this = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this,param_2);
    if (local_10 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*local_10 + 8))(local_10,local_51);
      Inven_Item::set_add_info(local_51,1);
      cVar1 = _getFitSlot(local_4f,param_3,param_4);
      if (cVar1 == '\x01') {
        cVar1 = _checkInsertTitle(local_14,*(undefined4 *)param_3,*param_4,local_51);
        if (cVar1 == '\x01') {
          _insertTitle(local_14,*(undefined4 *)param_3,*param_4,local_51);
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
