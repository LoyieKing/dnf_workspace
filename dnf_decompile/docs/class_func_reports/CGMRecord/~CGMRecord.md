# ~CGMRecord

`_ZN9CGMRecordD1Ev`

`CGMRecord::~CGMRecord()`

| 类 | 地址 |
|---|---|
| `CGMRecord` | `0x082990ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082990ca  _ZN9CGMRecordD1Ev
#           CGMRecord::~CGMRecord()
# range [0x082990ca, 0x082990cf]
082990ca +0x00:  push   %ebp
082990cb +0x01:  mov    %esp,%ebp
082990cd +0x03:  pop    %ebp
082990ce +0x04:  ret
082990cf +0x05:  nop
```

## 反编译 C

```c
// CGMRecord::~CGMRecord @ 0x82990ca

/* CGMRecord::~CGMRecord() */

void __thiscall CGMRecord::~CGMRecord(CGMRecord *this)

{
  return;
}
```
