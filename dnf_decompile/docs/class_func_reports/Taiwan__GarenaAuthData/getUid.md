# getUid

`_ZN6Taiwan14GarenaAuthData6getUidEv`

`Taiwan::GarenaAuthData::getUid()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08172fc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08172fc8  _ZN6Taiwan14GarenaAuthData6getUidEv
#           Taiwan::GarenaAuthData::getUid()
# range [0x08172fc8, 0x08172fdd]
08172fc8 +0x00:  push   %ebp
08172fc9 +0x01:  mov    %esp,%ebp
08172fcb +0x03:  sub    $0x18,%esp
08172fce +0x06:  mov    0x8(%ebp),%eax
08172fd1 +0x09:  mov    (%eax),%eax
08172fd3 +0x0b:  mov    %eax,(%esp)
08172fd6 +0x0e:  call   0807db80 <_init+0x478>
08172fdb +0x13:  leave
08172fdc +0x14:  ret
08172fdd +0x15:  nop
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getUid @ 0x8172fc8

/* Taiwan::GarenaAuthData::getUid() */

void __thiscall Taiwan::GarenaAuthData::getUid(GarenaAuthData *this)

{
  ntohl(*(uint32_t *)this);
  return;
}
```
