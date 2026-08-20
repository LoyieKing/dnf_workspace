# reset_uniqueid_flag

`_ZN21CUserGlobalInfoHandle19reset_uniqueid_flagEt`

`CUserGlobalInfoHandle::reset_uniqueid_flag(unsigned short)`

| 类 | 地址 |
|---|---|
| `CUserGlobalInfoHandle` | `0x086ad95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad95e  _ZN21CUserGlobalInfoHandle19reset_uniqueid_flagEt
#           CUserGlobalInfoHandle::reset_uniqueid_flag(unsigned short)
# range [0x086ad95e, 0x086ad977]
086ad95e +0x00:  push   %ebp
086ad95f +0x01:  mov    %esp,%ebp
086ad961 +0x03:  sub    $0x4,%esp
086ad964 +0x06:  mov    0xc(%ebp),%eax
086ad967 +0x09:  mov    %ax,-0x4(%ebp)
086ad96b +0x0d:  movzwl -0x4(%ebp),%eax
086ad96f +0x11:  mov    0x8(%ebp),%edx
086ad972 +0x14:  movb   $0x0,(%edx,%eax,1)
086ad976 +0x18:  leave
086ad977 +0x19:  ret
```

## 反编译 C

```c
// CUserGlobalInfoHandle::reset_uniqueid_flag @ 0x86ad95e

/* CUserGlobalInfoHandle::reset_uniqueid_flag(unsigned short) */

void __thiscall
CUserGlobalInfoHandle::reset_uniqueid_flag(CUserGlobalInfoHandle *this,ushort param_1)

{
  this[param_1] = (CUserGlobalInfoHandle)0x0;
  return;
}
```
