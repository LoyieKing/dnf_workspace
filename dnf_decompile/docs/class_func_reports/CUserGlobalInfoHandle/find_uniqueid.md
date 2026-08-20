# find_uniqueid

`_ZN21CUserGlobalInfoHandle13find_uniqueidEv`

`CUserGlobalInfoHandle::find_uniqueid()`

| 类 | 地址 |
|---|---|
| `CUserGlobalInfoHandle` | `0x086ad8c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad8c2  _ZN21CUserGlobalInfoHandle13find_uniqueidEv
#           CUserGlobalInfoHandle::find_uniqueid()
# range [0x086ad8c2, 0x086ad90f]
086ad8c2 +0x00:  push   %ebp
086ad8c3 +0x01:  mov    %esp,%ebp
086ad8c5 +0x03:  sub    $0x10,%esp
086ad8c8 +0x06:  mov    0x8(%ebp),%eax
086ad8cb +0x09:  mov    &_ZL14gUnicodeBuffer+0x5ad4(%eax),%eax
086ad8d1 +0x0f:  mov    %eax,-0x4(%ebp)
086ad8d4 +0x12:  jmp    086ad8fa <+0x38>
086ad8d6 +0x14:  mov    -0x4(%ebp),%eax
086ad8d9 +0x17:  mov    0x8(%ebp),%edx
086ad8dc +0x1a:  movzbl (%edx,%eax,1),%eax
086ad8e0 +0x1e:  xor    $0x1,%eax
086ad8e3 +0x21:  test   %al,%al
086ad8e5 +0x23:  je     086ad8f6 <+0x34>
086ad8e7 +0x25:  mov    -0x4(%ebp),%eax
086ad8ea +0x28:  mov    0x8(%ebp),%edx
086ad8ed +0x2b:  movb   $0x1,(%edx,%eax,1)
086ad8f1 +0x2f:  mov    -0x4(%ebp),%eax
086ad8f4 +0x32:  jmp    086ad90d <+0x4b>
086ad8f6 +0x34:  addl   $0x1,-0x4(%ebp)
086ad8fa +0x38:  cmpl   $0xfffe,-0x4(%ebp)
086ad901 +0x3f:  setle  %al
086ad904 +0x42:  test   %al,%al
086ad906 +0x44:  jne    086ad8d6 <+0x14>
086ad908 +0x46:  mov    $0xffffffff,%eax
086ad90d +0x4b:  leave
086ad90e +0x4c:  ret
086ad90f +0x4d:  nop
```

## 反编译 C

```c
// CUserGlobalInfoHandle::find_uniqueid @ 0x86ad8c2

/* CUserGlobalInfoHandle::find_uniqueid() */

int __thiscall CUserGlobalInfoHandle::find_uniqueid(CUserGlobalInfoHandle *this)

{
  int local_8;
  
  local_8 = *(int *)(this + 0x10000);
  while( true ) {
    if (0xfffe < local_8) {
      return -1;
    }
    if (this[local_8] != (CUserGlobalInfoHandle)0x1) break;
    local_8 = local_8 + 1;
  }
  this[local_8] = (CUserGlobalInfoHandle)0x1;
  return local_8;
}
```
