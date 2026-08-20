# loadData

`_ZN17CPvPLiveEventData8loadDataEP5CUserPc`

`CPvPLiveEventData::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x082690be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082690be  _ZN17CPvPLiveEventData8loadDataEP5CUserPc
#           CPvPLiveEventData::loadData(CUser*, char*)
# range [0x082690be, 0x082690d3]
082690be +0x00:  push   %ebp
082690bf +0x01:  mov    %esp,%ebp
082690c1 +0x03:  mov    0x10(%ebp),%eax
082690c4 +0x06:  mov    (%eax),%edx
082690c6 +0x08:  mov    0x8(%ebp),%eax
082690c9 +0x0b:  mov    %edx,0x8(%eax)
082690cc +0x0e:  mov    $0x1,%eax
082690d1 +0x13:  pop    %ebp
082690d2 +0x14:  ret
082690d3 +0x15:  nop
```

## 反编译 C

```c
// CPvPLiveEventData::loadData @ 0x82690be

/* CPvPLiveEventData::loadData(CUser*, char*) */

undefined4 __thiscall
CPvPLiveEventData::loadData(CPvPLiveEventData *this,CUser *param_1,char *param_2)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
  return 1;
}
```
