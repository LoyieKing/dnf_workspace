# GetCurCharacAssaultedUserId

`_ZN15CUserCharacInfo27GetCurCharacAssaultedUserIdEv`

`CUserCharacInfo::GetCurCharacAssaultedUserId()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ef60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ef60  _ZN15CUserCharacInfo27GetCurCharacAssaultedUserIdEv
#           CUserCharacInfo::GetCurCharacAssaultedUserId()
# range [0x0868ef60, 0x0868ef83]
0868ef60 +0x00:  push   %ebp
0868ef61 +0x01:  mov    %esp,%ebp
0868ef63 +0x03:  mov    0x8(%ebp),%eax
0868ef66 +0x06:  mov    0x10(%eax),%eax
0868ef69 +0x09:  test   %eax,%eax
0868ef6b +0x0b:  je     0868ef7c <+0x1c>
0868ef6d +0x0d:  mov    0x8(%ebp),%eax
0868ef70 +0x10:  mov    0x10(%eax),%eax
0868ef73 +0x13:  movzwl 0x12b5(%eax),%eax
0868ef7a +0x1a:  jmp    0868ef81 <+0x21>
0868ef7c +0x1c:  mov    $0x0,%eax
0868ef81 +0x21:  pop    %ebp
0868ef82 +0x22:  ret
0868ef83 +0x23:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetCurCharacAssaultedUserId @ 0x868ef60

/* CUserCharacInfo::GetCurCharacAssaultedUserId() */

undefined2 __thiscall CUserCharacInfo::GetCurCharacAssaultedUserId(CUserCharacInfo *this)

{
  undefined2 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(this + 0x10) + 0x12b5);
  }
  return uVar1;
}
```
