# get_extraction_count

`_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item`

`expert_extraction::CDollControllerExtraction::get_extraction_count(Inven_Item)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CDollControllerExtraction` | `0x084a41a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a41a8  _ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item
#           expert_extraction::CDollControllerExtraction::get_extraction_count(Inven_Item)
# range [0x084a41a8, 0x084a4285]
084a41a8 +0x00:  push   %ebp
084a41a9 +0x01:  mov    %esp,%ebp
084a41ab +0x03:  push   %ebx
084a41ac +0x04:  sub    $0x24,%esp
084a41af +0x07:  mov    0xe(%ebp),%eax
084a41b2 +0x0a:  mov    %eax,%ebx
084a41b4 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a41b9 +0x11:  mov    %ebx,0x4(%esp)
084a41bd +0x15:  mov    %eax,(%esp)
084a41c0 +0x18:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a41c5 +0x1d:  mov    %eax,-0x14(%ebp)
084a41c8 +0x20:  mov    -0x14(%ebp),%eax
084a41cb +0x23:  mov    %eax,0x4(%esp)
084a41cf +0x27:  mov    0x8(%ebp),%eax
084a41d2 +0x2a:  mov    %eax,(%esp)
084a41d5 +0x2d:  call   084a3d66 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem>  ; expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type(CEquipItem const*)
084a41da +0x32:  mov    %eax,-0x10(%ebp)
084a41dd +0x35:  movl   $0x0,-0xc(%ebp)
084a41e4 +0x3c:  mov    -0x10(%ebp),%eax
084a41e7 +0x3f:  cmp    $0x1,%eax
084a41ea +0x42:  je     084a421e <+0x76>
084a41ec +0x44:  cmp    $0x2,%eax
084a41ef +0x47:  je     084a4248 <+0xa0>
084a41f1 +0x49:  test   %eax,%eax
084a41f3 +0x4b:  jne    084a4270 <+0xc8>
084a41f5 +0x4d:  mov    -0x14(%ebp),%eax
084a41f8 +0x50:  mov    %eax,(%esp)
084a41fb +0x53:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a4200 +0x58:  mov    %eax,%ecx
084a4202 +0x5a:  mov    $0x66666667,%edx
084a4207 +0x5f:  mov    %ecx,%eax
084a4209 +0x61:  imul   %edx
084a420b +0x63:  sar    $0x2,%edx
084a420e +0x66:  mov    %ecx,%eax
084a4210 +0x68:  sar    $0x1f,%eax
084a4213 +0x6b:  mov    %edx,%ecx
084a4215 +0x6d:  sub    %eax,%ecx
084a4217 +0x6f:  mov    %ecx,%eax
084a4219 +0x71:  mov    %eax,-0xc(%ebp)
084a421c +0x74:  jmp    084a4270 <+0xc8>
084a421e +0x76:  mov    -0x14(%ebp),%eax
084a4221 +0x79:  mov    %eax,(%esp)
084a4224 +0x7c:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a4229 +0x81:  lea    -0x14(%eax),%ecx
084a422c +0x84:  mov    $0x66666667,%edx
084a4231 +0x89:  mov    %ecx,%eax
084a4233 +0x8b:  imul   %edx
084a4235 +0x8d:  sar    $0x2,%edx
084a4238 +0x90:  mov    %ecx,%eax
084a423a +0x92:  sar    $0x1f,%eax
084a423d +0x95:  mov    %edx,%ecx
084a423f +0x97:  sub    %eax,%ecx
084a4241 +0x99:  mov    %ecx,%eax
084a4243 +0x9b:  mov    %eax,-0xc(%ebp)
084a4246 +0x9e:  jmp    084a4270 <+0xc8>
084a4248 +0xa0:  mov    -0x14(%ebp),%eax
084a424b +0xa3:  mov    %eax,(%esp)
084a424e +0xa6:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a4253 +0xab:  lea    -0x28(%eax),%ecx
084a4256 +0xae:  mov    $0x66666667,%edx
084a425b +0xb3:  mov    %ecx,%eax
084a425d +0xb5:  imul   %edx
084a425f +0xb7:  sar    $0x2,%edx
084a4262 +0xba:  mov    %ecx,%eax
084a4264 +0xbc:  sar    $0x1f,%eax
084a4267 +0xbf:  mov    %edx,%ecx
084a4269 +0xc1:  sub    %eax,%ecx
084a426b +0xc3:  mov    %ecx,%eax
084a426d +0xc5:  mov    %eax,-0xc(%ebp)
084a4270 +0xc8:  cmpl   $0x0,-0xc(%ebp)
084a4274 +0xcc:  jne    084a427d <+0xd5>
084a4276 +0xce:  movl   $0x1,-0xc(%ebp)
084a427d +0xd5:  mov    -0xc(%ebp),%eax
084a4280 +0xd8:  add    $0x24,%esp
084a4283 +0xdb:  pop    %ebx
084a4284 +0xdc:  pop    %ebp
084a4285 +0xdd:  ret
```

## 反编译 C

```c
// expert_extraction::CDollControllerExtraction::get_extraction_count @ 0x84a41a8

/* expert_extraction::CDollControllerExtraction::get_extraction_count(Inven_Item) */

int __thiscall
expert_extraction::CDollControllerExtraction::get_extraction_count
          (CDollControllerExtraction *this,undefined8 param_2)

{
  CDataManager *this_00;
  CItem *this_01;
  int iVar1;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2._2_4_);
  iVar1 = get_doll_controller_extraction_type(this,(CEquipItem *)this_01);
  local_10 = 0;
  if (iVar1 == 1) {
    iVar1 = CItem::get_grade(this_01);
    local_10 = (iVar1 + -0x14) / 10;
  }
  else if (iVar1 == 2) {
    iVar1 = CItem::get_grade(this_01);
    local_10 = (iVar1 + -0x28) / 10;
  }
  else if (iVar1 == 0) {
    local_10 = CItem::get_grade(this_01);
    local_10 = local_10 / 10;
  }
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}
```
