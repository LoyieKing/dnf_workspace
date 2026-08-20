# CGMRecord

`_ZN9CGMRecordC1Ev`

`CGMRecord::CGMRecord()`

| 类 | 地址 |
|---|---|
| `CGMRecord` | `0x082990b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082990b4  _ZN9CGMRecordC1Ev
#           CGMRecord::CGMRecord()
# range [0x082990b4, 0x082990c9]
082990b4 +0x00:  push   %ebp
082990b5 +0x01:  mov    %esp,%ebp
082990b7 +0x03:  mov    0x8(%ebp),%eax
082990ba +0x06:  movb   $0x0,(%eax)
082990bd +0x09:  mov    0x8(%ebp),%eax
082990c0 +0x0c:  movl   $0x0,0x4(%eax)
082990c7 +0x13:  pop    %ebp
082990c8 +0x14:  ret
082990c9 +0x15:  nop
```

## 反编译 C

```c
// CGMRecord::CGMRecord @ 0x82990b4

/* CGMRecord::CGMRecord() */

void __thiscall CGMRecord::CGMRecord(CGMRecord *this)

{
  *this = (CGMRecord)0x0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
