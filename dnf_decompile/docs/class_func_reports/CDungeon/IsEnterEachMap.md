# IsEnterEachMap

`_ZNK8CDungeon14IsEnterEachMapEv`

`CDungeon::IsEnterEachMap() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x08365278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365278  _ZNK8CDungeon14IsEnterEachMapEv
#           CDungeon::IsEnterEachMap() const
# range [0x08365278, 0x08365287]
08365278 +0x00:  push   %ebp
08365279 +0x01:  mov    %esp,%ebp
0836527b +0x03:  mov    0x8(%ebp),%eax
0836527e +0x06:  movzbl 0x6d0(%eax),%eax
08365285 +0x0d:  pop    %ebp
08365286 +0x0e:  ret
08365287 +0x0f:  nop
```

## 反编译 C

```c
// CDungeon::IsEnterEachMap @ 0x8365278

/* CDungeon::IsEnterEachMap() const */

CDungeon __thiscall CDungeon::IsEnterEachMap(CDungeon *this)

{
  return this[0x6d0];
}
```
