# get_extraction_count

`_ZN17expert_extraction20CAlchemistExtraction20get_extraction_countE10Inven_Item`

`expert_extraction::CAlchemistExtraction::get_extraction_count(Inven_Item)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CAlchemistExtraction` | `0x084a3596` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3596  _ZN17expert_extraction20CAlchemistExtraction20get_extraction_countE10Inven_Item
#           expert_extraction::CAlchemistExtraction::get_extraction_count(Inven_Item)
# range [0x084a3596, 0x084a35f1]
084a3596 +0x00:  push   %ebp
084a3597 +0x01:  mov    %esp,%ebp
084a3599 +0x03:  push   %ebx
084a359a +0x04:  sub    $0x24,%esp
084a359d +0x07:  mov    0xe(%ebp),%eax
084a35a0 +0x0a:  mov    %eax,%ebx
084a35a2 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a35a7 +0x11:  mov    %ebx,0x4(%esp)
084a35ab +0x15:  mov    %eax,(%esp)
084a35ae +0x18:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a35b3 +0x1d:  mov    %eax,-0x10(%ebp)
084a35b6 +0x20:  mov    -0x10(%ebp),%eax
084a35b9 +0x23:  mov    %eax,(%esp)
084a35bc +0x26:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a35c1 +0x2b:  mov    %eax,%ecx
084a35c3 +0x2d:  mov    $0x66666667,%edx
084a35c8 +0x32:  mov    %ecx,%eax
084a35ca +0x34:  imul   %edx
084a35cc +0x36:  sar    %edx
084a35ce +0x38:  mov    %ecx,%eax
084a35d0 +0x3a:  sar    $0x1f,%eax
084a35d3 +0x3d:  mov    %edx,%ecx
084a35d5 +0x3f:  sub    %eax,%ecx
084a35d7 +0x41:  mov    %ecx,%eax
084a35d9 +0x43:  mov    %eax,-0xc(%ebp)
084a35dc +0x46:  cmpl   $0x0,-0xc(%ebp)
084a35e0 +0x4a:  jne    084a35e9 <+0x53>
084a35e2 +0x4c:  movl   $0x1,-0xc(%ebp)
084a35e9 +0x53:  mov    -0xc(%ebp),%eax
084a35ec +0x56:  add    $0x24,%esp
084a35ef +0x59:  pop    %ebx
084a35f0 +0x5a:  pop    %ebp
084a35f1 +0x5b:  ret
```

## 反编译 C

```c
// expert_extraction::CAlchemistExtraction::get_extraction_count @ 0x84a3596

/* expert_extraction::CAlchemistExtraction::get_extraction_count(Inven_Item) */

int __thiscall
expert_extraction::CAlchemistExtraction::get_extraction_count(undefined4 this,undefined8 param_2)

{
  CDataManager *this_00;
  CItem *this_01;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2._2_4_);
  local_10 = CItem::get_grade(this_01);
  local_10 = local_10 / 5;
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}
```
