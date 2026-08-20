# GetArtifact

`_ZN13user_creature12CCreatureMgr11GetArtifactEi`

`user_creature::CCreatureMgr::GetArtifact(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833be56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833be56  _ZN13user_creature12CCreatureMgr11GetArtifactEi
#           user_creature::CCreatureMgr::GetArtifact(int)
# range [0x0833be56, 0x0833be7b]
0833be56 +0x00:  push   %ebp
0833be57 +0x01:  mov    %esp,%ebp
0833be59 +0x03:  mov    0xc(%ebp),%eax
0833be5c +0x06:  sub    $0x17,%eax
0833be5f +0x09:  cmp    $0x3,%eax
0833be62 +0x0c:  jle    0833be6b <+0x15>
0833be64 +0x0e:  mov    $0x0,%eax
0833be69 +0x13:  jmp    0833be7a <+0x24>
0833be6b +0x15:  mov    0xc(%ebp),%eax
0833be6e +0x18:  sub    $0x17,%eax
0833be71 +0x1b:  add    $0x8,%eax
0833be74 +0x1e:  shl    $0x2,%eax
0833be77 +0x21:  add    0x8(%ebp),%eax
0833be7a +0x24:  pop    %ebp
0833be7b +0x25:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetArtifact @ 0x833be56

/* user_creature::CCreatureMgr::GetArtifact(int) */

CCreatureMgr * __thiscall user_creature::CCreatureMgr::GetArtifact(CCreatureMgr *this,int param_1)

{
  CCreatureMgr *pCVar1;
  
  if (param_1 + -0x17 < 4) {
    pCVar1 = this + (param_1 + -0xf) * 4;
  }
  else {
    pCVar1 = (CCreatureMgr *)0x0;
  }
  return pCVar1;
}
```
