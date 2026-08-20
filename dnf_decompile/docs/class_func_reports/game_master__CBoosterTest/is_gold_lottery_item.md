# is_gold_lottery_item

`_ZN11game_master12CBoosterTest20is_gold_lottery_itemEi`

`game_master::CBoosterTest::is_gold_lottery_item(int)`

| 类 | 地址 |
|---|---|
| `game_master::CBoosterTest` | `0x084afccc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084afccc  _ZN11game_master12CBoosterTest20is_gold_lottery_itemEi
#           game_master::CBoosterTest::is_gold_lottery_item(int)
# range [0x084afccc, 0x084afd1b]
084afccc +0x00:  push   %ebp
084afccd +0x01:  mov    %esp,%ebp
084afccf +0x03:  push   %ebx
084afcd0 +0x04:  sub    $0x54,%esp
084afcd3 +0x07:  lea    -0x45(%ebp),%eax
084afcd6 +0x0a:  mov    %eax,(%esp)
084afcd9 +0x0d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084afcde +0x12:  lea    -0x45(%ebp),%ebx
084afce1 +0x15:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084afce6 +0x1a:  mov    0xc(%eax),%eax
084afce9 +0x1d:  mov    %ebx,0x8(%esp)
084afced +0x21:  mov    0xc(%ebp),%edx
084afcf0 +0x24:  mov    %edx,0x4(%esp)
084afcf4 +0x28:  mov    %eax,(%esp)
084afcf7 +0x2b:  call   08512230 <_ZN9CItemList14get_lotto_itemEiPc>  ; CItemList::get_lotto_item(int, char*)
084afcfc +0x30:  mov    -0x43(%ebp),%eax
084afcff +0x33:  test   %eax,%eax
084afd01 +0x35:  jne    084afd11 <+0x45>
084afd03 +0x37:  mov    -0x3e(%ebp),%eax
084afd06 +0x3a:  test   %eax,%eax
084afd08 +0x3c:  jle    084afd11 <+0x45>
084afd0a +0x3e:  mov    $0x1,%eax
084afd0f +0x43:  jmp    084afd16 <+0x4a>
084afd11 +0x45:  mov    $0x0,%eax
084afd16 +0x4a:  add    $0x54,%esp
084afd19 +0x4d:  pop    %ebx
084afd1a +0x4e:  pop    %ebp
084afd1b +0x4f:  ret
```

## 反编译 C

```c
// game_master::CBoosterTest::is_gold_lottery_item @ 0x84afccc

/* game_master::CBoosterTest::is_gold_lottery_item(int) */

undefined4 __thiscall
game_master::CBoosterTest::is_gold_lottery_item(CBoosterTest *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  Inven_Item local_49 [2];
  int local_47;
  int local_42;
  
  Inven_Item::Inven_Item(local_49);
  iVar1 = G_CDataManager();
  CItemList::get_lotto_item(*(CItemList **)(iVar1 + 0xc),param_1,(char *)local_49);
  if ((local_47 == 0) && (0 < local_42)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
