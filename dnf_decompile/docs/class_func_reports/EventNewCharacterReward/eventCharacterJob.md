# eventCharacterJob

`_ZN23EventNewCharacterReward17eventCharacterJobEv`

`EventNewCharacterReward::eventCharacterJob()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bd22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bd22  _ZN23EventNewCharacterReward17eventCharacterJobEv
#           EventNewCharacterReward::eventCharacterJob()
# range [0x0816bd22, 0x0816bd2c]
0816bd22 +0x00:  push   %ebp
0816bd23 +0x01:  mov    %esp,%ebp
0816bd25 +0x03:  mov    0x8(%ebp),%eax
0816bd28 +0x06:  mov    0xc(%eax),%eax
0816bd2b +0x09:  pop    %ebp
0816bd2c +0x0a:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::eventCharacterJob @ 0x816bd22

/* EventNewCharacterReward::eventCharacterJob() */

undefined4 __thiscall EventNewCharacterReward::eventCharacterJob(EventNewCharacterReward *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
