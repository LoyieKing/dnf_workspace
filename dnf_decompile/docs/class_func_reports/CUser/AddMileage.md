# AddMileage

`_ZN5CUser10AddMileageEi14eCoinAddReason`

`CUser::AddMileage(int, eCoinAddReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08650954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08650954  _ZN5CUser10AddMileageEi14eCoinAddReason
#           CUser::AddMileage(int, eCoinAddReason)
# range [0x08650954, 0x086509c5]
08650954 +0x00:  push   %ebp
08650955 +0x01:  mov    %esp,%ebp
08650957 +0x03:  sub    $0x28,%esp
0865095a +0x06:  mov    0x10(%ebp),%ecx
0865095d +0x09:  mov    0x8(%ebp),%eax
08650960 +0x0c:  mov    0x796d4(%eax),%eax
08650966 +0x12:  mov    %eax,%edx
08650968 +0x14:  add    0xc(%ebp),%edx
0865096b +0x17:  mov    0x8(%ebp),%eax
0865096e +0x1a:  mov    0x796d4(%eax),%eax
08650974 +0x20:  mov    %ecx,0x18(%esp)
08650978 +0x24:  mov    %edx,0x14(%esp)
0865097c +0x28:  mov    %eax,0x10(%esp)
08650980 +0x2c:  mov    0xc(%ebp),%eax
08650983 +0x2f:  mov    %eax,0xc(%esp)
08650987 +0x33:  movl   $"Add",0x8(%esp)
0865098f +0x3b:  movl   $"Mileage %s,%d,%d,%d,%d",0x4(%esp)
08650997 +0x43:  mov    0x8(%ebp),%eax
0865099a +0x46:  mov    %eax,(%esp)
0865099d +0x49:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086509a2 +0x4e:  mov    0x8(%ebp),%eax
086509a5 +0x51:  mov    0x796d4(%eax),%eax
086509ab +0x57:  mov    %eax,%edx
086509ad +0x59:  add    0xc(%ebp),%edx
086509b0 +0x5c:  mov    0x8(%ebp),%eax
086509b3 +0x5f:  mov    %edx,0x796d4(%eax)
086509b9 +0x65:  mov    0x8(%ebp),%eax
086509bc +0x68:  mov    %eax,(%esp)
086509bf +0x6b:  call   086505f6 <_ZN5CUser11SaveMileageEv>  ; CUser::SaveMileage()
086509c4 +0x70:  leave
086509c5 +0x71:  ret
```

## 反编译 C

```c
// CUser::AddMileage @ 0x8650954

/* CUser::AddMileage(int, eCoinAddReason) */

void __thiscall CUser::AddMileage(CUser *this,int param_1,undefined4 param_3)

{
  LogHistory(this,"Mileage %s,%d,%d,%d,%d",&DAT_08ceea92,param_1,*(undefined4 *)(this + 0x796d4),
             *(int *)(this + 0x796d4) + param_1,param_3);
  *(int *)(this + 0x796d4) = *(int *)(this + 0x796d4) + param_1;
  SaveMileage(this);
  return;
}
```
