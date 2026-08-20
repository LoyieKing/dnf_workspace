# SetMileage

`_ZN5CUser10SetMileageEi`

`CUser::SetMileage(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086509c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086509c6  _ZN5CUser10SetMileageEi
#           CUser::SetMileage(int)
# range [0x086509c6, 0x08650a0f]
086509c6 +0x00:  push   %ebp
086509c7 +0x01:  mov    %esp,%ebp
086509c9 +0x03:  sub    $0x28,%esp
086509cc +0x06:  mov    0x8(%ebp),%eax
086509cf +0x09:  mov    0x796d4(%eax),%eax
086509d5 +0x0f:  mov    0xc(%ebp),%edx
086509d8 +0x12:  mov    %edx,0x14(%esp)
086509dc +0x16:  mov    %eax,0x10(%esp)
086509e0 +0x1a:  mov    0xc(%ebp),%eax
086509e3 +0x1d:  mov    %eax,0xc(%esp)
086509e7 +0x21:  movl   $"Set",0x8(%esp)
086509ef +0x29:  movl   $"Mileage %s,%d,%d,%d",0x4(%esp)
086509f7 +0x31:  mov    0x8(%ebp),%eax
086509fa +0x34:  mov    %eax,(%esp)
086509fd +0x37:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08650a02 +0x3c:  mov    0x8(%ebp),%eax
08650a05 +0x3f:  mov    0xc(%ebp),%edx
08650a08 +0x42:  mov    %edx,0x796d4(%eax)
08650a0e +0x48:  leave
08650a0f +0x49:  ret
```

## 反编译 C

```c
// CUser::SetMileage @ 0x86509c6

/* CUser::SetMileage(int) */

void __thiscall CUser::SetMileage(CUser *this,int param_1)

{
  LogHistory(this,"Mileage %s,%d,%d,%d",&DAT_08ceeaad,param_1,*(undefined4 *)(this + 0x796d4),
             param_1);
  *(int *)(this + 0x796d4) = param_1;
  return;
}
```
