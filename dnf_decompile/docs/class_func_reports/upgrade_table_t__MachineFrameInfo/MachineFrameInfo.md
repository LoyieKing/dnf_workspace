# MachineFrameInfo

`_ZN15upgrade_table_t16MachineFrameInfoC1Ev`

`upgrade_table_t::MachineFrameInfo::MachineFrameInfo()`

| 类 | 地址 |
|---|---|
| `upgrade_table_t::MachineFrameInfo` | `0x089003b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089003b4  _ZN15upgrade_table_t16MachineFrameInfoC1Ev
#           upgrade_table_t::MachineFrameInfo::MachineFrameInfo()
# range [0x089003b4, 0x089003ed]
089003b4 +0x00:  push   %ebp
089003b5 +0x01:  mov    %esp,%ebp
089003b7 +0x03:  mov    0x8(%ebp),%eax
089003ba +0x06:  mov    $0x3f800000,%edx
089003bf +0x0b:  mov    %edx,(%eax)
089003c1 +0x0d:  mov    0x8(%ebp),%eax
089003c4 +0x10:  mov    $0x3f800000,%edx
089003c9 +0x15:  mov    %edx,0x4(%eax)
089003cc +0x18:  mov    0x8(%ebp),%eax
089003cf +0x1b:  mov    $0x3f800000,%edx
089003d4 +0x20:  mov    %edx,0x8(%eax)
089003d7 +0x23:  mov    0x8(%ebp),%eax
089003da +0x26:  mov    $0x3f800000,%edx
089003df +0x2b:  mov    %edx,0xc(%eax)
089003e2 +0x2e:  mov    0x8(%ebp),%eax
089003e5 +0x31:  movl   $0x2,0x10(%eax)
089003ec +0x38:  pop    %ebp
089003ed +0x39:  ret
```

## 反编译 C

```c
// upgrade_table_t::MachineFrameInfo::MachineFrameInfo @ 0x89003b4

/* upgrade_table_t::MachineFrameInfo::MachineFrameInfo() */

void __thiscall upgrade_table_t::MachineFrameInfo::MachineFrameInfo(MachineFrameInfo *this)

{
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 2;
  return;
}
```
