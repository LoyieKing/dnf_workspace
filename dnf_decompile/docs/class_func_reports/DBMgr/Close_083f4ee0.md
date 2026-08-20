# Close

`_ZN5DBMgr5CloseE18ENUM_DB_HANDLE_IDX`

`DBMgr::Close(ENUM_DB_HANDLE_IDX)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4ee0  _ZN5DBMgr5CloseE18ENUM_DB_HANDLE_IDX
#           DBMgr::Close(ENUM_DB_HANDLE_IDX)
# range [0x083f4ee0, 0x083f4f0f]
083f4ee0 +0x00:  push   %ebp
083f4ee1 +0x01:  mov    %esp,%ebp
083f4ee3 +0x03:  sub    $0x18,%esp
083f4ee6 +0x06:  mov    0xc(%ebp),%eax
083f4ee9 +0x09:  test   %eax,%eax
083f4eeb +0x0b:  js     083f4f0e <+0x2e>
083f4eed +0x0d:  mov    0xc(%ebp),%eax
083f4ef0 +0x10:  cmp    $0x10,%eax
083f4ef3 +0x13:  jg     083f4f0e <+0x2e>
083f4ef5 +0x15:  mov    0x8(%ebp),%eax
083f4ef8 +0x18:  mov    (%eax),%edx
083f4efa +0x1a:  mov    0xc(%ebp),%eax
083f4efd +0x1d:  imul   $0x4208c,%eax,%eax
083f4f03 +0x23:  lea    (%edx,%eax,1),%eax
083f4f06 +0x26:  mov    %eax,(%esp)
083f4f09 +0x29:  call   083f3e74 <_ZN5MySQL5closeEv>  ; MySQL::close()
083f4f0e +0x2e:  leave
083f4f0f +0x2f:  ret
```

## 反编译 C

```c
// DBMgr::Close @ 0x83f4ee0

/* DBMgr::Close(ENUM_DB_HANDLE_IDX) */

void __thiscall DBMgr::Close(DBMgr *this,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x11)) {
    MySQL::close((MySQL *)(*(int *)this + param_2 * 0x4208c));
  }
  return;
}
```
