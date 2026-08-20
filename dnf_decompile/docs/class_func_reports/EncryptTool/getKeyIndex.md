# getKeyIndex

`_ZN11EncryptTool11getKeyIndexEv`

`EncryptTool::getKeyIndex()`

| 类 | 地址 |
|---|---|
| `EncryptTool` | `0x0848d9a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848d9a2  _ZN11EncryptTool11getKeyIndexEv
#           EncryptTool::getKeyIndex()
# range [0x0848d9a2, 0x0848d9af]
0848d9a2 +0x00:  push   %ebp
0848d9a3 +0x01:  mov    %esp,%ebp
0848d9a5 +0x03:  mov    0x8(%ebp),%eax
0848d9a8 +0x06:  mov    0x200(%eax),%eax
0848d9ae +0x0c:  pop    %ebp
0848d9af +0x0d:  ret
```

## 反编译 C

```c
// EncryptTool::getKeyIndex @ 0x848d9a2

/* EncryptTool::getKeyIndex() */

undefined4 __thiscall EncryptTool::getKeyIndex(EncryptTool *this)

{
  return *(undefined4 *)(this + 0x200);
}
```
