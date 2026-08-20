# set_level_exp

`_ZN12CDataManager13set_level_expEv`

`CDataManager::set_level_exp()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360400  _ZN12CDataManager13set_level_expEv
#           CDataManager::set_level_exp()
# range [0x08360400, 0x08360441]
08360400 +0x00:  push   %ebp
08360401 +0x01:  mov    %esp,%ebp
08360403 +0x03:  sub    $0x10,%esp
08360406 +0x06:  movl   $0x0,-0x4(%ebp)
0836040d +0x0d:  jmp    0836042d <+0x2d>
0836040f +0x0f:  mov    -0x4(%ebp),%ecx
08360412 +0x12:  mov    -0x4(%ebp),%eax
08360415 +0x15:  mov    &_ZN17STCharacterScript10naExpTableE(,%eax,4),%edx
0836041c +0x1c:  mov    0x8(%ebp),%eax
0836041f +0x1f:  add    $0x2aa0,%ecx
08360425 +0x25:  mov    %edx,0x4(%eax,%ecx,4)
08360429 +0x29:  addl   $0x1,-0x4(%ebp)
0836042d +0x2d:  cmpl   $0xc7,-0x4(%ebp)
08360434 +0x34:  setle  %al
08360437 +0x37:  test   %al,%al
08360439 +0x39:  jne    0836040f <+0xf>
0836043b +0x3b:  mov    $0x1,%eax
08360440 +0x40:  leave
08360441 +0x41:  ret
```

## 反编译 C

```c
// CDataManager::set_level_exp @ 0x8360400

/* CDataManager::set_level_exp() */

undefined4 __thiscall CDataManager::set_level_exp(CDataManager *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 200; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x2aa0) * 4 + 4) =
         *(undefined4 *)(STCharacterScript::naExpTable + local_8 * 4);
  }
  return 1;
}
```
