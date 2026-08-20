# Clear

`_ZN12PvpUserTable5ClearEv`

`PvpUserTable::Clear()`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d490a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d490a  _ZN12PvpUserTable5ClearEv
#           PvpUserTable::Clear()
# range [0x085d490a, 0x085d497f]
085d490a +0x00:  push   %ebp
085d490b +0x01:  mov    %esp,%ebp
085d490d +0x03:  sub    $0x10,%esp
085d4910 +0x06:  movl   $0x0,-0x8(%ebp)
085d4917 +0x0d:  jmp    085d4965 <+0x5b>
085d4919 +0x0f:  movl   $0x0,-0x4(%ebp)
085d4920 +0x16:  jmp    085d4956 <+0x4c>
085d4922 +0x18:  mov    -0x4(%ebp),%ecx
085d4925 +0x1b:  mov    -0x8(%ebp),%edx
085d4928 +0x1e:  mov    0x8(%ebp),%eax
085d492b +0x21:  shl    $0x3,%ecx
085d492e +0x24:  lea    (%ecx,%edx,1),%edx
085d4931 +0x27:  add    $0x24,%edx
085d4934 +0x2a:  movl   $0x0,(%eax,%edx,8)
085d493b +0x31:  mov    -0x4(%ebp),%ecx
085d493e +0x34:  mov    -0x8(%ebp),%edx
085d4941 +0x37:  mov    0x8(%ebp),%eax
085d4944 +0x3a:  shl    $0x3,%ecx
085d4947 +0x3d:  lea    (%ecx,%edx,1),%edx
085d494a +0x40:  add    $0x24,%edx
085d494d +0x43:  movb   $0x0,0x4(%eax,%edx,8)
085d4952 +0x48:  addl   $0x1,-0x4(%ebp)
085d4956 +0x4c:  cmpl   $0x7,-0x4(%ebp)
085d495a +0x50:  setle  %al
085d495d +0x53:  test   %al,%al
085d495f +0x55:  jne    085d4922 <+0x18>
085d4961 +0x57:  addl   $0x1,-0x8(%ebp)
085d4965 +0x5b:  cmpl   $0x7,-0x8(%ebp)
085d4969 +0x5f:  setle  %al
085d496c +0x62:  test   %al,%al
085d496e +0x64:  jne    085d4919 <+0xf>
085d4970 +0x66:  mov    0x8(%ebp),%eax
085d4973 +0x69:  movl   $0xffffffff,0x320(%eax)
085d497d +0x73:  leave
085d497e +0x74:  ret
085d497f +0x75:  nop
```

## 反编译 C

```c
// PvpUserTable::Clear @ 0x85d490a

/* PvpUserTable::Clear() */

void __thiscall PvpUserTable::Clear(PvpUserTable *this)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      *(undefined4 *)(this + (local_8 * 8 + local_c + 0x24) * 8) = 0;
      this[(local_8 * 8 + local_c + 0x24) * 8 + 4] = (PvpUserTable)0x0;
    }
  }
  *(undefined4 *)(this + 800) = 0xffffffff;
  return;
}
```
