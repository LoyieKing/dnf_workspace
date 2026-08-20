# get_extraction_count

`_ZN17expert_extraction20CEnchanterExtraction20get_extraction_countE10Inven_Item`

`expert_extraction::CEnchanterExtraction::get_extraction_count(Inven_Item)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CEnchanterExtraction` | `0x084a3b34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3b34  _ZN17expert_extraction20CEnchanterExtraction20get_extraction_countE10Inven_Item
#           expert_extraction::CEnchanterExtraction::get_extraction_count(Inven_Item)
# range [0x084a3b34, 0x084a3b91]
084a3b34 +0x00:  push   %ebp
084a3b35 +0x01:  mov    %esp,%ebp
084a3b37 +0x03:  push   %ebx
084a3b38 +0x04:  sub    $0x24,%esp
084a3b3b +0x07:  mov    0xe(%ebp),%eax
084a3b3e +0x0a:  mov    %eax,%ebx
084a3b40 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a3b45 +0x11:  mov    %ebx,0x4(%esp)
084a3b49 +0x15:  mov    %eax,(%esp)
084a3b4c +0x18:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a3b51 +0x1d:  mov    %eax,-0x10(%ebp)
084a3b54 +0x20:  mov    -0x10(%ebp),%eax
084a3b57 +0x23:  mov    %eax,(%esp)
084a3b5a +0x26:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a3b5f +0x2b:  mov    %eax,%ecx
084a3b61 +0x2d:  mov    $0x66666667,%edx
084a3b66 +0x32:  mov    %ecx,%eax
084a3b68 +0x34:  imul   %edx
084a3b6a +0x36:  sar    $0x2,%edx
084a3b6d +0x39:  mov    %ecx,%eax
084a3b6f +0x3b:  sar    $0x1f,%eax
084a3b72 +0x3e:  mov    %edx,%ecx
084a3b74 +0x40:  sub    %eax,%ecx
084a3b76 +0x42:  mov    %ecx,%eax
084a3b78 +0x44:  mov    %eax,-0xc(%ebp)
084a3b7b +0x47:  cmpl   $0x0,-0xc(%ebp)
084a3b7f +0x4b:  jne    084a3b88 <+0x54>
084a3b81 +0x4d:  movl   $0x1,-0xc(%ebp)
084a3b88 +0x54:  mov    -0xc(%ebp),%eax
084a3b8b +0x57:  add    $0x24,%esp
084a3b8e +0x5a:  pop    %ebx
084a3b8f +0x5b:  pop    %ebp
084a3b90 +0x5c:  ret
084a3b91 +0x5d:  nop
```

## 反编译 C

```c
// expert_extraction::CEnchanterExtraction::get_extraction_count @ 0x84a3b34

/* expert_extraction::CEnchanterExtraction::get_extraction_count(Inven_Item) */

int __thiscall
expert_extraction::CEnchanterExtraction::get_extraction_count(undefined4 this,undefined8 param_2)

{
  CDataManager *this_00;
  CItem *this_01;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2._2_4_);
  local_10 = CItem::get_grade(this_01);
  local_10 = local_10 / 10;
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}
```
