# UseMileage

`_ZN5CUser10UseMileageEi`

`CUser::UseMileage(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08650a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08650a10  _ZN5CUser10UseMileageEi
#           CUser::UseMileage(int)
# range [0x08650a10, 0x08650a93]
08650a10 +0x00:  push   %ebp
08650a11 +0x01:  mov    %esp,%ebp
08650a13 +0x03:  sub    $0x38,%esp
08650a16 +0x06:  mov    0x8(%ebp),%eax
08650a19 +0x09:  mov    0x796d4(%eax),%eax
08650a1f +0x0f:  sub    0xc(%ebp),%eax
08650a22 +0x12:  mov    %eax,-0xc(%ebp)
08650a25 +0x15:  mov    -0xc(%ebp),%eax
08650a28 +0x18:  sar    $0x1f,%eax
08650a2b +0x1b:  not    %eax
08650a2d +0x1d:  mov    %eax,%edx
08650a2f +0x1f:  and    -0xc(%ebp),%edx
08650a32 +0x22:  mov    0x8(%ebp),%eax
08650a35 +0x25:  mov    0x796d4(%eax),%eax
08650a3b +0x2b:  mov    %edx,0x14(%esp)
08650a3f +0x2f:  mov    %eax,0x10(%esp)
08650a43 +0x33:  mov    0xc(%ebp),%eax
08650a46 +0x36:  mov    %eax,0xc(%esp)
08650a4a +0x3a:  movl   $"Use",0x8(%esp)
08650a52 +0x42:  movl   $"Mileage %s,%d,%d,%d",0x4(%esp)
08650a5a +0x4a:  mov    0x8(%ebp),%eax
08650a5d +0x4d:  mov    %eax,(%esp)
08650a60 +0x50:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08650a65 +0x55:  cmpl   $0x0,-0xc(%ebp)
08650a69 +0x59:  jns    08650a7a <+0x6a>
08650a6b +0x5b:  mov    0x8(%ebp),%eax
08650a6e +0x5e:  movl   $0x0,0x796d4(%eax)
08650a78 +0x68:  jmp    08650a86 <+0x76>
08650a7a +0x6a:  mov    0x8(%ebp),%eax
08650a7d +0x6d:  mov    -0xc(%ebp),%edx
08650a80 +0x70:  mov    %edx,0x796d4(%eax)
08650a86 +0x76:  mov    0x8(%ebp),%eax
08650a89 +0x79:  mov    %eax,(%esp)
08650a8c +0x7c:  call   086505f6 <_ZN5CUser11SaveMileageEv>  ; CUser::SaveMileage()
08650a91 +0x81:  leave
08650a92 +0x82:  ret
08650a93 +0x83:  nop
```

## 反编译 C

```c
// CUser::UseMileage @ 0x8650a10

/* CUser::UseMileage(int) */

void __thiscall CUser::UseMileage(CUser *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x796d4) - param_1;
  LogHistory(this,"Mileage %s,%d,%d,%d",&DAT_08ceeac5,param_1,*(undefined4 *)(this + 0x796d4),
             ~((int)uVar1 >> 0x1f) & uVar1);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(this + 0x796d4) = 0;
  }
  else {
    *(uint *)(this + 0x796d4) = uVar1;
  }
  SaveMileage(this);
  return;
}
```
