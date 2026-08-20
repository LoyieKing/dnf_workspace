# get_level_section_exp

`_ZNK12CDataManager21get_level_section_expEi`

`CDataManager::get_level_section_exp(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083604b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083604b6  _ZNK12CDataManager21get_level_section_expEi
#           CDataManager::get_level_section_exp(int) const
# range [0x083604b6, 0x083604fd]
083604b6 +0x00:  push   %ebp
083604b7 +0x01:  mov    %esp,%ebp
083604b9 +0x03:  cmpl   $0x1,0xc(%ebp)
083604bd +0x07:  jle    083604c8 <+0x12>
083604bf +0x09:  cmpl   $0xc8,0xc(%ebp)
083604c6 +0x10:  jle    083604cf <+0x19>
083604c8 +0x12:  mov    $0x0,%eax
083604cd +0x17:  jmp    083604fb <+0x45>
083604cf +0x19:  mov    0xc(%ebp),%eax
083604d2 +0x1c:  lea    -0x1(%eax),%edx
083604d5 +0x1f:  mov    0x8(%ebp),%eax
083604d8 +0x22:  add    $0x2aa0,%edx
083604de +0x28:  mov    0x4(%eax,%edx,4),%edx
083604e2 +0x2c:  mov    0xc(%ebp),%eax
083604e5 +0x2f:  lea    -0x2(%eax),%ecx
083604e8 +0x32:  mov    0x8(%ebp),%eax
083604eb +0x35:  add    $0x2aa0,%ecx
083604f1 +0x3b:  mov    0x4(%eax,%ecx,4),%eax
083604f5 +0x3f:  mov    %edx,%ecx
083604f7 +0x41:  sub    %eax,%ecx
083604f9 +0x43:  mov    %ecx,%eax
083604fb +0x45:  pop    %ebp
083604fc +0x46:  ret
083604fd +0x47:  nop
```

## 反编译 C

```c
// CDataManager::get_level_section_exp @ 0x83604b6

/* CDataManager::get_level_section_exp(int) const */

int __thiscall CDataManager::get_level_section_exp(CDataManager *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 2) || (200 < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + (param_1 + 0x2a9f) * 4 + 4) -
            *(int *)(this + (param_1 + 0x2a9e) * 4 + 4);
  }
  return iVar1;
}
```
