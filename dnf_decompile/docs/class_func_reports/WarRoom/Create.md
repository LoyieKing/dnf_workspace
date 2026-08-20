# Create

`_ZN7WarRoom6CreateEP5CUserPcs`

`WarRoom::Create(CUser*, char*, short)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bac5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bac5e  _ZN7WarRoom6CreateEP5CUserPcs
#           WarRoom::Create(CUser*, char*, short)
# range [0x086bac5e, 0x086bacad]
086bac5e +0x00:  push   %ebp
086bac5f +0x01:  mov    %esp,%ebp
086bac61 +0x03:  sub    $0x28,%esp
086bac64 +0x06:  mov    0x14(%ebp),%eax
086bac67 +0x09:  mov    %ax,-0xc(%ebp)
086bac6b +0x0d:  mov    0x8(%ebp),%eax
086bac6e +0x10:  movl   $0x0,0x144(%eax)
086bac78 +0x1a:  mov    0x8(%ebp),%eax
086bac7b +0x1d:  mov    0xc(%ebp),%edx
086bac7e +0x20:  mov    %edx,0x12c(%eax)
086bac84 +0x26:  mov    0x8(%ebp),%eax
086bac87 +0x29:  movl   $0x1,0x148(%eax)
086bac91 +0x33:  mov    0x8(%ebp),%eax
086bac94 +0x36:  mov    0x4(%eax),%eax
086bac97 +0x39:  cwtl
086bac98 +0x3a:  mov    %eax,0x4(%esp)
086bac9c +0x3e:  mov    0xc(%ebp),%eax
086bac9f +0x41:  mov    %eax,(%esp)
086baca2 +0x44:  call   086c0b50 <_GLOBAL__I__ZN7WarRoomC2Ev+0x49>  ; global constructors keyed to WarRoom::WarRoom()+0x49
086baca7 +0x49:  mov    $0x0,%eax
086bacac +0x4e:  leave
086bacad +0x4f:  ret
```

## 反编译 C

```c
// WarRoom::Create @ 0x86bac5e

/* WarRoom::Create(CUser*, char*, short) */

undefined4 WarRoom::Create(CUser *param_1,char *param_2,short param_3)

{
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(char **)(param_1 + 300) = param_2;
  *(undefined4 *)(param_1 + 0x148) = 1;
  CUser::SetWarRoomIndex((CUser *)param_2,(short)*(undefined4 *)(param_1 + 4));
  return 0;
}
```
