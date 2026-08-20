# fetch

`_ZN5MySQL5fetchEv`

`MySQL::fetch()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f44bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f44bc  _ZN5MySQL5fetchEv
#           MySQL::fetch()
# range [0x083f44bc, 0x083f4513]
083f44bc +0x00:  push   %ebp
083f44bd +0x01:  mov    %esp,%ebp
083f44bf +0x03:  sub    $0x18,%esp
083f44c2 +0x06:  mov    0x8(%ebp),%eax
083f44c5 +0x09:  mov    0x8(%eax),%eax
083f44c8 +0x0c:  test   %eax,%eax
083f44ca +0x0e:  jne    083f44d3 <+0x17>
083f44cc +0x10:  mov    $0x0,%eax
083f44d1 +0x15:  jmp    083f4511 <+0x55>
083f44d3 +0x17:  mov    0x8(%ebp),%eax
083f44d6 +0x1a:  mov    0x8(%eax),%eax
083f44d9 +0x1d:  mov    %eax,(%esp)
083f44dc +0x20:  call   08736490 <mysql_fetch_row>
083f44e1 +0x25:  mov    0x8(%ebp),%edx
083f44e4 +0x28:  mov    %eax,0xc(%edx)
083f44e7 +0x2b:  mov    0x8(%ebp),%eax
083f44ea +0x2e:  mov    0xc(%eax),%eax
083f44ed +0x31:  test   %eax,%eax
083f44ef +0x33:  je     083f450c <+0x50>
083f44f1 +0x35:  mov    0x8(%ebp),%eax
083f44f4 +0x38:  mov    0x8(%eax),%eax
083f44f7 +0x3b:  mov    %eax,(%esp)
083f44fa +0x3e:  call   087344d0 <mysql_fetch_lengths>
083f44ff +0x43:  mov    0x8(%ebp),%edx
083f4502 +0x46:  mov    %eax,0x10(%edx)
083f4505 +0x49:  mov    $0x1,%eax
083f450a +0x4e:  jmp    083f4511 <+0x55>
083f450c +0x50:  mov    $0x0,%eax
083f4511 +0x55:  leave
083f4512 +0x56:  ret
083f4513 +0x57:  nop
```

## 反编译 C

```c
// MySQL::fetch @ 0x83f44bc

/* MySQL::fetch() */

undefined4 __thiscall MySQL::fetch(MySQL *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = mysql_fetch_row(*(undefined4 *)(this + 8));
    *(undefined4 *)(this + 0xc) = uVar1;
    if (*(int *)(this + 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = mysql_fetch_lengths(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x10) = uVar1;
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
