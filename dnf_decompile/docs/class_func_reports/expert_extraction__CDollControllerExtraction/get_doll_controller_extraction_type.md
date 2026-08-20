# get_doll_controller_extraction_type

`_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem`

`expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type(CEquipItem const*)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CDollControllerExtraction` | `0x084a3d66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a3d66  _ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem
#           expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type(CEquipItem const*)
# range [0x084a3d66, 0x084a3dcd]
084a3d66 +0x00:  push   %ebp
084a3d67 +0x01:  mov    %esp,%ebp
084a3d69 +0x03:  sub    $0x28,%esp
084a3d6c +0x06:  mov    0xc(%ebp),%eax
084a3d6f +0x09:  mov    %eax,(%esp)
084a3d72 +0x0c:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
084a3d77 +0x11:  mov    %eax,-0xc(%ebp)
084a3d7a +0x14:  cmpl   $0x0,-0xc(%ebp)
084a3d7e +0x18:  jne    084a3d8e <+0x28>
084a3d80 +0x1a:  mov    0xc(%ebp),%eax
084a3d83 +0x1d:  mov    %eax,(%esp)
084a3d86 +0x20:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
084a3d8b +0x25:  mov    %eax,-0xc(%ebp)
084a3d8e +0x28:  cmpl   $0x0,-0xc(%ebp)
084a3d92 +0x2c:  jle    084a3da1 <+0x3b>
084a3d94 +0x2e:  cmpl   $0x1e,-0xc(%ebp)
084a3d98 +0x32:  jg     084a3da1 <+0x3b>
084a3d9a +0x34:  mov    $0x0,%eax
084a3d9f +0x39:  jmp    084a3dcc <+0x66>
084a3da1 +0x3b:  cmpl   $0x1e,-0xc(%ebp)
084a3da5 +0x3f:  jle    084a3db4 <+0x4e>
084a3da7 +0x41:  cmpl   $0x32,-0xc(%ebp)
084a3dab +0x45:  jg     084a3db4 <+0x4e>
084a3dad +0x47:  mov    $0x1,%eax
084a3db2 +0x4c:  jmp    084a3dcc <+0x66>
084a3db4 +0x4e:  cmpl   $0x32,-0xc(%ebp)
084a3db8 +0x52:  jle    084a3dc7 <+0x61>
084a3dba +0x54:  cmpl   $0x50,-0xc(%ebp)
084a3dbe +0x58:  jg     084a3dc7 <+0x61>
084a3dc0 +0x5a:  mov    $0x2,%eax
084a3dc5 +0x5f:  jmp    084a3dcc <+0x66>
084a3dc7 +0x61:  mov    $0x3,%eax
084a3dcc +0x66:  leave
084a3dcd +0x67:  ret
```

## 反编译 C

```c
// expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type @ 0x84a3d66

/* expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type(CEquipItem
   const*) */

undefined4 __thiscall
expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type
          (CDollControllerExtraction *this,CEquipItem *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = CItem::getUsableLevel((CItem *)param_1);
  if (local_10 == 0) {
    local_10 = CItem::get_grade((CItem *)param_1);
  }
  if ((local_10 < 1) || (0x1e < local_10)) {
    if ((local_10 < 0x1f) || (0x32 < local_10)) {
      if ((local_10 < 0x33) || (0x50 < local_10)) {
        uVar1 = 3;
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
