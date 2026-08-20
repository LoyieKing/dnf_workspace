# execute

`_ZN11game_master11CChoiceItem7executeEv`

`game_master::CChoiceItem::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CChoiceItem` | `0x084b0a6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0a6e  _ZN11game_master11CChoiceItem7executeEv
#           game_master::CChoiceItem::execute()
# range [0x084b0a6e, 0x084b0b07]
084b0a6e +0x00:  push   %ebp
084b0a6f +0x01:  mov    %esp,%ebp
084b0a71 +0x03:  push   %ebx
084b0a72 +0x04:  sub    $0x24,%esp
084b0a75 +0x07:  mov    0x8(%ebp),%eax
084b0a78 +0x0a:  mov    0x8(%eax),%eax
084b0a7b +0x0d:  test   %eax,%eax
084b0a7d +0x0f:  jne    084b0a9e <+0x30>
084b0a7f +0x11:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b0a84 +0x16:  movl   $0xffffffff,0x8(%esp)
084b0a8c +0x1e:  movl   $0x0,0x4(%esp)
084b0a94 +0x26:  mov    %eax,(%esp)
084b0a97 +0x29:  call   083653b0 <_ZN12CDataManager13setChoiceItemEbj>  ; CDataManager::setChoiceItem(bool, unsigned int)
084b0a9c +0x2e:  jmp    084b0b01 <+0x93>
084b0a9e +0x30:  mov    0x8(%ebp),%eax
084b0aa1 +0x33:  mov    0x8(%eax),%eax
084b0aa4 +0x36:  mov    %eax,%ebx
084b0aa6 +0x38:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b0aab +0x3d:  mov    %ebx,0x4(%esp)
084b0aaf +0x41:  mov    %eax,(%esp)
084b0ab2 +0x44:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084b0ab7 +0x49:  mov    %eax,-0xc(%ebp)
084b0aba +0x4c:  cmpl   $0x0,-0xc(%ebp)
084b0abe +0x50:  je     084b0acf <+0x61>
084b0ac0 +0x52:  mov    -0xc(%ebp),%eax
084b0ac3 +0x55:  mov    %eax,(%esp)
084b0ac6 +0x58:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084b0acb +0x5d:  test   %al,%al
084b0acd +0x5f:  je     084b0ad6 <+0x68>
084b0acf +0x61:  mov    $0x1,%eax
084b0ad4 +0x66:  jmp    084b0adb <+0x6d>
084b0ad6 +0x68:  mov    $0x0,%eax
084b0adb +0x6d:  test   %al,%al
084b0add +0x6f:  jne    084b0b00 <+0x92>
084b0adf +0x71:  mov    0x8(%ebp),%eax
084b0ae2 +0x74:  mov    0x8(%eax),%ebx
084b0ae5 +0x77:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b0aea +0x7c:  mov    %ebx,0x8(%esp)
084b0aee +0x80:  movl   $0x1,0x4(%esp)
084b0af6 +0x88:  mov    %eax,(%esp)
084b0af9 +0x8b:  call   083653b0 <_ZN12CDataManager13setChoiceItemEbj>  ; CDataManager::setChoiceItem(bool, unsigned int)
084b0afe +0x90:  jmp    084b0b01 <+0x93>
084b0b00 +0x92:  nop
084b0b01 +0x93:  add    $0x24,%esp
084b0b04 +0x96:  pop    %ebx
084b0b05 +0x97:  pop    %ebp
084b0b06 +0x98:  ret
084b0b07 +0x99:  nop
```

## 反编译 C

```c
// game_master::CChoiceItem::execute @ 0x84b0a6e

/* game_master::CChoiceItem::execute() */

void __thiscall game_master::CChoiceItem::execute(CChoiceItem *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  CDataManager *pCVar5;
  CItem *this_00;
  
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(this + 8);
    pCVar5 = (CDataManager *)G_CDataManager();
    this_00 = (CItem *)CDataManager::find_item(pCVar5,iVar1);
    if ((this_00 == (CItem *)0x0) || (cVar4 = CItem::is_stackable(this_00), cVar4 != '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      uVar2 = *(uint *)(this + 8);
      pCVar5 = (CDataManager *)G_CDataManager();
      CDataManager::setChoiceItem(pCVar5,true,uVar2);
    }
    return;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  CDataManager::setChoiceItem(pCVar5,false,0xffffffff);
  return;
}
```
