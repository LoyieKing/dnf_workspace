# Destroy

`_ZN7WarRoom7DestroyEi`

`WarRoom::Destroy(int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd49c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd49c  _ZN7WarRoom7DestroyEi
#           WarRoom::Destroy(int)
# range [0x086bd49c, 0x086bd503]
086bd49c +0x00:  push   %ebp
086bd49d +0x01:  mov    %esp,%ebp
086bd49f +0x03:  sub    $0x28,%esp
086bd4a2 +0x06:  mov    0xc(%ebp),%edx
086bd4a5 +0x09:  mov    0x8(%ebp),%eax
086bd4a8 +0x0c:  add    $0x48,%edx
086bd4ab +0x0f:  mov    0xc(%eax,%edx,4),%eax
086bd4af +0x13:  mov    %eax,-0x10(%ebp)
086bd4b2 +0x16:  cmpl   $0x0,-0x10(%ebp)
086bd4b6 +0x1a:  jne    086bd4f3 <+0x57>
086bd4b8 +0x1c:  movl   $0x0,-0xc(%ebp)
086bd4bf +0x23:  jmp    086bd4e8 <+0x4c>
086bd4c1 +0x25:  mov    -0xc(%ebp),%edx
086bd4c4 +0x28:  mov    0x8(%ebp),%eax
086bd4c7 +0x2b:  add    $0x48,%edx
086bd4ca +0x2e:  mov    0xc(%eax,%edx,4),%eax
086bd4ce +0x32:  test   %eax,%eax
086bd4d0 +0x34:  je     086bd4e4 <+0x48>
086bd4d2 +0x36:  mov    -0xc(%ebp),%edx
086bd4d5 +0x39:  mov    0x8(%ebp),%eax
086bd4d8 +0x3c:  add    $0x48,%edx
086bd4db +0x3f:  mov    0xc(%eax,%edx,4),%eax
086bd4df +0x43:  mov    %eax,-0x10(%ebp)
086bd4e2 +0x46:  jmp    086bd4f3 <+0x57>
086bd4e4 +0x48:  addl   $0x1,-0xc(%ebp)
086bd4e8 +0x4c:  cmpl   $0x5,-0xc(%ebp)
086bd4ec +0x50:  setle  %al
086bd4ef +0x53:  test   %al,%al
086bd4f1 +0x55:  jne    086bd4c1 <+0x25>
086bd4f3 +0x57:  mov    0x8(%ebp),%eax
086bd4f6 +0x5a:  mov    %eax,(%esp)
086bd4f9 +0x5d:  call   086baa14 <_ZN7WarRoom5ResetEv>  ; WarRoom::Reset()
086bd4fe +0x62:  mov    -0x10(%ebp),%eax
086bd501 +0x65:  leave
086bd502 +0x66:  ret
086bd503 +0x67:  nop
```

## 反编译 C

```c
// WarRoom::Destroy @ 0x86bd49c

/* WarRoom::Destroy(int) */

int __thiscall WarRoom::Destroy(WarRoom *this,int param_1)

{
  int local_14;
  int local_10;
  
  local_14 = *(int *)(this + (param_1 + 0x48) * 4 + 0xc);
  if (local_14 == 0) {
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
        local_14 = *(int *)(this + (local_10 + 0x48) * 4 + 0xc);
        break;
      }
    }
  }
  Reset(this);
  return local_14;
}
```
