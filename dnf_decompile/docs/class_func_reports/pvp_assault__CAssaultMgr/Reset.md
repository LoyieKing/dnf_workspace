# Reset

`_ZN11pvp_assault11CAssaultMgr5ResetEv`

`pvp_assault::CAssaultMgr::Reset()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ed966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed966  _ZN11pvp_assault11CAssaultMgr5ResetEv
#           pvp_assault::CAssaultMgr::Reset()
# range [0x082ed966, 0x082ed975]
082ed966 +0x00:  push   %ebp
082ed967 +0x01:  mov    %esp,%ebp
082ed969 +0x03:  mov    0x8(%ebp),%eax
082ed96c +0x06:  movl   $0x0,0x4(%eax)
082ed973 +0x0d:  pop    %ebp
082ed974 +0x0e:  ret
082ed975 +0x0f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::Reset @ 0x82ed966

/* pvp_assault::CAssaultMgr::Reset() */

void __thiscall pvp_assault::CAssaultMgr::Reset(CAssaultMgr *this)

{
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
