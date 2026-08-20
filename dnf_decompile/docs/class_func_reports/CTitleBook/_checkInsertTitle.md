# _checkInsertTitle

`_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item`

`CTitleBook::_checkInsertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641bdc  _ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item
#           CTitleBook::_checkInsertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)
# range [0x08641bdc, 0x08641c51]
08641bdc +0x00:  push   %ebp
08641bdd +0x01:  mov    %esp,%ebp
08641bdf +0x03:  push   %ebx
08641be0 +0x04:  sub    $0x24,%esp
08641be3 +0x07:  cmpl   $0x0,0x14(%ebp)
08641be7 +0x0b:  jne    08641bf0 <+0x14>
08641be9 +0x0d:  mov    $0x0,%eax
08641bee +0x12:  jmp    08641c4b <+0x6f>
08641bf0 +0x14:  mov    0x14(%ebp),%eax
08641bf3 +0x17:  mov    0x2(%eax),%eax
08641bf6 +0x1a:  mov    %eax,%ebx
08641bf8 +0x1c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08641bfd +0x21:  mov    %ebx,0x4(%esp)
08641c01 +0x25:  mov    %eax,(%esp)
08641c04 +0x28:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08641c09 +0x2d:  mov    %eax,-0xc(%ebp)
08641c0c +0x30:  cmpl   $0x0,-0xc(%ebp)
08641c10 +0x34:  jne    08641c19 <+0x3d>
08641c12 +0x36:  mov    $0x0,%eax
08641c17 +0x3b:  jmp    08641c4b <+0x6f>
08641c19 +0x3d:  mov    -0xc(%ebp),%eax
08641c1c +0x40:  mov    %eax,(%esp)
08641c1f +0x43:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08641c24 +0x48:  test   %al,%al
08641c26 +0x4a:  je     08641c2f <+0x53>
08641c28 +0x4c:  mov    $0x0,%eax
08641c2d +0x51:  jmp    08641c4b <+0x6f>
08641c2f +0x53:  cmpl   $0x3,0xc(%ebp)
08641c33 +0x57:  jne    08641c46 <+0x6a>
08641c35 +0x59:  mov    0x14(%ebp),%eax
08641c38 +0x5c:  movzbl (%eax),%eax
08641c3b +0x5f:  test   %al,%al
08641c3d +0x61:  je     08641c46 <+0x6a>
08641c3f +0x63:  mov    $0x0,%eax
08641c44 +0x68:  jmp    08641c4b <+0x6f>
08641c46 +0x6a:  mov    $0x1,%eax
08641c4b +0x6f:  add    $0x24,%esp
08641c4e +0x72:  pop    %ebx
08641c4f +0x73:  pop    %ebp
08641c50 +0x74:  ret
08641c51 +0x75:  nop
```

## 反编译 C

```c
// CTitleBook::_checkInsertTitle @ 0x8641bdc

/* CTitleBook::_checkInsertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*) */

undefined4 __thiscall
CTitleBook::_checkInsertTitle(undefined4 this,int param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CItem *this_01;
  
  if (param_4 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_4 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
    if (this_01 == (CItem *)0x0) {
      uVar3 = 0;
    }
    else {
      cVar2 = CItem::is_stackable(this_01);
      if (cVar2 == '\0') {
        if ((param_2 == 3) && (*param_4 != '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
