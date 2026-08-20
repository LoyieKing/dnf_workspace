# verifyStackableItemActionPlace

`_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEj`

`CUser::verifyStackableItemActionPlace(StackableAction::Type, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f6bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f6bc  _ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEj
#           CUser::verifyStackableItemActionPlace(StackableAction::Type, unsigned int)
# range [0x0868f6bc, 0x0868f6f9]
0868f6bc +0x00:  push   %ebp
0868f6bd +0x01:  mov    %esp,%ebp
0868f6bf +0x03:  push   %ebx
0868f6c0 +0x04:  sub    $0x24,%esp
0868f6c3 +0x07:  mov    0x10(%ebp),%ebx
0868f6c6 +0x0a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868f6cb +0x0f:  mov    %ebx,0x4(%esp)
0868f6cf +0x13:  mov    %eax,(%esp)
0868f6d2 +0x16:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868f6d7 +0x1b:  mov    %eax,-0xc(%ebp)
0868f6da +0x1e:  mov    -0xc(%ebp),%eax
0868f6dd +0x21:  mov    %eax,0x8(%esp)
0868f6e1 +0x25:  mov    0xc(%ebp),%eax
0868f6e4 +0x28:  mov    %eax,0x4(%esp)
0868f6e8 +0x2c:  mov    0x8(%ebp),%eax
0868f6eb +0x2f:  mov    %eax,(%esp)
0868f6ee +0x32:  call   0868f60e <_ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem>  ; CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*)
0868f6f3 +0x37:  add    $0x24,%esp
0868f6f6 +0x3a:  pop    %ebx
0868f6f7 +0x3b:  pop    %ebp
0868f6f8 +0x3c:  ret
0868f6f9 +0x3d:  nop
```

## 反编译 C

```c
// CUser::verifyStackableItemActionPlace @ 0x868f6bc

/* CUser::verifyStackableItemActionPlace(StackableAction::Type, unsigned int) */

void __thiscall CUser::verifyStackableItemActionPlace(CUser *this,undefined4 param_2,int param_3)

{
  CDataManager *this_00;
  undefined4 uVar1;
  
  this_00 = (CDataManager *)G_CDataManager();
  uVar1 = CDataManager::find_item(this_00,param_3);
  verifyStackableItemProcess(this,param_2,uVar1);
  return;
}
```
