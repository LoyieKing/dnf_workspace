# GM_SetMissionValue

`_ZN19CMissionList_Charac18GM_SetMissionValueEii`

`CMissionList_Charac::GM_SetMissionValue(int, int)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e56ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e56ee  _ZN19CMissionList_Charac18GM_SetMissionValueEii
#           CMissionList_Charac::GM_SetMissionValue(int, int)
# range [0x085e56ee, 0x085e5723]
085e56ee +0x00:  push   %ebp
085e56ef +0x01:  mov    %esp,%ebp
085e56f1 +0x03:  sub    $0x18,%esp
085e56f4 +0x06:  cmpl   $0x0,0xc(%ebp)
085e56f8 +0x0a:  jle    085e571d <+0x2f>
085e56fa +0x0c:  cmpl   $0x23,0xc(%ebp)
085e56fe +0x10:  jg     085e5720 <+0x32>
085e5700 +0x12:  mov    0xc(%ebp),%edx
085e5703 +0x15:  mov    0x10(%ebp),%eax
085e5706 +0x18:  mov    %eax,%ecx
085e5708 +0x1a:  mov    0x8(%ebp),%eax
085e570b +0x1d:  mov    %cx,0x9(%eax,%edx,8)
085e5710 +0x22:  mov    0x8(%ebp),%eax
085e5713 +0x25:  mov    %eax,(%esp)
085e5716 +0x28:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e571b +0x2d:  jmp    085e5721 <+0x33>
085e571d +0x2f:  nop
085e571e +0x30:  jmp    085e5721 <+0x33>
085e5720 +0x32:  nop
085e5721 +0x33:  leave
085e5722 +0x34:  ret
085e5723 +0x35:  nop
```

## 反编译 C

```c
// CMissionList_Charac::GM_SetMissionValue @ 0x85e56ee

/* CMissionList_Charac::GM_SetMissionValue(int, int) */

void __thiscall
CMissionList_Charac::GM_SetMissionValue(CMissionList_Charac *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_1 < 0x24)) {
    *(short *)(this + param_1 * 8 + 9) = (short)param_2;
    charac_expand::CData::alter((CData *)this);
  }
  return;
}
```
