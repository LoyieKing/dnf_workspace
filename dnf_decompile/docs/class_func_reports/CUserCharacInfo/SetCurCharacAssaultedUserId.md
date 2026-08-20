# SetCurCharacAssaultedUserId

`_ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt`

`CUserCharacInfo::SetCurCharacAssaultedUserId(unsigned short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ef84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ef84  _ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt
#           CUserCharacInfo::SetCurCharacAssaultedUserId(unsigned short)
# range [0x0868ef84, 0x0868efad]
0868ef84 +0x00:  push   %ebp
0868ef85 +0x01:  mov    %esp,%ebp
0868ef87 +0x03:  sub    $0x4,%esp
0868ef8a +0x06:  mov    0xc(%ebp),%eax
0868ef8d +0x09:  mov    %ax,-0x4(%ebp)
0868ef91 +0x0d:  mov    0x8(%ebp),%eax
0868ef94 +0x10:  mov    0x10(%eax),%eax
0868ef97 +0x13:  test   %eax,%eax
0868ef99 +0x15:  je     0868efac <+0x28>
0868ef9b +0x17:  mov    0x8(%ebp),%eax
0868ef9e +0x1a:  mov    0x10(%eax),%eax
0868efa1 +0x1d:  movzwl -0x4(%ebp),%edx
0868efa5 +0x21:  mov    %dx,0x12b5(%eax)
0868efac +0x28:  leave
0868efad +0x29:  ret
```

## 反编译 C

```c
// CUserCharacInfo::SetCurCharacAssaultedUserId @ 0x868ef84

/* CUserCharacInfo::SetCurCharacAssaultedUserId(unsigned short) */

void __thiscall CUserCharacInfo::SetCurCharacAssaultedUserId(CUserCharacInfo *this,ushort param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(ushort *)(*(int *)(this + 0x10) + 0x12b5) = param_1;
  }
  return;
}
```
