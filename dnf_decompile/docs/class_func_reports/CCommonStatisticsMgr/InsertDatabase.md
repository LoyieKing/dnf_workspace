# InsertDatabase

`_ZN20CCommonStatisticsMgr14InsertDatabaseEv`

`CCommonStatisticsMgr::InsertDatabase()`

| 类 | 地址 |
|---|---|
| `CCommonStatisticsMgr` | `0x0860e86e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e86e  _ZN20CCommonStatisticsMgr14InsertDatabaseEv
#           CCommonStatisticsMgr::InsertDatabase()
# range [0x0860e86e, 0x0860e8a9]
0860e86e +0x00:  push   %ebp
0860e86f +0x01:  mov    %esp,%ebp
0860e871 +0x03:  sub    $0x28,%esp
0860e874 +0x06:  movl   $0x0,-0xc(%ebp)
0860e87b +0x0d:  jmp    0860e89c <+0x2e>
0860e87d +0x0f:  mov    -0xc(%ebp),%edx
0860e880 +0x12:  mov    0x8(%ebp),%eax
0860e883 +0x15:  mov    (%eax,%edx,4),%eax
0860e886 +0x18:  mov    (%eax),%eax
0860e888 +0x1a:  mov    (%eax),%ecx
0860e88a +0x1c:  mov    -0xc(%ebp),%edx
0860e88d +0x1f:  mov    0x8(%ebp),%eax
0860e890 +0x22:  mov    (%eax,%edx,4),%eax
0860e893 +0x25:  mov    %eax,(%esp)
0860e896 +0x28:  call   *%ecx
0860e898 +0x2a:  addl   $0x1,-0xc(%ebp)
0860e89c +0x2e:  cmpl   $0x2,-0xc(%ebp)
0860e8a0 +0x32:  setle  %al
0860e8a3 +0x35:  test   %al,%al
0860e8a5 +0x37:  jne    0860e87d <+0xf>
0860e8a7 +0x39:  leave
0860e8a8 +0x3a:  ret
0860e8a9 +0x3b:  nop
```

## 反编译 C

```c
// CCommonStatisticsMgr::InsertDatabase @ 0x860e86e

/* CCommonStatisticsMgr::InsertDatabase() */

void __thiscall CCommonStatisticsMgr::InsertDatabase(CCommonStatisticsMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    (**(code **)**(undefined4 **)(this + local_10 * 4))(*(undefined4 *)(this + local_10 * 4));
  }
  return;
}
```
