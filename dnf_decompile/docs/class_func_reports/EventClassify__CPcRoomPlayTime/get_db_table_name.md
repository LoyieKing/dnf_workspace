# get_db_table_name

`_ZN13EventClassify15CPcRoomPlayTime17get_db_table_nameEv`

`EventClassify::CPcRoomPlayTime::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CPcRoomPlayTime` | `0x08110864` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08110864  _ZN13EventClassify15CPcRoomPlayTime17get_db_table_nameEv
#           EventClassify::CPcRoomPlayTime::get_db_table_name()
# range [0x08110864, 0x08110871]
08110864 +0x00:  push   %ebp
08110865 +0x01:  mov    %esp,%ebp
08110867 +0x03:  mov    0x8(%ebp),%eax
0811086a +0x06:  mov    0x1c(%eax),%eax
0811086d +0x09:  add    $0x8,%eax
08110870 +0x0c:  pop    %ebp
08110871 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CPcRoomPlayTime::get_db_table_name @ 0x8110864

/* EventClassify::CPcRoomPlayTime::get_db_table_name() */

int __thiscall EventClassify::CPcRoomPlayTime::get_db_table_name(CPcRoomPlayTime *this)

{
  return *(int *)(this + 0x1c) + 8;
}
```
