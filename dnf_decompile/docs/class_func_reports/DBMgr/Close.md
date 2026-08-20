# Close

`_ZN5DBMgr5CloseEv`

`DBMgr::Close()`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4ea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4ea6  _ZN5DBMgr5CloseEv
#           DBMgr::Close()
# range [0x083f4ea6, 0x083f4edf]
083f4ea6 +0x00:  push   %ebp
083f4ea7 +0x01:  mov    %esp,%ebp
083f4ea9 +0x03:  sub    $0x28,%esp
083f4eac +0x06:  movl   $0x0,-0xc(%ebp)
083f4eb3 +0x0d:  jmp    083f4ed2 <+0x2c>
083f4eb5 +0x0f:  mov    0x8(%ebp),%eax
083f4eb8 +0x12:  mov    (%eax),%edx
083f4eba +0x14:  mov    -0xc(%ebp),%eax
083f4ebd +0x17:  imul   $0x4208c,%eax,%eax
083f4ec3 +0x1d:  lea    (%edx,%eax,1),%eax
083f4ec6 +0x20:  mov    %eax,(%esp)
083f4ec9 +0x23:  call   083f3e74 <_ZN5MySQL5closeEv>  ; MySQL::close()
083f4ece +0x28:  addl   $0x1,-0xc(%ebp)
083f4ed2 +0x2c:  cmpl   $0x10,-0xc(%ebp)
083f4ed6 +0x30:  setle  %al
083f4ed9 +0x33:  test   %al,%al
083f4edb +0x35:  jne    083f4eb5 <+0xf>
083f4edd +0x37:  leave
083f4ede +0x38:  ret
083f4edf +0x39:  nop
```

## 反编译 C

```c
// DBMgr::Close @ 0x83f4ea6

/* DBMgr::Close() */

void __thiscall DBMgr::Close(DBMgr *this)

{
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 0x11; local_10 = local_10 + 1) {
    MySQL::close((MySQL *)(*(int *)this + local_10 * 0x4208c));
  }
  return;
}
```
