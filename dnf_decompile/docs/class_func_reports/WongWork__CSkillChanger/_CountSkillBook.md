# _CountSkillBook

`_ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item`

`WongWork::CSkillChanger::_CountSkillBook(Inven_Item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a2ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a2ec  _ZN8WongWork13CSkillChanger15_CountSkillBookER10Inven_Item
#           WongWork::CSkillChanger::_CountSkillBook(Inven_Item&)
# range [0x0860a2ec, 0x0860a349]
0860a2ec +0x00:  push   %ebp
0860a2ed +0x01:  mov    %esp,%ebp
0860a2ef +0x03:  sub    $0x10,%esp
0860a2f2 +0x06:  movl   $0x1,-0x4(%ebp)
0860a2f9 +0x0d:  jmp    0860a339 <+0x4d>
0860a2fb +0x0f:  mov    0xc(%ebp),%eax
0860a2fe +0x12:  mov    0x2(%eax),%edx
0860a301 +0x15:  mov    -0x4(%ebp),%eax
0860a304 +0x18:  mov    &_ZN8WongWork13CSkillChanger16g_nStatUpItemIdxE(,%eax,4),%eax
0860a30b +0x1f:  cmp    %eax,%edx
0860a30d +0x21:  jne    0860a335 <+0x49>
0860a30f +0x23:  mov    -0x4(%ebp),%edx
0860a312 +0x26:  mov    0xc(%ebp),%eax
0860a315 +0x29:  mov    0x7(%eax),%ecx
0860a318 +0x2c:  mov    0x8(%ebp),%eax
0860a31b +0x2f:  mov    %ecx,(%eax,%edx,4)
0860a31e +0x32:  mov    -0x4(%ebp),%ecx
0860a321 +0x35:  mov    -0x4(%ebp),%eax
0860a324 +0x38:  mov    &_ZN8WongWork13CSkillChanger16g_nElixerAbilityE(,%eax,4),%edx
0860a32b +0x3f:  mov    0x8(%ebp),%eax
0860a32e +0x42:  add    $0x8,%ecx
0860a331 +0x45:  mov    %edx,0x4(%eax,%ecx,4)
0860a335 +0x49:  addl   $0x1,-0x4(%ebp)
0860a339 +0x4d:  mov    &_ZN8WongWork13CSkillChanger16g_nStatUpItemIdxE,%eax
0860a33e +0x52:  cmp    -0x4(%ebp),%eax
0860a341 +0x55:  setge  %al
0860a344 +0x58:  test   %al,%al
0860a346 +0x5a:  jne    0860a2fb <+0xf>
0860a348 +0x5c:  leave
0860a349 +0x5d:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::_CountSkillBook @ 0x860a2ec

/* WongWork::CSkillChanger::_CountSkillBook(Inven_Item&) */

void __thiscall WongWork::CSkillChanger::_CountSkillBook(CSkillChanger *this,Inven_Item *param_1)

{
  int local_8;
  
  for (local_8 = 1; local_8 <= g_nStatUpItemIdx; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 2) == (&g_nStatUpItemIdx)[local_8]) {
      *(undefined4 *)(this + local_8 * 4) = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)(this + (local_8 + 8) * 4 + 4) =
           *(undefined4 *)(g_nElixerAbility + local_8 * 4);
    }
  }
  return;
}
```
