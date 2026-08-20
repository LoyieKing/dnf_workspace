# CUserGlobalInfoHandle

`_ZN21CUserGlobalInfoHandleC1Ev`

`CUserGlobalInfoHandle::CUserGlobalInfoHandle()`

| 类 | 地址 |
|---|---|
| `CUserGlobalInfoHandle` | `0x086ad820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad820  _ZN21CUserGlobalInfoHandleC1Ev
#           CUserGlobalInfoHandle::CUserGlobalInfoHandle()
# range [0x086ad820, 0x086ad859]
086ad820 +0x00:  push   %ebp
086ad821 +0x01:  mov    %esp,%ebp
086ad823 +0x03:  sub    $0x10,%esp
086ad826 +0x06:  mov    0x8(%ebp),%eax
086ad829 +0x09:  movl   $0x1,&_ZL14gUnicodeBuffer+0x5ad4(%eax)
086ad833 +0x13:  movl   $0x0,-0x4(%ebp)
086ad83a +0x1a:  jmp    086ad84a <+0x2a>
086ad83c +0x1c:  mov    -0x4(%ebp),%eax
086ad83f +0x1f:  mov    0x8(%ebp),%edx
086ad842 +0x22:  movb   $0x0,(%edx,%eax,1)
086ad846 +0x26:  addl   $0x1,-0x4(%ebp)
086ad84a +0x2a:  cmpl   $0xfffe,-0x4(%ebp)
086ad851 +0x31:  setle  %al
086ad854 +0x34:  test   %al,%al
086ad856 +0x36:  jne    086ad83c <+0x1c>
086ad858 +0x38:  leave
086ad859 +0x39:  ret
```

## 反编译 C

```c
// CUserGlobalInfoHandle::CUserGlobalInfoHandle @ 0x86ad820

/* CUserGlobalInfoHandle::CUserGlobalInfoHandle() */

void __thiscall CUserGlobalInfoHandle::CUserGlobalInfoHandle(CUserGlobalInfoHandle *this)

{
  int local_8;
  
  *(undefined4 *)(this + 0x10000) = 1;
  for (local_8 = 0; local_8 < 0xffff; local_8 = local_8 + 1) {
    this[local_8] = (CUserGlobalInfoHandle)0x0;
  }
  return;
}
```
