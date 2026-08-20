# _addSFPRelatedItem

`_ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii`

`WongWork::CSkillChanger::_addSFPRelatedItem(int*, int*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a918` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a918  _ZN8WongWork13CSkillChanger18_addSFPRelatedItemEPiS1_ii
#           WongWork::CSkillChanger::_addSFPRelatedItem(int*, int*, int, int)
# range [0x0860a918, 0x0860a94f]
0860a918 +0x00:  push   %ebp
0860a919 +0x01:  mov    %esp,%ebp
0860a91b +0x03:  cmpl   $0x4b4,0x14(%ebp)
0860a922 +0x0a:  jne    0860a935 <+0x1d>
0860a924 +0x0c:  mov    0xc(%ebp),%eax
0860a927 +0x0f:  mov    (%eax),%eax
0860a929 +0x11:  mov    %eax,%edx
0860a92b +0x13:  add    0x18(%ebp),%edx
0860a92e +0x16:  mov    0xc(%ebp),%eax
0860a931 +0x19:  mov    %edx,(%eax)
0860a933 +0x1b:  jmp    0860a94d <+0x35>
0860a935 +0x1d:  cmpl   $0x4b5,0x14(%ebp)
0860a93c +0x24:  jne    0860a94d <+0x35>
0860a93e +0x26:  mov    0x10(%ebp),%eax
0860a941 +0x29:  mov    (%eax),%eax
0860a943 +0x2b:  mov    %eax,%edx
0860a945 +0x2d:  add    0x18(%ebp),%edx
0860a948 +0x30:  mov    0x10(%ebp),%eax
0860a94b +0x33:  mov    %edx,(%eax)
0860a94d +0x35:  pop    %ebp
0860a94e +0x36:  ret
0860a94f +0x37:  nop
```

## 反编译 C

```c
// WongWork::CSkillChanger::_addSFPRelatedItem @ 0x860a918

/* WongWork::CSkillChanger::_addSFPRelatedItem(int*, int*, int, int) */

void __thiscall
WongWork::CSkillChanger::_addSFPRelatedItem
          (CSkillChanger *this,int *param_1,int *param_2,int param_3,int param_4)

{
  if (param_3 == 0x4b4) {
    *param_1 = *param_1 + param_4;
  }
  else if (param_3 == 0x4b5) {
    *param_2 = *param_2 + param_4;
  }
  return;
}
```
