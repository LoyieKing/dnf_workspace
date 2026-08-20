# getIndex_byKind

`_ZNK19CMissionList_Charac15getIndex_byKindEi`

`CMissionList_Charac::getIndex_byKind(int) const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4bc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4bc8  _ZNK19CMissionList_Charac15getIndex_byKindEi
#           CMissionList_Charac::getIndex_byKind(int) const
# range [0x085e4bc8, 0x085e4beb]
085e4bc8 +0x00:  push   %ebp
085e4bc9 +0x01:  mov    %esp,%ebp
085e4bcb +0x03:  cmpl   $0x0,0xc(%ebp)
085e4bcf +0x07:  jle    085e4bd7 <+0xf>
085e4bd1 +0x09:  cmpl   $0x23,0xc(%ebp)
085e4bd5 +0x0d:  jle    085e4bde <+0x16>
085e4bd7 +0x0f:  mov    $0x0,%eax
085e4bdc +0x14:  jmp    085e4be9 <+0x21>
085e4bde +0x16:  mov    0xc(%ebp),%edx
085e4be1 +0x19:  mov    0x8(%ebp),%eax
085e4be4 +0x1c:  movzwl 0x7(%eax,%edx,8),%eax
085e4be9 +0x21:  pop    %ebp
085e4bea +0x22:  ret
085e4beb +0x23:  nop
```

## 反编译 C

```c
// CMissionList_Charac::getIndex_byKind @ 0x85e4bc8

/* CMissionList_Charac::getIndex_byKind(int) const */

undefined2 __thiscall CMissionList_Charac::getIndex_byKind(CMissionList_Charac *this,int param_1)

{
  undefined2 uVar1;
  
  if ((param_1 < 1) || (0x23 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(this + param_1 * 8 + 7);
  }
  return uVar1;
}
```
